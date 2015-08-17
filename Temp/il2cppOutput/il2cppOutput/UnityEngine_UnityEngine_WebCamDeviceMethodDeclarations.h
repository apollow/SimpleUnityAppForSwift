#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t136;
struct WebCamDevice_t136_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m688 (WebCamDevice_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m689 (WebCamDevice_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t136_marshal(const WebCamDevice_t136& unmarshaled, WebCamDevice_t136_marshaled& marshaled);
void WebCamDevice_t136_marshal_back(const WebCamDevice_t136_marshaled& marshaled, WebCamDevice_t136& unmarshaled);
void WebCamDevice_t136_marshal_cleanup(WebCamDevice_t136_marshaled& marshaled);
