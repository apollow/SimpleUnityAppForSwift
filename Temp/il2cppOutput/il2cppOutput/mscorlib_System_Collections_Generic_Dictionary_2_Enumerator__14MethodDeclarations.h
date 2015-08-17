#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t1674;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1668;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11092_gshared (Enumerator_t1674 * __this, Dictionary_2_t1668 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11092(__this, ___dictionary, method) (( void (*) (Enumerator_t1674 *, Dictionary_2_t1668 *, const MethodInfo*))Enumerator__ctor_m11092_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11093_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11093(__this, method) (( Object_t * (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11093_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11094_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11094(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11094_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11095_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11095(__this, method) (( Object_t * (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11096_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11096(__this, method) (( Object_t * (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11096_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11097_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11097(__this, method) (( bool (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_MoveNext_m11097_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t1669  Enumerator_get_Current_m11098_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11098(__this, method) (( KeyValuePair_2_t1669  (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_get_Current_m11098_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11099_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11099(__this, method) (( Object_t * (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_get_CurrentKey_m11099_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11100_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11100(__this, method) (( int32_t (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_get_CurrentValue_m11100_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m11101_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11101(__this, method) (( void (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_VerifyState_m11101_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11102_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11102(__this, method) (( void (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_VerifyCurrent_m11102_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m11103_gshared (Enumerator_t1674 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11103(__this, method) (( void (*) (Enumerator_t1674 *, const MethodInfo*))Enumerator_Dispose_m11103_gshared)(__this, method)
