#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t339;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Delegate[]
struct DelegateU5BU5D_t1397;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" MethodInfo_t * Delegate_get_Method_m3952 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C" Object_t * Delegate_get_Target_m3953 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_internal_m3954 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C" void Delegate_SetMulticastInvoke_m3955 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C" bool Delegate_arg_type_match_m3956 (Object_t * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C" bool Delegate_return_type_match_m3957 (Object_t * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3958 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3959 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3960 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3961 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C" MethodInfo_t * Delegate_GetCandidateMethod_m3962 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3963 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3964 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3965 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C" Delegate_t339 * Delegate_CreateDelegate_m3966 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C" Object_t * Delegate_Clone_m3967 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C" bool Delegate_Equals_m3968 (Delegate_t339 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C" int32_t Delegate_GetHashCode_m3969 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Delegate_GetObjectData_m3970 (Delegate_t339 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1397* Delegate_GetInvocationList_m3971 (Delegate_t339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" Delegate_t339 * Delegate_Combine_m1248 (Object_t * __this /* static, unused */, Delegate_t339 * ___a, Delegate_t339 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C" Delegate_t339 * Delegate_Combine_m3972 (Object_t * __this /* static, unused */, DelegateU5BU5D_t1397* ___delegates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C" Delegate_t339 * Delegate_CombineImpl_m3973 (Delegate_t339 * __this, Delegate_t339 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" Delegate_t339 * Delegate_Remove_m1249 (Object_t * __this /* static, unused */, Delegate_t339 * ___source, Delegate_t339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t339 * Delegate_RemoveImpl_m3974 (Delegate_t339 * __this, Delegate_t339 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
