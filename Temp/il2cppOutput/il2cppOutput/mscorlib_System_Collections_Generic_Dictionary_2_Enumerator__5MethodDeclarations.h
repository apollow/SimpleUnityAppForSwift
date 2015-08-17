#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t1520;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1515;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9140_gshared (Enumerator_t1520 * __this, Dictionary_2_t1515 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9140(__this, ___dictionary, method) (( void (*) (Enumerator_t1520 *, Dictionary_2_t1515 *, const MethodInfo*))Enumerator__ctor_m9140_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9141_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9141(__this, method) (( Object_t * (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9141_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9142_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9142(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9142_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9143_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9143(__this, method) (( Object_t * (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9144_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9144(__this, method) (( Object_t * (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9144_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9145_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9145(__this, method) (( bool (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_MoveNext_m9145_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1516  Enumerator_get_Current_m9146_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9146(__this, method) (( KeyValuePair_2_t1516  (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_get_Current_m9146_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9147_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9147(__this, method) (( Object_t * (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_get_CurrentKey_m9147_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9148_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9148(__this, method) (( int32_t (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_get_CurrentValue_m9148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m9149_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9149(__this, method) (( void (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_VerifyState_m9149_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9150_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9150(__this, method) (( void (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_VerifyCurrent_m9150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9151_gshared (Enumerator_t1520 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9151(__this, method) (( void (*) (Enumerator_t1520 *, const MethodInfo*))Enumerator_Dispose_m9151_gshared)(__this, method)
