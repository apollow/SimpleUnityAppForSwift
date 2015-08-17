#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t1789;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11976_gshared (InternalEnumerator_1_t1789 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11976(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1789 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11976_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11977_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11977(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11977_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11978_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11978(__this, method) (( void (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11978_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11979_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11979(__this, method) (( bool (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11979_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t354  InternalEnumerator_1_get_Current_m11980_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11980(__this, method) (( Decimal_t354  (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11980_gshared)(__this, method)
