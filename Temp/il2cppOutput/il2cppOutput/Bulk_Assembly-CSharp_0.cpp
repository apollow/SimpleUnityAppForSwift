#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// cubeScript
#include "AssemblyU2DCSharp_cubeScript.h"
#ifndef _MSC_VER
#else
#endif
// cubeScript
#include "AssemblyU2DCSharp_cubeScriptMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void cubeScript::.ctor()
extern "C" void cubeScript__ctor_m0 (cubeScript_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cubeScript::Start()
extern "C" void cubeScript_Start_m1 (cubeScript_t2 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cubeScript::Update()
extern "C" void cubeScript_Update_m2 (cubeScript_t2 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cubeScript::OnGUI()
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern "C" void cubeScript_OnGUI_m3 (cubeScript_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m12(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		MeshRenderer_t1 * L_1 = (__this->___rendererr_2);
		NullCheck(L_1);
		Material_t6 * L_2 = Renderer_get_material_m13(L_1, /*hidden argument*/NULL);
		Color_t7  L_3 = Color_get_blue_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_m15(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetMouseButtonUp_m16(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		cubeScript_loadNewLevel_m4(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void cubeScript::loadNewLevel()
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void cubeScript_loadNewLevel_m4 (cubeScript_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m17(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		return;
	}
}
// sphereScript
#include "AssemblyU2DCSharp_sphereScript.h"
#ifndef _MSC_VER
#else
#endif
// sphereScript
#include "AssemblyU2DCSharp_sphereScriptMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"


// System.Void sphereScript::.ctor()
extern "C" void sphereScript__ctor_m5 (sphereScript_t4 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single sphereScript::FooPluginFunction()
extern "C" {float DEFAULT_CALL FooPluginFunction();}
extern "C" float sphereScript_FooPluginFunction_m6 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)FooPluginFunction;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FooPluginFunction'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	float _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void sphereScript::Start()
extern "C" void sphereScript_Start_m7 (sphereScript_t4 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void sphereScript::Update()
extern "C" void sphereScript_Update_m8 (sphereScript_t4 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void sphereScript::OnGUI()
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern "C" void sphereScript_OnGUI_m9 (sphereScript_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m12(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		sphereScript_FooPluginFunction_m6(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetMouseButtonUp_m16(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		sphereScript_loadNewLevel_m10(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void sphereScript::loadNewLevel()
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void sphereScript_loadNewLevel_m10 (sphereScript_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m17(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
