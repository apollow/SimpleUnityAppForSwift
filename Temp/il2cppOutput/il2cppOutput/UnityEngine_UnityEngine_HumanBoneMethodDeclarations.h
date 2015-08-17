#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t149;
struct HumanBone_t149_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m737 (HumanBone_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m738 (HumanBone_t149 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m739 (HumanBone_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m740 (HumanBone_t149 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t149_marshal(const HumanBone_t149& unmarshaled, HumanBone_t149_marshaled& marshaled);
void HumanBone_t149_marshal_back(const HumanBone_t149_marshaled& marshaled, HumanBone_t149& unmarshaled);
void HumanBone_t149_marshal_cleanup(HumanBone_t149_marshaled& marshaled);
