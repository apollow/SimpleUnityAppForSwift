#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1558;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t1853;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t1562;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t1566;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1497;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t1857;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t1858;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t1859;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m9598_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9598(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2__ctor_m9598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9600_gshared (Dictionary_2_t1558 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9600(__this, ___comparer, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9600_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9602_gshared (Dictionary_2_t1558 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9602(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9602_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9604_gshared (Dictionary_2_t1558 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9604(__this, ___capacity, method) (( void (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9604_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9606_gshared (Dictionary_2_t1558 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9606(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9606_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9608_gshared (Dictionary_2_t1558 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9608(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1558 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9608_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9610_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9610(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9610_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9612_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9612(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9614_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9614(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9616_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9616(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9616_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9618_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9618_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9620_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9620(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9622_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9622(__this, ___key, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9622_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9624_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9624(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9626_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9626(__this, method) (( bool (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9628_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9628(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9628_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9630_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9630(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9630_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9632_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2U5BU5D_t1858* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9632(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2U5BU5D_t1858*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9632_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9634_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9634(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9634_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9636_gshared (Dictionary_2_t1558 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9636(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9636_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9638_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9638(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9638_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9640_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9640(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9640_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9642_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9642(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9644_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9644(__this, method) (( int32_t (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Count_m9644_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m9646_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9646(__this, ___key, method) (( int64_t (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9646_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9648_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9648(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m9648_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9650_gshared (Dictionary_2_t1558 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9650(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1558 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9650_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9652_gshared (Dictionary_2_t1558 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9652(__this, ___size, method) (( void (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9652_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9654_gshared (Dictionary_2_t1558 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9654(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9654_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1559  Dictionary_2_make_pair_m9656_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9656(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1559  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m9656_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9658_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9658(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m9658_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m9660_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9660(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m9660_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9662_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2U5BU5D_t1858* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9662(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2U5BU5D_t1858*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9662_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m9664_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9664(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_Resize_m9664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9666_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9666(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m9666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m9668_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9668(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_Clear_m9668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9670_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9670(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9672_gshared (Dictionary_2_t1558 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9672(__this, ___value, method) (( bool (*) (Dictionary_2_t1558 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m9672_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9674_gshared (Dictionary_2_t1558 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9674(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1558 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9674_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9676_gshared (Dictionary_2_t1558 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9676(__this, ___sender, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9676_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9678_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9678(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9678_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9680_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9680(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9680_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t1562 * Dictionary_2_get_Keys_m9682_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9682(__this, method) (( KeyCollection_t1562 * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Keys_m9682_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t1566 * Dictionary_2_get_Values_m9684_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9684(__this, method) (( ValueCollection_t1566 * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Values_m9684_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9686_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9686(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9686_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m9688_gshared (Dictionary_2_t1558 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9688(__this, ___value, method) (( int64_t (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9688_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9690_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9690(__this, ___pair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9690_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t1564  Dictionary_2_GetEnumerator_m9692_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9692(__this, method) (( Enumerator_t1564  (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9692_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m9694_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9694(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9694_gshared)(__this /* static, unused */, ___key, ___value, method)
