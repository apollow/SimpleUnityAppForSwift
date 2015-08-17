#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1800;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12056_gshared (DefaultComparer_t1800 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12056(__this, method) (( void (*) (DefaultComparer_t1800 *, const MethodInfo*))DefaultComparer__ctor_m12056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12057_gshared (DefaultComparer_t1800 * __this, DateTimeOffset_t370  ___x, DateTimeOffset_t370  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12057(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1800 *, DateTimeOffset_t370 , DateTimeOffset_t370 , const MethodInfo*))DefaultComparer_Compare_m12057_gshared)(__this, ___x, ___y, method)
