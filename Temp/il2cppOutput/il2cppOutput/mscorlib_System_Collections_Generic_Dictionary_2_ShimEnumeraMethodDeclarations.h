#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1485;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1471;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8684_gshared (ShimEnumerator_t1485 * __this, Dictionary_2_t1471 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8684(__this, ___host, method) (( void (*) (ShimEnumerator_t1485 *, Dictionary_2_t1471 *, const MethodInfo*))ShimEnumerator__ctor_m8684_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8685_gshared (ShimEnumerator_t1485 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8685(__this, method) (( bool (*) (ShimEnumerator_t1485 *, const MethodInfo*))ShimEnumerator_MoveNext_m8685_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t567  ShimEnumerator_get_Entry_m8686_gshared (ShimEnumerator_t1485 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8686(__this, method) (( DictionaryEntry_t567  (*) (ShimEnumerator_t1485 *, const MethodInfo*))ShimEnumerator_get_Entry_m8686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8687_gshared (ShimEnumerator_t1485 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8687(__this, method) (( Object_t * (*) (ShimEnumerator_t1485 *, const MethodInfo*))ShimEnumerator_get_Key_m8687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8688_gshared (ShimEnumerator_t1485 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8688(__this, method) (( Object_t * (*) (ShimEnumerator_t1485 *, const MethodInfo*))ShimEnumerator_get_Value_m8688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8689_gshared (ShimEnumerator_t1485 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8689(__this, method) (( Object_t * (*) (ShimEnumerator_t1485 *, const MethodInfo*))ShimEnumerator_get_Current_m8689_gshared)(__this, method)
