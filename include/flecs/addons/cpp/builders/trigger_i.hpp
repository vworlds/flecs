#pragma once

#include "term_i.hpp"

namespace flecs 
{

// Trigger builder interface
template<typename Base, typename ... Components>
class trigger_builder_i : public term_builder_i<Base> {
    using BaseClass = term_builder_i<Base>;
public:
    trigger_builder_i()
        : BaseClass(nullptr)
        , m_desc(nullptr)
        , m_event_count(0) { }

    trigger_builder_i(ecs_trigger_desc_t *desc) 
        : BaseClass(&desc->term)
        , m_desc(desc)
        , m_event_count(0) { }

    /** Specify when the event(s) for which the trigger run.
     * @param kind The kind that specifies when the system should be ran.
     */
    Base& event(entity_t kind) {
        m_desc->events[m_event_count ++] = kind;
        return *this;
    }

    /** Associate trigger with entity */
    Base& self(flecs::entity self) {
        m_desc->self = self;
        return *this;
    }

    /** Set system context */
    Base& ctx(void *ptr) {
        m_desc->ctx = ptr;
        return *this;
    }

protected:
    virtual flecs::world_t* world_v() = 0;

private:
    operator Base&() {
        return *static_cast<Base*>(this);
    }

    ecs_trigger_desc_t *m_desc;
    int32_t m_event_count;
};

}