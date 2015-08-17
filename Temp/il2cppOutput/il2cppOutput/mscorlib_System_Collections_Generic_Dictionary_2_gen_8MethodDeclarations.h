#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t86;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t302;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1815;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t1528;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t1529;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1495;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1837;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1838;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1839;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
#define Dictionary_2__ctor_m9014(__this, method) (( void (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2__ctor_m9015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9016(__this, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9017_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9018(__this, ___dictionary, method) (( void (*) (Dictionary_2_t86 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9019_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2308(__this, ___capacity, method) (( void (*) (Dictionary_2_t86 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9020_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9021(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9022_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9023(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9024_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9025(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9026_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9027(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9028_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9029(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9030_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9031(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9032_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9033(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9034_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9035(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9036_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9037(__this, ___key, method) (( void (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9038_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9039(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9041(__this, method) (( bool (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9043(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2_t1527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9044_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9045(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t1527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9046_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9047(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t1838*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9048_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9049(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t1527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9050_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9051(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9052_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9053(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9054_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9055(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9056_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9057(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m9059(__this, method) (( int32_t (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_get_Count_m9060_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m9061(__this, ___key, method) (( int32_t (*) (Dictionary_2_t86 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9062_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9063(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9064_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9065(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t86 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9066_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9067(__this, ___size, method) (( void (*) (Dictionary_2_t86 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9068_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9069(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9070_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9071(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1527  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9072_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9073(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9074_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9075(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9076_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9077(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t1838*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9078_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m9079(__this, method) (( void (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_Resize_m9080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m9081(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m9082_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m9083(__this, method) (( void (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_Clear_m9084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9085(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9086_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9087(__this, ___value, method) (( bool (*) (Dictionary_2_t86 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9088_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9089(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9090_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9091(__this, ___sender, method) (( void (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9092_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m9093(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9094_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9095(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t86 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9096_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m9097(__this, method) (( KeyCollection_t1528 * (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_get_Keys_m9098_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m9099(__this, method) (( ValueCollection_t1529 * (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_get_Values_m9100_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9101(__this, ___key, method) (( String_t* (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9102_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9103(__this, ___value, method) (( int32_t (*) (Dictionary_2_t86 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9104_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9105(__this, ___pair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t1527 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9106_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9107(__this, method) (( Enumerator_t1530  (*) (Dictionary_2_t86 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9108_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9109(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9110_gshared)(__this /* static, unused */, ___key, ___value, method)
