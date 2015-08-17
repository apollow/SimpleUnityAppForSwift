#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t964;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t957;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.Emit.PropertyBuilder
struct  PropertyBuilder_t983  : public PropertyInfo_t
{
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs_0;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type_2;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t964 * ___set_method_3;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t964 * ___get_method_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t957 * ___typeb_5;
};
