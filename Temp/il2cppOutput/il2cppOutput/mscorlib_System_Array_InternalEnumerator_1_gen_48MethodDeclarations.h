#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct InternalEnumerator_1_t1700;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11382_gshared (InternalEnumerator_1_t1700 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11382(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1700 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11382_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11383_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11383(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11383_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11384_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11384(__this, method) (( void (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11384_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11385_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11385(__this, method) (( bool (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11385_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t1699  InternalEnumerator_1_get_Current_m11386_gshared (InternalEnumerator_1_t1700 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11386(__this, method) (( KeyValuePair_2_t1699  (*) (InternalEnumerator_1_t1700 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11386_gshared)(__this, method)
