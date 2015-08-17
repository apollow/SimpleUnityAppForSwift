#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SendMouseEvents
struct SendMouseEvents_t249;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void UnityEngine.SendMouseEvents::.cctor()
extern "C" void SendMouseEvents__cctor_m1119 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern "C" void SendMouseEvents_DoSendMouseEvents_m1120 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m1121 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t246  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
