#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t231;
struct GcAchievementData_t231_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t240;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t240 * GcAchievementData_ToAchievement_m1049 (GcAchievementData_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t231_marshal(const GcAchievementData_t231& unmarshaled, GcAchievementData_t231_marshaled& marshaled);
void GcAchievementData_t231_marshal_back(const GcAchievementData_t231_marshaled& marshaled, GcAchievementData_t231& unmarshaled);
void GcAchievementData_t231_marshal_cleanup(GcAchievementData_t231_marshaled& marshaled);
