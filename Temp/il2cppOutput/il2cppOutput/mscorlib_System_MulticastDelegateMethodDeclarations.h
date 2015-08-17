#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t56;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1397;
// System.Delegate
struct Delegate_t339;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3944 (MulticastDelegate_t56 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3945 (MulticastDelegate_t56 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3946 (MulticastDelegate_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1397* MulticastDelegate_GetInvocationList_m3947 (MulticastDelegate_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t339 * MulticastDelegate_CombineImpl_m3948 (MulticastDelegate_t56 * __this, Delegate_t339 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m3949 (MulticastDelegate_t56 * __this, MulticastDelegate_t56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t56 * MulticastDelegate_KPM_m3950 (Object_t * __this /* static, unused */, MulticastDelegate_t56 * ___needle, MulticastDelegate_t56 * ___haystack, MulticastDelegate_t56 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t339 * MulticastDelegate_RemoveImpl_m3951 (MulticastDelegate_t56 * __this, Delegate_t339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
