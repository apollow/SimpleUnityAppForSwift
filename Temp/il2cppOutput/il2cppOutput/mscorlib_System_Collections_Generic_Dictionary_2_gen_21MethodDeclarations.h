#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t502;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t1725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t1729;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1468;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t1938;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t1940;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11547_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11547(__this, method) (( void (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2__ctor_m11547_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11548_gshared (Dictionary_2_t502 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11548(__this, ___comparer, method) (( void (*) (Dictionary_2_t502 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11548_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11549_gshared (Dictionary_2_t502 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11549(__this, ___dictionary, method) (( void (*) (Dictionary_2_t502 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11549_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11550_gshared (Dictionary_2_t502 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11550(__this, ___capacity, method) (( void (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11550_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11551_gshared (Dictionary_2_t502 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11551(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t502 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11551_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11552_gshared (Dictionary_2_t502 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11552(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t502 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m11552_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11553_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11553(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11553_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11554_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11554(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11554_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11555_gshared (Dictionary_2_t502 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11555(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11555_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11556_gshared (Dictionary_2_t502 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11557_gshared (Dictionary_2_t502 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11557(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11557_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11558_gshared (Dictionary_2_t502 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11558(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11558_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11559_gshared (Dictionary_2_t502 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11559(__this, ___key, method) (( void (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11559_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11560_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11560(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11561_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11561(__this, method) (( bool (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11562_gshared (Dictionary_2_t502 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11562(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11562_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11563_gshared (Dictionary_2_t502 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11563(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11564_gshared (Dictionary_2_t502 * __this, KeyValuePair_2U5BU5D_t1939* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2U5BU5D_t1939*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11564_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11565_gshared (Dictionary_2_t502 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11565(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11565_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11566_gshared (Dictionary_2_t502 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11566(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11566_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11567_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11567(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11567_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11568_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11568(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11568_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11569_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11569(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11570_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11570(__this, method) (( int32_t (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_get_Count_m11570_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11571_gshared (Dictionary_2_t502 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11571(__this, ___key, method) (( int32_t (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11571_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11572_gshared (Dictionary_2_t502 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11572(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11572_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11573_gshared (Dictionary_2_t502 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11573(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t502 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11573_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11574_gshared (Dictionary_2_t502 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11574(__this, ___size, method) (( void (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11574_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11575_gshared (Dictionary_2_t502 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11575(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11575_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1723  Dictionary_2_make_pair_m11576_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11576(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1723  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11576_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m11577_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11577(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11577_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11578_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11578(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11578_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11579_gshared (Dictionary_2_t502 * __this, KeyValuePair_2U5BU5D_t1939* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2U5BU5D_t1939*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11579_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11580_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11580(__this, method) (( void (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_Resize_m11580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11581_gshared (Dictionary_2_t502 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m11581_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11582_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11582(__this, method) (( void (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_Clear_m11582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11583_gshared (Dictionary_2_t502 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11583(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11583_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11584_gshared (Dictionary_2_t502 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11584(__this, ___value, method) (( bool (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11584_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11585_gshared (Dictionary_2_t502 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t502 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m11585_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11586_gshared (Dictionary_2_t502 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11586(__this, ___sender, method) (( void (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11586_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11587_gshared (Dictionary_2_t502 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11587(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11587_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11588_gshared (Dictionary_2_t502 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11588(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t502 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11588_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t1725 * Dictionary_2_get_Keys_m11589_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11589(__this, method) (( KeyCollection_t1725 * (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_get_Keys_m11589_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t1729 * Dictionary_2_get_Values_m11590_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11590(__this, method) (( ValueCollection_t1729 * (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_get_Values_m11590_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11591_gshared (Dictionary_2_t502 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11591(__this, ___key, method) (( int32_t (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11591_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11592_gshared (Dictionary_2_t502 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11592(__this, ___value, method) (( int32_t (*) (Dictionary_2_t502 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11592_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11593_gshared (Dictionary_2_t502 * __this, KeyValuePair_2_t1723  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11593(__this, ___pair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11593_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1727  Dictionary_2_GetEnumerator_m11594_gshared (Dictionary_2_t502 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11594(__this, method) (( Enumerator_t1727  (*) (Dictionary_2_t502 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11594_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m11595_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11595(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11595_gshared)(__this /* static, unused */, ___key, ___value, method)
