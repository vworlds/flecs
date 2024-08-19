/**
 * @file addons/meta/runtime.c
 * @brief Runtime components.
 */

#include "meta.h"

#ifdef FLECS_META

int flecs_meta_rtt_walk_dtor_opcodes(const ecs_world_t *ecs, void *ptr, ecs_meta_type_op_t *ops, int32_t op_count) {
  for (int i = 0; i < op_count; i++) {
    ecs_meta_type_op_t *op = &ops[i];
    switch (op->kind) {
      case EcsOpPush: {
        int used = 0;
        for (int c = 0; c < op->count; c++) {
          used = flecs_meta_rtt_walk_dtor_opcodes(ecs, ECS_OFFSET(ptr, op->offset + c * op->size), &ops[i + 1],
                                                  op_count - i - 1);
          assert(used != -1 && "unmatched push/pop");
        }
        i += used + 1;
        break;
      }
      case EcsOpPop: {
        return i;
      }
      case EcsOpOpaque: {
        const ecs_type_info_t *ti = ecs_get_type_info(ecs, op->type);
        ecs_assert(ti != NULL, ECS_INTERNAL_ERROR, NULL);

        if (ti->hooks.dtor) {
          ti->hooks.dtor(ECS_OFFSET(ptr, op->offset), 1, ti);
        }
      } break;
      case EcsOpVector: {
        const EcsVector *vt = ecs_get(ecs, op->type, EcsVector);
        ecs_assert(vt != NULL, ECS_INTERNAL_ERROR, NULL);

        ecs_vec_t *vec = (ecs_vec_t *) ECS_OFFSET(ptr, op->offset);
        int32_t count = ecs_vec_count(vec);
        void *array = ecs_vec_first(vec);
        const ecs_type_info_t *ti = ecs_get_type_info(ecs, vt->type);
        ecs_assert(ti != NULL, ECS_INTERNAL_ERROR, NULL);

        if (count && ti->hooks.dtor) {
          ti->hooks.dtor(ECS_OFFSET(array, op->offset), count, ti);
        }
        ecs_vec_fini(NULL, vec, 0);
        break;
      }
      case EcsOpString: {
        char **ppstring = (char **) (ECS_OFFSET(ptr, op->offset));
        ecs_os_free(*ppstring);
        *ppstring = NULL;
      } break;
      default: {
      } break;
    }
  }
  return -1;
}
#endif