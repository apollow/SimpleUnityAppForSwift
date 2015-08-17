#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t383;
// System.Reflection.MethodBase
struct MethodBase_t386;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1402;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t384;
// System.Globalization.CultureInfo
struct CultureInfo_t349;
// System.String[]
struct StringU5BU5D_t204;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t203;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t379;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t376;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m5871 (Binder_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m5872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t383 * Binder_get_DefaultBinder_m5873 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m5874 (Object_t * __this /* static, unused */, Binder_t383 * ___binder, ObjectU5BU5D_t207* ___args, ParameterInfoU5BU5D_t376* ___pinfo, CultureInfo_t349 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m5875 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t386 * Binder_FindMostDerivedMatch_m5876 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1402* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
