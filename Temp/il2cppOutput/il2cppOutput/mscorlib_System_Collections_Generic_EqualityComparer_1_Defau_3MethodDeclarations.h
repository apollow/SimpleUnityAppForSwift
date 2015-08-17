#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t1555;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9594_gshared (DefaultComparer_t1555 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9594(__this, method) (( void (*) (DefaultComparer_t1555 *, const MethodInfo*))DefaultComparer__ctor_m9594_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9595_gshared (DefaultComparer_t1555 * __this, UILineInfo_t157  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9595(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1555 *, UILineInfo_t157 , const MethodInfo*))DefaultComparer_GetHashCode_m9595_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9596_gshared (DefaultComparer_t1555 * __this, UILineInfo_t157  ___x, UILineInfo_t157  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9596(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1555 *, UILineInfo_t157 , UILineInfo_t157 , const MethodInfo*))DefaultComparer_Equals_m9596_gshared)(__this, ___x, ___y, method)
