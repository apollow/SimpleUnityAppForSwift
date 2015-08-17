#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t1599;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1587;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10095_gshared (ShimEnumerator_t1599 * __this, Dictionary_2_t1587 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10095(__this, ___host, method) (( void (*) (ShimEnumerator_t1599 *, Dictionary_2_t1587 *, const MethodInfo*))ShimEnumerator__ctor_m10095_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10096_gshared (ShimEnumerator_t1599 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10096(__this, method) (( bool (*) (ShimEnumerator_t1599 *, const MethodInfo*))ShimEnumerator_MoveNext_m10096_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t567  ShimEnumerator_get_Entry_m10097_gshared (ShimEnumerator_t1599 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10097(__this, method) (( DictionaryEntry_t567  (*) (ShimEnumerator_t1599 *, const MethodInfo*))ShimEnumerator_get_Entry_m10097_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10098_gshared (ShimEnumerator_t1599 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10098(__this, method) (( Object_t * (*) (ShimEnumerator_t1599 *, const MethodInfo*))ShimEnumerator_get_Key_m10098_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10099_gshared (ShimEnumerator_t1599 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10099(__this, method) (( Object_t * (*) (ShimEnumerator_t1599 *, const MethodInfo*))ShimEnumerator_get_Value_m10099_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10100_gshared (ShimEnumerator_t1599 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10100(__this, method) (( Object_t * (*) (ShimEnumerator_t1599 *, const MethodInfo*))ShimEnumerator_get_Current_m10100_gshared)(__this, method)
