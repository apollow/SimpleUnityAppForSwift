#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1526;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1515;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9186_gshared (ShimEnumerator_t1526 * __this, Dictionary_2_t1515 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9186(__this, ___host, method) (( void (*) (ShimEnumerator_t1526 *, Dictionary_2_t1515 *, const MethodInfo*))ShimEnumerator__ctor_m9186_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9187_gshared (ShimEnumerator_t1526 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9187(__this, method) (( bool (*) (ShimEnumerator_t1526 *, const MethodInfo*))ShimEnumerator_MoveNext_m9187_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t567  ShimEnumerator_get_Entry_m9188_gshared (ShimEnumerator_t1526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9188(__this, method) (( DictionaryEntry_t567  (*) (ShimEnumerator_t1526 *, const MethodInfo*))ShimEnumerator_get_Entry_m9188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9189_gshared (ShimEnumerator_t1526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9189(__this, method) (( Object_t * (*) (ShimEnumerator_t1526 *, const MethodInfo*))ShimEnumerator_get_Key_m9189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9190_gshared (ShimEnumerator_t1526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9190(__this, method) (( Object_t * (*) (ShimEnumerator_t1526 *, const MethodInfo*))ShimEnumerator_get_Value_m9190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9191_gshared (ShimEnumerator_t1526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9191(__this, method) (( Object_t * (*) (ShimEnumerator_t1526 *, const MethodInfo*))ShimEnumerator_get_Current_m9191_gshared)(__this, method)
