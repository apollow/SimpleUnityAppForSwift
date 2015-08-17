#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t1640;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1634;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10774_gshared (Enumerator_t1640 * __this, Dictionary_2_t1634 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m10774(__this, ___host, method) (( void (*) (Enumerator_t1640 *, Dictionary_2_t1634 *, const MethodInfo*))Enumerator__ctor_m10774_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10775_gshared (Enumerator_t1640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10775(__this, method) (( Object_t * (*) (Enumerator_t1640 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m10776_gshared (Enumerator_t1640 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10776(__this, method) (( void (*) (Enumerator_t1640 *, const MethodInfo*))Enumerator_Dispose_m10776_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10777_gshared (Enumerator_t1640 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10777(__this, method) (( bool (*) (Enumerator_t1640 *, const MethodInfo*))Enumerator_MoveNext_m10777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1500  Enumerator_get_Current_m10778_gshared (Enumerator_t1640 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10778(__this, method) (( KeyValuePair_2_t1500  (*) (Enumerator_t1640 *, const MethodInfo*))Enumerator_get_Current_m10778_gshared)(__this, method)
