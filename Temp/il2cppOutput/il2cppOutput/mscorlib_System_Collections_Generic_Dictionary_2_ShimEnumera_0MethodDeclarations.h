#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1509;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1499;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8956_gshared (ShimEnumerator_t1509 * __this, Dictionary_2_t1499 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8956(__this, ___host, method) (( void (*) (ShimEnumerator_t1509 *, Dictionary_2_t1499 *, const MethodInfo*))ShimEnumerator__ctor_m8956_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8957_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8957(__this, method) (( bool (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_MoveNext_m8957_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t567  ShimEnumerator_get_Entry_m8958_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8958(__this, method) (( DictionaryEntry_t567  (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Entry_m8958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8959_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8959(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Key_m8959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8960_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8960(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Value_m8960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8961_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8961(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Current_m8961_gshared)(__this, method)
