#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t143;
struct AnimationCurve_t143_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t290;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m713 (AnimationCurve_t143 * __this, KeyframeU5BU5D_t290* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m714 (AnimationCurve_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m715 (AnimationCurve_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m716 (AnimationCurve_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m717 (AnimationCurve_t143 * __this, KeyframeU5BU5D_t290* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t143_marshal(const AnimationCurve_t143& unmarshaled, AnimationCurve_t143_marshaled& marshaled);
void AnimationCurve_t143_marshal_back(const AnimationCurve_t143_marshaled& marshaled, AnimationCurve_t143& unmarshaled);
void AnimationCurve_t143_marshal_cleanup(AnimationCurve_t143_marshaled& marshaled);
