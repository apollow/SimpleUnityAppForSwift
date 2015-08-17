#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t1704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11416_gshared (Enumerator_t1704 * __this, Dictionary_2_t1698 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11416(__this, ___dictionary, method) (( void (*) (Enumerator_t1704 *, Dictionary_2_t1698 *, const MethodInfo*))Enumerator__ctor_m11416_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11417_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11417(__this, method) (( Object_t * (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11417_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11418_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11418(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11418_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11419_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11419(__this, method) (( Object_t * (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11419_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11420_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11420(__this, method) (( Object_t * (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11420_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11421_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11421(__this, method) (( bool (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_MoveNext_m11421_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1699  Enumerator_get_Current_m11422_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11422(__this, method) (( KeyValuePair_2_t1699  (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_get_Current_m11422_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11423_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11423(__this, method) (( Object_t * (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_get_CurrentKey_m11423_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m11424_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11424(__this, method) (( bool (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_get_CurrentValue_m11424_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m11425_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11425(__this, method) (( void (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_VerifyState_m11425_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11426_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11426(__this, method) (( void (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_VerifyCurrent_m11426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m11427_gshared (Enumerator_t1704 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11427(__this, method) (( void (*) (Enumerator_t1704 *, const MethodInfo*))Enumerator_Dispose_m11427_gshared)(__this, method)
