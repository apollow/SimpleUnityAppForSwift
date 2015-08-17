#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1570;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1558;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9775_gshared (ShimEnumerator_t1570 * __this, Dictionary_2_t1558 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9775(__this, ___host, method) (( void (*) (ShimEnumerator_t1570 *, Dictionary_2_t1558 *, const MethodInfo*))ShimEnumerator__ctor_m9775_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9776_gshared (ShimEnumerator_t1570 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9776(__this, method) (( bool (*) (ShimEnumerator_t1570 *, const MethodInfo*))ShimEnumerator_MoveNext_m9776_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t567  ShimEnumerator_get_Entry_m9777_gshared (ShimEnumerator_t1570 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9777(__this, method) (( DictionaryEntry_t567  (*) (ShimEnumerator_t1570 *, const MethodInfo*))ShimEnumerator_get_Entry_m9777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9778_gshared (ShimEnumerator_t1570 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9778(__this, method) (( Object_t * (*) (ShimEnumerator_t1570 *, const MethodInfo*))ShimEnumerator_get_Key_m9778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9779_gshared (ShimEnumerator_t1570 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9779(__this, method) (( Object_t * (*) (ShimEnumerator_t1570 *, const MethodInfo*))ShimEnumerator_get_Value_m9779_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9780_gshared (ShimEnumerator_t1570 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9780(__this, method) (( Object_t * (*) (ShimEnumerator_t1570 *, const MethodInfo*))ShimEnumerator_get_Current_m9780_gshared)(__this, method)
