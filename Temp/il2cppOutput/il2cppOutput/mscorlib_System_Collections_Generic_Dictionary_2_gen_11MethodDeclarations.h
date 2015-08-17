#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1515;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1518;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1522;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1497;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1842;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9015_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9015(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2__ctor_m9015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9017_gshared (Dictionary_2_t1515 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9017(__this, ___comparer, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9017_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9019_gshared (Dictionary_2_t1515 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9019(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9019_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9020_gshared (Dictionary_2_t1515 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9020(__this, ___capacity, method) (( void (*) (Dictionary_2_t1515 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9020_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9022_gshared (Dictionary_2_t1515 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9022(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9022_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9024_gshared (Dictionary_2_t1515 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9024(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1515 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9024_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9026_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9026(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9026_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9028_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9028(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9028_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9030_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9030(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9030_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9032_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9032(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9032_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9034_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9034(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9034_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9036_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9036(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9036_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9038_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9038(__this, ___key, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9038_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9040_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9040(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9042_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9042(__this, method) (( bool (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9044_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t1516  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9044(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2_t1516 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9044_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9046_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t1516  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9046(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t1516 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9046_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9048_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2U5BU5D_t1841* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9048(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2U5BU5D_t1841*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9048_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9050_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t1516  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9050(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t1516 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9050_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9052_gshared (Dictionary_2_t1515 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9052(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9052_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9054_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9054(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9054_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9056_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9056(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9056_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9058_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9058(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9060_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9060(__this, method) (( int32_t (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Count_m9060_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9062_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9062(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9062_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9064_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9064_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9066_gshared (Dictionary_2_t1515 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9066(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1515 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9066_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9068_gshared (Dictionary_2_t1515 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9068(__this, ___size, method) (( void (*) (Dictionary_2_t1515 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9068_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9070_gshared (Dictionary_2_t1515 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9070(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9070_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1516  Dictionary_2_make_pair_m9072_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9072(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1516  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9072_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9074_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9074(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9074_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9076_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9076(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9076_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9078_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2U5BU5D_t1841* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2U5BU5D_t1841*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9078_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9080_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9080(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_Resize_m9080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9082_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9082(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9082_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9084_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9084(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_Clear_m9084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9086_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9086(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9086_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9088_gshared (Dictionary_2_t1515 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9088(__this, ___value, method) (( bool (*) (Dictionary_2_t1515 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9088_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9090_gshared (Dictionary_2_t1515 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9090(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1515 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9090_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9092_gshared (Dictionary_2_t1515 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9092(__this, ___sender, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9092_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9094_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9094(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9094_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9096_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9096(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9096_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1518 * Dictionary_2_get_Keys_m9098_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9098(__this, method) (( KeyCollection_t1518 * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Keys_m9098_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1522 * Dictionary_2_get_Values_m9100_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9100(__this, method) (( ValueCollection_t1522 * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Values_m9100_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9102_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9102(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9102_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9104_gshared (Dictionary_2_t1515 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9104(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9104_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9106_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t1516  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9106(__this, ___pair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t1516 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9106_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1520  Dictionary_2_GetEnumerator_m9108_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9108(__this, method) (( Enumerator_t1520  (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9108_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m9110_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9110(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9110_gshared)(__this /* static, unused */, ___key, ___value, method)
