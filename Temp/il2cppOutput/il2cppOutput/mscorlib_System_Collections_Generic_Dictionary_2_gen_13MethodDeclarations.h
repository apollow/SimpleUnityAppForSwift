#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1587;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t1865;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t1591;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t1595;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t1584;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t1870;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t1871;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t1872;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9918_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9918(__this, method) (( void (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2__ctor_m9918_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9920_gshared (Dictionary_2_t1587 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9920(__this, ___comparer, method) (( void (*) (Dictionary_2_t1587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9920_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9922_gshared (Dictionary_2_t1587 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9922(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9922_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9924_gshared (Dictionary_2_t1587 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9924(__this, ___capacity, method) (( void (*) (Dictionary_2_t1587 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9924_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9926_gshared (Dictionary_2_t1587 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9926(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1587 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9926_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9928_gshared (Dictionary_2_t1587 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9928(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1587 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9928_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9930_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9930(__this, method) (( Object_t* (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9930_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9932_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9932(__this, method) (( Object_t* (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9932_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9934_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9934(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9934_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9936_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9936_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9938_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9938(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9938_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9940_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9940(__this, ___key, method) (( bool (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9940_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9942_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9942(__this, ___key, method) (( void (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9942_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9944_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9944(__this, method) (( Object_t * (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9946_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9946(__this, method) (( bool (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9948_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2_t1588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9948(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1587 *, KeyValuePair_2_t1588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9948_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9950_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2_t1588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1587 *, KeyValuePair_2_t1588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9952_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2U5BU5D_t1871* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1587 *, KeyValuePair_2U5BU5D_t1871*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9952_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9954_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2_t1588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9954(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1587 *, KeyValuePair_2_t1588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9954_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9956_gshared (Dictionary_2_t1587 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9956_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9958_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9958(__this, method) (( Object_t * (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9958_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9960_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9960(__this, method) (( Object_t* (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9960_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9962_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9962(__this, method) (( Object_t * (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9964_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9964(__this, method) (( int32_t (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_get_Count_m9964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9966_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9966(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1587 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m9966_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9968_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1587 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9970_gshared (Dictionary_2_t1587 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9970(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1587 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9970_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9972_gshared (Dictionary_2_t1587 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9972(__this, ___size, method) (( void (*) (Dictionary_2_t1587 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9972_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9974_gshared (Dictionary_2_t1587 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9974_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1588  Dictionary_2_make_pair_m9976_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9976(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1588  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9976_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m9978_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9978(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9978_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9980_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9980(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9980_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9982_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2U5BU5D_t1871* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9982(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1587 *, KeyValuePair_2U5BU5D_t1871*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9982_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9984_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9984(__this, method) (( void (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_Resize_m9984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9986_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9986(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1587 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9986_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9988_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9988(__this, method) (( void (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_Clear_m9988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9990_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9990(__this, ___key, method) (( bool (*) (Dictionary_2_t1587 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m9990_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9992_gshared (Dictionary_2_t1587 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9992(__this, ___value, method) (( bool (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9992_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9994_gshared (Dictionary_2_t1587 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9994(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1587 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9994_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9996_gshared (Dictionary_2_t1587 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9996(__this, ___sender, method) (( void (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9996_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9998_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9998(__this, ___key, method) (( bool (*) (Dictionary_2_t1587 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m9998_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10000_gshared (Dictionary_2_t1587 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10000(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1587 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t1591 * Dictionary_2_get_Keys_m10002_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10002(__this, method) (( KeyCollection_t1591 * (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_get_Keys_m10002_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t1595 * Dictionary_2_get_Values_m10004_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10004(__this, method) (( ValueCollection_t1595 * (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_get_Values_m10004_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10006_gshared (Dictionary_2_t1587 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10006(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10006_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10008_gshared (Dictionary_2_t1587 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10008(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10008_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10010_gshared (Dictionary_2_t1587 * __this, KeyValuePair_2_t1588  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10010(__this, ___pair, method) (( bool (*) (Dictionary_2_t1587 *, KeyValuePair_2_t1588 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10010_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t1593  Dictionary_2_GetEnumerator_m10012_gshared (Dictionary_2_t1587 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10012(__this, method) (( Enumerator_t1593  (*) (Dictionary_2_t1587 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m10014_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10014(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10014_gshared)(__this /* static, unused */, ___key, ___value, method)
