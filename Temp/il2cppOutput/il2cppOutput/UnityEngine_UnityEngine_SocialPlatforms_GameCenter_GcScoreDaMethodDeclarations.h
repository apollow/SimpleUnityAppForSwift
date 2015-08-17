#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t232;
struct GcScoreData_t232_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t242;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t242 * GcScoreData_ToScore_m1050 (GcScoreData_t232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t232_marshal(const GcScoreData_t232& unmarshaled, GcScoreData_t232_marshaled& marshaled);
void GcScoreData_t232_marshal_back(const GcScoreData_t232_marshaled& marshaled, GcScoreData_t232& unmarshaled);
void GcScoreData_t232_marshal_cleanup(GcScoreData_t232_marshaled& marshaled);
