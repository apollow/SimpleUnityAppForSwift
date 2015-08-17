#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1443;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8319_gshared (GenericEqualityComparer_1_t1443 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8319(__this, method) (( void (*) (GenericEqualityComparer_1_t1443 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8319_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12079_gshared (GenericEqualityComparer_1_t1443 * __this, Guid_t371  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12079(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1443 *, Guid_t371 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12079_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12080_gshared (GenericEqualityComparer_1_t1443 * __this, Guid_t371  ___x, Guid_t371  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12080(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1443 *, Guid_t371 , Guid_t371 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12080_gshared)(__this, ___x, ___y, method)
