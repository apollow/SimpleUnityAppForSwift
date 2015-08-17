#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1612;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1610;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1632;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1833;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10296_gshared (ThreadSafeDictionary_2_t1612 * __this, ThreadSafeDictionaryValueFactory_2_t1610 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10296(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, ThreadSafeDictionaryValueFactory_2_t1610 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10296_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10298_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10298(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10298_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10300_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10300(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10300_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10302_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10302(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10302_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10304_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10304(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10304_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10306_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10306(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10306_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10308_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10308(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10308_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10310_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10310(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10310_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10312_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10312(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10312_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10314_gshared (ThreadSafeDictionary_2_t1612 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10314(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10314_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10316_gshared (ThreadSafeDictionary_2_t1612 * __this, KeyValuePair_2_t1500  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10316(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, KeyValuePair_2_t1500 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10316_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10318_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10318(__this, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10318_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10320_gshared (ThreadSafeDictionary_2_t1612 * __this, KeyValuePair_2_t1500  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10320(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1612 *, KeyValuePair_2_t1500 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10320_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10322_gshared (ThreadSafeDictionary_2_t1612 * __this, KeyValuePair_2U5BU5D_t1632* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10322(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1612 *, KeyValuePair_2U5BU5D_t1632*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10322_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10324_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10324(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10324_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10326_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10326(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10326_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10328_gshared (ThreadSafeDictionary_2_t1612 * __this, KeyValuePair_2_t1500  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10328(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1612 *, KeyValuePair_2_t1500 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10328_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10330_gshared (ThreadSafeDictionary_2_t1612 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10330(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1612 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10330_gshared)(__this, method)
