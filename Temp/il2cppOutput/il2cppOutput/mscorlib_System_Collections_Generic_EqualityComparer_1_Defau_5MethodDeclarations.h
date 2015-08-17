#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
struct DefaultComparer_t1601;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
extern "C" void DefaultComparer__ctor_m10106_gshared (DefaultComparer_t1601 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10106(__this, method) (( void (*) (DefaultComparer_t1601 *, const MethodInfo*))DefaultComparer__ctor_m10106_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10107_gshared (DefaultComparer_t1601 * __this, uint64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10107(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1601 *, uint64_t, const MethodInfo*))DefaultComparer_GetHashCode_m10107_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10108_gshared (DefaultComparer_t1601 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10108(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1601 *, uint64_t, uint64_t, const MethodInfo*))DefaultComparer_Equals_m10108_gshared)(__this, ___x, ___y, method)
