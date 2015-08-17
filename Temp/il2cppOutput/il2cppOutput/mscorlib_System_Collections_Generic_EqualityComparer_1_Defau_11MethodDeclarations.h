#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1806;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12086_gshared (DefaultComparer_t1806 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12086(__this, method) (( void (*) (DefaultComparer_t1806 *, const MethodInfo*))DefaultComparer__ctor_m12086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12087_gshared (DefaultComparer_t1806 * __this, Guid_t371  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12087(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1806 *, Guid_t371 , const MethodInfo*))DefaultComparer_GetHashCode_m12087_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12088_gshared (DefaultComparer_t1806 * __this, Guid_t371  ___x, Guid_t371  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12088(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1806 *, Guid_t371 , Guid_t371 , const MethodInfo*))DefaultComparer_Equals_m12088_gshared)(__this, ___x, ___y, method)
