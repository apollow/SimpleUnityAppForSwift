#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t268;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t263;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t1927;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t1689;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1355(__this, method) (( void (*) (List_1_t268 *, const MethodInfo*))List_1__ctor_m1280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m11238(__this, ___capacity, method) (( void (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1__ctor_m8387_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m11239(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8389_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11240(__this, method) (( Object_t* (*) (List_1_t268 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11241(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t268 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11242(__this, method) (( Object_t * (*) (List_1_t268 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8395_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11243(__this, ___item, method) (( int32_t (*) (List_1_t268 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11244(__this, ___item, method) (( bool (*) (List_1_t268 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8399_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11245(__this, ___item, method) (( int32_t (*) (List_1_t268 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11246(__this, ___index, ___item, method) (( void (*) (List_1_t268 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8403_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11247(__this, ___item, method) (( void (*) (List_1_t268 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11248(__this, method) (( bool (*) (List_1_t268 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11249(__this, method) (( Object_t * (*) (List_1_t268 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11250(__this, ___index, method) (( Object_t * (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8411_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11251(__this, ___index, ___value, method) (( void (*) (List_1_t268 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m11252(__this, ___item, method) (( void (*) (List_1_t268 *, BaseInvokableCall_t263 *, const MethodInfo*))List_1_Add_m8415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11253(__this, ___newCount, method) (( void (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m11254(__this, method) (( void (*) (List_1_t268 *, const MethodInfo*))List_1_Clear_m8419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m11255(__this, ___item, method) (( bool (*) (List_1_t268 *, BaseInvokableCall_t263 *, const MethodInfo*))List_1_Contains_m8421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11256(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t268 *, BaseInvokableCallU5BU5D_t1689*, int32_t, const MethodInfo*))List_1_CopyTo_m8423_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m11257(__this, method) (( Enumerator_t1690  (*) (List_1_t268 *, const MethodInfo*))List_1_GetEnumerator_m8424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m11258(__this, ___item, method) (( int32_t (*) (List_1_t268 *, BaseInvokableCall_t263 *, const MethodInfo*))List_1_IndexOf_m8426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11259(__this, ___start, ___delta, method) (( void (*) (List_1_t268 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8428_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11260(__this, ___index, method) (( void (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m11261(__this, ___index, ___item, method) (( void (*) (List_1_t268 *, int32_t, BaseInvokableCall_t263 *, const MethodInfo*))List_1_Insert_m8432_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m11262(__this, ___item, method) (( bool (*) (List_1_t268 *, BaseInvokableCall_t263 *, const MethodInfo*))List_1_Remove_m8434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11263(__this, ___index, method) (( void (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8436_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m11264(__this, method) (( BaseInvokableCallU5BU5D_t1689* (*) (List_1_t268 *, const MethodInfo*))List_1_ToArray_m8438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m11265(__this, method) (( int32_t (*) (List_1_t268 *, const MethodInfo*))List_1_get_Capacity_m8440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11266(__this, ___value, method) (( void (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8442_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m11267(__this, method) (( int32_t (*) (List_1_t268 *, const MethodInfo*))List_1_get_Count_m8444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m11268(__this, ___index, method) (( BaseInvokableCall_t263 * (*) (List_1_t268 *, int32_t, const MethodInfo*))List_1_get_Item_m8446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11269(__this, ___index, ___value, method) (( void (*) (List_1_t268 *, int32_t, BaseInvokableCall_t263 *, const MethodInfo*))List_1_set_Item_m8448_gshared)(__this, ___index, ___value, method)
