#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t181;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t180;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t1864;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t1580;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m9879(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1__ctor_m1280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m9880(__this, ___capacity, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1__ctor_m8387_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m9881(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8389_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9882(__this, method) (( Object_t* (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9883(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9884(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8395_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9885(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9886(__this, ___item, method) (( bool (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8399_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9887(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9888(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8403_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9889(__this, ___item, method) (( void (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9890(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9891(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9892(__this, ___index, method) (( Object_t * (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8411_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9893(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m9894(__this, ___item, method) (( void (*) (List_1_t181 *, MatchDesc_t180 *, const MethodInfo*))List_1_Add_m8415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9895(__this, ___newCount, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m9896(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_Clear_m8419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m9897(__this, ___item, method) (( bool (*) (List_1_t181 *, MatchDesc_t180 *, const MethodInfo*))List_1_Contains_m8421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9898(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, MatchDescU5BU5D_t1580*, int32_t, const MethodInfo*))List_1_CopyTo_m8423_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m9899(__this, method) (( Enumerator_t1581  (*) (List_1_t181 *, const MethodInfo*))List_1_GetEnumerator_m8424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m9900(__this, ___item, method) (( int32_t (*) (List_1_t181 *, MatchDesc_t180 *, const MethodInfo*))List_1_IndexOf_m8426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9901(__this, ___start, ___delta, method) (( void (*) (List_1_t181 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8428_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9902(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m9903(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, MatchDesc_t180 *, const MethodInfo*))List_1_Insert_m8432_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m9904(__this, ___item, method) (( bool (*) (List_1_t181 *, MatchDesc_t180 *, const MethodInfo*))List_1_Remove_m8434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9905(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8436_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m9906(__this, method) (( MatchDescU5BU5D_t1580* (*) (List_1_t181 *, const MethodInfo*))List_1_ToArray_m8438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m9907(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Capacity_m8440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9908(__this, ___value, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8442_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m9909(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Count_m8444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m9910(__this, ___index, method) (( MatchDesc_t180 * (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_get_Item_m8446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m9911(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, MatchDesc_t180 *, const MethodInfo*))List_1_set_Item_m8448_gshared)(__this, ___index, ___value, method)
