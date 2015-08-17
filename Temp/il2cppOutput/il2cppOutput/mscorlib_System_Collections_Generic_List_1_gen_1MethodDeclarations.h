#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t68;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t67;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t1827;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1493;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1208(__this, method) (( void (*) (List_1_t68 *, const MethodInfo*))List_1__ctor_m1280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m8753(__this, ___capacity, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1__ctor_m8387_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m8754(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8389_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8755(__this, method) (( Object_t* (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8756(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8757(__this, method) (( Object_t * (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8395_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8758(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8759(__this, ___item, method) (( bool (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8399_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8760(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8761(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8403_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8762(__this, ___item, method) (( void (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8763(__this, method) (( bool (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8764(__this, method) (( Object_t * (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8765(__this, ___index, method) (( Object_t * (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8411_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8766(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m8767(__this, ___item, method) (( void (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Add_m8415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8768(__this, ___newCount, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m8769(__this, method) (( void (*) (List_1_t68 *, const MethodInfo*))List_1_Clear_m8419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m8770(__this, ___item, method) (( bool (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Contains_m8421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8771(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, GUILayoutEntryU5BU5D_t1493*, int32_t, const MethodInfo*))List_1_CopyTo_m8423_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1202(__this, method) (( Enumerator_t329  (*) (List_1_t68 *, const MethodInfo*))List_1_GetEnumerator_m8424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m8772(__this, ___item, method) (( int32_t (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_IndexOf_m8426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8773(__this, ___start, ___delta, method) (( void (*) (List_1_t68 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8428_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8774(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m8775(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Insert_m8432_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m8776(__this, ___item, method) (( bool (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Remove_m8434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8777(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8436_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m8778(__this, method) (( GUILayoutEntryU5BU5D_t1493* (*) (List_1_t68 *, const MethodInfo*))List_1_ToArray_m8438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m8779(__this, method) (( int32_t (*) (List_1_t68 *, const MethodInfo*))List_1_get_Capacity_m8440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8780(__this, ___value, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8442_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m8781(__this, method) (( int32_t (*) (List_1_t68 *, const MethodInfo*))List_1_get_Count_m8444_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m8782(__this, ___index, method) (( GUILayoutEntry_t67 * (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_get_Item_m8446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m8783(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, GUILayoutEntry_t67 *, const MethodInfo*))List_1_set_Item_m8448_gshared)(__this, ___index, ___value, method)
