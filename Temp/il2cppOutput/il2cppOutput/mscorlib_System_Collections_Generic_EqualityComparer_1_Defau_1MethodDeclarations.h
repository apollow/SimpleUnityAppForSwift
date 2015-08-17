#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1547;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m9492_gshared (DefaultComparer_t1547 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9492(__this, method) (( void (*) (DefaultComparer_t1547 *, const MethodInfo*))DefaultComparer__ctor_m9492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9493_gshared (DefaultComparer_t1547 * __this, UIVertex_t165  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9493(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1547 *, UIVertex_t165 , const MethodInfo*))DefaultComparer_GetHashCode_m9493_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9494_gshared (DefaultComparer_t1547 * __this, UIVertex_t165  ___x, UIVertex_t165  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9494(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1547 *, UIVertex_t165 , UIVertex_t165 , const MethodInfo*))DefaultComparer_Equals_m9494_gshared)(__this, ___x, ___y, method)
