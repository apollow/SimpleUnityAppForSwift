#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t1637;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1634;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10745_gshared (Enumerator_t1637 * __this, Dictionary_2_t1634 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10745(__this, ___dictionary, method) (( void (*) (Enumerator_t1637 *, Dictionary_2_t1634 *, const MethodInfo*))Enumerator__ctor_m10745_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10746_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10746(__this, method) (( Object_t * (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10746_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10747_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10747(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10747_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10748_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10748(__this, method) (( Object_t * (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10748_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10749_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10749(__this, method) (( Object_t * (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10750_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10750(__this, method) (( bool (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_MoveNext_m10750_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1608  Enumerator_get_Current_m10751_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10751(__this, method) (( KeyValuePair_2_t1608  (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_get_Current_m10751_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10752_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10752(__this, method) (( Object_t * (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_get_CurrentKey_m10752_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1500  Enumerator_get_CurrentValue_m10753_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10753(__this, method) (( KeyValuePair_2_t1500  (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_get_CurrentValue_m10753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m10754_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10754(__this, method) (( void (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_VerifyState_m10754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10755_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10755(__this, method) (( void (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_VerifyCurrent_m10755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m10756_gshared (Enumerator_t1637 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10756(__this, method) (( void (*) (Enumerator_t1637 *, const MethodInfo*))Enumerator_Dispose_m10756_gshared)(__this, method)
