#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1634;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1906;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t1635;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t1639;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1497;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t1907;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t1908;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t1909;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t566;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m10630_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10630(__this, method) (( void (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2__ctor_m10630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10632_gshared (Dictionary_2_t1634 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10632(__this, ___comparer, method) (( void (*) (Dictionary_2_t1634 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10632_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10634_gshared (Dictionary_2_t1634 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10634(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1634 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10634_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10636_gshared (Dictionary_2_t1634 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10636(__this, ___capacity, method) (( void (*) (Dictionary_2_t1634 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10636_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10638_gshared (Dictionary_2_t1634 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10638(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1634 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10638_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10640_gshared (Dictionary_2_t1634 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10640(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1634 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m10640_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10642_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10642(__this, method) (( Object_t* (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10642_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10644_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10644(__this, method) (( Object_t* (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10644_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10646_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10646(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10646_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10648_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10648(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10648_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10650_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10650(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10650_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10652_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10652(__this, ___key, method) (( bool (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10652_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10654_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10654(__this, ___key, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10654_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10656_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10656(__this, method) (( Object_t * (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10656_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10658_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10658(__this, method) (( bool (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10660_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2_t1608  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10660(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1634 *, KeyValuePair_2_t1608 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10660_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10662_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2_t1608  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10662(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1634 *, KeyValuePair_2_t1608 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10662_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10664_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2U5BU5D_t1908* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10664(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1634 *, KeyValuePair_2U5BU5D_t1908*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10664_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10666_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2_t1608  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10666(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1634 *, KeyValuePair_2_t1608 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10666_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10668_gshared (Dictionary_2_t1634 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10668(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1634 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10668_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10670_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10670(__this, method) (( Object_t * (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10670_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10672_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10672(__this, method) (( Object_t* (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10672_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10674_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10674(__this, method) (( Object_t * (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10676_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10676(__this, method) (( int32_t (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_get_Count_m10676_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t1500  Dictionary_2_get_Item_m10678_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10678(__this, ___key, method) (( KeyValuePair_2_t1500  (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10678_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10680_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10680(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_set_Item_m10680_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10682_gshared (Dictionary_2_t1634 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10682(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1634 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10682_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10684_gshared (Dictionary_2_t1634 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10684(__this, ___size, method) (( void (*) (Dictionary_2_t1634 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10684_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10686_gshared (Dictionary_2_t1634 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10686(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1634 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10686_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1608  Dictionary_2_make_pair_m10688_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10688(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1608  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_make_pair_m10688_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10690_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10690(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_pick_key_m10690_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t1500  Dictionary_2_pick_value_m10692_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10692(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1500  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_pick_value_m10692_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10694_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2U5BU5D_t1908* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1634 *, KeyValuePair_2U5BU5D_t1908*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10694_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m10696_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10696(__this, method) (( void (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_Resize_m10696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10698_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_Add_m10698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m10700_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10700(__this, method) (( void (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_Clear_m10700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10702_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10702(__this, ___key, method) (( bool (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10702_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10704_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10704(__this, ___value, method) (( bool (*) (Dictionary_2_t1634 *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_ContainsValue_m10704_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10706_gshared (Dictionary_2_t1634 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10706(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1634 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m10706_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10708_gshared (Dictionary_2_t1634 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10708(__this, ___sender, method) (( void (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10708_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10710_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10710(__this, ___key, method) (( bool (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10710_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10712_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, KeyValuePair_2_t1500 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10712(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1634 *, Object_t *, KeyValuePair_2_t1500 *, const MethodInfo*))Dictionary_2_TryGetValue_m10712_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t1635 * Dictionary_2_get_Keys_m10714_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10714(__this, method) (( KeyCollection_t1635 * (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_get_Keys_m10714_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t1639 * Dictionary_2_get_Values_m10716_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10716(__this, method) (( ValueCollection_t1639 * (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_get_Values_m10716_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10718_gshared (Dictionary_2_t1634 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10718(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10718_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t1500  Dictionary_2_ToTValue_m10720_gshared (Dictionary_2_t1634 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10720(__this, ___value, method) (( KeyValuePair_2_t1500  (*) (Dictionary_2_t1634 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10720_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10722_gshared (Dictionary_2_t1634 * __this, KeyValuePair_2_t1608  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10722(__this, ___pair, method) (( bool (*) (Dictionary_2_t1634 *, KeyValuePair_2_t1608 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10722_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1637  Dictionary_2_GetEnumerator_m10724_gshared (Dictionary_2_t1634 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10724(__this, method) (( Enumerator_t1637  (*) (Dictionary_2_t1634 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10724_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t567  Dictionary_2_U3CCopyToU3Em__0_m10726_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10726(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10726_gshared)(__this /* static, unused */, ___key, ___value, method)
