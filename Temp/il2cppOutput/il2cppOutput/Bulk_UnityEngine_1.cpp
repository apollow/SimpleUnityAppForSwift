﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m673 (AudioConfigurationChangeHandler_t130 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m674 (AudioConfigurationChangeHandler_t130 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m674((AudioConfigurationChangeHandler_t130 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t130(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m675 (AudioConfigurationChangeHandler_t130 * __this, bool ___deviceWasChanged, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t340_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m676 (AudioConfigurationChangeHandler_t130 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t131_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m677 (AudioSettings_t131 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t130 * L_0 = ((AudioSettings_t131_StaticFields*)AudioSettings_t131_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t130 * L_1 = ((AudioSettings_t131_StaticFields*)AudioSettings_t131_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m674(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"


// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m678 (PCMReaderCallback_t133 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m679 (PCMReaderCallback_t133 * __this, SingleU5BU5D_t132* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m679((PCMReaderCallback_t133 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t132* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t132* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t133(Il2CppObject* delegate, SingleU5BU5D_t132* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m680 (PCMReaderCallback_t133 * __this, SingleU5BU5D_t132* ___data, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m681 (PCMReaderCallback_t133 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m682 (PCMSetPositionCallback_t134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m683 (PCMSetPositionCallback_t134 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m683((PCMSetPositionCallback_t134 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t134(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m684 (PCMSetPositionCallback_t134 * __this, int32_t ___position, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t327_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m685 (PCMSetPositionCallback_t134 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m686 (AudioClip_t135 * __this, SingleU5BU5D_t132* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t133 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t133 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t132* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m679(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m687 (AudioClip_t135 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t134 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t134 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m683(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"


// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m688 (WebCamDevice_t136 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m689 (WebCamDevice_t136 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t136_marshal(const WebCamDevice_t136& unmarshaled, WebCamDevice_t136_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t136_marshal_back(const WebCamDevice_t136_marshaled& marshaled, WebCamDevice_t136& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t136_marshal_cleanup(WebCamDevice_t136_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m690 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t13 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t138 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m691 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m692 (AnimationEvent_t139 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m693 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m694 (AnimationEvent_t139 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m695 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m696 (AnimationEvent_t139 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m697 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m698 (AnimationEvent_t139 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t13 * AnimationEvent_get_objectReferenceParameter_m699 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		Object_t13 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m700 (AnimationEvent_t139 * __this, Object_t13 * ___value, const MethodInfo* method)
{
	{
		Object_t13 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m701 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m702 (AnimationEvent_t139 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m703 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m704 (AnimationEvent_t139 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m705 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m706 (AnimationEvent_t139 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m707 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m708 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern Il2CppCodeGenString* _stringLiteral109;
extern "C" AnimationState_t138 * AnimationEvent_get_animationState_m709 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m707(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m590(NULL /*static, unused*/, _stringLiteral109, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t138 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral110;
extern "C" AnimatorStateInfo_t140  AnimationEvent_get_animatorStateInfo_m710 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m708(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m590(NULL /*static, unused*/, _stringLiteral110, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t140  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral111;
extern "C" AnimatorClipInfo_t141  AnimationEvent_get_animatorClipInfo_m711 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m708(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m590(NULL /*static, unused*/, _stringLiteral111, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t141  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m712 (AnimationEvent_t139 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m701(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m1199(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m703(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m1197((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m713 (AnimationCurve_t143 * __this, KeyframeU5BU5D_t290* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t290* L_0 = ___keys;
		AnimationCurve_Init_m717(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m714 (AnimationCurve_t143 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m717(__this, (KeyframeU5BU5D_t290*)(KeyframeU5BU5D_t290*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m715 (AnimationCurve_t143 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m715_ftn) (AnimationCurve_t143 *);
	static AnimationCurve_Cleanup_m715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m716 (AnimationCurve_t143 * __this, const MethodInfo* method)
{
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m715(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m717 (AnimationCurve_t143 * __this, KeyframeU5BU5D_t290* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m717_ftn) (AnimationCurve_t143 *, KeyframeU5BU5D_t290*);
	static AnimationCurve_Init_m717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t143_marshal(const AnimationCurve_t143& unmarshaled, AnimationCurve_t143_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void AnimationCurve_t143_marshal_back(const AnimationCurve_t143_marshaled& marshaled, AnimationCurve_t143& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t143_marshal_cleanup(AnimationCurve_t143_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m718 (AnimatorStateInfo_t140 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m736(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m719 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m720 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m721 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m722 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m723 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m724 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m725 (AnimatorStateInfo_t140 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m736(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m726 (AnimatorStateInfo_t140 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m727 (AnimatorTransitionInfo_t145 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m736(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m736(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m728 (AnimatorTransitionInfo_t145 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m736(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m729 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m730 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m731 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m732 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m733 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m734 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m735 (AnimatorTransitionInfo_t145 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t145_marshal(const AnimatorTransitionInfo_t145& unmarshaled, AnimatorTransitionInfo_t145_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t145_marshal_back(const AnimatorTransitionInfo_t145_marshaled& marshaled, AnimatorTransitionInfo_t145& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t145_marshal_cleanup(AnimatorTransitionInfo_t145_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif



// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m736 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m736_ftn) (String_t*);
	static Animator_StringToHash_m736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t147_marshal(const SkeletonBone_t147& unmarshaled, SkeletonBone_t147_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t147_marshal_back(const SkeletonBone_t147_marshaled& marshaled, SkeletonBone_t147& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t147_marshal_cleanup(SkeletonBone_t147_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m737 (HumanBone_t149 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m738 (HumanBone_t149 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m739 (HumanBone_t149 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m740 (HumanBone_t149 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t149_marshal(const HumanBone_t149& unmarshaled, HumanBone_t149_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t149_marshal_back(const HumanBone_t149_marshaled& marshaled, HumanBone_t149& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t149_marshal_cleanup(HumanBone_t149_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m741 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m742 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m386(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m743 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m388(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m744 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m745 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t51 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m384(L_1, /*hidden argument*/NULL);
		Rect_t51 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m388(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m746 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t51 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m384(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m747 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m748 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t51 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t52  CharacterInfo_get_uvBottomLeftUnFlipped_m749 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t51 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m384(L_2, /*hidden argument*/NULL);
		Vector2_t52  L_4 = {0};
		Vector2__ctor_m344(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t52  CharacterInfo_get_uvBottomRightUnFlipped_m750 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t51 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		Rect_t51 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m384(L_4, /*hidden argument*/NULL);
		Vector2_t52  L_6 = {0};
		Vector2__ctor_m344(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t52  CharacterInfo_get_uvTopRightUnFlipped_m751 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t51 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		Rect_t51 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m384(L_4, /*hidden argument*/NULL);
		Rect_t51 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m388(L_6, /*hidden argument*/NULL);
		Vector2_t52  L_8 = {0};
		Vector2__ctor_m344(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t52  CharacterInfo_get_uvTopLeftUnFlipped_m752 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	{
		Rect_t51 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t51 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m384(L_2, /*hidden argument*/NULL);
		Rect_t51 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m388(L_4, /*hidden argument*/NULL);
		Vector2_t52  L_6 = {0};
		Vector2__ctor_m344(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t52  CharacterInfo_get_uvBottomLeft_m753 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	Vector2_t52  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t52  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m749(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t52  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m749(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t52  CharacterInfo_get_uvBottomRight_m754 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	Vector2_t52  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t52  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m752(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t52  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m750(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t52  CharacterInfo_get_uvTopRight_m755 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	Vector2_t52  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t52  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m751(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t52  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m751(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t52  CharacterInfo_get_uvTopLeft_m756 (CharacterInfo_t153 * __this, const MethodInfo* method)
{
	Vector2_t52  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t52  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m750(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t52  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m752(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t153_marshal(const CharacterInfo_t153& unmarshaled, CharacterInfo_t153_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t153_marshal_back(const CharacterInfo_t153_marshaled& marshaled, CharacterInfo_t153& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t153_marshal_cleanup(CharacterInfo_t153_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m757 (FontTextureRebuildCallback_t154 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m758 (FontTextureRebuildCallback_t154 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m758((FontTextureRebuildCallback_t154 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t154(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m759 (FontTextureRebuildCallback_t154 * __this, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m760 (FontTextureRebuildCallback_t154 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"


// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t78_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1251_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m761 (Object_t * __this /* static, unused */, Font_t78 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Action_1_Invoke_m1251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t155 * V_0 = {0};
	{
		Action_1_t155 * L_0 = ((Font_t78_StaticFields*)Font_t78_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t155 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t155 * L_2 = V_0;
		Font_t78 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m1251(L_2, L_3, /*hidden argument*/Action_1_Invoke_m1251_MethodInfo_var);
	}

IL_0013:
	{
		Font_t78 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t154 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t78 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t154 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m758(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m762 (Font_t78 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m762_ftn) (Font_t78 *);
	static Font_get_dynamic_m762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m763 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m764(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t158_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t159_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t160_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1252_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1253_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1254_MethodInfo_var;
extern "C" void TextGenerator__ctor_m764 (TextGenerator_t161 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		List_1_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		List_1_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		List_1__ctor_m1252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		List_1__ctor_m1253_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		List_1__ctor_m1254_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t158 * L_1 = (List_1_t158 *)il2cpp_codegen_object_new (List_1_t158_il2cpp_TypeInfo_var);
		List_1__ctor_m1252(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m1252_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t159 * L_3 = (List_1_t159 *)il2cpp_codegen_object_new (List_1_t159_il2cpp_TypeInfo_var);
		List_1__ctor_m1253(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m1253_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t160 * L_4 = (List_1_t160 *)il2cpp_codegen_object_new (List_1_t160_il2cpp_TypeInfo_var);
		List_1__ctor_m1254(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m1254_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m765 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m767(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m766 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m766_ftn) (TextGenerator_t161 *);
	static TextGenerator_Init_m766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m767 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m767_ftn) (TextGenerator_t161 *);
	static TextGenerator_Dispose_cpp_m767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m768 (TextGenerator_t161 * __this, String_t* ___str, Font_t78 * ___font, Color_t7  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t52  ___extents, Vector2_t52  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t78 * L_1 = ___font;
		Color_t7  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_0);
		float L_16 = ((&___extents)->___y_1);
		float L_17 = ((&___pivot)->___x_0);
		float L_18 = ((&___pivot)->___y_1);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m769(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m769 (TextGenerator_t161 * __this, String_t* ___str, Font_t78 * ___font, Color_t7  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t78 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m770(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m770 (Object_t * __this /* static, unused */, TextGenerator_t161 * ___self, String_t* ___str, Font_t78 * ___font, Color_t7 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m770_ftn) (TextGenerator_t161 *, String_t*, Font_t78 *, Color_t7 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t51  TextGenerator_get_rectExtents_m771 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	Rect_t51  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m772(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t51  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m772 (TextGenerator_t161 * __this, Rect_t51 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m772_ftn) (TextGenerator_t161 *, Rect_t51 *);
	static TextGenerator_INTERNAL_get_rectExtents_m772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m773 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m773_ftn) (TextGenerator_t161 *);
	static TextGenerator_get_vertexCount_m773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m774 (TextGenerator_t161 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m774_ftn) (TextGenerator_t161 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m774_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t294* TextGenerator_GetVerticesArray_m775 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t294* (*TextGenerator_GetVerticesArray_m775_ftn) (TextGenerator_t161 *);
	static TextGenerator_GetVerticesArray_m775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m776 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m776_ftn) (TextGenerator_t161 *);
	static TextGenerator_get_characterCount_m776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t98_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m777 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Mathf_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1255(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1182(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m773(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t98_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m486(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m484(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m778 (TextGenerator_t161 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m778_ftn) (TextGenerator_t161 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t295* TextGenerator_GetCharactersArray_m779 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t295* (*TextGenerator_GetCharactersArray_m779_ftn) (TextGenerator_t161 *);
	static TextGenerator_GetCharactersArray_m779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m780 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m780_ftn) (TextGenerator_t161 *);
	static TextGenerator_get_lineCount_m780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m781 (TextGenerator_t161 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m781_ftn) (TextGenerator_t161 *, Object_t *);
	static TextGenerator_GetLinesInternal_m781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t296* TextGenerator_GetLinesArray_m782 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t296* (*TextGenerator_GetLinesArray_m782_ftn) (TextGenerator_t161 *);
	static TextGenerator_GetLinesArray_m782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m783 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m783_ftn) (TextGenerator_t161 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m784 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern Il2CppCodeGenString* _stringLiteral112;
extern Il2CppCodeGenString* _stringLiteral113;
extern "C" TextGenerationSettings_t162  TextGenerator_ValidatedSettings_m785 (TextGenerator_t161 * __this, TextGenerationSettings_t162  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t78 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m641(NULL /*static, unused*/, L_0, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t78 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m762(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t162  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m591(NULL /*static, unused*/, _stringLiteral112, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m591(NULL /*static, unused*/, _stringLiteral113, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t162  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m786 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m787 (TextGenerator_t161 * __this, List_1_t159 * ___characters, const MethodInfo* method)
{
	{
		List_1_t159 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m778(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m788 (TextGenerator_t161 * __this, List_1_t160 * ___lines, const MethodInfo* method)
{
	{
		List_1_t160 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m781(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m789 (TextGenerator_t161 * __this, List_1_t158 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t158 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m774(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m790 (TextGenerator_t161 * __this, String_t* ___str, TextGenerationSettings_t162  ___settings, const MethodInfo* method)
{
	Rect_t51  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t162  L_1 = ___settings;
		TextGenerator_Populate_m792(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t51  L_2 = TextGenerator_get_rectExtents_m771(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m386((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m791 (TextGenerator_t161 * __this, String_t* ___str, TextGenerationSettings_t162  ___settings, const MethodInfo* method)
{
	Rect_t51  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t162  L_1 = ___settings;
		TextGenerator_Populate_m792(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t51  L_2 = TextGenerator_get_rectExtents_m771(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m388((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m792 (TextGenerator_t161 * __this, String_t* ___str, TextGenerationSettings_t162  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1191(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t162  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m1149((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t162  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m793(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m793 (TextGenerator_t161 * __this, String_t* ___str, TextGenerationSettings_t162  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t162  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t162  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t162  L_2 = ___settings;
		TextGenerationSettings_t162  L_3 = TextGenerator_ValidatedSettings_m785(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t78 * L_5 = ((&V_0)->___font_0);
		Color_t7  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t52  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t52  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m768(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m794 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t158 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m789(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t158 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m795 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t159 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m787(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t159 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m796 (TextGenerator_t161 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t160 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m788(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t160 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m797 (WillRenderCanvases_t163 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m798 (WillRenderCanvases_t163 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m798((WillRenderCanvases_t163 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t163(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m799 (WillRenderCanvases_t163 * __this, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m800 (WillRenderCanvases_t163 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"



// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t164_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m801 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t163 * L_0 = ((Canvas_t164_StaticFields*)Canvas_t164_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t163 * L_1 = ((Canvas_t164_StaticFields*)Canvas_t164_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m798(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t165_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m802 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t165  V_0 = {0};
	{
		Color32_t91  L_0 = {0};
		Color32__ctor_m375(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t165_StaticFields*)UIVertex_t165_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t95  L_1 = {0};
		Vector4__ctor_m470(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t165_StaticFields*)UIVertex_t165_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t165_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t90  L_2 = Vector3_get_zero_m360(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t90  L_3 = Vector3_get_back_m361(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t95  L_4 = ((UIVertex_t165_StaticFields*)UIVertex_t165_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t91  L_5 = ((UIVertex_t165_StaticFields*)UIVertex_t165_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t52  L_6 = Vector2_get_zero_m349(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t52  L_7 = Vector2_get_zero_m349(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t165  L_8 = V_0;
		((UIVertex_t165_StaticFields*)UIVertex_t165_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m803 (Request_t166 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 2;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m804 (Request_t166 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m805 (Request_t166 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m806 (Request_t166 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* Request_ToString_m807 (Request_t166 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1256(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m804(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1257(L_5, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t207* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m805(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m1257(L_10, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t207* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m806(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral114, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m808 (ResponseBase_t167 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" String_t* ResponseBase_ParseJSONString_m809 (ResponseBase_t167 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1205(NULL /*static, unused*/, L_4, _stringLiteral116, /*hidden argument*/NULL);
		FormatException_t341 * L_6 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" int32_t ResponseBase_ParseJSONInt32_m810 (ResponseBase_t167 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m1259(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1205(NULL /*static, unused*/, L_5, _stringLiteral116, /*hidden argument*/NULL);
		FormatException_t341 * L_7 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m811 (ResponseBase_t167 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m1260(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1205(NULL /*static, unused*/, L_5, _stringLiteral116, /*hidden argument*/NULL);
		FormatException_t341 * L_7 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m812 (ResponseBase_t167 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m1261(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1205(NULL /*static, unused*/, L_5, _stringLiteral116, /*hidden argument*/NULL);
		FormatException_t341 * L_7 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" bool ResponseBase_ParseJSONBool_m813 (ResponseBase_t167 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m1262(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1205(NULL /*static, unused*/, L_5, _stringLiteral116, /*hidden argument*/NULL);
		FormatException_t341 * L_7 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m814 (Response_t168 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m808(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m815 (Response_t168 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m816 (Response_t168 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m817 (Response_t168 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m818 (Response_t168 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral117;
extern "C" String_t* Response_ToString_m819 (Response_t168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m1256(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		bool L_3 = Response_get_success_m815(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t207* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m817(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral117, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral120;
extern "C" void Response_Parse_m820 (Response_t168 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m813(__this, _stringLiteral118, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m816(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral119, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m818(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m815(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m817(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral120, L_9, /*hidden argument*/NULL);
		FormatException_t341 * L_11 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m821 (BasicResponse_t169 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m814(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m822 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m803(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m823 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m824 (CreateMatchRequest_t171 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m825 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m826 (CreateMatchRequest_t171 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m827 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m828 (CreateMatchRequest_t171 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m829 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m830 (CreateMatchRequest_t171 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t170 * CreateMatchRequest_get_matchAttributes_m831 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t170 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t343_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral121;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral123;
extern "C" String_t* CreateMatchRequest_ToString_m832 (CreateMatchRequest_t171 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		UInt32_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t207* G_B2_1 = {0};
	ObjectU5BU5D_t207* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t207* G_B1_1 = {0};
	ObjectU5BU5D_t207* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t207* G_B3_2 = {0};
	ObjectU5BU5D_t207* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t207* G_B5_1 = {0};
	ObjectU5BU5D_t207* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t207* G_B4_1 = {0};
	ObjectU5BU5D_t207* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t207* G_B6_2 = {0};
	ObjectU5BU5D_t207* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m807(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m823(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t207* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m825(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t343_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m827(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t207* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m829(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m1191(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral121;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral121;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = _stringLiteral122;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = _stringLiteral123;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t207* L_16 = G_B3_3;
		Dictionary_2_t170 * L_17 = CreateMatchRequest_get_matchAttributes_m831(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t170 * L_18 = CreateMatchRequest_get_matchAttributes_m831(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m553(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m833 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m821(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m834 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m835 (CreateMatchResponse_t172 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m836 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m837 (CreateMatchResponse_t172 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m838 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m839 (CreateMatchResponse_t172 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m840 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m841 (CreateMatchResponse_t172 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m842 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m843 (CreateMatchResponse_t172 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m844 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m845 (CreateMatchResponse_t172 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* CreateMatchResponse_ToString_m846 (CreateMatchResponse_t172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m819(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m834(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t207* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m836(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m838(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m1257(L_11, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t207* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m842(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t186_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m1257(L_16, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t207* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m844(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral124, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" void CreateMatchResponse_Parse_m847 (CreateMatchResponse_t172 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m820(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral125, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m835(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m810(__this, _stringLiteral126, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m837(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m812(__this, _stringLiteral127, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m839(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral128, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m841(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m811(__this, _stringLiteral129, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m843(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m813(__this, _stringLiteral130, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m845(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral131, L_22, /*hidden argument*/NULL);
		FormatException_t341 * L_24 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m848 (JoinMatchRequest_t173 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m803(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m849 (JoinMatchRequest_t173 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m850 (JoinMatchRequest_t173 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m851 (JoinMatchRequest_t173 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m852 (JoinMatchRequest_t173 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral123;
extern "C" String_t* JoinMatchRequest_ToString_m853 (JoinMatchRequest_t173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t207* G_B2_1 = {0};
	ObjectU5BU5D_t207* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t207* G_B1_1 = {0};
	ObjectU5BU5D_t207* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t207* G_B3_2 = {0};
	ObjectU5BU5D_t207* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m807(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m849(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1257(L_5, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t207* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m851(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m1191(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteral132;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteral132;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = _stringLiteral122;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = _stringLiteral123;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m553(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m854 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m821(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m855 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m856 (JoinMatchResponse_t174 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m857 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m858 (JoinMatchResponse_t174 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m859 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m860 (JoinMatchResponse_t174 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m861 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m862 (JoinMatchResponse_t174 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m863 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m864 (JoinMatchResponse_t174 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m865 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m866 (JoinMatchResponse_t174 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* JoinMatchResponse_ToString_m867 (JoinMatchResponse_t174 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m819(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m855(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t207* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m857(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m859(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m1257(L_11, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t207* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m863(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t186_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m1257(L_16, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t207* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m865(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral124, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" void JoinMatchResponse_Parse_m868 (JoinMatchResponse_t174 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m820(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral125, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m856(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m810(__this, _stringLiteral126, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m858(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m812(__this, _stringLiteral127, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m860(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral128, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m862(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m811(__this, _stringLiteral129, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m864(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m813(__this, _stringLiteral130, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m866(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral131, L_22, /*hidden argument*/NULL);
		FormatException_t341 * L_24 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m869 (DestroyMatchRequest_t175 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m803(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m870 (DestroyMatchRequest_t175 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m871 (DestroyMatchRequest_t175 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* DestroyMatchRequest_ToString_m872 (DestroyMatchRequest_t175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m807(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m870(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1257(L_5, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral133, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m873 (DropConnectionRequest_t176 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m803(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m874 (DropConnectionRequest_t176 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m875 (DropConnectionRequest_t176 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m876 (DropConnectionRequest_t176 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m877 (DropConnectionRequest_t176 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral134;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* DropConnectionRequest_ToString_m878 (DropConnectionRequest_t176 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m807(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m874(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1257(L_5, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t207* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m876(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t186_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m1257(L_10, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral134, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m879 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m803(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m880 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m881 (ListMatchRequest_t177 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m882 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m883 (ListMatchRequest_t177 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m884 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m885 (ListMatchRequest_t177 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_includePasswordMatches()
extern "C" bool ListMatchRequest_get_includePasswordMatches_m886 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CincludePasswordMatchesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t170 * ListMatchRequest_get_matchAttributeFilterLessThan_m887 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t170 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t170 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m888 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t170 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_9);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" String_t* ListMatchRequest_ToString_m889 (ListMatchRequest_t177 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t207* G_B2_1 = {0};
	ObjectU5BU5D_t207* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t207* G_B1_1 = {0};
	ObjectU5BU5D_t207* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t207* G_B3_2 = {0};
	ObjectU5BU5D_t207* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t207* G_B5_1 = {0};
	ObjectU5BU5D_t207* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t207* G_B4_1 = {0};
	ObjectU5BU5D_t207* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t207* G_B6_2 = {0};
	ObjectU5BU5D_t207* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m807(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m880(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t207* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m882(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t207* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m884(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t207* L_12 = L_10;
		Dictionary_2_t170 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m887(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral135;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral135;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t170 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m887(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t207* L_18 = G_B3_3;
		Dictionary_2_t170 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m888(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t170 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m888(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m553(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m890 (MatchDirectConnectInfo_t178 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m808(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m891 (MatchDirectConnectInfo_t178 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m892 (MatchDirectConnectInfo_t178 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m893 (MatchDirectConnectInfo_t178 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m894 (MatchDirectConnectInfo_t178 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m895 (MatchDirectConnectInfo_t178 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m896 (MatchDirectConnectInfo_t178 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral136;
extern "C" String_t* MatchDirectConnectInfo_ToString_m897 (MatchDirectConnectInfo_t178 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1256(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m891(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t186_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t207* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m893(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m895(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral136, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" void MatchDirectConnectInfo_Parse_m898 (MatchDirectConnectInfo_t178 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m811(__this, _stringLiteral129, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m892(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral137, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m894(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral138, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m896(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral131, L_12, /*hidden argument*/NULL);
		FormatException_t341 * L_14 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
struct ResponseBase_t167;
struct List_1_t179;
struct String_t;
struct Object_t;
struct IDictionary_2_t297;
struct ResponseBase_t167;
struct List_1_t194;
struct String_t;
struct Object_t;
struct IDictionary_2_t297;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t194 * ResponseBase_ParseJSONList_TisObject_t_m1264_gshared (ResponseBase_t167 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m1264(__this, p0, p1, p2, method) (( List_1_t194 * (*) (ResponseBase_t167 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1264_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t178_m1263(__this, p0, p1, p2, method) (( List_1_t179 * (*) (ResponseBase_t167 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1264_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m899 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m808(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m900 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m901 (MatchDesc_t180 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m902 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m903 (MatchDesc_t180 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m904 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m905 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m906 (MatchDesc_t180 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m907 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m908 (MatchDesc_t180 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m909 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m910 (MatchDesc_t180 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t170 * MatchDesc_get_matchAttributes_m911 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t170 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m912 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t179 * MatchDesc_get_directConnectInfos_m913 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	{
		List_1_t179 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m914 (MatchDesc_t180 * __this, List_1_t179 * ___value, const MethodInfo* method)
{
	{
		List_1_t179 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral139;
extern Il2CppCodeGenString* _stringLiteral115;
extern "C" String_t* MatchDesc_ToString_m915 (MatchDesc_t180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t207* G_B2_1 = {0};
	ObjectU5BU5D_t207* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t207* G_B1_1 = {0};
	ObjectU5BU5D_t207* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t207* G_B3_2 = {0};
	ObjectU5BU5D_t207* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m1256(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m900(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1257(L_5, _stringLiteral115, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t207* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m902(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t207* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m904(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t207* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m905(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t207* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m907(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t207* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m909(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t207* L_25 = L_21;
		Dictionary_2_t170 * L_26 = MatchDesc_get_matchAttributes_m911(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = _stringLiteral139;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = _stringLiteral139;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t170 * L_27 = MatchDesc_get_matchAttributes_m911(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t207* L_31 = G_B3_3;
		List_1_t179 * L_32 = MatchDesc_get_directConnectInfos_m913(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m553(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t178_m1263_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral142;
extern Il2CppCodeGenString* _stringLiteral143;
extern Il2CppCodeGenString* _stringLiteral144;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" void MatchDesc_Parse_m916 (MatchDesc_t180 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t178_m1263_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m812(__this, _stringLiteral127, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m901(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m809(__this, _stringLiteral140, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m903(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m810(__this, _stringLiteral141, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m906(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m810(__this, _stringLiteral142, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m908(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m813(__this, _stringLiteral143, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m910(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t179 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t178_m1263(__this, _stringLiteral144, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t178_m1263_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m914(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral131, L_21, /*hidden argument*/NULL);
		FormatException_t341 * L_23 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
struct ResponseBase_t167;
struct List_1_t181;
struct String_t;
struct Object_t;
struct IDictionary_2_t297;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t180_m1265(__this, p0, p1, p2, method) (( List_1_t181 * (*) (ResponseBase_t167 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1264_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m917 (ListMatchResponse_t182 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m821(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t181 * ListMatchResponse_get_matches_m918 (ListMatchResponse_t182 * __this, const MethodInfo* method)
{
	{
		List_1_t181 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m919 (ListMatchResponse_t182 * __this, List_1_t181 * ___value, const MethodInfo* method)
{
	{
		List_1_t181 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral145;
extern "C" String_t* ListMatchResponse_ToString_m920 (ListMatchResponse_t182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m819(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		List_1_t181 * L_3 = ListMatchResponse_get_matches_m918(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral145, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t341_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t180_m1265_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral146;
extern Il2CppCodeGenString* _stringLiteral131;
extern "C" void ListMatchResponse_Parse_m921 (ListMatchResponse_t182 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FormatException_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		ResponseBase_ParseJSONList_TisMatchDesc_t180_m1265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m820(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t181 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t180_m1265(__this, _stringLiteral146, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t180_m1265_MethodInfo_var);
		ListMatchResponse_set_matches_m919(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral131, L_7, /*hidden argument*/NULL);
		FormatException_t341 * L_9 = (FormatException_t341 *)il2cpp_codegen_object_new (FormatException_t341_il2cpp_TypeInfo_var);
		FormatException__ctor_m1258(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m922 (NetworkAccessToken_t187 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m923 (NetworkAccessToken_t187 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t112* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m1266(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t188_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t189_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1269_MethodInfo_var;
extern "C" void Utility__cctor_m924 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Dictionary_2_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Dictionary_2__ctor_m1269_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m1267(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t188 * L_1 = (Random_t188 *)il2cpp_codegen_object_new (Random_t188_il2cpp_TypeInfo_var);
		Random__ctor_m1268(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t189 * L_2 = (Dictionary_2_t189 *)il2cpp_codegen_object_new (Dictionary_2_t189_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1269(L_2, /*hidden argument*/Dictionary_2__ctor_m1269_MethodInfo_var);
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m925 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1215(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = String_GetHashCode_m1199(L_4, /*hidden argument*/NULL);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m926 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m927 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t187_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t187 * Utility_GetAccessTokenForNetwork_m928 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		NetworkAccessToken_t187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t187 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		Dictionary_2_t189 * L_0 = ((Utility_t190_StaticFields*)Utility_t190_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t187 ** >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t187 * L_3 = (NetworkAccessToken_t187 *)il2cpp_codegen_object_new (NetworkAccessToken_t187_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m922(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t187 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
struct NetworkMatch_t192;
struct IEnumerator_t286;
struct WWW_t109;
struct ResponseDelegate_1_t298;
struct NetworkMatch_t192;
struct IEnumerator_t286;
struct WWW_t109;
struct ResponseDelegate_1_t344;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared (NetworkMatch_t192 * __this, WWW_t109 * p0, ResponseDelegate_1_t344 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m1271(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t192 *, WWW_t109 *, ResponseDelegate_1_t344 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t172_m1270(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t192 *, WWW_t109 *, ResponseDelegate_1_t298 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared)(__this, p0, p1, method)
struct NetworkMatch_t192;
struct IEnumerator_t286;
struct WWW_t109;
struct ResponseDelegate_1_t299;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t174_m1272(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t192 *, WWW_t109 *, ResponseDelegate_1_t299 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared)(__this, p0, p1, method)
struct NetworkMatch_t192;
struct IEnumerator_t286;
struct WWW_t109;
struct ResponseDelegate_1_t300;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t192 *, WWW_t109 *, ResponseDelegate_1_t300 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared)(__this, p0, p1, method)
struct NetworkMatch_t192;
struct IEnumerator_t286;
struct WWW_t109;
struct ResponseDelegate_1_t301;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t182_m1274(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t192 *, WWW_t109 *, ResponseDelegate_1_t301 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1271_gshared)(__this, p0, p1, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern Il2CppCodeGenString* _stringLiteral149;
extern "C" void NetworkMatch__ctor_m929 (NetworkMatch_t192 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t191 * L_0 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1275(L_0, _stringLiteral147, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m656(NULL /*static, unused*/, _stringLiteral148, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m1276(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m589(NULL /*static, unused*/, _stringLiteral149, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m932(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t191 * NetworkMatch_get_baseUri_m930 (NetworkMatch_t192 * __this, const MethodInfo* method)
{
	{
		Uri_t191 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m931 (NetworkMatch_t192 * __this, Uri_t191 * ___value, const MethodInfo* method)
{
	{
		Uri_t191 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m932 (NetworkMatch_t192 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		Utility_SetAppID_m926(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t171_il2cpp_TypeInfo_var;
extern "C" Coroutine_t22 * NetworkMatch_CreateMatch_m933 (NetworkMatch_t192 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t298 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t171 * V_0 = {0};
	{
		CreateMatchRequest_t171 * L_0 = (CreateMatchRequest_t171 *)il2cpp_codegen_object_new (CreateMatchRequest_t171_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m822(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t171 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m824(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t171 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m826(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t171 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m828(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t171 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m830(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t171 * L_9 = V_0;
		ResponseDelegate_1_t298 * L_10 = ___callback;
		Coroutine_t22 * L_11 = NetworkMatch_CreateMatch_m934(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t172_m1270_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral150;
extern Il2CppCodeGenString* _stringLiteral151;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral156;
extern Il2CppCodeGenString* _stringLiteral157;
extern Il2CppCodeGenString* _stringLiteral158;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" Coroutine_t22 * NetworkMatch_CreateMatch_m934 (NetworkMatch_t192 * __this, CreateMatchRequest_t171 * ___req, ResponseDelegate_1_t298 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWWForm_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		WWW_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t172_m1270_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t191 * V_0 = {0};
	WWWForm_t113 * V_1 = {0};
	WWW_t109 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t191 * L_0 = NetworkMatch_get_baseUri_m930(__this, /*hidden argument*/NULL);
		Uri_t191 * L_1 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1277(L_1, L_0, _stringLiteral150, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t191 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1215(NULL /*static, unused*/, _stringLiteral151, L_2, /*hidden argument*/NULL);
		Debug_Log_m589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t113 * L_4 = (WWWForm_t113 *)il2cpp_codegen_object_new (WWWForm_t113_il2cpp_TypeInfo_var);
		WWWForm__ctor_m539(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t113 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m540(L_5, _stringLiteral152, L_6, /*hidden argument*/NULL);
		WWWForm_t113 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m925(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m540(L_7, _stringLiteral153, L_11, /*hidden argument*/NULL);
		WWWForm_t113 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m927(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m540(L_12, _stringLiteral154, L_16, /*hidden argument*/NULL);
		WWWForm_t113 * L_17 = V_1;
		NullCheck(L_17);
		WWWForm_AddField_m542(L_17, _stringLiteral128, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_18 = V_1;
		NullCheck(L_18);
		WWWForm_AddField_m542(L_18, _stringLiteral155, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_19 = V_1;
		CreateMatchRequest_t171 * L_20 = ___req;
		NullCheck(L_20);
		String_t* L_21 = CreateMatchRequest_get_name_m823(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		WWWForm_AddField_m540(L_19, _stringLiteral140, L_21, /*hidden argument*/NULL);
		WWWForm_t113 * L_22 = V_1;
		CreateMatchRequest_t171 * L_23 = ___req;
		NullCheck(L_23);
		uint32_t L_24 = CreateMatchRequest_get_size_m825(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		String_t* L_25 = UInt32_ToString_m1278((&V_3), /*hidden argument*/NULL);
		NullCheck(L_22);
		WWWForm_AddField_m540(L_22, _stringLiteral156, L_25, /*hidden argument*/NULL);
		WWWForm_t113 * L_26 = V_1;
		CreateMatchRequest_t171 * L_27 = ___req;
		NullCheck(L_27);
		bool L_28 = CreateMatchRequest_get_advertise_m827(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		String_t* L_29 = Boolean_ToString_m1279((&V_4), /*hidden argument*/NULL);
		NullCheck(L_26);
		WWWForm_AddField_m540(L_26, _stringLiteral157, L_29, /*hidden argument*/NULL);
		WWWForm_t113 * L_30 = V_1;
		CreateMatchRequest_t171 * L_31 = ___req;
		NullCheck(L_31);
		String_t* L_32 = CreateMatchRequest_get_password_m829(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		WWWForm_AddField_m540(L_30, _stringLiteral158, L_32, /*hidden argument*/NULL);
		WWWForm_t113 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t287 * L_34 = WWWForm_get_headers_m543(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, _stringLiteral159, _stringLiteral160);
		Uri_t191 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t113 * L_37 = V_1;
		WWW_t109 * L_38 = (WWW_t109 *)il2cpp_codegen_object_new (WWW_t109_il2cpp_TypeInfo_var);
		WWW__ctor_m524(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t109 * L_39 = V_2;
		ResponseDelegate_1_t298 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t172_m1270(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t172_m1270_MethodInfo_var);
		Coroutine_t22 * L_42 = MonoBehaviour_StartCoroutine_m624(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t173_il2cpp_TypeInfo_var;
extern "C" Coroutine_t22 * NetworkMatch_JoinMatch_m935 (NetworkMatch_t192 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t299 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t173 * V_0 = {0};
	{
		JoinMatchRequest_t173 * L_0 = (JoinMatchRequest_t173 *)il2cpp_codegen_object_new (JoinMatchRequest_t173_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m848(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t173 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m850(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t173 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m852(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t173 * L_5 = V_0;
		ResponseDelegate_1_t299 * L_6 = ___callback;
		Coroutine_t22 * L_7 = NetworkMatch_JoinMatch_m936(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t174_m1272_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral161;
extern Il2CppCodeGenString* _stringLiteral162;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral158;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" Coroutine_t22 * NetworkMatch_JoinMatch_m936 (NetworkMatch_t192 * __this, JoinMatchRequest_t173 * ___req, ResponseDelegate_1_t299 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWWForm_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		WWW_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t174_m1272_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t191 * V_0 = {0};
	WWWForm_t113 * V_1 = {0};
	WWW_t109 * V_2 = {0};
	{
		Uri_t191 * L_0 = NetworkMatch_get_baseUri_m930(__this, /*hidden argument*/NULL);
		Uri_t191 * L_1 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1277(L_1, L_0, _stringLiteral161, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t191 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1215(NULL /*static, unused*/, _stringLiteral162, L_2, /*hidden argument*/NULL);
		Debug_Log_m589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t113 * L_4 = (WWWForm_t113 *)il2cpp_codegen_object_new (WWWForm_t113_il2cpp_TypeInfo_var);
		WWWForm__ctor_m539(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t113 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m540(L_5, _stringLiteral152, L_6, /*hidden argument*/NULL);
		WWWForm_t113 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m925(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m540(L_7, _stringLiteral153, L_11, /*hidden argument*/NULL);
		WWWForm_t113 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m927(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m540(L_12, _stringLiteral154, L_16, /*hidden argument*/NULL);
		WWWForm_t113 * L_17 = V_1;
		NullCheck(L_17);
		WWWForm_AddField_m542(L_17, _stringLiteral128, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_18 = V_1;
		NullCheck(L_18);
		WWWForm_AddField_m542(L_18, _stringLiteral155, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_19 = V_1;
		JoinMatchRequest_t173 * L_20 = ___req;
		NullCheck(L_20);
		uint64_t L_21 = JoinMatchRequest_get_networkId_m849(L_20, /*hidden argument*/NULL);
		uint64_t L_22 = L_21;
		Object_t * L_23 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_23);
		NullCheck(L_19);
		WWWForm_AddField_m540(L_19, _stringLiteral127, L_24, /*hidden argument*/NULL);
		WWWForm_t113 * L_25 = V_1;
		JoinMatchRequest_t173 * L_26 = ___req;
		NullCheck(L_26);
		String_t* L_27 = JoinMatchRequest_get_password_m851(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		WWWForm_AddField_m540(L_25, _stringLiteral158, L_27, /*hidden argument*/NULL);
		WWWForm_t113 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t287 * L_29 = WWWForm_get_headers_m543(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, _stringLiteral159, _stringLiteral160);
		Uri_t191 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t113 * L_32 = V_1;
		WWW_t109 * L_33 = (WWW_t109 *)il2cpp_codegen_object_new (WWW_t109_il2cpp_TypeInfo_var);
		WWW__ctor_m524(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t109 * L_34 = V_2;
		ResponseDelegate_1_t299 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t174_m1272(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t174_m1272_MethodInfo_var);
		Coroutine_t22 * L_37 = MonoBehaviour_StartCoroutine_m624(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t175_il2cpp_TypeInfo_var;
extern "C" Coroutine_t22 * NetworkMatch_DestroyMatch_m937 (NetworkMatch_t192 * __this, uint64_t ___netId, ResponseDelegate_1_t300 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t175 * V_0 = {0};
	{
		DestroyMatchRequest_t175 * L_0 = (DestroyMatchRequest_t175 *)il2cpp_codegen_object_new (DestroyMatchRequest_t175_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m869(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t175 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m871(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t175 * L_3 = V_0;
		ResponseDelegate_1_t300 * L_4 = ___callback;
		Coroutine_t22 * L_5 = NetworkMatch_DestroyMatch_m938(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral163;
extern Il2CppCodeGenString* _stringLiteral164;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" Coroutine_t22 * NetworkMatch_DestroyMatch_m938 (NetworkMatch_t192 * __this, DestroyMatchRequest_t175 * ___req, ResponseDelegate_1_t300 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWWForm_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		WWW_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t191 * V_0 = {0};
	WWWForm_t113 * V_1 = {0};
	WWW_t109 * V_2 = {0};
	{
		Uri_t191 * L_0 = NetworkMatch_get_baseUri_m930(__this, /*hidden argument*/NULL);
		Uri_t191 * L_1 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1277(L_1, L_0, _stringLiteral163, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t191 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral164, L_3, /*hidden argument*/NULL);
		Debug_Log_m589(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t113 * L_5 = (WWWForm_t113 *)il2cpp_codegen_object_new (WWWForm_t113_il2cpp_TypeInfo_var);
		WWWForm__ctor_m539(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t113 * L_6 = V_1;
		String_t* L_7 = Application_get_cloudProjectId_m562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		WWWForm_AddField_m540(L_6, _stringLiteral152, L_7, /*hidden argument*/NULL);
		WWWForm_t113 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_9 = Utility_GetSourceID_m925(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_11);
		NullCheck(L_8);
		WWWForm_AddField_m540(L_8, _stringLiteral153, L_12, /*hidden argument*/NULL);
		WWWForm_t113 * L_13 = V_1;
		uint64_t L_14 = Utility_GetAppID_m927(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_15 = L_14;
		Object_t * L_16 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_16);
		NullCheck(L_13);
		WWWForm_AddField_m540(L_13, _stringLiteral154, L_17, /*hidden argument*/NULL);
		WWWForm_t113 * L_18 = V_1;
		DestroyMatchRequest_t175 * L_19 = ___req;
		NullCheck(L_19);
		uint64_t L_20 = DestroyMatchRequest_get_networkId_m870(L_19, /*hidden argument*/NULL);
		NetworkAccessToken_t187 * L_21 = Utility_GetAccessTokenForNetwork_m928(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = NetworkAccessToken_GetByteString_m923(L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		WWWForm_AddField_m540(L_18, _stringLiteral128, L_22, /*hidden argument*/NULL);
		WWWForm_t113 * L_23 = V_1;
		NullCheck(L_23);
		WWWForm_AddField_m542(L_23, _stringLiteral155, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_24 = V_1;
		DestroyMatchRequest_t175 * L_25 = ___req;
		NullCheck(L_25);
		uint64_t L_26 = DestroyMatchRequest_get_networkId_m870(L_25, /*hidden argument*/NULL);
		uint64_t L_27 = L_26;
		Object_t * L_28 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_28);
		NullCheck(L_24);
		WWWForm_AddField_m540(L_24, _stringLiteral127, L_29, /*hidden argument*/NULL);
		WWWForm_t113 * L_30 = V_1;
		NullCheck(L_30);
		Dictionary_2_t287 * L_31 = WWWForm_get_headers_m543(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_31, _stringLiteral159, _stringLiteral160);
		Uri_t191 * L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_32);
		WWWForm_t113 * L_34 = V_1;
		WWW_t109 * L_35 = (WWW_t109 *)il2cpp_codegen_object_new (WWW_t109_il2cpp_TypeInfo_var);
		WWW__ctor_m524(L_35, L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		WWW_t109 * L_36 = V_2;
		ResponseDelegate_1_t300 * L_37 = ___callback;
		Object_t * L_38 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273(__this, L_36, L_37, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var);
		Coroutine_t22 * L_39 = MonoBehaviour_StartCoroutine_m624(__this, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t176_il2cpp_TypeInfo_var;
extern "C" Coroutine_t22 * NetworkMatch_DropConnection_m939 (NetworkMatch_t192 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t300 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t176 * V_0 = {0};
	{
		DropConnectionRequest_t176 * L_0 = (DropConnectionRequest_t176 *)il2cpp_codegen_object_new (DropConnectionRequest_t176_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m873(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t176 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m875(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t176 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m877(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t176 * L_5 = V_0;
		ResponseDelegate_1_t300 * L_6 = ___callback;
		Coroutine_t22 * L_7 = NetworkMatch_DropConnection_m940(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral165;
extern Il2CppCodeGenString* _stringLiteral166;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" Coroutine_t22 * NetworkMatch_DropConnection_m940 (NetworkMatch_t192 * __this, DropConnectionRequest_t176 * ___req, ResponseDelegate_1_t300 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWWForm_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		WWW_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t191 * V_0 = {0};
	WWWForm_t113 * V_1 = {0};
	WWW_t109 * V_2 = {0};
	{
		Uri_t191 * L_0 = NetworkMatch_get_baseUri_m930(__this, /*hidden argument*/NULL);
		Uri_t191 * L_1 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1277(L_1, L_0, _stringLiteral165, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t191 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1215(NULL /*static, unused*/, _stringLiteral166, L_2, /*hidden argument*/NULL);
		Debug_Log_m589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t113 * L_4 = (WWWForm_t113 *)il2cpp_codegen_object_new (WWWForm_t113_il2cpp_TypeInfo_var);
		WWWForm__ctor_m539(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t113 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m540(L_5, _stringLiteral152, L_6, /*hidden argument*/NULL);
		WWWForm_t113 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m925(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m540(L_7, _stringLiteral153, L_11, /*hidden argument*/NULL);
		WWWForm_t113 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m927(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m540(L_12, _stringLiteral154, L_16, /*hidden argument*/NULL);
		WWWForm_t113 * L_17 = V_1;
		DropConnectionRequest_t176 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = DropConnectionRequest_get_networkId_m874(L_18, /*hidden argument*/NULL);
		NetworkAccessToken_t187 * L_20 = Utility_GetAccessTokenForNetwork_m928(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = NetworkAccessToken_GetByteString_m923(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m540(L_17, _stringLiteral128, L_21, /*hidden argument*/NULL);
		WWWForm_t113 * L_22 = V_1;
		NullCheck(L_22);
		WWWForm_AddField_m542(L_22, _stringLiteral155, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_23 = V_1;
		DropConnectionRequest_t176 * L_24 = ___req;
		NullCheck(L_24);
		uint64_t L_25 = DropConnectionRequest_get_networkId_m874(L_24, /*hidden argument*/NULL);
		uint64_t L_26 = L_25;
		Object_t * L_27 = Box(NetworkID_t185_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_27);
		NullCheck(L_23);
		WWWForm_AddField_m540(L_23, _stringLiteral127, L_28, /*hidden argument*/NULL);
		WWWForm_t113 * L_29 = V_1;
		DropConnectionRequest_t176 * L_30 = ___req;
		NullCheck(L_30);
		uint16_t L_31 = DropConnectionRequest_get_nodeId_m876(L_30, /*hidden argument*/NULL);
		uint16_t L_32 = L_31;
		Object_t * L_33 = Box(NodeID_t186_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_33);
		NullCheck(L_29);
		WWWForm_AddField_m540(L_29, _stringLiteral129, L_34, /*hidden argument*/NULL);
		WWWForm_t113 * L_35 = V_1;
		NullCheck(L_35);
		Dictionary_2_t287 * L_36 = WWWForm_get_headers_m543(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_36, _stringLiteral159, _stringLiteral160);
		Uri_t191 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_37);
		WWWForm_t113 * L_39 = V_1;
		WWW_t109 * L_40 = (WWW_t109 *)il2cpp_codegen_object_new (WWW_t109_il2cpp_TypeInfo_var);
		WWW__ctor_m524(L_40, L_38, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		WWW_t109 * L_41 = V_2;
		ResponseDelegate_1_t300 * L_42 = ___callback;
		Object_t * L_43 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273(__this, L_41, L_42, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t169_m1273_MethodInfo_var);
		Coroutine_t22 * L_44 = MonoBehaviour_StartCoroutine_m624(__this, L_43, /*hidden argument*/NULL);
		return L_44;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t177_il2cpp_TypeInfo_var;
extern "C" Coroutine_t22 * NetworkMatch_ListMatches_m941 (NetworkMatch_t192 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t301 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t177 * V_0 = {0};
	{
		ListMatchRequest_t177 * L_0 = (ListMatchRequest_t177 *)il2cpp_codegen_object_new (ListMatchRequest_t177_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m879(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t177 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m883(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t177 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m881(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t177 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m885(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t177 * L_7 = V_0;
		ResponseDelegate_1_t301 * L_8 = ___callback;
		Coroutine_t22 * L_9 = NetworkMatch_ListMatches_m942(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t190_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t182_m1274_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral167;
extern Il2CppCodeGenString* _stringLiteral168;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral169;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral170;
extern Il2CppCodeGenString* _stringLiteral171;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" Coroutine_t22 * NetworkMatch_ListMatches_m942 (NetworkMatch_t192 * __this, ListMatchRequest_t177 * ___req, ResponseDelegate_1_t301 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWWForm_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Utility_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		WWW_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t182_m1274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t191 * V_0 = {0};
	WWWForm_t113 * V_1 = {0};
	WWW_t109 * V_2 = {0};
	bool V_3 = false;
	{
		Uri_t191 * L_0 = NetworkMatch_get_baseUri_m930(__this, /*hidden argument*/NULL);
		Uri_t191 * L_1 = (Uri_t191 *)il2cpp_codegen_object_new (Uri_t191_il2cpp_TypeInfo_var);
		Uri__ctor_m1277(L_1, L_0, _stringLiteral167, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t191 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1215(NULL /*static, unused*/, _stringLiteral168, L_2, /*hidden argument*/NULL);
		Debug_Log_m589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t113 * L_4 = (WWWForm_t113 *)il2cpp_codegen_object_new (WWWForm_t113_il2cpp_TypeInfo_var);
		WWWForm__ctor_m539(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t113 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m540(L_5, _stringLiteral152, L_6, /*hidden argument*/NULL);
		WWWForm_t113 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t190_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m925(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t184_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m540(L_7, _stringLiteral153, L_11, /*hidden argument*/NULL);
		WWWForm_t113 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m927(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t183_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m540(L_12, _stringLiteral154, L_16, /*hidden argument*/NULL);
		WWWForm_t113 * L_17 = V_1;
		ListMatchRequest_t177 * L_18 = ___req;
		NullCheck(L_18);
		bool L_19 = ListMatchRequest_get_includePasswordMatches_m886(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		String_t* L_20 = Boolean_ToString_m1279((&V_3), /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m540(L_17, _stringLiteral169, L_20, /*hidden argument*/NULL);
		WWWForm_t113 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m542(L_21, _stringLiteral128, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_22 = V_1;
		NullCheck(L_22);
		WWWForm_AddField_m542(L_22, _stringLiteral155, 0, /*hidden argument*/NULL);
		WWWForm_t113 * L_23 = V_1;
		ListMatchRequest_t177 * L_24 = ___req;
		NullCheck(L_24);
		int32_t L_25 = ListMatchRequest_get_pageSize_m880(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m542(L_23, _stringLiteral170, L_25, /*hidden argument*/NULL);
		WWWForm_t113 * L_26 = V_1;
		ListMatchRequest_t177 * L_27 = ___req;
		NullCheck(L_27);
		int32_t L_28 = ListMatchRequest_get_pageNum_m882(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		WWWForm_AddField_m542(L_26, _stringLiteral171, L_28, /*hidden argument*/NULL);
		WWWForm_t113 * L_29 = V_1;
		ListMatchRequest_t177 * L_30 = ___req;
		NullCheck(L_30);
		String_t* L_31 = ListMatchRequest_get_nameFilter_m884(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		WWWForm_AddField_m540(L_29, _stringLiteral172, L_31, /*hidden argument*/NULL);
		WWWForm_t113 * L_32 = V_1;
		NullCheck(L_32);
		Dictionary_2_t287 * L_33 = WWWForm_get_headers_m543(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_33, _stringLiteral159, _stringLiteral160);
		Uri_t191 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_34);
		WWWForm_t113 * L_36 = V_1;
		WWW_t109 * L_37 = (WWW_t109 *)il2cpp_codegen_object_new (WWW_t109_il2cpp_TypeInfo_var);
		WWW__ctor_m524(L_37, L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		WWW_t109 * L_38 = V_2;
		ResponseDelegate_1_t301 * L_39 = ___callback;
		Object_t * L_40 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t182_m1274(__this, L_38, L_39, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t182_m1274_MethodInfo_var);
		Coroutine_t22 * L_41 = MonoBehaviour_StartCoroutine_m624(__this, L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t194_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1280_MethodInfo_var;
extern "C" void JsonArray__ctor_m943 (JsonArray_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		List_1__ctor_m1280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t194_il2cpp_TypeInfo_var);
		List_1__ctor_m1280(__this, /*hidden argument*/List_1__ctor_m1280_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m944 (JsonArray_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m964(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t195_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1281_MethodInfo_var;
extern "C" void JsonObject__ctor_m945 (JsonObject_t196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		Dictionary_2__ctor_m1281_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Dictionary_2_t195 * L_0 = (Dictionary_2_t195 *)il2cpp_codegen_object_new (Dictionary_2_t195_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1281(L_0, /*hidden argument*/Dictionary_2__ctor_m1281_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t345_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1282_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m946 (JsonObject_t196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Dictionary_2_GetEnumerator_m1282_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t345  L_1 = Dictionary_2_GetEnumerator_m1282(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1282_MethodInfo_var);
		Enumerator_t345  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t345_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m947 (JsonObject_t196 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m1283_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m948 (JsonObject_t196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m1283_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t346 * L_1 = Dictionary_2_get_Keys_m1283(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1283_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m949 (JsonObject_t196 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m1284_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m950 (JsonObject_t196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m1284_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t347 * L_1 = Dictionary_2_get_Values_m1284(L_0, /*hidden argument*/Dictionary_2_get_Values_m1284_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m951 (JsonObject_t196 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(19 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m952 (JsonObject_t196 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1285_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1286_MethodInfo_var;
extern "C" void JsonObject_Add_m953 (JsonObject_t196 * __this, KeyValuePair_2_t305  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		KeyValuePair_2_get_Value_m1286_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1285((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1285_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m1286((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m1286_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m954 (JsonObject_t196 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1285_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1286_MethodInfo_var;
extern "C" bool JsonObject_Contains_m955 (JsonObject_t196 * __this, KeyValuePair_2_t305  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		KeyValuePair_2_get_Value_m1286_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1285((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1285_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(30 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t195 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m1285((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1285_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(19 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m1286((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m1286_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t306_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral173;
extern "C" void JsonObject_CopyTo_m956 (JsonObject_t196 * __this, KeyValuePair_2U5BU5D_t304* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_1_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t305  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t304* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral173, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(10 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t305  L_5 = (KeyValuePair_2_t305 )InterfaceFuncInvoker0< KeyValuePair_2_t305  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t306_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t304* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t305  L_9 = V_1;
			*((KeyValuePair_2_t305 *)(KeyValuePair_2_t305 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m957 (JsonObject_t196 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m958 (JsonObject_t196 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1285_MethodInfo_var;
extern "C" bool JsonObject_Remove_m959 (JsonObject_t196 * __this, KeyValuePair_2_t305  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1285((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1285_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t345_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1282_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m960 (JsonObject_t196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Dictionary_2_GetEnumerator_m1282_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t195 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t345  L_1 = Dictionary_2_GetEnumerator_m1282(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1282_MethodInfo_var);
		Enumerator_t345  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t345_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m961 (JsonObject_t196 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m964(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m962 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t307* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t307* L_2 = String_ToCharArray_m1288(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t307* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m967(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern TypeInfo* StringBuilder_t308_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_SerializeObject_m963 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t308 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t308 * L_0 = (StringBuilder_t308 *)il2cpp_codegen_object_new (StringBuilder_t308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1289(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t308 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m975(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t308 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = StringBuilder_ToString_m1290(L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m964 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m981(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m963(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonObject_t196_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m965 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonObject_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t196 * L_0 = (JsonObject_t196 *)il2cpp_codegen_object_new (JsonObject_t196_il2cpp_TypeInfo_var);
		JsonObject__ctor_m945(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t307* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t307* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m973(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t307* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t307* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t307* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m968(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t307* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m974(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t307* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m967(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonArray_t193_il2cpp_TypeInfo_var;
extern "C" JsonArray_t193 * SimpleJson_ParseArray_m966 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonArray_t193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	JsonArray_t193 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t193 * L_0 = (JsonArray_t193 *)il2cpp_codegen_object_new (JsonArray_t193_il2cpp_TypeInfo_var);
		JsonArray__ctor_m943(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t307* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t307* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m973(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t193 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t307* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t307* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t307* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m967(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t193 *)NULL;
	}

IL_0063:
	{
		JsonArray_t193 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t193 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseValue_m967 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t307* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m973(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t307* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m968(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t307* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m970(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t307* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m965(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t307* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t193 * L_19 = SimpleJson_ParseArray_m966(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t307* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = 1;
		Object_t * L_23 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t307* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = 0;
		Object_t * L_27 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t307* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m974(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* StringBuilder_t308_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral174;
extern "C" String_t* SimpleJson_ParseString_m968 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t308 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t308 * L_0 = (StringBuilder_t308 *)il2cpp_codegen_object_new (StringBuilder_t308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1289(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t307* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m972(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t307* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t307* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t307* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t307* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t307* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t308 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m1291(L_28, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t308 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m1291(L_30, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t308 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m1291(L_32, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t308 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m1291(L_34, 8, /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t308 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m1291(L_36, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t308 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m1291(L_38, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t308 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m1291(L_40, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t308 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m1291(L_42, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t307* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t307* L_48 = ___json;
		int32_t* L_49 = ___index;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m1292(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_51 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_52 = UInt32_TryParse_m1294(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t307* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t307* L_63 = ___json;
		int32_t* L_64 = ___index;
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_65 = String_CreateString_m1292(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m1191(NULL /*static, unused*/, L_65, _stringLiteral174, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t307* L_67 = ___json;
		int32_t* L_68 = ___index;
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_69 = String_CreateString_m1292(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_70 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_71 = UInt32_TryParse_m1294(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t308 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m1291(L_74, (((uint16_t)L_75)), /*hidden argument*/NULL);
		StringBuilder_t308 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m1291(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t308 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m969(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_Append_m1295(L_82, L_84, /*hidden argument*/NULL);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t308 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m1291(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t308 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = StringBuilder_ToString_m1290(L_92, /*hidden argument*/NULL);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral175;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m969 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CharU5BU5D_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t350 * L_2 = (ArgumentOutOfRangeException_t350 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1296(L_2, _stringLiteral175, _stringLiteral176, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t350 * L_5 = (ArgumentOutOfRangeException_t350 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1296(L_5, _stringLiteral175, _stringLiteral177, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m1297(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t307* L_10 = ((CharU5BU5D_t307*)SZArrayNew(CharU5BU5D_t307_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t307* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_14 = String_CreateString_m1298(L_14, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t351_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t352_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral178;
extern Il2CppCodeGenString* _stringLiteral179;
extern "C" Object_t * SimpleJson_ParseNumber_m970 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		Double_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Int64_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t307* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m972(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t307* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m971(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t307* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_10 = String_CreateString_m1292(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1221(L_11, _stringLiteral178, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m1221(L_13, _stringLiteral179, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t307* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m1292(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_20 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m1299(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t351_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t307* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_29 = String_CreateString_m1292(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_30 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m1300(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(Int64_t352_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern Il2CppCodeGenString* _stringLiteral180;
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m971 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t307* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck(_stringLiteral180);
		int32_t L_4 = String_IndexOf_m1226(_stringLiteral180, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t307* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern Il2CppCodeGenString* _stringLiteral181;
extern "C" void SimpleJson_EatWhitespace_m972 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t307* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck(_stringLiteral181);
		int32_t L_3 = String_IndexOf_m1226(_stringLiteral181, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t307* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m973 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t307* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m974(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m974 (Object_t * __this /* static, unused */, CharU5BU5D_t307* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t307* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m972(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t307* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t307* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t307* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t307* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t307* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t307* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t307* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t307* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t307* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t307* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t307* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t307* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t307* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t307* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t307* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t307* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t353_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t309_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonSerializerStrategy_t197_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral183;
extern Il2CppCodeGenString* _stringLiteral184;
extern "C" bool SimpleJson_SerializeValue_m975 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t308 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		IDictionary_2_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		IEnumerable_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		IJsonSerializerStrategy_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t308 * G_B13_0 = {0};
	StringBuilder_t308 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t308 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t308 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m978(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t297_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t308 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m976(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t353_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t353_il2cpp_TypeInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t353_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t308 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m976(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, IEnumerable_t309_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t308 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m977(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m980(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t308 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m979(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, Boolean_t340_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t308 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, Boolean_t340_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = _stringLiteral182;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = _stringLiteral183;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m1295(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t308 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m1295(L_38, _stringLiteral184, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t197_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t308 * L_45 = ___builder;
		SimpleJson_SerializeValue_m975(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t309_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral185;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral29;
extern "C" bool SimpleJson_SerializeObject_m976 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t308 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t308 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1295(L_0, _stringLiteral185, /*hidden argument*/NULL);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t309_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t309_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t308 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m1295(L_10, _stringLiteral186, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t308 * L_14 = ___builder;
		SimpleJson_SerializeString_m978(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t308 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m975(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t308 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m1295(L_19, _stringLiteral187, /*hidden argument*/NULL);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t308 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m975(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t308 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m1295(L_28, _stringLiteral29, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t309_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral189;
extern "C" bool SimpleJson_SerializeArray_m977 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t308 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t308 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1295(L_0, _stringLiteral188, /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t309_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t308 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m1295(L_6, _stringLiteral186, /*hidden argument*/NULL);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t308 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m975(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_006e:
	{
		StringBuilder_t308 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m1295(L_16, _stringLiteral189, /*hidden argument*/NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral195;
extern Il2CppCodeGenString* _stringLiteral196;
extern "C" bool SimpleJson_SerializeString_m978 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t308 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t307* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t308 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1295(L_0, _stringLiteral90, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t307* L_2 = String_ToCharArray_m1288(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t307* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t308 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m1295(L_7, _stringLiteral190, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t308 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m1295(L_9, _stringLiteral191, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t308 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m1295(L_11, _stringLiteral192, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t308 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m1295(L_13, _stringLiteral193, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t308 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m1295(L_15, _stringLiteral194, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t308 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m1295(L_17, _stringLiteral195, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t308 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m1295(L_19, _stringLiteral196, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t308 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m1291(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t307* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t308 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m1295(L_25, _stringLiteral90, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern TypeInfo* Int64_t352_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t343_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t354_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t328_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral197;
extern "C" bool SimpleJson_SerializeNumber_m979 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t308 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		UInt64_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		UInt32_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		Decimal_t354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		Single_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t354  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, Int64_t352_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t308 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, Int64_t352_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_3 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m1301((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1295(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, UInt64_t355_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t308 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, UInt64_t355_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_8 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m1302((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1295(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, Int32_t327_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t308 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, Int32_t327_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_13 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1303((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1295(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, UInt32_t343_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t308 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, UInt32_t343_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_18 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m1304((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1295(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, Decimal_t354_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t308 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t354 *)((Decimal_t354 *)UnBox (L_22, Decimal_t354_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_23 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m1305((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m1295(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, Single_t328_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t308 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, Single_t328_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_28 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m1306((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1295(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t308 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_32 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m1307(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t349 * L_34 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1308((&V_6), _stringLiteral197, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1295(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern TypeInfo* SByte_t356_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t333_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t357_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t358_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t343_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t352_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t328_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t351_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t354_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_IsNumeric_m980 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Byte_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		Int16_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(156);
		UInt16_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		UInt32_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		Int64_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		UInt64_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Single_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		Double_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Decimal_t354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, SByte_t356_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, Byte_t333_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Int16_t357_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, UInt16_t358_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, Int32_t327_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, UInt32_t343_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, Int64_t352_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, UInt64_t355_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, Single_t328_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, Double_t351_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t354_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t199_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m981 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t199_StaticFields*)SimpleJson_t199_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t198 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m982(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t198 * L_3 = L_2;
		((SimpleJson_t199_StaticFields*)SimpleJson_t199_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t199_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var;
extern "C" PocoJsonSerializerStrategy_t198 * SimpleJson_get_PocoJsonSerializerStrategy_m982 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		s_Il2CppMethodIntialized = true;
	}
	PocoJsonSerializerStrategy_t198 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t198 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t198 * L_0 = ((SimpleJson_t199_StaticFields*)SimpleJson_t199_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t198 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t198 * L_2 = (PocoJsonSerializerStrategy_t198 *)il2cpp_codegen_object_new (PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m983(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t198 * L_3 = L_2;
		((SimpleJson_t199_StaticFields*)SimpleJson_t199_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// System.Type
#include "mscorlib_System_Type.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t359_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t360_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t361_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t362_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t363_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t364_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1309_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1310_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1311_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1312_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1313_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1314_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m983 (PocoJsonSerializerStrategy_t198 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		ThreadSafeDictionary_2_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		ThreadSafeDictionaryValueFactory_2_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		ThreadSafeDictionary_2_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		ThreadSafeDictionaryValueFactory_2_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ThreadSafeDictionary_2_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ThreadSafeDictionaryValueFactory_2__ctor_m1309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		ThreadSafeDictionary_2__ctor_m1310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		ThreadSafeDictionaryValueFactory_2__ctor_m1311_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		ThreadSafeDictionary_2__ctor_m1312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		ThreadSafeDictionaryValueFactory_2__ctor_m1313_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		ThreadSafeDictionary_2__ctor_m1314_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t359 * L_1 = (ThreadSafeDictionaryValueFactory_2_t359 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t359_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1309(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1309_MethodInfo_var);
		ThreadSafeDictionary_2_t360 * L_2 = (ThreadSafeDictionary_2_t360 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t360_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1310(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1310_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t361 * L_4 = (ThreadSafeDictionaryValueFactory_2_t361 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t361_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1311(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1311_MethodInfo_var);
		ThreadSafeDictionary_2_t362 * L_5 = (ThreadSafeDictionary_2_t362 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t362_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1312(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1312_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t363 * L_7 = (ThreadSafeDictionaryValueFactory_2_t363 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t363_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1313(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1313_MethodInfo_var);
		ThreadSafeDictionary_2_t364 * L_8 = (ThreadSafeDictionary_2_t364 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t364_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1314(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1314_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t327_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern Il2CppCodeGenString* _stringLiteral200;
extern "C" void PocoJsonSerializerStrategy__cctor_m984 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t327_0_0_0_var = il2cpp_codegen_type_from_index(35);
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t203* L_0 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Int32_t327_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t204* L_2 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral198);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)_stringLiteral198;
		StringU5BU5D_t204* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, _stringLiteral199);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)_stringLiteral199;
		StringU5BU5D_t204* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral200);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)_stringLiteral200;
		((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m985 (PocoJsonSerializerStrategy_t198 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t208 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m986 (PocoJsonSerializerStrategy_t198 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t203* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var);
		TypeU5BU5D_t203* L_3 = ((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var);
		TypeU5BU5D_t203* L_4 = ((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		ConstructorDelegate_t208 * L_5 = ReflectionUtils_GetContructor_m1022(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t365_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t314_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t366_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t310_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t315_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t367_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1316_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m987 (PocoJsonSerializerStrategy_t198 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		IEnumerable_1_t314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		IEnumerator_1_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		IDictionary_2_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		IEnumerable_1_t315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		IEnumerator_1_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		Dictionary_2__ctor_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t365 * L_0 = (Dictionary_2_t365 *)il2cpp_codegen_object_new (Dictionary_2_t365_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1316(L_0, /*hidden argument*/Dictionary_2__ctor_m1316_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m1018(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t314_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t366_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m1020(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			GetDelegate_t205 * L_19 = ReflectionUtils_GetGetMethod_m1025(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t205 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t310_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m1019(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t315_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t367_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			GetDelegate_t205 * L_38 = ReflectionUtils_GetGetMethod_m1026(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t205 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t310_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t368_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t314_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t366_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t311_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t315_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t367_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1317_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m1318_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m988 (PocoJsonSerializerStrategy_t198 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		IEnumerable_1_t314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		IEnumerator_1_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		IDictionary_2_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		IEnumerable_1_t315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		IEnumerator_1_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		Dictionary_2__ctor_m1317_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		KeyValuePair_2__ctor_m1318_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t368 * L_0 = (Dictionary_2_t368 *)il2cpp_codegen_object_new (Dictionary_2_t368_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1317(L_0, /*hidden argument*/Dictionary_2__ctor_m1317_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m1018(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t314_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t366_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m1021(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			SetDelegate_t206 * L_21 = ReflectionUtils_GetSetMethod_m1029(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t369  L_22 = {0};
			KeyValuePair_2__ctor_m1318(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m1318_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t369  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t311_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m1019(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t315_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t367_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
			SetDelegate_t206 * L_45 = ReflectionUtils_GetSetMethod_m1030(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t369  L_46 = {0};
			KeyValuePair_2__ctor_m1318(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m1318_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t369  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t311_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m989 (PocoJsonSerializerStrategy_t198 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t351_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m990 (PocoJsonSerializerStrategy_t198 * __this, Enum_t312 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		Double_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t312 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_1 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m1307(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t351_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t60_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t371_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t191_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t312_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral201;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m991 (PocoJsonSerializerStrategy_t198 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		DateTimeOffset_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(183);
		Guid_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		Uri_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Enum_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t312 * V_1 = {0};
	DateTime_t60  V_2 = {0};
	DateTime_t60  V_3 = {0};
	DateTimeOffset_t370  V_4 = {0};
	DateTimeOffset_t370  V_5 = {0};
	Guid_t371  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t60 *)((DateTime_t60 *)UnBox (L_2, DateTime_t60_il2cpp_TypeInfo_var))));
		DateTime_t60  L_3 = DateTime_ToUniversalTime_m1319((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_4 = ((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_6 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m1320((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t370_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t370 *)((DateTimeOffset_t370 *)UnBox (L_10, DateTimeOffset_t370_il2cpp_TypeInfo_var))));
		DateTimeOffset_t370  L_11 = DateTimeOffset_ToUniversalTime_m1321((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_12 = ((PocoJsonSerializerStrategy_t198_StaticFields*)PocoJsonSerializerStrategy_t198_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_14 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m1322((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t371_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t371 *)((Guid_t371 *)UnBox (L_18, Guid_t371_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m1323((&V_6), _stringLiteral201, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t191 *)IsInst(L_20, Uri_t191_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t312 *)IsInst(L_24, Enum_t312_il2cpp_TypeInfo_var));
		Enum_t312 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t312 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t312 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t196_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t201_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t373_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t374_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t297_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1324_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m1325_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral202;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m992 (PocoJsonSerializerStrategy_t198 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		JsonObject_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		IDictionary_2_t201_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		IEnumerable_1_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		IEnumerator_1_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		IDictionary_2_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		KeyValuePair_2_get_Value_m1324_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		KeyValuePair_2_get_Key_m1325_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t372  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral202, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1206(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t196 * L_7 = (JsonObject_t196 *)il2cpp_codegen_object_new (JsonObject_t196_il2cpp_TypeInfo_var);
		JsonObject__ctor_m945(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t201_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t373_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t372  L_14 = (KeyValuePair_2_t372 )InterfaceFuncInvoker0< KeyValuePair_2_t372  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t374_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t205 * L_15 = KeyValuePair_2_get_Value_m1324((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1324_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m1325((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1325_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t205 * L_19 = KeyValuePair_2_get_Value_m1324((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1324_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = GetDelegate_Invoke_m994(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t297_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m993 (GetDelegate_t205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m994 (GetDelegate_t205 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m994((GetDelegate_t205 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t205(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m995 (GetDelegate_t205 * __this, Object_t * ___source, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m996 (GetDelegate_t205 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m997 (SetDelegate_t206 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m998 (SetDelegate_t206 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m998((SetDelegate_t206 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t206(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m999 (SetDelegate_t206 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m1000 (SetDelegate_t206 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m1001 (ConstructorDelegate_t208 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m1002 (ConstructorDelegate_t208 * __this, ObjectU5BU5D_t207* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m1002((ConstructorDelegate_t208 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t207* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t207* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t208(Il2CppObject* delegate, ObjectU5BU5D_t207* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m1003 (ConstructorDelegate_t208 * __this, ObjectU5BU5D_t207* ___args, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m1004 (ConstructorDelegate_t208 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1005 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1006 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * __this, ObjectU5BU5D_t207* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t209 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t207* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m1326(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1007 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1008 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t207* L_2 = ((ReflectionUtils_t215_StaticFields*)ReflectionUtils_t215_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t207* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1009 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1010 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1011 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1012 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t207* L_2 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t207* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1013 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1014 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m1015 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t215_StaticFields*)ReflectionUtils_t215_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m1016 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t375* L_1 = (ConstructorInfoU5BU5D_t375*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t375* >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t313_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t378_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t209 * ReflectionUtils_GetConstructorInfo_m1017 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t203* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		IEnumerable_1_t313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		IEnumerator_1_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t209 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t376* V_5 = {0};
	ParameterInfo_t377 * V_6 = {0};
	ParameterInfoU5BU5D_t376* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t209 * V_9 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m1016(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t313_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t209 * L_5 = (ConstructorInfo_t209 *)InterfaceFuncInvoker0< ConstructorInfo_t209 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t378_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t209 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t376* L_7 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t203* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t376* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t209 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t376* L_11 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t376* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t377 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t203* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t376* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t209 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t209 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t209 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m1018 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t379* L_1 = (PropertyInfoU5BU5D_t379*)VirtFuncInvoker1< PropertyInfoU5BU5D_t379*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m1019 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t380* L_1 = (FieldInfoU5BU5D_t380*)VirtFuncInvoker1< FieldInfoU5BU5D_t380*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m1020 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m1021 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t208 * ReflectionUtils_GetContructor_m1022 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t203* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t203* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		ConstructorDelegate_t208 * L_2 = ReflectionUtils_GetConstructorByReflection_m1024(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1006_MethodInfo_var;
extern "C" ConstructorDelegate_t208 * ReflectionUtils_GetConstructorByReflection_m1023 (Object_t * __this /* static, unused */, ConstructorInfo_t209 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		ConstructorDelegate_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1006_MethodInfo_var = il2cpp_codegen_method_info_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1005(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * L_1 = V_0;
		ConstructorInfo_t209 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1006_MethodInfo_var };
		ConstructorDelegate_t208 * L_5 = (ConstructorDelegate_t208 *)il2cpp_codegen_object_new (ConstructorDelegate_t208_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m1001(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t208 * ReflectionUtils_GetConstructorByReflection_m1024 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t203* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t209 * V_0 = {0};
	ConstructorDelegate_t208 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t203* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		ConstructorInfo_t209 * L_2 = ReflectionUtils_GetConstructorInfo_m1017(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t209 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t208 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t209 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		ConstructorDelegate_t208 * L_5 = ReflectionUtils_GetConstructorByReflection_m1023(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t205 * ReflectionUtils_GetGetMethod_m1025 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		GetDelegate_t205 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1027(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t205 * ReflectionUtils_GetGetMethod_m1026 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		GetDelegate_t205 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1028(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t205_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1008_MethodInfo_var;
extern "C" GetDelegate_t205 * ReflectionUtils_GetGetMethodByReflection_m1027 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		GetDelegate_t205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1008_MethodInfo_var = il2cpp_codegen_method_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1007(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m1020(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1008_MethodInfo_var };
		GetDelegate_t205 * L_6 = (GetDelegate_t205 *)il2cpp_codegen_object_new (GetDelegate_t205_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m993(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t205_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1010_MethodInfo_var;
extern "C" GetDelegate_t205 * ReflectionUtils_GetGetMethodByReflection_m1028 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		GetDelegate_t205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1010_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1009(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1010_MethodInfo_var };
		GetDelegate_t205 * L_5 = (GetDelegate_t205 *)il2cpp_codegen_object_new (GetDelegate_t205_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m993(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t206 * ReflectionUtils_GetSetMethod_m1029 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		SetDelegate_t206 * L_1 = ReflectionUtils_GetSetMethodByReflection_m1031(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t206 * ReflectionUtils_GetSetMethod_m1030 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		SetDelegate_t206 * L_1 = ReflectionUtils_GetSetMethodByReflection_m1032(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t215_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t206_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1012_MethodInfo_var;
extern "C" SetDelegate_t206 * ReflectionUtils_GetSetMethodByReflection_m1031 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		ReflectionUtils_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SetDelegate_t206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1012_MethodInfo_var = il2cpp_codegen_method_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1011(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t215_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m1021(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1012_MethodInfo_var };
		SetDelegate_t206 * L_6 = (SetDelegate_t206 *)il2cpp_codegen_object_new (SetDelegate_t206_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m997(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t206_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1014_MethodInfo_var;
extern "C" SetDelegate_t206 * ReflectionUtils_GetSetMethodByReflection_m1032 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		SetDelegate_t206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1014_MethodInfo_var = il2cpp_codegen_method_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1013(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1014_MethodInfo_var };
		SetDelegate_t206 * L_5 = (SetDelegate_t206 *)il2cpp_codegen_object_new (SetDelegate_t206_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m997(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m1033 (WrapperlessIcall_t216 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m1034 (IL2CPPStructAlignmentAttribute_t217 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t218_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t221_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t219_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t220_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m1035 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		AttributeHelperEngine_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		ExecuteInEditModeU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		RequireComponentU5BU5D_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t221_StaticFields*)AttributeHelperEngine_t221_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t218*)SZArrayNew(DisallowMultipleComponentU5BU5D_t218_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t221_StaticFields*)AttributeHelperEngine_t221_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t219*)SZArrayNew(ExecuteInEditModeU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t221_StaticFields*)AttributeHelperEngine_t221_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t220*)SZArrayNew(RequireComponentU5BU5D_t220_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t222_0_0_0_var;
extern TypeInfo* Stack_1_t381_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m1327_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m1328_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m1329_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1036 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(205);
		DisallowMultipleComponent_t222_0_0_0_var = il2cpp_codegen_type_from_index(199);
		Stack_1_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Stack_1__ctor_m1327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		Stack_1_Push_m1328_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		Stack_1_Pop_m1329_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t381 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t207* V_2 = {0};
	{
		Stack_1_t381 * L_0 = (Stack_1_t381 *)il2cpp_codegen_object_new (Stack_1_t381_il2cpp_TypeInfo_var);
		Stack_1__ctor_m1327(L_0, /*hidden argument*/Stack_1__ctor_m1327_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t381 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m1328(L_1, L_2, /*hidden argument*/Stack_1_Push_m1328_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t381 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m1329(L_8, /*hidden argument*/Stack_1_Pop_m1329_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t207* L_12 = (ObjectU5BU5D_t207*)VirtFuncInvoker2< ObjectU5BU5D_t207*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t207* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t381 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t223_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t223_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t382_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1330_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m1331_MethodInfo_var;
extern "C" TypeU5BU5D_t203* AttributeHelperEngine_GetRequiredComponents_m1037 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t223_0_0_0_var = il2cpp_codegen_type_from_index(204);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(205);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		RequireComponent_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		List_1_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		List_1__ctor_m1330_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		List_1_ToArray_m1331_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t382 * V_0 = {0};
	ObjectU5BU5D_t207* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t223 * V_3 = {0};
	TypeU5BU5D_t203* V_4 = {0};
	{
		V_0 = (List_1_t382 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t223_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t207* L_2 = (ObjectU5BU5D_t207*)VirtFuncInvoker2< ObjectU5BU5D_t207*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t207* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t223 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t223_il2cpp_TypeInfo_var));
		List_1_t382 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t207* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t203* L_11 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 3));
		RequireComponent_t223 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t203* L_14 = L_11;
		RequireComponent_t223 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t203* L_17 = L_14;
		RequireComponent_t223 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t203* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t382 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t382 * L_22 = (List_1_t382 *)il2cpp_codegen_object_new (List_1_t382_il2cpp_TypeInfo_var);
		List_1__ctor_m1330(L_22, /*hidden argument*/List_1__ctor_m1330_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t223 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t382 * L_25 = V_0;
		RequireComponent_t223 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t223 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t382 * L_30 = V_0;
		RequireComponent_t223 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t223 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t382 * L_35 = V_0;
		RequireComponent_t223 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t207* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t382 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t203*)NULL;
	}

IL_00f7:
	{
		List_1_t382 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t203* L_48 = List_1_ToArray_m1331(L_47, /*hidden argument*/List_1_ToArray_m1331_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t225_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m1038 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t225_0_0_0_var = il2cpp_codegen_type_from_index(202);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(205);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t207* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t225_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t207* L_2 = (ObjectU5BU5D_t207*)VirtFuncInvoker2< ObjectU5BU5D_t207*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t207* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m1039 (AddComponentMenu_t224 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m1040 (ExecuteInEditMode_t225 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m1041 (SetupCoroutine_t226 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m1042 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t207* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t207*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t207* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1206(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t207* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t383 *, Object_t *, ObjectU5BU5D_t207*, ParameterModifierU5BU5D_t384*, CultureInfo_t349 *, StringU5BU5D_t204* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t383 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL, (CultureInfo_t349 *)NULL, (StringU5BU5D_t204*)(StringU5BU5D_t204*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m1043 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t207* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t207*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t207* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t207* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t383 *, Object_t *, ObjectU5BU5D_t207*, ParameterModifierU5BU5D_t384*, CultureInfo_t349 *, StringU5BU5D_t204* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t383 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL, (CultureInfo_t349 *)NULL, (StringU5BU5D_t204*)(StringU5BU5D_t204*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m1044 (WritableAttribute_t227 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m1045 (AssemblyIsEditorAssembly_t228 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t239_il2cpp_TypeInfo_var;
extern "C" UserProfile_t239 * GcUserProfileData_ToUserProfile_m1046 (GcUserProfileData_t229 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t41 * L_3 = (__this->___image_3);
		UserProfile_t239 * L_4 = (UserProfile_t239 *)il2cpp_codegen_object_new (UserProfile_t239_il2cpp_TypeInfo_var);
		UserProfile__ctor_m1064(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern Il2CppCodeGenString* _stringLiteral203;
extern "C" void GcUserProfileData_AddToArray_m1047 (GcUserProfileData_t229 * __this, UserProfileU5BU5D_t30** ___array, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t30** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t30**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t30**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t30** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t239 * L_5 = GcUserProfileData_ToUserProfile_m1046(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t30**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t30**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t30**)L_3)), L_5);
		*((UserProfile_t239 **)(UserProfile_t239 **)SZArrayLdElema((*((UserProfileU5BU5D_t30**)L_3)), L_4)) = (UserProfile_t239 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m589(NULL /*static, unused*/, _stringLiteral203, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t241_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t241 * GcAchievementDescriptionData_ToAchievementDescription_m1048 (GcAchievementDescriptionData_t230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t41 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t41 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t41 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t41 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t241 * L_7 = (AchievementDescription_t241 *)il2cpp_codegen_object_new (AchievementDescription_t241_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m1084(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t240_il2cpp_TypeInfo_var;
extern "C" Achievement_t240 * GcAchievementData_ToAchievement_m1049 (GcAchievementData_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t60  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m1332((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t60  L_5 = DateTime_AddSeconds_m1333((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t240 * L_6 = (Achievement_t240 *)il2cpp_codegen_object_new (Achievement_t240_il2cpp_TypeInfo_var);
		Achievement__ctor_m1073(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t231_marshal(const GcAchievementData_t231& unmarshaled, GcAchievementData_t231_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t231_marshal_back(const GcAchievementData_t231_marshaled& marshaled, GcAchievementData_t231& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t231_marshal_cleanup(GcAchievementData_t231_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t242_il2cpp_TypeInfo_var;
extern "C" Score_t242 * GcScoreData_ToScore_m1050 (GcScoreData_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t60  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m1332((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t60  L_5 = DateTime_AddSeconds_m1333((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t242 * L_8 = (Score_t242 *)il2cpp_codegen_object_new (Score_t242_il2cpp_TypeInfo_var);
		Score__ctor_m1095(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t232_marshal(const GcScoreData_t232& unmarshaled, GcScoreData_t232_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t232_marshal_back(const GcScoreData_t232_marshaled& marshaled, GcScoreData_t232& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t232_marshal_cleanup(GcScoreData_t232_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"



// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m1051 (Resolution_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m1052 (Resolution_t233 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m1053 (Resolution_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m1054 (Resolution_t233 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m1055 (Resolution_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m1056 (Resolution_t233 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral204;
extern "C" String_t* Resolution_ToString_m1057 (Resolution_t233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t207* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m553(NULL /*static, unused*/, _stringLiteral204, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"



// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t30_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m1058 (LocalUser_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m1063(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t238*)((UserProfileU5BU5D_t30*)SZArrayNew(UserProfileU5BU5D_t30_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m1059 (LocalUser_t31 * __this, IUserProfileU5BU5D_t238* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t238* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m1060 (LocalUser_t31 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m1061 (LocalUser_t31 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m1062 (LocalUser_t31 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t41_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" void UserProfile__ctor_m1063 (UserProfile_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = _stringLiteral205;
		__this->___m_ID_1 = _stringLiteral8;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t41 * L_0 = (Texture2D_t41 *)il2cpp_codegen_object_new (Texture2D_t41_il2cpp_TypeInfo_var);
		Texture2D__ctor_m141(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m1064 (UserProfile_t239 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t41 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t41 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t250_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral206;
extern "C" String_t* UserProfile_ToString_m1065 (UserProfile_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		UserState_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t207* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t207* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t250_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1207(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m1066 (UserProfile_t239 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m1067 (UserProfile_t239 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m1068 (UserProfile_t239 * __this, Texture2D_t41 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t41 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m1069 (UserProfile_t239 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m1070 (UserProfile_t239 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m1071 (UserProfile_t239 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m1072 (UserProfile_t239 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m1073 (Achievement_t240 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t60  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t60  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t60_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m1074 (Achievement_t240 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t60_il2cpp_TypeInfo_var);
		DateTime_t60  L_2 = ((DateTime_t60_StaticFields*)DateTime_t60_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern Il2CppCodeGenString* _stringLiteral207;
extern "C" void Achievement__ctor_m1075 (Achievement_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m1074(__this, _stringLiteral207, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t351_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral206;
extern "C" String_t* Achievement_ToString_m1076 (Achievement_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Double_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		DateTime_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t351_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t207* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t207* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t207* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_18 = L_17;
		DateTime_t60  L_19 = (DateTime_t60 )VirtFuncInvoker0< DateTime_t60  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t60  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t60_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1207(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m1077 (Achievement_t240 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m1078 (Achievement_t240 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m1079 (Achievement_t240 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m1080 (Achievement_t240 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m1081 (Achievement_t240 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m1082 (Achievement_t240 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t60  Achievement_get_lastReportedDate_m1083 (Achievement_t240 * __this, const MethodInfo* method)
{
	{
		DateTime_t60  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m1084 (AchievementDescription_t241 * __this, String_t* ___id, String_t* ___title, Texture2D_t41 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t41 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral206;
extern "C" String_t* AchievementDescription_ToString_m1085 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t207* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t207* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t207* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t207* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t207* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t207* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1207(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m1086 (AchievementDescription_t241 * __this, Texture2D_t41 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t41 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m1087 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m1088 (AchievementDescription_t241 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m1089 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m1090 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m1091 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m1092 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m1093 (AchievementDescription_t241 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" void Score__ctor_m1094 (Score_t242 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t60_il2cpp_TypeInfo_var);
		DateTime_t60  L_2 = DateTime_get_Now_m1200(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m1095(__this, L_0, L_1, _stringLiteral8, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m1095 (Score_t242 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t60  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t60  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern "C" String_t* Score_ToString_m1096 (Score_t242 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Int64_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		DateTime_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral208);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)_stringLiteral208;
		ObjectU5BU5D_t207* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t207* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral209);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)_stringLiteral209;
		ObjectU5BU5D_t207* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t352_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t207* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral210);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)_stringLiteral210;
		ObjectU5BU5D_t207* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t207* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral211);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)_stringLiteral211;
		ObjectU5BU5D_t207* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t207* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral212);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)_stringLiteral212;
		ObjectU5BU5D_t207* L_17 = L_16;
		DateTime_t60  L_18 = (__this->___m_Date_0);
		DateTime_t60  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t60_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1207(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m1097 (Score_t242 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m1098 (Score_t242 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m1099 (Score_t242 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m1100 (Score_t242 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t242_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t324_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral213;
extern "C" void Leaderboard__ctor_m1101 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		ScoreU5BU5D_t324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral213);
		Range_t245  L_0 = {0};
		Range__ctor_m1122(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t245  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t242 * L_1 = (Score_t242 *)il2cpp_codegen_object_new (Score_t242_il2cpp_TypeInfo_var);
		Score__ctor_m1094(L_1, _stringLiteral213, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t244*)((ScoreU5BU5D_t324*)SZArrayNew(ScoreU5BU5D_t324_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral213;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t340_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t343_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t251_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t252_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral218;
extern Il2CppCodeGenString* _stringLiteral219;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral222;
extern "C" String_t* Leaderboard_ToString_m1102 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Boolean_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		UInt32_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		UserScope_t251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		TimeScope_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral222 = il2cpp_codegen_string_literal_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	Range_t245  V_0 = {0};
	Range_t245  V_1 = {0};
	{
		ObjectU5BU5D_t207* L_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral214);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)_stringLiteral214;
		ObjectU5BU5D_t207* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t207* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral215);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)_stringLiteral215;
		ObjectU5BU5D_t207* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t207* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t207* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t340_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t207* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral217);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)_stringLiteral217;
		ObjectU5BU5D_t207* L_12 = L_11;
		Range_t245  L_13 = (Range_t245 )VirtFuncInvoker0< Range_t245  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t207* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral186);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)_stringLiteral186;
		ObjectU5BU5D_t207* L_18 = L_17;
		Range_t245  L_19 = (Range_t245 )VirtFuncInvoker0< Range_t245  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t207* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral218);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)_stringLiteral218;
		ObjectU5BU5D_t207* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t343_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t207* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral219);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)_stringLiteral219;
		ObjectU5BU5D_t207* L_29 = L_28;
		IScoreU5BU5D_t244* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t207* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral220);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)_stringLiteral220;
		ObjectU5BU5D_t207* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t251_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t207* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral221);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)_stringLiteral221;
		ObjectU5BU5D_t207* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t252_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t207* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral222);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)_stringLiteral222;
		ObjectU5BU5D_t207* L_44 = L_43;
		StringU5BU5D_t204* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m1207(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m1103 (Leaderboard_t34 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m1104 (Leaderboard_t34 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m1105 (Leaderboard_t34 * __this, IScoreU5BU5D_t244* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t244* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m1106 (Leaderboard_t34 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t204* Leaderboard_GetUserFilter_m1107 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t204* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m1108 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m1109 (Leaderboard_t34 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m1110 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m1111 (Leaderboard_t34 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t245  Leaderboard_get_range_m1112 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	{
		Range_t245  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m1113 (Leaderboard_t34 * __this, Range_t245  ___value, const MethodInfo* method)
{
	{
		Range_t245  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m1114 (Leaderboard_t34 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m1115 (Leaderboard_t34 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m1116 (HitInfo_t246 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t125 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m645(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m1117 (Object_t * __this /* static, unused */, HitInfo_t246  ___lhs, HitInfo_t246  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t125 * L_0 = ((&___lhs)->___target_0);
		GameObject_t125 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m640(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t119 * L_3 = ((&___lhs)->___camera_1);
		Camera_t119 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m640(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m1118 (Object_t * __this /* static, unused */, HitInfo_t246  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t125 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m641(NULL /*static, unused*/, L_0, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t119 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m641(NULL /*static, unused*/, L_2, (Object_t13 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
struct Component_t38;
struct GUILayer_t46;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t38;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m1335_gshared (Component_t38 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1335(__this, method) (( Object_t * (*) (Component_t38 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1335_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t46_m1334(__this, method) (( GUILayer_t46 * (*) (Component_t38 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1335_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t247_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t246_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t249_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m1119 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		HitInfo_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		SendMouseEvents_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t246  V_0 = {0};
	HitInfo_t246  V_1 = {0};
	HitInfo_t246  V_2 = {0};
	HitInfo_t246  V_3 = {0};
	HitInfo_t246  V_4 = {0};
	HitInfo_t246  V_5 = {0};
	HitInfo_t246  V_6 = {0};
	HitInfo_t246  V_7 = {0};
	HitInfo_t246  V_8 = {0};
	{
		HitInfoU5BU5D_t247* L_0 = ((HitInfoU5BU5D_t247*)SZArrayNew(HitInfoU5BU5D_t247_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t246  L_1 = V_0;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t247* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t246  L_3 = V_1;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t247* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t246  L_5 = V_2;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t247* L_6 = ((HitInfoU5BU5D_t247*)SZArrayNew(HitInfoU5BU5D_t247_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t246  L_7 = V_3;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t247* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t246  L_9 = V_4;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t247* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t246  L_11 = V_5;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t247* L_12 = ((HitInfoU5BU5D_t247*)SZArrayNew(HitInfoU5BU5D_t247_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t246  L_13 = V_6;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t247* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t246  L_15 = V_7;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t247* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t246  L_17 = V_8;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t249_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t248_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t246_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t98_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t46_m1334_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m1120 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		SendMouseEvents_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		CameraU5BU5D_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		HitInfo_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		Mathf_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Component_GetComponent_TisGUILayer_t46_m1334_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t90  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t119 * V_3 = {0};
	CameraU5BU5D_t248* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t51  V_6 = {0};
	GUILayer_t46 * V_7 = {0};
	GUIElement_t45 * V_8 = {0};
	Ray_t96  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t125 * V_12 = {0};
	GameObject_t125 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t246  V_15 = {0};
	Vector3_t90  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		Vector3_t90  L_0 = Input_get_mousePosition_m628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m579(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		CameraU5BU5D_t248* L_2 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		CameraU5BU5D_t248* L_3 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t248*)SZArrayNew(CameraU5BU5D_t248_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		CameraU5BU5D_t248* L_6 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m580(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_7 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t246  L_9 = V_15;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_12 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		CameraU5BU5D_t248* L_14 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t248* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t119 **)(Camera_t119 **)SZArrayLdElema(L_15, L_17));
		Camera_t119 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m640(NULL /*static, unused*/, L_18, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t119 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t42 * L_22 = Camera_get_targetTexture_m575(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m641(NULL /*static, unused*/, L_22, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t119 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t51  L_25 = Camera_get_pixelRect_m573(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t90  L_26 = V_0;
		bool L_27 = Rect_Contains_m395((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t119 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t46 * L_29 = Component_GetComponent_TisGUILayer_t46_m1334(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t46_m1334_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t46 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m639(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t46 * L_32 = V_7;
		Vector3_t90  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t45 * L_34 = GUILayer_HitTest_m143(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t45 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m639(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_37 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t45 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t125 * L_39 = Component_get_gameObject_m643(L_38, /*hidden argument*/NULL);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t247* L_40 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t119 * L_41 = V_3;
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_42 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t125 *)NULL;
		HitInfoU5BU5D_t247* L_43 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t119 *)NULL;
	}

IL_0141:
	{
		Camera_t119 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m572(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t119 * L_46 = V_3;
		Vector3_t90  L_47 = V_0;
		NullCheck(L_46);
		Ray_t96  L_48 = Camera_ScreenPointToRay_m577(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t90  L_49 = Ray_get_direction_m478((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_2);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t98_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m491(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t119 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m570(L_53, /*hidden argument*/NULL);
		Camera_t119 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m569(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t98_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t119 * L_59 = V_3;
		Ray_t96  L_60 = V_9;
		float L_61 = V_11;
		Camera_t119 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m571(L_62, /*hidden argument*/NULL);
		Camera_t119 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m572(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t125 * L_66 = Camera_RaycastTry_m584(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t125 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m641(NULL /*static, unused*/, L_67, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_69 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t125 * L_70 = V_12;
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t247* L_71 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t119 * L_72 = V_3;
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t119 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m576(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t119 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m576(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_77 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t125 *)NULL;
		HitInfoU5BU5D_t247* L_78 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t119 *)NULL;
	}

IL_0226:
	{
		Camera_t119 * L_79 = V_3;
		Ray_t96  L_80 = V_9;
		float L_81 = V_11;
		Camera_t119 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m571(L_82, /*hidden argument*/NULL);
		Camera_t119 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m572(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t125 * L_86 = Camera_RaycastTry2D_m586(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t125 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m641(NULL /*static, unused*/, L_87, (Object_t13 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_89 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t125 * L_90 = V_13;
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t247* L_91 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t119 * L_92 = V_3;
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t119 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m576(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t119 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m576(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_97 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t125 *)NULL;
		HitInfoU5BU5D_t247* L_98 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t119 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t248* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_103 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m1121(NULL /*static, unused*/, L_102, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_107 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t249_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t246_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral223;
extern Il2CppCodeGenString* _stringLiteral224;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral226;
extern Il2CppCodeGenString* _stringLiteral227;
extern Il2CppCodeGenString* _stringLiteral228;
extern Il2CppCodeGenString* _stringLiteral229;
extern "C" void SendMouseEvents_SendEvents_m1121 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t246  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		SendMouseEvents_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		HitInfo_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		_stringLiteral223 = il2cpp_codegen_string_literal_from_index(223);
		_stringLiteral224 = il2cpp_codegen_string_literal_from_index(224);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral226 = il2cpp_codegen_string_literal_from_index(226);
		_stringLiteral227 = il2cpp_codegen_string_literal_from_index(227);
		_stringLiteral228 = il2cpp_codegen_string_literal_from_index(228);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t246  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m12(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m627(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t246  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_5 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t246  L_7 = ___hit;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t247* L_8 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m1116(((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_8, L_9)), _stringLiteral223, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_11 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t246  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_15 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m1117(NULL /*static, unused*/, L_14, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_18 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m1116(((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_18, L_19)), _stringLiteral224, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_20 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m1116(((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_20, L_21)), _stringLiteral225, /*hidden argument*/NULL);
		HitInfoU5BU5D_t247* L_22 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t246_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t246  L_24 = V_2;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_25 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_28 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m1116(((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_28, L_29)), _stringLiteral226, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t246  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_31 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m1117(NULL /*static, unused*/, L_30, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t246  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m1116((&___hit), _stringLiteral227, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_36 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, (*(HitInfo_t246 *)((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_39 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m1116(((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_39, L_40)), _stringLiteral228, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t246  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m1118(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m1116((&___hit), _stringLiteral229, /*hidden argument*/NULL);
		HitInfo_SendMessage_m1116((&___hit), _stringLiteral227, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t249_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t247* L_43 = ((SendMouseEvents_t249_StaticFields*)SendMouseEvents_t249_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t246  L_45 = ___hit;
		*((HitInfo_t246 *)(HitInfo_t246 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m1122 (Range_t245 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m1123 (SliderState_t253 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m1124 (StackTraceUtility_t254 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m1125 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m1126 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t316_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m1127 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t316 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t316 * L_0 = (StackTrace_t316 *)il2cpp_codegen_object_new (StackTrace_t316_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1336(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t316 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m1132(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m1233(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral230;
extern Il2CppCodeGenString* _stringLiteral231;
extern Il2CppCodeGenString* _stringLiteral232;
extern Il2CppCodeGenString* _stringLiteral233;
extern Il2CppCodeGenString* _stringLiteral234;
extern Il2CppCodeGenString* _stringLiteral235;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m1128 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral230 = il2cpp_codegen_string_literal_from_index(230);
		_stringLiteral231 = il2cpp_codegen_string_literal_from_index(231);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		_stringLiteral233 = il2cpp_codegen_string_literal_from_index(233);
		_stringLiteral234 = il2cpp_codegen_string_literal_from_index(234);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m1238(L_1, _stringLiteral230, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m1238(L_3, _stringLiteral231, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m1238(L_5, _stringLiteral232, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m1238(L_7, _stringLiteral233, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m1238(L_9, _stringLiteral234, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m1238(L_11, _stringLiteral235, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m1129 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m1130(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m1209(NULL /*static, unused*/, L_3, _stringLiteral28, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t74_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t308_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t316_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral236;
extern Il2CppCodeGenString* _stringLiteral237;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral238;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m1130 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		StringBuilder_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		StackTrace_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		_stringLiteral236 = il2cpp_codegen_string_literal_from_index(236);
		_stringLiteral237 = il2cpp_codegen_string_literal_from_index(237);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral238 = il2cpp_codegen_string_literal_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t74 * V_0 = {0};
	StringBuilder_t308 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t316 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t320 * L_1 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_1, _stringLiteral236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t74 *)IsInst(L_2, Exception_t74_il2cpp_TypeInfo_var));
		Exception_t74 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t320 * L_4 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_4, _stringLiteral237, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t74 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t74 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1182(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t308 * L_10 = (StringBuilder_t308 *)il2cpp_codegen_object_new (StringBuilder_t308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1289(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1182(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t74 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t74 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1209(NULL /*static, unused*/, L_19, _stringLiteral28, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t74 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t74 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t74 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m1224(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1182(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1205(NULL /*static, unused*/, L_33, _stringLiteral88, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1205(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t74 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t74 * L_41 = (Exception_t74 *)VirtFuncInvoker0< Exception_t74 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral238, L_42, _stringLiteral28, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t74 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t74 * L_46 = (Exception_t74 *)VirtFuncInvoker0< Exception_t74 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t74 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t308 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1205(NULL /*static, unused*/, L_49, _stringLiteral28, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m1295(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t316 * L_51 = (StackTrace_t316 *)il2cpp_codegen_object_new (StackTrace_t316_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1336(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t308 * L_52 = V_1;
		StackTrace_t316 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m1132(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m1295(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t308 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1290(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t307_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t308_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral239;
extern Il2CppCodeGenString* _stringLiteral240;
extern Il2CppCodeGenString* _stringLiteral241;
extern Il2CppCodeGenString* _stringLiteral242;
extern Il2CppCodeGenString* _stringLiteral243;
extern Il2CppCodeGenString* _stringLiteral244;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral245;
extern Il2CppCodeGenString* _stringLiteral246;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral249;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m1131 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CharU5BU5D_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		StringBuilder_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		_stringLiteral239 = il2cpp_codegen_string_literal_from_index(239);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		_stringLiteral241 = il2cpp_codegen_string_literal_from_index(241);
		_stringLiteral242 = il2cpp_codegen_string_literal_from_index(242);
		_stringLiteral243 = il2cpp_codegen_string_literal_from_index(243);
		_stringLiteral244 = il2cpp_codegen_string_literal_from_index(244);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral245 = il2cpp_codegen_string_literal_from_index(245);
		_stringLiteral246 = il2cpp_codegen_string_literal_from_index(246);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral249 = il2cpp_codegen_string_literal_from_index(249);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t204* V_0 = {0};
	StringBuilder_t308 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t307* L_3 = ((CharU5BU5D_t307*)SZArrayNew(CharU5BU5D_t307_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t204* L_4 = String_Split_m1338(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1182(L_5, /*hidden argument*/NULL);
		StringBuilder_t308 * L_7 = (StringBuilder_t308 *)il2cpp_codegen_object_new (StringBuilder_t308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1289(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t204* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t204* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m1224((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t204* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t204* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1182(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1339(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m1238(L_24, _stringLiteral239, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m1238(L_27, _stringLiteral240, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t204* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m1128(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t204* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m1128(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m1239(L_38, _stringLiteral241, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1227(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m1239(L_44, _stringLiteral242, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m1239(L_46, _stringLiteral243, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m1239(L_48, _stringLiteral244, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m1238(L_51, _stringLiteral188, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m1340(L_53, _stringLiteral189, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m1238(L_55, _stringLiteral245, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1341(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m1239(L_59, _stringLiteral246, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m1342(L_62, _stringLiteral189, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1341(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m1343(L_73, _stringLiteral247, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m1343(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m1344(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m1345(L_82, _stringLiteral248, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1341(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1346(L_88, L_89, _stringLiteral249, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1182(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1346(L_91, L_93, _stringLiteral250, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t308 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1205(NULL /*static, unused*/, L_96, _stringLiteral28, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m1295(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t204* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t308 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1290(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t308_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t254_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral178;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral251;
extern Il2CppCodeGenString* _stringLiteral252;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral253;
extern Il2CppCodeGenString* _stringLiteral254;
extern Il2CppCodeGenString* _stringLiteral249;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m1132 (Object_t * __this /* static, unused */, StackTrace_t316 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		StackTraceUtility_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral251 = il2cpp_codegen_string_literal_from_index(251);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		_stringLiteral254 = il2cpp_codegen_string_literal_from_index(254);
		_stringLiteral249 = il2cpp_codegen_string_literal_from_index(249);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t308 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t385 * V_2 = {0};
	MethodBase_t386 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t376* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t308 * L_0 = (StringBuilder_t308 *)il2cpp_codegen_object_new (StringBuilder_t308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1289(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t316 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t385 * L_3 = (StackFrame_t385 *)VirtFuncInvoker1< StackFrame_t385 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t385 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t386 * L_5 = (MethodBase_t386 *)VirtFuncInvoker0< MethodBase_t386 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t386 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t386 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1182(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t308 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m1295(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t308 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1295(L_17, _stringLiteral178, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t308 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m1295(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t308 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1295(L_21, _stringLiteral187, /*hidden argument*/NULL);
		StringBuilder_t308 * L_22 = V_0;
		MethodBase_t386 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m1295(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t308 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1295(L_25, _stringLiteral251, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t386 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t376* L_27 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t308 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m1295(L_29, _stringLiteral252, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t308 * L_30 = V_0;
		ParameterInfoU5BU5D_t376* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m1295(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t376* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t308 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m1295(L_39, _stringLiteral250, /*hidden argument*/NULL);
		StackFrame_t385 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1191(NULL /*static, unused*/, L_44, _stringLiteral253, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1191(NULL /*static, unused*/, L_47, _stringLiteral254, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t308 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m1295(L_49, _stringLiteral249, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m1238(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t254_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1182(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1182(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t254_StaticFields*)StackTraceUtility_t254_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1182(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1227(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t308 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m1295(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t308 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m1295(L_63, _stringLiteral187, /*hidden argument*/NULL);
		StringBuilder_t308 * L_64 = V_0;
		StackFrame_t385 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m1243((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m1295(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t308 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m1295(L_68, _stringLiteral250, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t308 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m1295(L_69, _stringLiteral28, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t316 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t308 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1290(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral255;
extern "C" void UnityException__ctor_m1133 (UnityException_t255 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral255 = il2cpp_codegen_string_literal_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m1347(__this, _stringLiteral255, /*hidden argument*/NULL);
		Exception_set_HResult_m1348(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m1134 (UnityException_t255 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1347(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m1348(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m1135 (UnityException_t255 * __this, String_t* ___message, Exception_t74 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t74 * L_1 = ___innerException;
		Exception__ctor_m1349(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m1348(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m1136 (UnityException_t255 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t317 * L_0 = ___info;
		StreamingContext_t318  L_1 = ___context;
		Exception__ctor_m1350(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m1137 (SharedBetweenAnimatorsAttribute_t256 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m1138 (StateMachineBehaviour_t257 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m1139 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, AnimatorStateInfo_t140  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m1140 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, AnimatorStateInfo_t140  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m1141 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, AnimatorStateInfo_t140  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m1142 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, AnimatorStateInfo_t140  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m1143 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, AnimatorStateInfo_t140  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m1144 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m1145 (StateMachineBehaviour_t257 * __this, Animator_t146 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
