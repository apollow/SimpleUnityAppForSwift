#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t1504;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1499;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8914_gshared (Enumerator_t1504 * __this, Dictionary_2_t1499 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8914(__this, ___dictionary, method) (( void (*) (Enumerator_t1504 *, Dictionary_2_t1499 *, const MethodInfo*))Enumerator__ctor_m8914_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8915_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8915(__this, method) (( Object_t * (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8915_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8916_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8916(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8916_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8917_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8917(__this, method) (( Object_t * (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8917_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8918_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8918(__this, method) (( Object_t * (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8918_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8919_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8919(__this, method) (( bool (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_MoveNext_m8919_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1500  Enumerator_get_Current_m8920_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8920(__this, method) (( KeyValuePair_2_t1500  (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_get_Current_m8920_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m8921_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8921(__this, method) (( Object_t * (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_get_CurrentKey_m8921_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m8922_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8922(__this, method) (( Object_t * (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_get_CurrentValue_m8922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m8923_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8923(__this, method) (( void (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_VerifyState_m8923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8924_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8924(__this, method) (( void (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_VerifyCurrent_m8924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m8925_gshared (Enumerator_t1504 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8925(__this, method) (( void (*) (Enumerator_t1504 *, const MethodInfo*))Enumerator_Dispose_m8925_gshared)(__this, method)
