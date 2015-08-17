#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t1551;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9543_gshared (DefaultComparer_t1551 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9543(__this, method) (( void (*) (DefaultComparer_t1551 *, const MethodInfo*))DefaultComparer__ctor_m9543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9544_gshared (DefaultComparer_t1551 * __this, UICharInfo_t156  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9544(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1551 *, UICharInfo_t156 , const MethodInfo*))DefaultComparer_GetHashCode_m9544_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9545_gshared (DefaultComparer_t1551 * __this, UICharInfo_t156  ___x, UICharInfo_t156  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9545(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1551 *, UICharInfo_t156 , UICharInfo_t156 , const MethodInfo*))DefaultComparer_Equals_m9545_gshared)(__this, ___x, ___y, method)
