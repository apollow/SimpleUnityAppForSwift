#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1478;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1471;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8633_gshared (Enumerator_t1478 * __this, Dictionary_2_t1471 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8633(__this, ___dictionary, method) (( void (*) (Enumerator_t1478 *, Dictionary_2_t1471 *, const MethodInfo*))Enumerator__ctor_m8633_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8634_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8634(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8634_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8635_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8635(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8635_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8636_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8636(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8637_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8637(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8637_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8638_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8638(__this, method) (( bool (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_MoveNext_m8638_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1472  Enumerator_get_Current_m8639_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8639(__this, method) (( KeyValuePair_2_t1472  (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_Current_m8639_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m8640_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8640(__this, method) (( int32_t (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_CurrentKey_m8640_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m8641_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8641(__this, method) (( Object_t * (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_get_CurrentValue_m8641_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m8642_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8642(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_VerifyState_m8642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8643_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8643(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_VerifyCurrent_m8643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m8644_gshared (Enumerator_t1478 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8644(__this, method) (( void (*) (Enumerator_t1478 *, const MethodInfo*))Enumerator_Dispose_m8644_gshared)(__this, method)
