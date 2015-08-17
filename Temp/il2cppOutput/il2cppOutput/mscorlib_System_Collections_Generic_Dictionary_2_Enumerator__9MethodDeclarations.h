#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t1593;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1587;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10049_gshared (Enumerator_t1593 * __this, Dictionary_2_t1587 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10049(__this, ___dictionary, method) (( void (*) (Enumerator_t1593 *, Dictionary_2_t1587 *, const MethodInfo*))Enumerator__ctor_m10049_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10050_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10050(__this, method) (( Object_t * (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10050_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t567  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10051_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10051(__this, method) (( DictionaryEntry_t567  (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10052_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10052(__this, method) (( Object_t * (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10052_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10053_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10053(__this, method) (( Object_t * (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10054_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10054(__this, method) (( bool (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_MoveNext_m10054_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1588  Enumerator_get_Current_m10055_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10055(__this, method) (( KeyValuePair_2_t1588  (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_get_Current_m10055_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10056_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10056(__this, method) (( uint64_t (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_get_CurrentKey_m10056_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10057_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10057(__this, method) (( Object_t * (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_get_CurrentValue_m10057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10058_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10058(__this, method) (( void (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_VerifyState_m10058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10059_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10059(__this, method) (( void (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_VerifyCurrent_m10059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10060_gshared (Enumerator_t1593 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10060(__this, method) (( void (*) (Enumerator_t1593 *, const MethodInfo*))Enumerator_Dispose_m10060_gshared)(__this, method)
