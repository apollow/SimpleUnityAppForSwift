#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1810;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12103_gshared (DefaultComparer_t1810 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12103(__this, method) (( void (*) (DefaultComparer_t1810 *, const MethodInfo*))DefaultComparer__ctor_m12103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12104_gshared (DefaultComparer_t1810 * __this, TimeSpan_t470  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12104(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1810 *, TimeSpan_t470 , const MethodInfo*))DefaultComparer_GetHashCode_m12104_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12105_gshared (DefaultComparer_t1810 * __this, TimeSpan_t470  ___x, TimeSpan_t470  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12105(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1810 *, TimeSpan_t470 , TimeSpan_t470 , const MethodInfo*))DefaultComparer_Equals_m12105_gshared)(__this, ___x, ___y, method)
