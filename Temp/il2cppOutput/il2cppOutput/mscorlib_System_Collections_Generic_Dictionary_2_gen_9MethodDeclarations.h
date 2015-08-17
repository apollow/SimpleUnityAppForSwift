#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1471;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1815;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1476;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1480;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1468;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1820;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1821;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1822;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8497_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8497(__this, method) (( void (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2__ctor_m8497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8499_gshared (Dictionary_2_t1471 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8499(__this, ___comparer, method) (( void (*) (Dictionary_2_t1471 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8499_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8501_gshared (Dictionary_2_t1471 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8501(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1471 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8501_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8503_gshared (Dictionary_2_t1471 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8503(__this, ___capacity, method) (( void (*) (Dictionary_2_t1471 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8503_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8505_gshared (Dictionary_2_t1471 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8505(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1471 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8505_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8507_gshared (Dictionary_2_t1471 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8507(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1471 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m8507_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8509_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8509(__this, method) (( Object_t* (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8509_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8511_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8511(__this, method) (( Object_t* (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8513_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8513(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8513_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8515_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1471 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8517_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8517(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1471 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8517_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8519_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8519(__this, ___key, method) (( bool (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8519_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8521_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8521(__this, ___key, method) (( void (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8521_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8523_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8523(__this, method) (( Object_t * (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8523_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8525_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8525(__this, method) (( bool (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8525_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8527_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8527(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1471 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8527_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8529_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8529(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1471 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8529_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8531_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2U5BU5D_t1821* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8531(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1471 *, KeyValuePair_2U5BU5D_t1821*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8531_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8533_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2_t1472  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8533(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1471 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8533_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8535_gshared (Dictionary_2_t1471 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8535(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1471 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8535_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8537_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8537(__this, method) (( Object_t * (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8537_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8539_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8539(__this, method) (( Object_t* (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8539_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8541_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8541(__this, method) (( Object_t * (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8543_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8543(__this, method) (( int32_t (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_get_Count_m8543_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8545_gshared (Dictionary_2_t1471 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8545(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1471 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m8545_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8547_gshared (Dictionary_2_t1471 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8547(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1471 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8547_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8549_gshared (Dictionary_2_t1471 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8549(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1471 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8549_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8551_gshared (Dictionary_2_t1471 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8551(__this, ___size, method) (( void (*) (Dictionary_2_t1471 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8551_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8553_gshared (Dictionary_2_t1471 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8553(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1471 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8553_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1472  Dictionary_2_make_pair_m8555_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8555(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1472  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8555_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m8557_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8557(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8557_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8559_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8559(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8559_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8561_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2U5BU5D_t1821* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8561(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1471 *, KeyValuePair_2U5BU5D_t1821*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8561_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8563_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8563(__this, method) (( void (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_Resize_m8563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8565_gshared (Dictionary_2_t1471 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1471 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m8565_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8567_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8567(__this, method) (( void (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_Clear_m8567_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8569_gshared (Dictionary_2_t1471 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8569(__this, ___key, method) (( bool (*) (Dictionary_2_t1471 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m8569_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8571_gshared (Dictionary_2_t1471 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8571(__this, ___value, method) (( bool (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8571_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8573_gshared (Dictionary_2_t1471 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8573(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1471 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m8573_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8575_gshared (Dictionary_2_t1471 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8575(__this, ___sender, method) (( void (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8575_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8577_gshared (Dictionary_2_t1471 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8577(__this, ___key, method) (( bool (*) (Dictionary_2_t1471 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m8577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8579_gshared (Dictionary_2_t1471 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8579(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1471 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8579_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1476 * Dictionary_2_get_Keys_m8581_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8581(__this, method) (( KeyCollection_t1476 * (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_get_Keys_m8581_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1480 * Dictionary_2_get_Values_m8583_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8583(__this, method) (( ValueCollection_t1480 * (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_get_Values_m8583_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m8585_gshared (Dictionary_2_t1471 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8585(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8585_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8587_gshared (Dictionary_2_t1471 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8587(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1471 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8587_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8589_gshared (Dictionary_2_t1471 * __this, KeyValuePair_2_t1472  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8589(__this, ___pair, method) (( bool (*) (Dictionary_2_t1471 *, KeyValuePair_2_t1472 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8589_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1478  Dictionary_2_GetEnumerator_m8591_gshared (Dictionary_2_t1471 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8591(__this, method) (( Enumerator_t1478  (*) (Dictionary_2_t1471 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8591_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m8593_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8593(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8593_gshared)(__this /* static, unused */, ___key, ___value, method)
