
/* A friendly warning from bake.test
 * ----------------------------------------------------------------------------
 * This file is generated. To add/remove testcases modify the 'project.json' of
 * the test project. ANY CHANGE TO THIS FILE IS LOST AFTER (RE)BUILDING!
 * ----------------------------------------------------------------------------
 */

#include <meta.h>

// Testsuite 'PrimitiveTypes'
void PrimitiveTypes_bool(void);
void PrimitiveTypes_byte(void);
void PrimitiveTypes_char(void);
void PrimitiveTypes_i8(void);
void PrimitiveTypes_i16(void);
void PrimitiveTypes_i32(void);
void PrimitiveTypes_i64(void);
void PrimitiveTypes_iptr(void);
void PrimitiveTypes_u8(void);
void PrimitiveTypes_u16(void);
void PrimitiveTypes_u32(void);
void PrimitiveTypes_u64(void);
void PrimitiveTypes_uptr(void);
void PrimitiveTypes_float(void);
void PrimitiveTypes_double(void);
void PrimitiveTypes_string(void);
void PrimitiveTypes_entity(void);
void PrimitiveTypes_builtin_bool(void);
void PrimitiveTypes_builtin_byte(void);
void PrimitiveTypes_builtin_char(void);
void PrimitiveTypes_builtin_i8(void);
void PrimitiveTypes_builtin_i16(void);
void PrimitiveTypes_builtin_i32(void);
void PrimitiveTypes_builtin_i64(void);
void PrimitiveTypes_builtin_iptr(void);
void PrimitiveTypes_builtin_u8(void);
void PrimitiveTypes_builtin_u16(void);
void PrimitiveTypes_builtin_u32(void);
void PrimitiveTypes_builtin_u64(void);
void PrimitiveTypes_builtin_uptr(void);
void PrimitiveTypes_builtin_float(void);
void PrimitiveTypes_builtin_double(void);
void PrimitiveTypes_builtin_string(void);
void PrimitiveTypes_builtin_entity(void);
void PrimitiveTypes_struct_w_bool(void);
void PrimitiveTypes_struct_w_byte(void);
void PrimitiveTypes_struct_w_char(void);
void PrimitiveTypes_struct_w_i8(void);
void PrimitiveTypes_struct_w_i16(void);
void PrimitiveTypes_struct_w_i32(void);
void PrimitiveTypes_struct_w_i64(void);
void PrimitiveTypes_struct_w_iptr(void);
void PrimitiveTypes_struct_w_u8(void);
void PrimitiveTypes_struct_w_u16(void);
void PrimitiveTypes_struct_w_u32(void);
void PrimitiveTypes_struct_w_u64(void);
void PrimitiveTypes_struct_w_uptr(void);
void PrimitiveTypes_struct_w_float(void);
void PrimitiveTypes_struct_w_double(void);
void PrimitiveTypes_struct_w_string(void);
void PrimitiveTypes_struct_w_entity(void);

// Testsuite 'EnumTypes'
void EnumTypes_enum_1_constant(void);
void EnumTypes_enum_2_constants(void);
void EnumTypes_enum_3_constants(void);
void EnumTypes_enum_3_constants_manual_values(void);
void EnumTypes_struct_w_enum(void);

// Testsuite 'BitmaskTypes'
void BitmaskTypes_bitmask_1_constant(void);
void BitmaskTypes_bitmask_2_constants(void);
void BitmaskTypes_bitmask_3_constants(void);
void BitmaskTypes_bitmask_4_constants(void);
void BitmaskTypes_bitmask_4_constants_manual_values(void);
void BitmaskTypes_struct_w_bitmask(void);

// Testsuite 'StructTypes'
void StructTypes_i32(void);
void StructTypes_i32_i32(void);
void StructTypes_i32_i32_i32(void);
void StructTypes_bool_i32(void);
void StructTypes_bool_bool_i32(void);
void StructTypes_bool_i32_bool_i32(void);
void StructTypes_i32_bool(void);
void StructTypes_i32_bool_bool(void);
void StructTypes_i32_bool_bool_bool(void);
void StructTypes_i32_i64(void);
void StructTypes_i32_i64_i32(void);

// Testsuite 'NestedStructTypes'
void NestedStructTypes_1_bool(void);
void NestedStructTypes_1_int32(void);
void NestedStructTypes_1_bool_w_bool_member(void);
void NestedStructTypes_1_bool_w_int32_member(void);
void NestedStructTypes_1_int32_w_bool_member(void);
void NestedStructTypes_1_int32_w_int32_member(void);
void NestedStructTypes_1_bool_2_same(void);
void NestedStructTypes_1_bool_2_bool(void);
void NestedStructTypes_1_bool_2_i32(void);
void NestedStructTypes_1_i32_2_bool(void);
void NestedStructTypes_1_bool_2_bool_bool(void);
void NestedStructTypes_1_bool_bool_2_bool(void);
void NestedStructTypes_1_bool_bool_2_same(void);
void NestedStructTypes_1_bool_bool_2_bool_bool(void);
void NestedStructTypes_1_i32_2_same(void);
void NestedStructTypes_1_i32_2_i32(void);
void NestedStructTypes_1_i32_2_i32_i32(void);
void NestedStructTypes_1_i32_i32_2_i32(void);
void NestedStructTypes_1_i32_i32_2_same(void);
void NestedStructTypes_1_i32_i32_2_i32_i32(void);
void NestedStructTypes_2_lvls_bool(void);
void NestedStructTypes_2_lvls_bool_bool(void);

// Testsuite 'ArrayTypes'
void ArrayTypes_array_bool_1(void);
void ArrayTypes_array_bool_2(void);
void ArrayTypes_array_bool_3(void);
void ArrayTypes_array_bool_1_before_i32_member(void);
void ArrayTypes_array_bool_2_before_i32_member(void);
void ArrayTypes_array_bool_3_before_i32_member(void);
void ArrayTypes_array_i32_3(void);
void ArrayTypes_array_i32_3_before_i32_member(void);
void ArrayTypes_array_struct_bool_3(void);
void ArrayTypes_array_struct_bool_3_before_i32_member(void);
void ArrayTypes_array_struct_array_bool_3(void);
void ArrayTypes_2_arrays_1_bool_1_i32(void);
void ArrayTypes_2_arrays_1_i32_1_bool(void);
void ArrayTypes_2_arrays_1_i32_1_bool(void);
void ArrayTypes_8_arrays_bool_w_padded_member(void);
void ArrayTypes_standaline_array_bool_1(void);
void ArrayTypes_standaline_array_bool_2(void);
void ArrayTypes_standaline_array_bool_3(void);
void ArrayTypes_array_of_standaline_array_bool_1(void);
void ArrayTypes_array_of_standaline_array_bool_2(void);
void ArrayTypes_array_of_standaline_array_bool_3(void);

// Testsuite 'VectorTypes'
void VectorTypes_vector_bool(void);
void VectorTypes_vector_i32(void);
void VectorTypes_vector_struct(void);

// Testsuite 'Serialized'
void Serialized_primitive_constants(void);
void Serialized_ops_bool(void);
void Serialized_ops_byte(void);
void Serialized_ops_char(void);
void Serialized_ops_i8(void);
void Serialized_ops_i16(void);
void Serialized_ops_i32(void);
void Serialized_ops_i64(void);
void Serialized_ops_iptr(void);
void Serialized_ops_u8(void);
void Serialized_ops_u16(void);
void Serialized_ops_u32(void);
void Serialized_ops_u64(void);
void Serialized_ops_uptr(void);
void Serialized_ops_float(void);
void Serialized_ops_double(void);
void Serialized_ops_string(void);
void Serialized_ops_entity(void);
void Serialized_ops_struct_bool(void);
void Serialized_ops_struct_bool_bool(void);
void Serialized_ops_struct_i32(void);
void Serialized_ops_struct_i32_i32(void);
void Serialized_ops_struct_i32_bool(void);
void Serialized_ops_struct_bool_i32(void);
void Serialized_ops_nested_struct_1_bool(void);
void Serialized_ops_nested_struct_1_i32(void);
void Serialized_ops_nested_struct_1_bool_w_bool_member(void);
void Serialized_ops_nested_struct_1_bool_w_i32_member(void);
void Serialized_ops_nested_struct_1_bool_2_bool(void);
void Serialized_ops_nested_struct_1_i32_2_bool(void);
void Serialized_ops_nested_struct_1_i32_i32_2_bool_bool(void);
void Serialized_ops_nested_struct_1_bool_bool_2_i32_i32(void);
void Serialized_ops_nested_struct_1_i32_bool_2_bool_i32(void);
void Serialized_ops_nested_struct_1_bool_i32_2_i32_bool(void);
void Serialized_ops_nested_2_lvls_bool(void);
void Serialized_ops_nested_2_lvls_bool_bool(void);
void Serialized_ops_nested_2_lvls_i32_i32_w_member_before(void);
void Serialized_ops_nested_2_lvls_1_bool_i32_2_i32_bool_w_member_before(void);
void Serialized_ops_nested_2_lvls_1_i32_bool_2_bool_i32_w_member_before(void);
void Serialized_ops_struct_array_bool_1(void);
void Serialized_ops_struct_array_bool_2(void);
void Serialized_ops_struct_array_bool_3(void);
void Serialized_ops_struct_array_bool_1_w_i32_after(void);
void Serialized_ops_struct_array_bool_2_w_i32_after(void);
void Serialized_ops_struct_array_bool_3_w_i32_after(void);
void Serialized_ops_struct_array_struct_bool_3_w_i32_after(void);
void Serialized_ops_standalone_array_bool_1(void);
void Serialized_ops_standalone_array_bool_2(void);
void Serialized_ops_standalone_array_bool_3(void);
void Serialized_ops_standalone_array_bool_1_w_bool_after(void);
void Serialized_ops_standalone_array_bool_2_w_bool_after(void);
void Serialized_ops_standalone_array_bool_3_w_bool_after(void);
void Serialized_ops_vector(void);
void Serialized_ops_struct_w_vector(void);
void Serialized_ops_struct_w_vector_w_bool_before(void);
void Serialized_ops_struct_w_vector_w_bool_after(void);
void Serialized_ops_bitmask(void);
void Serialized_ops_struct_w_bitmask(void);
void Serialized_ops_enum(void);
void Serialized_ops_struct_w_enum(void);

// Testsuite 'Cursor'
void Cursor_set_bool(void);
void Cursor_set_byte(void);
void Cursor_set_char(void);
void Cursor_set_i8(void);
void Cursor_set_i16(void);
void Cursor_set_i32(void);
void Cursor_set_i64(void);
void Cursor_set_iptr(void);
void Cursor_set_u8(void);
void Cursor_set_u16(void);
void Cursor_set_u32(void);
void Cursor_set_u64(void);
void Cursor_set_uptr(void);
void Cursor_set_float(void);
void Cursor_set_double(void);
void Cursor_set_string(void);
void Cursor_set_string_literal(void);
void Cursor_set_string_to_null(void);
void Cursor_set_entity(void);
void Cursor_set_entity_to_number(void);
void Cursor_set_entity_to_0(void);
void Cursor_set_str_to_bool(void);
void Cursor_set_str_to_char(void);
void Cursor_set_str_literal_to_char(void);
void Cursor_set_str_to_i8(void);
void Cursor_set_str_to_i16(void);
void Cursor_set_str_to_i32(void);
void Cursor_set_str_to_i64(void);
void Cursor_set_str_to_f32(void);
void Cursor_set_str_to_f64(void);
void Cursor_set_str_to_entity(void);
void Cursor_set_str_to_invalid_bool(void);
void Cursor_set_str_to_invalid_entity(void);
void Cursor_struct_set_i32(void);
void Cursor_struct_set_i32_i32(void);
void Cursor_struct_set_i32_i32_i32(void);
void Cursor_struct_set_bool(void);
void Cursor_struct_set_bool_bool(void);
void Cursor_struct_set_bool_bool_bool(void);
void Cursor_struct_set_bool_bool_i32_bool(void);
void Cursor_struct_nested_i32(void);
void Cursor_struct_2_nested_1_i32_2_i32(void);
void Cursor_struct_2_nested_1_i32_i32_2_i32_i32(void);
void Cursor_struct_2_nested_1_i32_i32_2_i32_i32_w_padding_members(void);
void Cursor_struct_set_array_i32_3(void);
void Cursor_struct_set_2_array_i32_3(void);
void Cursor_struct_set_2_array_i32_3_w_padding_members(void);
void Cursor_struct_set_array_w_struct_i32(void);
void Cursor_struct_set_2_array_w_struct_i32(void);
void Cursor_struct_set_array_w_struct_w_array_i32(void);
void Cursor_struct_set_2_array_w_struct_w_array_i32(void);
void Cursor_struct_member_i32(void);
void Cursor_struct_member_i32_i32(void);
void Cursor_struct_member_i32_i32_reverse(void);
void Cursor_struct_member_nested_i32_i32(void);
void Cursor_struct_member_2_nested_i32_i32(void);
void Cursor_struct_member_2_nested_i32_i32_reverse(void);

// Testsuite 'DeserializeFromExpr'
void DeserializeFromExpr_bool(void);
void DeserializeFromExpr_byte(void);
void DeserializeFromExpr_char(void);
void DeserializeFromExpr_char_literal(void);
void DeserializeFromExpr_i8(void);
void DeserializeFromExpr_i16(void);
void DeserializeFromExpr_i32(void);
void DeserializeFromExpr_i64(void);
void DeserializeFromExpr_iptr(void);
void DeserializeFromExpr_u8(void);
void DeserializeFromExpr_u16(void);
void DeserializeFromExpr_u32(void);
void DeserializeFromExpr_u64(void);
void DeserializeFromExpr_uptr(void);
void DeserializeFromExpr_float(void);
void DeserializeFromExpr_double(void);
void DeserializeFromExpr_negative_int(void);
void DeserializeFromExpr_negative_float(void);
void DeserializeFromExpr_string(void);
void DeserializeFromExpr_entity(void);
void DeserializeFromExpr_enum(void);
void DeserializeFromExpr_bitmask(void);
void DeserializeFromExpr_struct_enum(void);
void DeserializeFromExpr_struct_bitmask(void);
void DeserializeFromExpr_struct_i32(void);
void DeserializeFromExpr_struct_i32_i32(void);
void DeserializeFromExpr_struct_entity(void);
void DeserializeFromExpr_struct_nested_i32(void);
void DeserializeFromExpr_struct_nested_i32_i32(void);
void DeserializeFromExpr_struct_2_nested_i32_i32(void);
void DeserializeFromExpr_struct_member_i32(void);
void DeserializeFromExpr_struct_member_i32_i32(void);
void DeserializeFromExpr_struct_member_nested_i32(void);
void DeserializeFromExpr_struct_member_nested_i32_i32(void);
void DeserializeFromExpr_struct_member_2_nested_i32_i32(void);
void DeserializeFromExpr_struct_member_2_nested_i32_i32_reverse(void);
void DeserializeFromExpr_struct_i32_array_3(void);
void DeserializeFromExpr_struct_struct_i32_array_3(void);
void DeserializeFromExpr_struct_struct_i32_i32_array_3(void);

// Testsuite 'SerializeToExpr'
void SerializeToExpr_bool(void);
void SerializeToExpr_byte(void);
void SerializeToExpr_char(void);
void SerializeToExpr_i8(void);
void SerializeToExpr_i16(void);
void SerializeToExpr_i32(void);
void SerializeToExpr_i64(void);
void SerializeToExpr_iptr(void);
void SerializeToExpr_u8(void);
void SerializeToExpr_u16(void);
void SerializeToExpr_u32(void);
void SerializeToExpr_u64(void);
void SerializeToExpr_uptr(void);
void SerializeToExpr_float(void);
void SerializeToExpr_double(void);
void SerializeToExpr_string(void);
void SerializeToExpr_entity(void);
void SerializeToExpr_enum(void);
void SerializeToExpr_bitmask(void);
void SerializeToExpr_struct_enum(void);
void SerializeToExpr_struct_bitmask(void);
void SerializeToExpr_struct_i32(void);
void SerializeToExpr_struct_i32_i32(void);
void SerializeToExpr_struct_entity(void);
void SerializeToExpr_struct_nested_i32(void);
void SerializeToExpr_struct_nested_i32_i32(void);
void SerializeToExpr_struct_2_nested_i32_i32(void);
void SerializeToExpr_struct_struct_i32_array_3(void);
void SerializeToExpr_struct_struct_i32_i32_array_3(void);

// Testsuite 'DeserializeFromJson'
void DeserializeFromJson_struct_bool(void);
void DeserializeFromJson_struct_byte(void);
void DeserializeFromJson_struct_char(void);
void DeserializeFromJson_struct_char_literal(void);
void DeserializeFromJson_struct_i8(void);
void DeserializeFromJson_struct_i16(void);
void DeserializeFromJson_struct_i32(void);
void DeserializeFromJson_struct_i64(void);
void DeserializeFromJson_struct_iptr(void);
void DeserializeFromJson_struct_u8(void);
void DeserializeFromJson_struct_u16(void);
void DeserializeFromJson_struct_u32(void);
void DeserializeFromJson_struct_u64(void);
void DeserializeFromJson_struct_uptr(void);
void DeserializeFromJson_struct_float(void);
void DeserializeFromJson_struct_double(void);
void DeserializeFromJson_struct_negative_int(void);
void DeserializeFromJson_struct_negative_float(void);
void DeserializeFromJson_struct_string(void);
void DeserializeFromJson_struct_entity(void);
void DeserializeFromJson_struct_enum(void);
void DeserializeFromJson_struct_bitmask(void);
void DeserializeFromJson_struct_i32_i32(void);
void DeserializeFromJson_struct_nested_i32(void);
void DeserializeFromJson_struct_nested_i32_i32(void);
void DeserializeFromJson_struct_2_nested_i32_i32(void);
void DeserializeFromJson_struct_i32_array_3(void);
void DeserializeFromJson_struct_struct_i32_array_3(void);
void DeserializeFromJson_struct_struct_i32_i32_array_3(void);

// Testsuite 'SerializeToJson'
void SerializeToJson_struct_bool(void);
void SerializeToJson_struct_byte(void);
void SerializeToJson_struct_char(void);
void SerializeToJson_struct_i8(void);
void SerializeToJson_struct_i16(void);
void SerializeToJson_struct_i32(void);
void SerializeToJson_struct_i64(void);
void SerializeToJson_struct_iptr(void);
void SerializeToJson_struct_u8(void);
void SerializeToJson_struct_u16(void);
void SerializeToJson_struct_u32(void);
void SerializeToJson_struct_u64(void);
void SerializeToJson_struct_uptr(void);
void SerializeToJson_struct_float(void);
void SerializeToJson_struct_double(void);
void SerializeToJson_struct_string(void);
void SerializeToJson_struct_entity(void);
void SerializeToJson_struct_enum(void);
void SerializeToJson_struct_bitmask(void);
void SerializeToJson_struct_i32_i32(void);
void SerializeToJson_struct_nested_i32(void);
void SerializeToJson_struct_nested_i32_i32(void);
void SerializeToJson_struct_2_nested_i32_i32(void);
void SerializeToJson_struct_i32_array_3(void);
void SerializeToJson_struct_struct_i32_array_3(void);
void SerializeToJson_struct_struct_i32_i32_array_3(void);

bake_test_case PrimitiveTypes_testcases[] = {
    {
        "bool",
        PrimitiveTypes_bool
    },
    {
        "byte",
        PrimitiveTypes_byte
    },
    {
        "char",
        PrimitiveTypes_char
    },
    {
        "i8",
        PrimitiveTypes_i8
    },
    {
        "i16",
        PrimitiveTypes_i16
    },
    {
        "i32",
        PrimitiveTypes_i32
    },
    {
        "i64",
        PrimitiveTypes_i64
    },
    {
        "iptr",
        PrimitiveTypes_iptr
    },
    {
        "u8",
        PrimitiveTypes_u8
    },
    {
        "u16",
        PrimitiveTypes_u16
    },
    {
        "u32",
        PrimitiveTypes_u32
    },
    {
        "u64",
        PrimitiveTypes_u64
    },
    {
        "uptr",
        PrimitiveTypes_uptr
    },
    {
        "float",
        PrimitiveTypes_float
    },
    {
        "double",
        PrimitiveTypes_double
    },
    {
        "string",
        PrimitiveTypes_string
    },
    {
        "entity",
        PrimitiveTypes_entity
    },
    {
        "builtin_bool",
        PrimitiveTypes_builtin_bool
    },
    {
        "builtin_byte",
        PrimitiveTypes_builtin_byte
    },
    {
        "builtin_char",
        PrimitiveTypes_builtin_char
    },
    {
        "builtin_i8",
        PrimitiveTypes_builtin_i8
    },
    {
        "builtin_i16",
        PrimitiveTypes_builtin_i16
    },
    {
        "builtin_i32",
        PrimitiveTypes_builtin_i32
    },
    {
        "builtin_i64",
        PrimitiveTypes_builtin_i64
    },
    {
        "builtin_iptr",
        PrimitiveTypes_builtin_iptr
    },
    {
        "builtin_u8",
        PrimitiveTypes_builtin_u8
    },
    {
        "builtin_u16",
        PrimitiveTypes_builtin_u16
    },
    {
        "builtin_u32",
        PrimitiveTypes_builtin_u32
    },
    {
        "builtin_u64",
        PrimitiveTypes_builtin_u64
    },
    {
        "builtin_uptr",
        PrimitiveTypes_builtin_uptr
    },
    {
        "builtin_float",
        PrimitiveTypes_builtin_float
    },
    {
        "builtin_double",
        PrimitiveTypes_builtin_double
    },
    {
        "builtin_string",
        PrimitiveTypes_builtin_string
    },
    {
        "builtin_entity",
        PrimitiveTypes_builtin_entity
    },
    {
        "struct_w_bool",
        PrimitiveTypes_struct_w_bool
    },
    {
        "struct_w_byte",
        PrimitiveTypes_struct_w_byte
    },
    {
        "struct_w_char",
        PrimitiveTypes_struct_w_char
    },
    {
        "struct_w_i8",
        PrimitiveTypes_struct_w_i8
    },
    {
        "struct_w_i16",
        PrimitiveTypes_struct_w_i16
    },
    {
        "struct_w_i32",
        PrimitiveTypes_struct_w_i32
    },
    {
        "struct_w_i64",
        PrimitiveTypes_struct_w_i64
    },
    {
        "struct_w_iptr",
        PrimitiveTypes_struct_w_iptr
    },
    {
        "struct_w_u8",
        PrimitiveTypes_struct_w_u8
    },
    {
        "struct_w_u16",
        PrimitiveTypes_struct_w_u16
    },
    {
        "struct_w_u32",
        PrimitiveTypes_struct_w_u32
    },
    {
        "struct_w_u64",
        PrimitiveTypes_struct_w_u64
    },
    {
        "struct_w_uptr",
        PrimitiveTypes_struct_w_uptr
    },
    {
        "struct_w_float",
        PrimitiveTypes_struct_w_float
    },
    {
        "struct_w_double",
        PrimitiveTypes_struct_w_double
    },
    {
        "struct_w_string",
        PrimitiveTypes_struct_w_string
    },
    {
        "struct_w_entity",
        PrimitiveTypes_struct_w_entity
    }
};

bake_test_case EnumTypes_testcases[] = {
    {
        "enum_1_constant",
        EnumTypes_enum_1_constant
    },
    {
        "enum_2_constants",
        EnumTypes_enum_2_constants
    },
    {
        "enum_3_constants",
        EnumTypes_enum_3_constants
    },
    {
        "enum_3_constants_manual_values",
        EnumTypes_enum_3_constants_manual_values
    },
    {
        "struct_w_enum",
        EnumTypes_struct_w_enum
    }
};

bake_test_case BitmaskTypes_testcases[] = {
    {
        "bitmask_1_constant",
        BitmaskTypes_bitmask_1_constant
    },
    {
        "bitmask_2_constants",
        BitmaskTypes_bitmask_2_constants
    },
    {
        "bitmask_3_constants",
        BitmaskTypes_bitmask_3_constants
    },
    {
        "bitmask_4_constants",
        BitmaskTypes_bitmask_4_constants
    },
    {
        "bitmask_4_constants_manual_values",
        BitmaskTypes_bitmask_4_constants_manual_values
    },
    {
        "struct_w_bitmask",
        BitmaskTypes_struct_w_bitmask
    }
};

bake_test_case StructTypes_testcases[] = {
    {
        "i32",
        StructTypes_i32
    },
    {
        "i32_i32",
        StructTypes_i32_i32
    },
    {
        "i32_i32_i32",
        StructTypes_i32_i32_i32
    },
    {
        "bool_i32",
        StructTypes_bool_i32
    },
    {
        "bool_bool_i32",
        StructTypes_bool_bool_i32
    },
    {
        "bool_i32_bool_i32",
        StructTypes_bool_i32_bool_i32
    },
    {
        "i32_bool",
        StructTypes_i32_bool
    },
    {
        "i32_bool_bool",
        StructTypes_i32_bool_bool
    },
    {
        "i32_bool_bool_bool",
        StructTypes_i32_bool_bool_bool
    },
    {
        "i32_i64",
        StructTypes_i32_i64
    },
    {
        "i32_i64_i32",
        StructTypes_i32_i64_i32
    }
};

bake_test_case NestedStructTypes_testcases[] = {
    {
        "1_bool",
        NestedStructTypes_1_bool
    },
    {
        "1_int32",
        NestedStructTypes_1_int32
    },
    {
        "1_bool_w_bool_member",
        NestedStructTypes_1_bool_w_bool_member
    },
    {
        "1_bool_w_int32_member",
        NestedStructTypes_1_bool_w_int32_member
    },
    {
        "1_int32_w_bool_member",
        NestedStructTypes_1_int32_w_bool_member
    },
    {
        "1_int32_w_int32_member",
        NestedStructTypes_1_int32_w_int32_member
    },
    {
        "1_bool_2_same",
        NestedStructTypes_1_bool_2_same
    },
    {
        "1_bool_2_bool",
        NestedStructTypes_1_bool_2_bool
    },
    {
        "1_bool_2_i32",
        NestedStructTypes_1_bool_2_i32
    },
    {
        "1_i32_2_bool",
        NestedStructTypes_1_i32_2_bool
    },
    {
        "1_bool_2_bool_bool",
        NestedStructTypes_1_bool_2_bool_bool
    },
    {
        "1_bool_bool_2_bool",
        NestedStructTypes_1_bool_bool_2_bool
    },
    {
        "1_bool_bool_2_same",
        NestedStructTypes_1_bool_bool_2_same
    },
    {
        "1_bool_bool_2_bool_bool",
        NestedStructTypes_1_bool_bool_2_bool_bool
    },
    {
        "1_i32_2_same",
        NestedStructTypes_1_i32_2_same
    },
    {
        "1_i32_2_i32",
        NestedStructTypes_1_i32_2_i32
    },
    {
        "1_i32_2_i32_i32",
        NestedStructTypes_1_i32_2_i32_i32
    },
    {
        "1_i32_i32_2_i32",
        NestedStructTypes_1_i32_i32_2_i32
    },
    {
        "1_i32_i32_2_same",
        NestedStructTypes_1_i32_i32_2_same
    },
    {
        "1_i32_i32_2_i32_i32",
        NestedStructTypes_1_i32_i32_2_i32_i32
    },
    {
        "2_lvls_bool",
        NestedStructTypes_2_lvls_bool
    },
    {
        "2_lvls_bool_bool",
        NestedStructTypes_2_lvls_bool_bool
    }
};

bake_test_case ArrayTypes_testcases[] = {
    {
        "array_bool_1",
        ArrayTypes_array_bool_1
    },
    {
        "array_bool_2",
        ArrayTypes_array_bool_2
    },
    {
        "array_bool_3",
        ArrayTypes_array_bool_3
    },
    {
        "array_bool_1_before_i32_member",
        ArrayTypes_array_bool_1_before_i32_member
    },
    {
        "array_bool_2_before_i32_member",
        ArrayTypes_array_bool_2_before_i32_member
    },
    {
        "array_bool_3_before_i32_member",
        ArrayTypes_array_bool_3_before_i32_member
    },
    {
        "array_i32_3",
        ArrayTypes_array_i32_3
    },
    {
        "array_i32_3_before_i32_member",
        ArrayTypes_array_i32_3_before_i32_member
    },
    {
        "array_struct_bool_3",
        ArrayTypes_array_struct_bool_3
    },
    {
        "array_struct_bool_3_before_i32_member",
        ArrayTypes_array_struct_bool_3_before_i32_member
    },
    {
        "array_struct_array_bool_3",
        ArrayTypes_array_struct_array_bool_3
    },
    {
        "2_arrays_1_bool_1_i32",
        ArrayTypes_2_arrays_1_bool_1_i32
    },
    {
        "2_arrays_1_i32_1_bool",
        ArrayTypes_2_arrays_1_i32_1_bool
    },
    {
        "2_arrays_1_i32_1_bool",
        ArrayTypes_2_arrays_1_i32_1_bool
    },
    {
        "8_arrays_bool_w_padded_member",
        ArrayTypes_8_arrays_bool_w_padded_member
    },
    {
        "standaline_array_bool_1",
        ArrayTypes_standaline_array_bool_1
    },
    {
        "standaline_array_bool_2",
        ArrayTypes_standaline_array_bool_2
    },
    {
        "standaline_array_bool_3",
        ArrayTypes_standaline_array_bool_3
    },
    {
        "array_of_standaline_array_bool_1",
        ArrayTypes_array_of_standaline_array_bool_1
    },
    {
        "array_of_standaline_array_bool_2",
        ArrayTypes_array_of_standaline_array_bool_2
    },
    {
        "array_of_standaline_array_bool_3",
        ArrayTypes_array_of_standaline_array_bool_3
    }
};

bake_test_case VectorTypes_testcases[] = {
    {
        "vector_bool",
        VectorTypes_vector_bool
    },
    {
        "vector_i32",
        VectorTypes_vector_i32
    },
    {
        "vector_struct",
        VectorTypes_vector_struct
    }
};

bake_test_case Serialized_testcases[] = {
    {
        "primitive_constants",
        Serialized_primitive_constants
    },
    {
        "ops_bool",
        Serialized_ops_bool
    },
    {
        "ops_byte",
        Serialized_ops_byte
    },
    {
        "ops_char",
        Serialized_ops_char
    },
    {
        "ops_i8",
        Serialized_ops_i8
    },
    {
        "ops_i16",
        Serialized_ops_i16
    },
    {
        "ops_i32",
        Serialized_ops_i32
    },
    {
        "ops_i64",
        Serialized_ops_i64
    },
    {
        "ops_iptr",
        Serialized_ops_iptr
    },
    {
        "ops_u8",
        Serialized_ops_u8
    },
    {
        "ops_u16",
        Serialized_ops_u16
    },
    {
        "ops_u32",
        Serialized_ops_u32
    },
    {
        "ops_u64",
        Serialized_ops_u64
    },
    {
        "ops_uptr",
        Serialized_ops_uptr
    },
    {
        "ops_float",
        Serialized_ops_float
    },
    {
        "ops_double",
        Serialized_ops_double
    },
    {
        "ops_string",
        Serialized_ops_string
    },
    {
        "ops_entity",
        Serialized_ops_entity
    },
    {
        "ops_struct_bool",
        Serialized_ops_struct_bool
    },
    {
        "ops_struct_bool_bool",
        Serialized_ops_struct_bool_bool
    },
    {
        "ops_struct_i32",
        Serialized_ops_struct_i32
    },
    {
        "ops_struct_i32_i32",
        Serialized_ops_struct_i32_i32
    },
    {
        "ops_struct_i32_bool",
        Serialized_ops_struct_i32_bool
    },
    {
        "ops_struct_bool_i32",
        Serialized_ops_struct_bool_i32
    },
    {
        "ops_nested_struct_1_bool",
        Serialized_ops_nested_struct_1_bool
    },
    {
        "ops_nested_struct_1_i32",
        Serialized_ops_nested_struct_1_i32
    },
    {
        "ops_nested_struct_1_bool_w_bool_member",
        Serialized_ops_nested_struct_1_bool_w_bool_member
    },
    {
        "ops_nested_struct_1_bool_w_i32_member",
        Serialized_ops_nested_struct_1_bool_w_i32_member
    },
    {
        "ops_nested_struct_1_bool_2_bool",
        Serialized_ops_nested_struct_1_bool_2_bool
    },
    {
        "ops_nested_struct_1_i32_2_bool",
        Serialized_ops_nested_struct_1_i32_2_bool
    },
    {
        "ops_nested_struct_1_i32_i32_2_bool_bool",
        Serialized_ops_nested_struct_1_i32_i32_2_bool_bool
    },
    {
        "ops_nested_struct_1_bool_bool_2_i32_i32",
        Serialized_ops_nested_struct_1_bool_bool_2_i32_i32
    },
    {
        "ops_nested_struct_1_i32_bool_2_bool_i32",
        Serialized_ops_nested_struct_1_i32_bool_2_bool_i32
    },
    {
        "ops_nested_struct_1_bool_i32_2_i32_bool",
        Serialized_ops_nested_struct_1_bool_i32_2_i32_bool
    },
    {
        "ops_nested_2_lvls_bool",
        Serialized_ops_nested_2_lvls_bool
    },
    {
        "ops_nested_2_lvls_bool_bool",
        Serialized_ops_nested_2_lvls_bool_bool
    },
    {
        "ops_nested_2_lvls_i32_i32_w_member_before",
        Serialized_ops_nested_2_lvls_i32_i32_w_member_before
    },
    {
        "ops_nested_2_lvls_1_bool_i32_2_i32_bool_w_member_before",
        Serialized_ops_nested_2_lvls_1_bool_i32_2_i32_bool_w_member_before
    },
    {
        "ops_nested_2_lvls_1_i32_bool_2_bool_i32_w_member_before",
        Serialized_ops_nested_2_lvls_1_i32_bool_2_bool_i32_w_member_before
    },
    {
        "ops_struct_array_bool_1",
        Serialized_ops_struct_array_bool_1
    },
    {
        "ops_struct_array_bool_2",
        Serialized_ops_struct_array_bool_2
    },
    {
        "ops_struct_array_bool_3",
        Serialized_ops_struct_array_bool_3
    },
    {
        "ops_struct_array_bool_1_w_i32_after",
        Serialized_ops_struct_array_bool_1_w_i32_after
    },
    {
        "ops_struct_array_bool_2_w_i32_after",
        Serialized_ops_struct_array_bool_2_w_i32_after
    },
    {
        "ops_struct_array_bool_3_w_i32_after",
        Serialized_ops_struct_array_bool_3_w_i32_after
    },
    {
        "ops_struct_array_struct_bool_3_w_i32_after",
        Serialized_ops_struct_array_struct_bool_3_w_i32_after
    },
    {
        "ops_standalone_array_bool_1",
        Serialized_ops_standalone_array_bool_1
    },
    {
        "ops_standalone_array_bool_2",
        Serialized_ops_standalone_array_bool_2
    },
    {
        "ops_standalone_array_bool_3",
        Serialized_ops_standalone_array_bool_3
    },
    {
        "ops_standalone_array_bool_1_w_bool_after",
        Serialized_ops_standalone_array_bool_1_w_bool_after
    },
    {
        "ops_standalone_array_bool_2_w_bool_after",
        Serialized_ops_standalone_array_bool_2_w_bool_after
    },
    {
        "ops_standalone_array_bool_3_w_bool_after",
        Serialized_ops_standalone_array_bool_3_w_bool_after
    },
    {
        "ops_vector",
        Serialized_ops_vector
    },
    {
        "ops_struct_w_vector",
        Serialized_ops_struct_w_vector
    },
    {
        "ops_struct_w_vector_w_bool_before",
        Serialized_ops_struct_w_vector_w_bool_before
    },
    {
        "ops_struct_w_vector_w_bool_after",
        Serialized_ops_struct_w_vector_w_bool_after
    },
    {
        "ops_bitmask",
        Serialized_ops_bitmask
    },
    {
        "ops_struct_w_bitmask",
        Serialized_ops_struct_w_bitmask
    },
    {
        "ops_enum",
        Serialized_ops_enum
    },
    {
        "ops_struct_w_enum",
        Serialized_ops_struct_w_enum
    }
};

bake_test_case Cursor_testcases[] = {
    {
        "set_bool",
        Cursor_set_bool
    },
    {
        "set_byte",
        Cursor_set_byte
    },
    {
        "set_char",
        Cursor_set_char
    },
    {
        "set_i8",
        Cursor_set_i8
    },
    {
        "set_i16",
        Cursor_set_i16
    },
    {
        "set_i32",
        Cursor_set_i32
    },
    {
        "set_i64",
        Cursor_set_i64
    },
    {
        "set_iptr",
        Cursor_set_iptr
    },
    {
        "set_u8",
        Cursor_set_u8
    },
    {
        "set_u16",
        Cursor_set_u16
    },
    {
        "set_u32",
        Cursor_set_u32
    },
    {
        "set_u64",
        Cursor_set_u64
    },
    {
        "set_uptr",
        Cursor_set_uptr
    },
    {
        "set_float",
        Cursor_set_float
    },
    {
        "set_double",
        Cursor_set_double
    },
    {
        "set_string",
        Cursor_set_string
    },
    {
        "set_string_literal",
        Cursor_set_string_literal
    },
    {
        "set_string_to_null",
        Cursor_set_string_to_null
    },
    {
        "set_entity",
        Cursor_set_entity
    },
    {
        "set_entity_to_number",
        Cursor_set_entity_to_number
    },
    {
        "set_entity_to_0",
        Cursor_set_entity_to_0
    },
    {
        "set_str_to_bool",
        Cursor_set_str_to_bool
    },
    {
        "set_str_to_char",
        Cursor_set_str_to_char
    },
    {
        "set_str_literal_to_char",
        Cursor_set_str_literal_to_char
    },
    {
        "set_str_to_i8",
        Cursor_set_str_to_i8
    },
    {
        "set_str_to_i16",
        Cursor_set_str_to_i16
    },
    {
        "set_str_to_i32",
        Cursor_set_str_to_i32
    },
    {
        "set_str_to_i64",
        Cursor_set_str_to_i64
    },
    {
        "set_str_to_f32",
        Cursor_set_str_to_f32
    },
    {
        "set_str_to_f64",
        Cursor_set_str_to_f64
    },
    {
        "set_str_to_entity",
        Cursor_set_str_to_entity
    },
    {
        "set_str_to_invalid_bool",
        Cursor_set_str_to_invalid_bool
    },
    {
        "set_str_to_invalid_entity",
        Cursor_set_str_to_invalid_entity
    },
    {
        "struct_set_i32",
        Cursor_struct_set_i32
    },
    {
        "struct_set_i32_i32",
        Cursor_struct_set_i32_i32
    },
    {
        "struct_set_i32_i32_i32",
        Cursor_struct_set_i32_i32_i32
    },
    {
        "struct_set_bool",
        Cursor_struct_set_bool
    },
    {
        "struct_set_bool_bool",
        Cursor_struct_set_bool_bool
    },
    {
        "struct_set_bool_bool_bool",
        Cursor_struct_set_bool_bool_bool
    },
    {
        "struct_set_bool_bool_i32_bool",
        Cursor_struct_set_bool_bool_i32_bool
    },
    {
        "struct_nested_i32",
        Cursor_struct_nested_i32
    },
    {
        "struct_2_nested_1_i32_2_i32",
        Cursor_struct_2_nested_1_i32_2_i32
    },
    {
        "struct_2_nested_1_i32_i32_2_i32_i32",
        Cursor_struct_2_nested_1_i32_i32_2_i32_i32
    },
    {
        "struct_2_nested_1_i32_i32_2_i32_i32_w_padding_members",
        Cursor_struct_2_nested_1_i32_i32_2_i32_i32_w_padding_members
    },
    {
        "struct_set_array_i32_3",
        Cursor_struct_set_array_i32_3
    },
    {
        "struct_set_2_array_i32_3",
        Cursor_struct_set_2_array_i32_3
    },
    {
        "struct_set_2_array_i32_3_w_padding_members",
        Cursor_struct_set_2_array_i32_3_w_padding_members
    },
    {
        "struct_set_array_w_struct_i32",
        Cursor_struct_set_array_w_struct_i32
    },
    {
        "struct_set_2_array_w_struct_i32",
        Cursor_struct_set_2_array_w_struct_i32
    },
    {
        "struct_set_array_w_struct_w_array_i32",
        Cursor_struct_set_array_w_struct_w_array_i32
    },
    {
        "struct_set_2_array_w_struct_w_array_i32",
        Cursor_struct_set_2_array_w_struct_w_array_i32
    },
    {
        "struct_member_i32",
        Cursor_struct_member_i32
    },
    {
        "struct_member_i32_i32",
        Cursor_struct_member_i32_i32
    },
    {
        "struct_member_i32_i32_reverse",
        Cursor_struct_member_i32_i32_reverse
    },
    {
        "struct_member_nested_i32_i32",
        Cursor_struct_member_nested_i32_i32
    },
    {
        "struct_member_2_nested_i32_i32",
        Cursor_struct_member_2_nested_i32_i32
    },
    {
        "struct_member_2_nested_i32_i32_reverse",
        Cursor_struct_member_2_nested_i32_i32_reverse
    }
};

bake_test_case DeserializeFromExpr_testcases[] = {
    {
        "bool",
        DeserializeFromExpr_bool
    },
    {
        "byte",
        DeserializeFromExpr_byte
    },
    {
        "char",
        DeserializeFromExpr_char
    },
    {
        "char_literal",
        DeserializeFromExpr_char_literal
    },
    {
        "i8",
        DeserializeFromExpr_i8
    },
    {
        "i16",
        DeserializeFromExpr_i16
    },
    {
        "i32",
        DeserializeFromExpr_i32
    },
    {
        "i64",
        DeserializeFromExpr_i64
    },
    {
        "iptr",
        DeserializeFromExpr_iptr
    },
    {
        "u8",
        DeserializeFromExpr_u8
    },
    {
        "u16",
        DeserializeFromExpr_u16
    },
    {
        "u32",
        DeserializeFromExpr_u32
    },
    {
        "u64",
        DeserializeFromExpr_u64
    },
    {
        "uptr",
        DeserializeFromExpr_uptr
    },
    {
        "float",
        DeserializeFromExpr_float
    },
    {
        "double",
        DeserializeFromExpr_double
    },
    {
        "negative_int",
        DeserializeFromExpr_negative_int
    },
    {
        "negative_float",
        DeserializeFromExpr_negative_float
    },
    {
        "string",
        DeserializeFromExpr_string
    },
    {
        "entity",
        DeserializeFromExpr_entity
    },
    {
        "enum",
        DeserializeFromExpr_enum
    },
    {
        "bitmask",
        DeserializeFromExpr_bitmask
    },
    {
        "struct_enum",
        DeserializeFromExpr_struct_enum
    },
    {
        "struct_bitmask",
        DeserializeFromExpr_struct_bitmask
    },
    {
        "struct_i32",
        DeserializeFromExpr_struct_i32
    },
    {
        "struct_i32_i32",
        DeserializeFromExpr_struct_i32_i32
    },
    {
        "struct_entity",
        DeserializeFromExpr_struct_entity
    },
    {
        "struct_nested_i32",
        DeserializeFromExpr_struct_nested_i32
    },
    {
        "struct_nested_i32_i32",
        DeserializeFromExpr_struct_nested_i32_i32
    },
    {
        "struct_2_nested_i32_i32",
        DeserializeFromExpr_struct_2_nested_i32_i32
    },
    {
        "struct_member_i32",
        DeserializeFromExpr_struct_member_i32
    },
    {
        "struct_member_i32_i32",
        DeserializeFromExpr_struct_member_i32_i32
    },
    {
        "struct_member_nested_i32",
        DeserializeFromExpr_struct_member_nested_i32
    },
    {
        "struct_member_nested_i32_i32",
        DeserializeFromExpr_struct_member_nested_i32_i32
    },
    {
        "struct_member_2_nested_i32_i32",
        DeserializeFromExpr_struct_member_2_nested_i32_i32
    },
    {
        "struct_member_2_nested_i32_i32_reverse",
        DeserializeFromExpr_struct_member_2_nested_i32_i32_reverse
    },
    {
        "struct_i32_array_3",
        DeserializeFromExpr_struct_i32_array_3
    },
    {
        "struct_struct_i32_array_3",
        DeserializeFromExpr_struct_struct_i32_array_3
    },
    {
        "struct_struct_i32_i32_array_3",
        DeserializeFromExpr_struct_struct_i32_i32_array_3
    }
};

bake_test_case SerializeToExpr_testcases[] = {
    {
        "bool",
        SerializeToExpr_bool
    },
    {
        "byte",
        SerializeToExpr_byte
    },
    {
        "char",
        SerializeToExpr_char
    },
    {
        "i8",
        SerializeToExpr_i8
    },
    {
        "i16",
        SerializeToExpr_i16
    },
    {
        "i32",
        SerializeToExpr_i32
    },
    {
        "i64",
        SerializeToExpr_i64
    },
    {
        "iptr",
        SerializeToExpr_iptr
    },
    {
        "u8",
        SerializeToExpr_u8
    },
    {
        "u16",
        SerializeToExpr_u16
    },
    {
        "u32",
        SerializeToExpr_u32
    },
    {
        "u64",
        SerializeToExpr_u64
    },
    {
        "uptr",
        SerializeToExpr_uptr
    },
    {
        "float",
        SerializeToExpr_float
    },
    {
        "double",
        SerializeToExpr_double
    },
    {
        "string",
        SerializeToExpr_string
    },
    {
        "entity",
        SerializeToExpr_entity
    },
    {
        "enum",
        SerializeToExpr_enum
    },
    {
        "bitmask",
        SerializeToExpr_bitmask
    },
    {
        "struct_enum",
        SerializeToExpr_struct_enum
    },
    {
        "struct_bitmask",
        SerializeToExpr_struct_bitmask
    },
    {
        "struct_i32",
        SerializeToExpr_struct_i32
    },
    {
        "struct_i32_i32",
        SerializeToExpr_struct_i32_i32
    },
    {
        "struct_entity",
        SerializeToExpr_struct_entity
    },
    {
        "struct_nested_i32",
        SerializeToExpr_struct_nested_i32
    },
    {
        "struct_nested_i32_i32",
        SerializeToExpr_struct_nested_i32_i32
    },
    {
        "struct_2_nested_i32_i32",
        SerializeToExpr_struct_2_nested_i32_i32
    },
    {
        "struct_struct_i32_array_3",
        SerializeToExpr_struct_struct_i32_array_3
    },
    {
        "struct_struct_i32_i32_array_3",
        SerializeToExpr_struct_struct_i32_i32_array_3
    }
};

bake_test_case DeserializeFromJson_testcases[] = {
    {
        "struct_bool",
        DeserializeFromJson_struct_bool
    },
    {
        "struct_byte",
        DeserializeFromJson_struct_byte
    },
    {
        "struct_char",
        DeserializeFromJson_struct_char
    },
    {
        "struct_char_literal",
        DeserializeFromJson_struct_char_literal
    },
    {
        "struct_i8",
        DeserializeFromJson_struct_i8
    },
    {
        "struct_i16",
        DeserializeFromJson_struct_i16
    },
    {
        "struct_i32",
        DeserializeFromJson_struct_i32
    },
    {
        "struct_i64",
        DeserializeFromJson_struct_i64
    },
    {
        "struct_iptr",
        DeserializeFromJson_struct_iptr
    },
    {
        "struct_u8",
        DeserializeFromJson_struct_u8
    },
    {
        "struct_u16",
        DeserializeFromJson_struct_u16
    },
    {
        "struct_u32",
        DeserializeFromJson_struct_u32
    },
    {
        "struct_u64",
        DeserializeFromJson_struct_u64
    },
    {
        "struct_uptr",
        DeserializeFromJson_struct_uptr
    },
    {
        "struct_float",
        DeserializeFromJson_struct_float
    },
    {
        "struct_double",
        DeserializeFromJson_struct_double
    },
    {
        "struct_negative_int",
        DeserializeFromJson_struct_negative_int
    },
    {
        "struct_negative_float",
        DeserializeFromJson_struct_negative_float
    },
    {
        "struct_string",
        DeserializeFromJson_struct_string
    },
    {
        "struct_entity",
        DeserializeFromJson_struct_entity
    },
    {
        "struct_enum",
        DeserializeFromJson_struct_enum
    },
    {
        "struct_bitmask",
        DeserializeFromJson_struct_bitmask
    },
    {
        "struct_i32_i32",
        DeserializeFromJson_struct_i32_i32
    },
    {
        "struct_nested_i32",
        DeserializeFromJson_struct_nested_i32
    },
    {
        "struct_nested_i32_i32",
        DeserializeFromJson_struct_nested_i32_i32
    },
    {
        "struct_2_nested_i32_i32",
        DeserializeFromJson_struct_2_nested_i32_i32
    },
    {
        "struct_i32_array_3",
        DeserializeFromJson_struct_i32_array_3
    },
    {
        "struct_struct_i32_array_3",
        DeserializeFromJson_struct_struct_i32_array_3
    },
    {
        "struct_struct_i32_i32_array_3",
        DeserializeFromJson_struct_struct_i32_i32_array_3
    }
};

bake_test_case SerializeToJson_testcases[] = {
    {
        "struct_bool",
        SerializeToJson_struct_bool
    },
    {
        "struct_byte",
        SerializeToJson_struct_byte
    },
    {
        "struct_char",
        SerializeToJson_struct_char
    },
    {
        "struct_i8",
        SerializeToJson_struct_i8
    },
    {
        "struct_i16",
        SerializeToJson_struct_i16
    },
    {
        "struct_i32",
        SerializeToJson_struct_i32
    },
    {
        "struct_i64",
        SerializeToJson_struct_i64
    },
    {
        "struct_iptr",
        SerializeToJson_struct_iptr
    },
    {
        "struct_u8",
        SerializeToJson_struct_u8
    },
    {
        "struct_u16",
        SerializeToJson_struct_u16
    },
    {
        "struct_u32",
        SerializeToJson_struct_u32
    },
    {
        "struct_u64",
        SerializeToJson_struct_u64
    },
    {
        "struct_uptr",
        SerializeToJson_struct_uptr
    },
    {
        "struct_float",
        SerializeToJson_struct_float
    },
    {
        "struct_double",
        SerializeToJson_struct_double
    },
    {
        "struct_string",
        SerializeToJson_struct_string
    },
    {
        "struct_entity",
        SerializeToJson_struct_entity
    },
    {
        "struct_enum",
        SerializeToJson_struct_enum
    },
    {
        "struct_bitmask",
        SerializeToJson_struct_bitmask
    },
    {
        "struct_i32_i32",
        SerializeToJson_struct_i32_i32
    },
    {
        "struct_nested_i32",
        SerializeToJson_struct_nested_i32
    },
    {
        "struct_nested_i32_i32",
        SerializeToJson_struct_nested_i32_i32
    },
    {
        "struct_2_nested_i32_i32",
        SerializeToJson_struct_2_nested_i32_i32
    },
    {
        "struct_i32_array_3",
        SerializeToJson_struct_i32_array_3
    },
    {
        "struct_struct_i32_array_3",
        SerializeToJson_struct_struct_i32_array_3
    },
    {
        "struct_struct_i32_i32_array_3",
        SerializeToJson_struct_struct_i32_i32_array_3
    }
};

static bake_test_suite suites[] = {
    {
        "PrimitiveTypes",
        NULL,
        NULL,
        51,
        PrimitiveTypes_testcases
    },
    {
        "EnumTypes",
        NULL,
        NULL,
        5,
        EnumTypes_testcases
    },
    {
        "BitmaskTypes",
        NULL,
        NULL,
        6,
        BitmaskTypes_testcases
    },
    {
        "StructTypes",
        NULL,
        NULL,
        11,
        StructTypes_testcases
    },
    {
        "NestedStructTypes",
        NULL,
        NULL,
        22,
        NestedStructTypes_testcases
    },
    {
        "ArrayTypes",
        NULL,
        NULL,
        21,
        ArrayTypes_testcases
    },
    {
        "VectorTypes",
        NULL,
        NULL,
        3,
        VectorTypes_testcases
    },
    {
        "Serialized",
        NULL,
        NULL,
        60,
        Serialized_testcases
    },
    {
        "Cursor",
        NULL,
        NULL,
        57,
        Cursor_testcases
    },
    {
        "DeserializeFromExpr",
        NULL,
        NULL,
        39,
        DeserializeFromExpr_testcases
    },
    {
        "SerializeToExpr",
        NULL,
        NULL,
        29,
        SerializeToExpr_testcases
    },
    {
        "DeserializeFromJson",
        NULL,
        NULL,
        29,
        DeserializeFromJson_testcases
    },
    {
        "SerializeToJson",
        NULL,
        NULL,
        26,
        SerializeToJson_testcases
    }
};

int main(int argc, char *argv[]) {
    ut_init(argv[0]);
    return bake_test_run("meta", argc, argv, suites, 13);
}