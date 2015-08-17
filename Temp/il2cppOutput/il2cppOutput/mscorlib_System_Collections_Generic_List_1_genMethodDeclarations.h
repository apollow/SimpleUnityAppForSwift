#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t194;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1814;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1280_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1__ctor_m1280(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1__ctor_m1280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8387_gshared (List_1_t194 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8387(__this, ___capacity, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1__ctor_m8387_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8389_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8389(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8389_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391(__this, method) (( Object_t* (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8393_gshared (List_1_t194 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8393(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8395_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8395(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8395_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8397_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8397(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8399_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8399(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8399_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8401_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8401(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8403_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8403(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8403_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8405_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8405(__this, ___item, method) (( void (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8409_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8409(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8411_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8411(__this, ___index, method) (( Object_t * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8411_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8413_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8413(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8415_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8415(__this, ___item, method) (( void (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Add_m8415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8417_gshared (List_1_t194 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8417(__this, ___newCount, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8419_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_Clear_m8419(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_Clear_m8419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8421_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8421(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Contains_m8421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8423_gshared (List_1_t194 * __this, ObjectU5BU5D_t207* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8423(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, ObjectU5BU5D_t207*, int32_t, const MethodInfo*))List_1_CopyTo_m8423_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1457  List_1_GetEnumerator_m8424_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8424(__this, method) (( Enumerator_t1457  (*) (List_1_t194 *, const MethodInfo*))List_1_GetEnumerator_m8424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8426_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8426(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8428_gshared (List_1_t194 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8428(__this, ___start, ___delta, method) (( void (*) (List_1_t194 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8428_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8430_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8430(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8432_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8432(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8432_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8434_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8434(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Remove_m8434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8436_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8436(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8436_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t207* List_1_ToArray_m8438_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_ToArray_m8438(__this, method) (( ObjectU5BU5D_t207* (*) (List_1_t194 *, const MethodInfo*))List_1_ToArray_m8438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8440_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8440(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Capacity_m8440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8442_gshared (List_1_t194 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8442(__this, ___value, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8442_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8444_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_get_Count_m8444(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Count_m8444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8446_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8446(__this, ___index, method) (( Object_t * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_get_Item_m8446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8448_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8448(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8448_gshared)(__this, ___index, ___value, method)
