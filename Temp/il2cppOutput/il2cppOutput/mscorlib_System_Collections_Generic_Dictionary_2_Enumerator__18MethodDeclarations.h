#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t1727;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t502;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11625_gshared (Enumerator_t1727 * __this, Dictionary_2_t502 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11625(__this, ___dictionary, method) (( void (*) (Enumerator_t1727 *, Dictionary_2_t502 *, const MethodInfo*))Enumerator__ctor_m11625_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11626_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11626(__this, method) (( Object_t * (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11626_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11627_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11627(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11627_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11628_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11628(__this, method) (( Object_t * (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11628_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11629_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11629(__this, method) (( Object_t * (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11629_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11630_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11630(__this, method) (( bool (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_MoveNext_m11630_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1723  Enumerator_get_Current_m11631_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11631(__this, method) (( KeyValuePair_2_t1723  (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_get_Current_m11631_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11632_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11632(__this, method) (( int32_t (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_get_CurrentKey_m11632_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11633_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11633(__this, method) (( int32_t (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_get_CurrentValue_m11633_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11634_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11634(__this, method) (( void (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_VerifyState_m11634_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11635_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11635(__this, method) (( void (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_VerifyCurrent_m11635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11636_gshared (Enumerator_t1727 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11636(__this, method) (( void (*) (Enumerator_t1727 *, const MethodInfo*))Enumerator_Dispose_m11636_gshared)(__this, method)
