#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t1523;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1515;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9169_gshared (Enumerator_t1523 * __this, Dictionary_2_t1515 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m9169(__this, ___host, method) (( void (*) (Enumerator_t1523 *, Dictionary_2_t1515 *, const MethodInfo*))Enumerator__ctor_m9169_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9170_gshared (Enumerator_t1523 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9170(__this, method) (( Object_t * (*) (Enumerator_t1523 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9171_gshared (Enumerator_t1523 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9171(__this, method) (( void (*) (Enumerator_t1523 *, const MethodInfo*))Enumerator_Dispose_m9171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9172_gshared (Enumerator_t1523 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9172(__this, method) (( bool (*) (Enumerator_t1523 *, const MethodInfo*))Enumerator_MoveNext_m9172_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m9173_gshared (Enumerator_t1523 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9173(__this, method) (( int32_t (*) (Enumerator_t1523 *, const MethodInfo*))Enumerator_get_Current_m9173_gshared)(__this, method)
