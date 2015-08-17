#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1754;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1814;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1752;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11781_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11781(__this, method) (( void (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1__ctor_m11781_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11782_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11782(__this, method) (( bool (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11782_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11783_gshared (Collection_1_t1754 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11783(__this, ___array, ___index, method) (( void (*) (Collection_1_t1754 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11783_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11784_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11784(__this, method) (( Object_t * (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11784_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11785_gshared (Collection_1_t1754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11785(__this, ___value, method) (( int32_t (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11785_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11786_gshared (Collection_1_t1754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11786(__this, ___value, method) (( bool (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11786_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11787_gshared (Collection_1_t1754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11787(__this, ___value, method) (( int32_t (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11787_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11788_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11788(__this, ___index, ___value, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11788_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11789_gshared (Collection_1_t1754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11789(__this, ___value, method) (( void (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11789_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11790_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11790(__this, method) (( Object_t * (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11790_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11791_gshared (Collection_1_t1754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11791(__this, ___index, method) (( Object_t * (*) (Collection_1_t1754 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11791_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11792_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11792(__this, ___index, ___value, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11792_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11793_gshared (Collection_1_t1754 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11793(__this, ___item, method) (( void (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_Add_m11793_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11794_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11794(__this, method) (( void (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_Clear_m11794_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11795_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11795(__this, method) (( void (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_ClearItems_m11795_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11796_gshared (Collection_1_t1754 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11796(__this, ___item, method) (( bool (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11796_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11797_gshared (Collection_1_t1754 * __this, ObjectU5BU5D_t207* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11797(__this, ___array, ___index, method) (( void (*) (Collection_1_t1754 *, ObjectU5BU5D_t207*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11797_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11798_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11798(__this, method) (( Object_t* (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_GetEnumerator_m11798_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11799_gshared (Collection_1_t1754 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11799(__this, ___item, method) (( int32_t (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11799_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11800_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11800(__this, ___index, ___item, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11800_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11801_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11801(__this, ___index, ___item, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11801_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11802_gshared (Collection_1_t1754 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11802(__this, ___item, method) (( bool (*) (Collection_1_t1754 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11802_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11803_gshared (Collection_1_t1754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11803(__this, ___index, method) (( void (*) (Collection_1_t1754 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11803_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11804_gshared (Collection_1_t1754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11804(__this, ___index, method) (( void (*) (Collection_1_t1754 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11804_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11805_gshared (Collection_1_t1754 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11805(__this, method) (( int32_t (*) (Collection_1_t1754 *, const MethodInfo*))Collection_1_get_Count_m11805_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11806_gshared (Collection_1_t1754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11806(__this, ___index, method) (( Object_t * (*) (Collection_1_t1754 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11806_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11807_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11807(__this, ___index, ___value, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11807_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11808_gshared (Collection_1_t1754 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11808(__this, ___index, ___item, method) (( void (*) (Collection_1_t1754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11808_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11809_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11809(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11809_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11810_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11810(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11810_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11811_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11811(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11811_gshared)(__this /* static, unused */, ___list, method)
