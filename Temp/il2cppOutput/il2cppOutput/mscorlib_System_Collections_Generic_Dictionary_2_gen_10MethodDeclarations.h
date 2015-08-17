#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1499;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1502;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1506;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1497;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1632;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1833;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8790_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8790(__this, method) (( void (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2__ctor_m8790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8791_gshared (Dictionary_2_t1499 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8791(__this, ___comparer, method) (( void (*) (Dictionary_2_t1499 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8791_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8793_gshared (Dictionary_2_t1499 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8793(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1499 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8793_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8795_gshared (Dictionary_2_t1499 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8795(__this, ___capacity, method) (( void (*) (Dictionary_2_t1499 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8795_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8797_gshared (Dictionary_2_t1499 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8797(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1499 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8797_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8799_gshared (Dictionary_2_t1499 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8799(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1499 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m8799_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8801_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8801(__this, method) (( Object_t* (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8801_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8803_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8803(__this, method) (( Object_t* (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8803_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8805_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8805(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8805_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8807_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8807_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8809_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8809(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8809_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8811_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8811(__this, ___key, method) (( bool (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8811_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8813_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8813(__this, ___key, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8813_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8815_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8815(__this, method) (( Object_t * (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8817_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8817(__this, method) (( bool (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8819_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8819(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1499 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8819_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8821_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8821(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1499 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8821_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8823_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2U5BU5D_t1632* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8823(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1499 *, KeyValuePair_2U5BU5D_t1632*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8823_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8825_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2_t1500  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8825(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1499 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8827_gshared (Dictionary_2_t1499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8827(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1499 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8827_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8829_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8829(__this, method) (( Object_t * (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8831_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8831(__this, method) (( Object_t* (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8831_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8833_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8833(__this, method) (( Object_t * (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8835_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8835(__this, method) (( int32_t (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_get_Count_m8835_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8837_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8837(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8839_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8839(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8841_gshared (Dictionary_2_t1499 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8841(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1499 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8841_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8843_gshared (Dictionary_2_t1499 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8843(__this, ___size, method) (( void (*) (Dictionary_2_t1499 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8843_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8845_gshared (Dictionary_2_t1499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8845(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1499 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1500  Dictionary_2_make_pair_m8847_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8847(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1500  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8847_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m8849_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8849(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8851_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8851(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8853_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2U5BU5D_t1632* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8853(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1499 *, KeyValuePair_2U5BU5D_t1632*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8855_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8855(__this, method) (( void (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_Resize_m8855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8857_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8857(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m8857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8859_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8859(__this, method) (( void (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_Clear_m8859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8861_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8861(__this, ___key, method) (( bool (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8863_gshared (Dictionary_2_t1499 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8863(__this, ___value, method) (( bool (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8865_gshared (Dictionary_2_t1499 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8865(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1499 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m8865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8867_gshared (Dictionary_2_t1499 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8867(__this, ___sender, method) (( void (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8869_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8869(__this, ___key, method) (( bool (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8871_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8871(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1499 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1502 * Dictionary_2_get_Keys_m8873_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8873(__this, method) (( KeyCollection_t1502 * (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_get_Keys_m8873_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1506 * Dictionary_2_get_Values_m8874_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8874(__this, method) (( ValueCollection_t1506 * (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_get_Values_m8874_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8876_gshared (Dictionary_2_t1499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8876(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8876_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8878_gshared (Dictionary_2_t1499 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8878(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1499 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8878_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8880_gshared (Dictionary_2_t1499 * __this, KeyValuePair_2_t1500  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8880(__this, ___pair, method) (( bool (*) (Dictionary_2_t1499 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8880_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1504  Dictionary_2_GetEnumerator_m8882_gshared (Dictionary_2_t1499 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8882(__this, method) (( Enumerator_t1504  (*) (Dictionary_2_t1499 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8882_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m8884_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8884(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8884_gshared)(__this /* static, unused */, ___key, ___value, method)
