#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1802;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12065_gshared (DefaultComparer_t1802 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12065(__this, method) (( void (*) (DefaultComparer_t1802 *, const MethodInfo*))DefaultComparer__ctor_m12065_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12066_gshared (DefaultComparer_t1802 * __this, DateTimeOffset_t370  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12066(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1802 *, DateTimeOffset_t370 , const MethodInfo*))DefaultComparer_GetHashCode_m12066_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12067_gshared (DefaultComparer_t1802 * __this, DateTimeOffset_t370  ___x, DateTimeOffset_t370  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12067(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1802 *, DateTimeOffset_t370 , DateTimeOffset_t370 , const MethodInfo*))DefaultComparer_Equals_m12067_gshared)(__this, ___x, ___y, method)
