#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
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
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1857;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m6100 (NeutralResourcesLanguageAttribute_t1035 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		_stringLiteral1857 = il2cpp_codegen_string_literal_from_index(1857);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral1857, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

// System.Version
#include "mscorlib_System_Version.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern TypeInfo* Version_t425_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m6101 (SatelliteContractVersionAttribute_t1036 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t425 * L_1 = (Version_t425 *)il2cpp_codegen_object_new (Version_t425_il2cpp_TypeInfo_var);
		Version__ctor_m8232(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern "C" void CompilationRelaxationsAttribute__ctor_m6102 (CompilationRelaxationsAttribute_t1038 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern "C" void DefaultDependencyAttribute__ctor_m6103 (DefaultDependencyAttribute_t1039 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern "C" void StringFreezingAttribute__ctor_m6104 (StringFreezingAttribute_t1042 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern "C" void CriticalFinalizerObject__ctor_m6105 (CriticalFinalizerObject_t1045 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m6106 (CriticalFinalizerObject_t1045 * __this, const MethodInfo* method)
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
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern "C" void ReliabilityContractAttribute__ctor_m6107 (ReliabilityContractAttribute_t1046 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern "C" void ClassInterfaceAttribute__ctor_m6108 (ClassInterfaceAttribute_t1050 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"


// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern "C" void ComDefaultInterfaceAttribute__ctor_m6109 (ComDefaultInterfaceAttribute_t1052 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern "C" void DispIdAttribute__ctor_m6110 (DispIdAttribute_t1054 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m6111 (GCHandle_t1055 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0011;
		}
	}

IL_000e:
	{
		___type = 2;
	}

IL_0011:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m6117(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m6112 (GCHandle_t1055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern TypeInfo* InvalidOperationException_t580_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1858;
extern "C" Object_t * GCHandle_get_Target_m6113 (GCHandle_t1055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		_stringLiteral1858 = il2cpp_codegen_string_literal_from_index(1858);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m6112(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m4240(NULL /*static, unused*/, _stringLiteral1858, /*hidden argument*/NULL);
		InvalidOperationException_t580 * L_2 = (InvalidOperationException_t580 *)il2cpp_codegen_object_new (InvalidOperationException_t580_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2253(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m6116(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t1055  GCHandle_Alloc_m6114 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1055  L_2 = {0};
		GCHandle__ctor_m6111(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m6115 (GCHandle_t1055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m6118(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m6116 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*GCHandle_GetTarget_m6116_ftn) (int32_t);
	return  ((GCHandle_GetTarget_m6116_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTarget) (___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m6117 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef int32_t (*GCHandle_GetTargetHandle_m6117_ftn) (Object_t *, int32_t, int32_t);
	return  ((GCHandle_GetTargetHandle_m6117_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTargetHandle) (___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m6118 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*GCHandle_FreeHandle_m6118_ftn) (int32_t);
	 ((GCHandle_FreeHandle_m6118_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::FreeHandle) (___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t1055_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m6119 (GCHandle_t1055 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t1055_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(712);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t1055  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, GCHandle_t1055_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1055 *)((GCHandle_t1055 *)UnBox (L_3, GCHandle_t1055_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C" int32_t GCHandle_GetHashCode_m6120 (GCHandle_t1055 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m1196(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern "C" void InterfaceTypeAttribute__ctor_m6121 (InterfaceTypeAttribute_t1057 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern TypeInfo* Marshal_t1058_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m6122 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1058_StaticFields*)Marshal_t1058_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1326 * L_0 = Environment_get_OSVersion_m7865(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m8118(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		((Marshal_t1058_StaticFields*)Marshal_t1058_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m6123 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*Marshal_copy_from_unmanaged_m6123_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	 ((Marshal_copy_from_unmanaged_m6123_ftn)mscorlib::System::Runtime::InteropServices::Marshal::copy_from_unmanaged) (___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1058_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m6124 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t112* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t112* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1058_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m6123(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1058_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m6125 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t307* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t307* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1058_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m6123(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern Il2CppCodeGenString* _stringLiteral1859;
extern "C" void MarshalDirectiveException__ctor_m6126 (MarshalDirectiveException_t1059 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1859 = il2cpp_codegen_string_literal_from_index(1859);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m4240(NULL /*static, unused*/, _stringLiteral1859, /*hidden argument*/NULL);
		SystemException__ctor_m2397(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m1348(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MarshalDirectiveException__ctor_m6127 (MarshalDirectiveException_t1059 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t317 * L_0 = ___info;
		StreamingContext_t318  L_1 = ___context;
		SystemException__ctor_m8151(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern "C" void PreserveSigAttribute__ctor_m6128 (PreserveSigAttribute_t1060 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m6129 (SafeHandle_t802 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m6105(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m6130 (SafeHandle_t802 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t625 * L_3 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m7373(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0070:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m6131 (SafeHandle_t802 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t625 * L_3 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t625 * L_9 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m7373(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001d;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m6132 (SafeHandle_t802 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t625 * L_3 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m6133 (SafeHandle_t802 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t625 * L_3 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m7373(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_006a:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" void SafeHandle_Dispose_m6134 (SafeHandle_t802 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m2478(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m6135 (SafeHandle_t802 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SafeHandle_Close_m6130(__this, /*hidden argument*/NULL);
		goto IL_0011;
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m6136 (SafeHandle_t802 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m6137 (SafeHandle_t802 * __this, const MethodInfo* method)
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
		{
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0029;
			}
		}

IL_000b:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
			if (L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m6106(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern "C" void TypeLibImportClassAttribute__ctor_m6138 (TypeLibImportClassAttribute_t1061 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TypeLibVersionAttribute__ctor_m6139 (TypeLibVersionAttribute_t1062 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern TypeInfo* ActivationServices_t1065_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t1067_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m6140 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t1065_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(713);
		ConstructionLevelActivator_t1067_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(714);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t1065_StaticFields*)ActivationServices_t1065_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ConstructionLevelActivator_t1067 * L_1 = (ConstructionLevelActivator_t1067 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t1067_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m6146(L_1, /*hidden argument*/NULL);
		((ActivationServices_t1065_StaticFields*)ActivationServices_t1065_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivationServices_t1065_StaticFields*)ActivationServices_t1065_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern TypeInfo* IContextAttribute_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t1070_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1860;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m6141 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(715);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		UrlAttribute_t1070_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		_stringLiteral1860 = il2cpp_codegen_string_literal_from_index(1860);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t207* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1122 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t207* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		ObjectU5BU5D_t207* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t1420_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RemotingException_t1138 * L_5 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_5, _stringLiteral1860, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1070 *)IsInst(L_6, UrlAttribute_t1070_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1070 *)Castclass(L_7, UrlAttribute_t1070_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m6148(((UrlAttribute_t1070 *)Castclass(L_7, UrlAttribute_t1070_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003c:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t207* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t207* L_15 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_16 = RemotingServices_CreateClientProxy_m6481(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0058:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t1122 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m6423(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1122 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		ActivatedClientTypeEntry_t1122 * L_20 = V_4;
		ObjectU5BU5D_t207* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m6480(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0070:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t207* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m6482(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0083:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern TypeInfo* ConstructionCall_t1093_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t1066_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t1068_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t1093 * ActivationServices_CreateConstructionCall_m6142 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(720);
		AppDomainLevelActivator_t1066_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(721);
		ContextLevelActivator_t1068_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(722);
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IContextAttribute_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(715);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t1093 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t402 * V_2 = {0};
	bool V_3 = false;
	Context_t1079 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t207* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t207* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1093 * L_1 = (ConstructionCall_t1093 *)il2cpp_codegen_object_new (ConstructionCall_t1093_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m6228(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ConstructionCall_t1093 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m6140(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t1066 * L_7 = (AppDomainLevelActivator_t1066 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1066_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m6145(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t1093 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m6231(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t1093 * L_9 = V_0;
		return L_9;
	}

IL_002c:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m6140(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1068 * L_12 = (ContextLevelActivator_t1068 *)il2cpp_codegen_object_new (ContextLevelActivator_t1068_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m6147(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t402 * L_13 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t207* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		ArrayList_t402 * L_15 = V_2;
		ObjectU5BU5D_t207* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(39 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_004c:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1191(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		Context_t1079 * L_20 = Thread_get_CurrentContext_m7392(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		ArrayList_t402 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0072:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t1420_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t1079 * L_27 = V_4;
			ConstructionCall_t1093 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1079 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1420_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_3 = 0;
			goto IL_00a2;
		}

IL_0096:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0072;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_00b5;
			}
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00b5:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00bd:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t207* L_36 = (ObjectU5BU5D_t207*)VirtFuncInvoker1< ObjectU5BU5D_t207*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t207* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_010d;
	}

IL_00d2:
	{
		ObjectU5BU5D_t207* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t1420_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1079 * L_44 = V_4;
		ConstructionCall_t1093 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t1420_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1079 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1420_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t1420_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B19_0 = 0;
	}

IL_00fd:
	{
		V_3 = G_B19_0;
		ArrayList_t402 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_0107:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_010d:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t207* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0174;
		}
	}
	{
		ConstructionCall_t1093 * L_53 = V_0;
		ArrayList_t402 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t207* L_55 = (ObjectU5BU5D_t207*)VirtFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(42 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m6237(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t402 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_0132:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014d;
		}

IL_0137:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t1420_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t1093 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1420_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_014d:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0137;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x174, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_016c;
			}
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(350)
		}

IL_016c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(350)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_JUMP_TBL(0x174, IL_0174)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0174:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m2290(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1066 * L_72 = (AppDomainLevelActivator_t1066 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1066_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m6145(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_018c:
	{
		ConstructionCall_t1093 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t1093 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m6231(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t1093 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m6143 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m6143_ftn) (Type_t *);
	return  ((ActivationServices_AllocateUninitializedClassInstance_m6143_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance) (___type);
}
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
extern "C" void ActivationServices_EnableProxyActivation_m6144 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*ActivationServices_EnableProxyActivation_m6144_ftn) (Type_t *, bool);
	 ((ActivationServices_EnableProxyActivation_m6144_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation) (___type, ___enable);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m6145 (AppDomainLevelActivator_t1066 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m6146 (ConstructionLevelActivator_t1067 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m6147 (ContextLevelActivator_t1068 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m6148 (UrlAttribute_t1070 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern TypeInfo* UrlAttribute_t1070_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m6149 (UrlAttribute_t1070 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t1070_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1070 *)IsInst(L_0, UrlAttribute_t1070_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1070 *)Castclass(L_1, UrlAttribute_t1070_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m6148(((UrlAttribute_t1070 *)Castclass(L_1, UrlAttribute_t1070_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1191(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m6150 (UrlAttribute_t1070 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m1199(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m6151 (UrlAttribute_t1070 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool UrlAttribute_IsContextOK_m6152 (UrlAttribute_t1070 * __this, Context_t1079 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m6153 (ChannelInfo_t1072 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t207* L_0 = ChannelServices_GetCurrentChannelInfo_m6162(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t207* ChannelInfo_get_ChannelData_m6154 (ChannelInfo_t1072 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t1073_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1861;
extern Il2CppCodeGenString* _stringLiteral1862;
extern Il2CppCodeGenString* _stringLiteral1863;
extern "C" void ChannelServices__cctor_m6155 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		CrossContextChannel_t1073_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(724);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		_stringLiteral1861 = il2cpp_codegen_string_literal_from_index(1861);
		_stringLiteral1862 = il2cpp_codegen_string_literal_from_index(1862);
		_stringLiteral1863 = il2cpp_codegen_string_literal_from_index(1863);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1073 * L_2 = (CrossContextChannel_t1073 *)il2cpp_codegen_object_new (CrossContextChannel_t1073_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m6193(L_2, /*hidden argument*/NULL);
		((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = _stringLiteral1861;
		StringU5BU5D_t204* L_3 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, _stringLiteral1862);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)_stringLiteral1862;
		StringU5BU5D_t204* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral1863);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)_stringLiteral1863;
		((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1405_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelSender_t1404_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m6156 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IChannel_t1405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(725);
		IChannelSender_t1404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(726);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t207* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___remoteChannelData;
		V_0 = ((ObjectU5BU5D_t207*)Castclass(L_0, ObjectU5BU5D_t207_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ArrayList_t402 * L_1 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_4 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_0028:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Object_t *)Castclass(L_7, IChannel_t1405_il2cpp_TypeInfo_var));
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelSender_t1404_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (L_9)
				{
					goto IL_0048;
				}
			}

IL_0043:
			{
				goto IL_0064;
			}

IL_0048:
			{
				Object_t * L_10 = V_4;
				String_t* L_11 = ___url;
				ObjectU5BU5D_t207* L_12 = V_0;
				String_t** L_13 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
				Object_t * L_14 = ChannelServices_CreateClientChannelSinkChain_m6157(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
				V_5 = L_14;
				Object_t * L_15 = V_5;
				if (!L_15)
				{
					goto IL_0064;
				}
			}

IL_005b:
			{
				Object_t * L_16 = V_5;
				V_9 = L_16;
				IL2CPP_LEAVE(0x114, FINALLY_0074);
			}

IL_0064:
			{
				Object_t * L_17 = V_3;
				NullCheck(L_17);
				bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x89, FINALLY_0074);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			{
				Object_t * L_19 = V_3;
				V_10 = ((Object_t *)IsInst(L_19, IDisposable_t326_il2cpp_TypeInfo_var));
				Object_t * L_20 = V_10;
				if (L_20)
				{
					goto IL_0081;
				}
			}

IL_0080:
			{
				IL2CPP_END_FINALLY(116)
			}

IL_0081:
			{
				Object_t * L_21 = V_10;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_21);
				IL2CPP_END_FINALLY(116)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_0089:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			RemotingConfiguration_LoadDefaultDelayedChannels_m6422(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_22 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			NullCheck(L_22);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
			V_7 = L_23;
		}

IL_009a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00dc;
			}

IL_009f:
			{
				Object_t * L_24 = V_7;
				NullCheck(L_24);
				Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_24);
				V_6 = ((Object_t *)Castclass(L_25, IChannelSender_t1404_il2cpp_TypeInfo_var));
				Object_t * L_26 = V_6;
				String_t* L_27 = ___url;
				ObjectU5BU5D_t207* L_28 = V_0;
				String_t** L_29 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
				Object_t * L_30 = ChannelServices_CreateClientChannelSinkChain_m6157(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
				V_8 = L_30;
				Object_t * L_31 = V_8;
				if (!L_31)
				{
					goto IL_00dc;
				}
			}

IL_00c0:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
				ArrayList_t402 * L_32 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
				Object_t * L_33 = V_6;
				NullCheck(L_32);
				VirtActionInvoker1< Object_t * >::Invoke(33 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_32, L_33);
				Object_t * L_34 = V_6;
				ChannelServices_RegisterChannel_m6158(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
				Object_t * L_35 = V_8;
				V_9 = L_35;
				IL2CPP_LEAVE(0x114, FINALLY_00ed);
			}

IL_00dc:
			{
				Object_t * L_36 = V_7;
				NullCheck(L_36);
				bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_009f;
				}
			}

IL_00e8:
			{
				IL2CPP_LEAVE(0x103, FINALLY_00ed);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_00ed;
		}

FINALLY_00ed:
		{ // begin finally (depth: 2)
			{
				Object_t * L_38 = V_7;
				V_11 = ((Object_t *)IsInst(L_38, IDisposable_t326_il2cpp_TypeInfo_var));
				Object_t * L_39 = V_11;
				if (L_39)
				{
					goto IL_00fb;
				}
			}

IL_00fa:
			{
				IL2CPP_END_FINALLY(237)
			}

IL_00fb:
			{
				Object_t * L_40 = V_11;
				NullCheck(L_40);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_40);
				IL2CPP_END_FINALLY(237)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(237)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x103, IL_0103)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		Object_t * L_41 = V_1;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(264)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_010f:
	{
		String_t** L_42 = ___objectUri;
		*((Object_t **)(L_42)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}

IL_0114:
	{
		Object_t * L_43 = V_9;
		return L_43;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern TypeInfo* IChannelSender_t1404_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelDataStore_t1421_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m6157 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t207* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(726);
		IChannelDataStore_t1421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(727);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t207* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		String_t** L_0 = ___objectUri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		ObjectU5BU5D_t207* L_1 = ___channelDataArray;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___sender;
		String_t* L_3 = ___url;
		String_t** L_4 = ___objectUri;
		NullCheck(L_2);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1404_il2cpp_TypeInfo_var, L_2, L_3, NULL, L_4);
		return L_5;
	}

IL_0013:
	{
		ObjectU5BU5D_t207* L_6 = ___channelDataArray;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		ObjectU5BU5D_t207* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9));
		Object_t * L_10 = V_0;
		if (!((Object_t *)IsInst(L_10, IChannelDataStore_t1421_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_11 = ___sender;
		Object_t * L_12 = V_0;
		String_t** L_13 = ___objectUri;
		NullCheck(L_11);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1404_il2cpp_TypeInfo_var, L_11, (String_t*)NULL, L_12, L_13);
		V_3 = L_14;
		goto IL_0044;
	}

IL_003a:
	{
		Object_t * L_15 = ___sender;
		String_t* L_16 = ___url;
		Object_t * L_17 = V_0;
		String_t** L_18 = ___objectUri;
		NullCheck(L_15);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1404_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		V_3 = L_19;
	}

IL_0044:
	{
		Object_t * L_20 = V_3;
		if (!L_20)
		{
			goto IL_004c;
		}
	}
	{
		Object_t * L_21 = V_3;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_2;
		ObjectU5BU5D_t207* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		return (Object_t *)NULL;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m6158 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m6159(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t1422_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1405_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1423_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1864;
extern Il2CppCodeGenString* _stringLiteral1865;
extern Il2CppCodeGenString* _stringLiteral1866;
extern Il2CppCodeGenString* _stringLiteral1867;
extern "C" void ChannelServices_RegisterChannel_m6159 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		ISecurableChannel_t1422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(728);
		IChannel_t1405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		IChannelReceiver_t1423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(729);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		_stringLiteral1864 = il2cpp_codegen_string_literal_from_index(1864);
		_stringLiteral1865 = il2cpp_codegen_string_literal_from_index(1865);
		_stringLiteral1866 = il2cpp_codegen_string_literal_from_index(1866);
		_stringLiteral1867 = il2cpp_codegen_string_literal_from_index(1867);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral1864, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t1422_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1405_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2331(NULL /*static, unused*/, _stringLiteral1865, L_6, /*hidden argument*/NULL);
		RemotingException_t1138 * L_8 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t1422_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ArrayList_t402 * L_10 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00d4;
		}

IL_005b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_13 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(17 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t1405_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1405_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1405_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m1191(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b5;
			}
		}

IL_0084:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1405_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m2290(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00b5;
			}
		}

IL_0099:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1405_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1866, L_26, _stringLiteral1867, /*hidden argument*/NULL);
			RemotingException_t1138 * L_28 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00b5:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1405_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1405_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00d0;
			}
		}

IL_00c7:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00d0;
			}
		}

IL_00ce:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00d0:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00d4:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_37 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_005b;
			}
		}

IL_00e4:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00fc;
			}
		}

IL_00eb:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_40 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(31 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_0108;
		}

IL_00fc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_43 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0108:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t1423_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0139;
			}
		}

IL_0117:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m1206(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t526_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0139;
			}
		}

IL_0131:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t1423_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x145, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x145, IL_0145)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0145:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern const Il2CppType* IChannelSender_t1404_0_0_0_var;
extern const Il2CppType* IChannelReceiver_t1423_0_0_0_var;
extern const Il2CppType* IDictionary_t500_0_0_0_var;
extern const Il2CppType* IClientChannelSinkProvider_t1425_0_0_0_var;
extern const Il2CppType* IServerChannelSinkProvider_t1424_0_0_0_var;
extern TypeInfo* ProviderData_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* IServerChannelSinkProvider_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* IClientChannelSinkProvider_t1425_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1405_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1032_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1423_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1870;
extern Il2CppCodeGenString* _stringLiteral1871;
extern Il2CppCodeGenString* _stringLiteral182;
extern "C" void ChannelServices_RegisterChannelConfig_m6160 (Object_t * __this /* static, unused */, ChannelData_t1134 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1404_0_0_0_var = il2cpp_codegen_type_from_index(726);
		IChannelReceiver_t1423_0_0_0_var = il2cpp_codegen_type_from_index(729);
		IDictionary_t500_0_0_0_var = il2cpp_codegen_type_from_index(235);
		IClientChannelSinkProvider_t1425_0_0_0_var = il2cpp_codegen_type_from_index(730);
		IServerChannelSinkProvider_t1424_0_0_0_var = il2cpp_codegen_type_from_index(731);
		ProviderData_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(732);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		IServerChannelSinkProvider_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(731);
		IClientChannelSinkProvider_t1425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(730);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		IChannel_t1405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(725);
		TargetInvocationException_t1032_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(702);
		IChannelReceiver_t1423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(729);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1870 = il2cpp_codegen_string_literal_from_index(1870);
		_stringLiteral1871 = il2cpp_codegen_string_literal_from_index(1871);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	ProviderData_t1136 * V_3 = {0};
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	ProviderData_t1136 * V_6 = {0};
	Object_t * V_7 = {0};
	Type_t * V_8 = {0};
	ObjectU5BU5D_t207* V_9 = {0};
	TypeU5BU5D_t203* V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	ConstructorInfo_t209 * V_13 = {0};
	Object_t * V_14 = {0};
	Object_t * V_15 = {0};
	TargetInvocationException_t1032 * V_16 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Object_t *)NULL;
		V_1 = (Object_t *)NULL;
		ChannelData_t1134 * L_0 = ___channel;
		NullCheck(L_0);
		ArrayList_t402 * L_1 = ChannelData_get_ServerProviders_m6459(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0045;
	}

IL_0017:
	{
		ChannelData_t1134 * L_3 = ___channel;
		NullCheck(L_3);
		ArrayList_t402 * L_4 = ChannelData_get_ServerProviders_m6459(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(17 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((ProviderData_t1136 *)IsInst(L_6, ProviderData_t1136_il2cpp_TypeInfo_var));
		ProviderData_t1136 * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		Object_t * L_8 = ChannelServices_CreateProvider_m6161(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_4 = ((Object_t *)Castclass(L_8, IServerChannelSinkProvider_t1424_il2cpp_TypeInfo_var));
		Object_t * L_9 = V_4;
		Object_t * L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IServerChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider) */, IServerChannelSinkProvider_t1424_il2cpp_TypeInfo_var, L_9, L_10);
		Object_t * L_11 = V_4;
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1134 * L_14 = ___channel;
		NullCheck(L_14);
		ArrayList_t402 * L_15 = ChannelData_get_ClientProviders_m6460(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		V_5 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0093;
	}

IL_0060:
	{
		ChannelData_t1134 * L_17 = ___channel;
		NullCheck(L_17);
		ArrayList_t402 * L_18 = ChannelData_get_ClientProviders_m6460(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(17 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		V_6 = ((ProviderData_t1136 *)IsInst(L_20, ProviderData_t1136_il2cpp_TypeInfo_var));
		ProviderData_t1136 * L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		Object_t * L_22 = ChannelServices_CreateProvider_m6161(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_7 = ((Object_t *)Castclass(L_22, IClientChannelSinkProvider_t1425_il2cpp_TypeInfo_var));
		Object_t * L_23 = V_7;
		Object_t * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IClientChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider) */, IClientChannelSinkProvider_t1425_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = V_7;
		V_1 = L_25;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		ChannelData_t1134 * L_28 = ___channel;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetType_m4150(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		Type_t * L_31 = V_8;
		if (L_31)
		{
			goto IL_00ca;
		}
	}
	{
		ChannelData_t1134 * L_32 = ___channel;
		NullCheck(L_32);
		String_t* L_33 = (L_32->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1868, L_33, _stringLiteral1869, /*hidden argument*/NULL);
		RemotingException_t1138 * L_35 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_35, L_34, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IChannelSender_t1404_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_37 = V_8;
		NullCheck(L_36);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_36, L_37);
		V_11 = L_38;
		Type_t * L_39 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IChannelReceiver_t1423_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_40 = V_8;
		NullCheck(L_39);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
		V_12 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_014b;
		}
	}
	{
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_014b;
		}
	}
	{
		TypeU5BU5D_t203* L_44 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IDictionary_t500_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_44, 0)) = (Type_t *)L_45;
		TypeU5BU5D_t203* L_46 = L_44;
		Type_t * L_47 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1425_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_47);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_46, 1)) = (Type_t *)L_47;
		TypeU5BU5D_t203* L_48 = L_46;
		Type_t * L_49 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1424_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_48, 2)) = (Type_t *)L_49;
		V_10 = L_48;
		ObjectU5BU5D_t207* L_50 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		ChannelData_t1134 * L_51 = ___channel;
		NullCheck(L_51);
		Hashtable_t392 * L_52 = ChannelData_get_CustomProperties_m6461(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0)) = (Object_t *)L_52;
		ObjectU5BU5D_t207* L_53 = L_50;
		Object_t * L_54 = V_1;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 1);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 1)) = (Object_t *)L_54;
		ObjectU5BU5D_t207* L_55 = L_53;
		Object_t * L_56 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 2);
		ArrayElementTypeCheck (L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 2)) = (Object_t *)L_56;
		V_9 = L_55;
		goto IL_01e3;
	}

IL_014b:
	{
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_018e;
		}
	}
	{
		TypeU5BU5D_t203* L_58 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IDictionary_t500_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, L_59);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_58, 0)) = (Type_t *)L_59;
		TypeU5BU5D_t203* L_60 = L_58;
		Type_t * L_61 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1425_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 1);
		ArrayElementTypeCheck (L_60, L_61);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_60, 1)) = (Type_t *)L_61;
		V_10 = L_60;
		ObjectU5BU5D_t207* L_62 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		ChannelData_t1134 * L_63 = ___channel;
		NullCheck(L_63);
		Hashtable_t392 * L_64 = ChannelData_get_CustomProperties_m6461(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
		ArrayElementTypeCheck (L_62, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_62, 0)) = (Object_t *)L_64;
		ObjectU5BU5D_t207* L_65 = L_62;
		Object_t * L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
		ArrayElementTypeCheck (L_65, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 1)) = (Object_t *)L_66;
		V_9 = L_65;
		goto IL_01e3;
	}

IL_018e:
	{
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t203* L_68 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IDictionary_t500_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 0);
		ArrayElementTypeCheck (L_68, L_69);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_68, 0)) = (Type_t *)L_69;
		TypeU5BU5D_t203* L_70 = L_68;
		Type_t * L_71 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1424_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 1);
		ArrayElementTypeCheck (L_70, L_71);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_70, 1)) = (Type_t *)L_71;
		V_10 = L_70;
		ObjectU5BU5D_t207* L_72 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		ChannelData_t1134 * L_73 = ___channel;
		NullCheck(L_73);
		Hashtable_t392 * L_74 = ChannelData_get_CustomProperties_m6461(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 0);
		ArrayElementTypeCheck (L_72, L_74);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_72, 0)) = (Object_t *)L_74;
		ObjectU5BU5D_t207* L_75 = L_72;
		Object_t * L_76 = V_0;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 1);
		ArrayElementTypeCheck (L_75, L_76);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 1)) = (Object_t *)L_76;
		V_9 = L_75;
		goto IL_01e3;
	}

IL_01d1:
	{
		Type_t * L_77 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m1215(NULL /*static, unused*/, L_77, _stringLiteral1870, /*hidden argument*/NULL);
		RemotingException_t1138 * L_79 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_79, L_78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_79);
	}

IL_01e3:
	{
		Type_t * L_80 = V_8;
		TypeU5BU5D_t203* L_81 = V_10;
		NullCheck(L_80);
		ConstructorInfo_t209 * L_82 = (ConstructorInfo_t209 *)VirtFuncInvoker1< ConstructorInfo_t209 *, TypeU5BU5D_t203* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_80, L_81);
		V_13 = L_82;
		ConstructorInfo_t209 * L_83 = V_13;
		if (L_83)
		{
			goto IL_0207;
		}
	}
	{
		Type_t * L_84 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m1215(NULL /*static, unused*/, L_84, _stringLiteral1871, /*hidden argument*/NULL);
		RemotingException_t1138 * L_86 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_86, L_85, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_86);
	}

IL_0207:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t209 * L_87 = V_13;
		ObjectU5BU5D_t207* L_88 = V_9;
		NullCheck(L_87);
		Object_t * L_89 = ConstructorInfo_Invoke_m1326(L_87, L_88, /*hidden argument*/NULL);
		V_14 = ((Object_t *)Castclass(L_89, IChannel_t1405_il2cpp_TypeInfo_var));
		goto IL_022b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t74 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t1032_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_021c;
		throw e;
	}

CATCH_021c:
	{ // begin catch(System.Reflection.TargetInvocationException)
		V_16 = ((TargetInvocationException_t1032 *)__exception_local);
		TargetInvocationException_t1032 * L_90 = V_16;
		NullCheck(L_90);
		Exception_t74 * L_91 = (Exception_t74 *)VirtFuncInvoker0< Exception_t74 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_90);
		il2cpp_codegen_raise_exception(L_91);
		goto IL_022b;
	} // end catch (depth: 1)

IL_022b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ArrayList_t402 * L_92 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_92);
		Object_t * L_93 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_92);
		V_15 = L_93;
		Object_t * L_94 = V_15;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
	}

IL_023e:
	try
	{ // begin try (depth: 1)
		{
			ChannelData_t1134 * L_95 = ___channel;
			NullCheck(L_95);
			String_t* L_96 = (L_95->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_97 = String_op_Equality_m1191(NULL /*static, unused*/, L_96, _stringLiteral182, /*hidden argument*/NULL);
			if (!L_97)
			{
				goto IL_0271;
			}
		}

IL_0253:
		{
			Object_t * L_98 = V_14;
			if (((Object_t *)IsInst(L_98, IChannelReceiver_t1423_il2cpp_TypeInfo_var)))
			{
				goto IL_0271;
			}
		}

IL_025f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_99 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			Object_t * L_100 = V_14;
			NullCheck(L_99);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_99, L_100);
			goto IL_0278;
		}

IL_0271:
		{
			Object_t * L_101 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannel_m6158(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		}

IL_0278:
		{
			IL2CPP_LEAVE(0x285, FINALLY_027d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_027d;
	}

FINALLY_027d:
	{ // begin finally (depth: 1)
		Object_t * L_102 = V_15;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(637)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(637)
	{
		IL2CPP_JUMP_TBL(0x285, IL_0285)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0285:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t74_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1032_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1872;
extern Il2CppCodeGenString* _stringLiteral1873;
extern "C" Object_t * ChannelServices_CreateProvider_m6161 (Object_t * __this /* static, unused */, ProviderData_t1136 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Exception_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		TargetInvocationException_t1032_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(702);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1872 = il2cpp_codegen_string_literal_from_index(1872);
		_stringLiteral1873 = il2cpp_codegen_string_literal_from_index(1873);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ObjectU5BU5D_t207* V_1 = {0};
	Exception_t74 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProviderData_t1136 * L_0 = ___prov;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m4150(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ProviderData_t1136 * L_4 = ___prov;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1868, L_5, _stringLiteral1869, /*hidden argument*/NULL);
		RemotingException_t1138 * L_7 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		ObjectU5BU5D_t207* L_8 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		ProviderData_t1136 * L_9 = ___prov;
		NullCheck(L_9);
		Hashtable_t392 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t207* L_11 = L_8;
		ProviderData_t1136 * L_12 = ___prov;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___CustomData_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)L_13;
		V_1 = L_11;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_14 = V_0;
			ObjectU5BU5D_t207* L_15 = V_1;
			Object_t * L_16 = Activator_CreateInstance_m7460(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			goto IL_00a3;
		}

IL_0053:
		{
			; // IL_0053: leave IL_00a3
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t74 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t74_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t74 *)__exception_local);
			Exception_t74 * L_17 = V_2;
			if (!((TargetInvocationException_t1032 *)IsInst(L_17, TargetInvocationException_t1032_il2cpp_TypeInfo_var)))
			{
				goto IL_0070;
			}
		}

IL_0064:
		{
			Exception_t74 * L_18 = V_2;
			NullCheck(((TargetInvocationException_t1032 *)Castclass(L_18, TargetInvocationException_t1032_il2cpp_TypeInfo_var)));
			Exception_t74 * L_19 = (Exception_t74 *)VirtFuncInvoker0< Exception_t74 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, ((TargetInvocationException_t1032 *)Castclass(L_18, TargetInvocationException_t1032_il2cpp_TypeInfo_var)));
			V_2 = L_19;
		}

IL_0070:
		{
			ObjectU5BU5D_t207* L_20 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
			ArrayElementTypeCheck (L_20, _stringLiteral1872);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0)) = (Object_t *)_stringLiteral1872;
			ObjectU5BU5D_t207* L_21 = L_20;
			Type_t * L_22 = V_0;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
			ArrayElementTypeCheck (L_21, L_22);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)L_22;
			ObjectU5BU5D_t207* L_23 = L_21;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
			ArrayElementTypeCheck (L_23, _stringLiteral1873);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2)) = (Object_t *)_stringLiteral1873;
			ObjectU5BU5D_t207* L_24 = L_23;
			Exception_t74 * L_25 = V_2;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_25);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
			ArrayElementTypeCheck (L_24, L_26);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 3)) = (Object_t *)L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1207(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			RemotingException_t1138 * L_28 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
			goto IL_00a3;
		}
	} // end catch (depth: 1)

IL_00a3:
	{
		Object_t * L_29 = V_3;
		return L_29;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1423_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t207* ChannelServices_GetCurrentChannelInfo_m6162 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IChannelReceiver_t1423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(729);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t402 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ArrayList_t402 * L_1 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_4 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0056;
			}

IL_0027:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t1423_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_0056;
				}
			}

IL_003d:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t1423_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_0056;
				}
			}

IL_004d:
			{
				ArrayList_t402 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_0056:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0027;
				}
			}

IL_0061:
			{
				IL2CPP_LEAVE(0x7B, FINALLY_0066);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_0066;
		}

FINALLY_0066:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t326_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0073;
				}
			}

IL_0072:
			{
				IL2CPP_END_FINALLY(102)
			}

IL_0073:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(102)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(102)
		{
			IL2CPP_JUMP_TBL(0x7B, IL_007b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0087:
	{
		ArrayList_t402 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t207* L_22 = (ObjectU5BU5D_t207*)VirtFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(42 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m6163 (CrossAppDomainData_t1075 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m6421(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C" int32_t CrossAppDomainData_get_DomainID_m6164 (CrossAppDomainData_t1075 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____DomainID_1);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C" String_t* CrossAppDomainData_get_ProcessID_m6165 (CrossAppDomainData_t1075 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____processGuid_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"

// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m6166 (CrossAppDomainChannel_t1076 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m6167 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(733);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1185(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t1076_StaticFields*)CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern TypeInfo* CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m6168 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(733);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1076 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t1076_StaticFields*)CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t1076 * L_2 = (CrossAppDomainChannel_t1076 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m6166(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t1076 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m6158(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0024:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern Il2CppCodeGenString* _stringLiteral1874;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m6169 (CrossAppDomainChannel_t1076 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1874 = il2cpp_codegen_string_literal_from_index(1874);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1874;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m6170 (CrossAppDomainChannel_t1076 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m6171 (CrossAppDomainChannel_t1076 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		CrossAppDomainData_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(734);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m7395(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t1075 * L_1 = (CrossAppDomainData_t1075 *)il2cpp_codegen_object_new (CrossAppDomainData_t1075_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m6163(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C" void CrossAppDomainChannel_StartListening_m6172 (CrossAppDomainChannel_t1076 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
extern TypeInfo* CrossAppDomainData_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1077_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1874;
extern Il2CppCodeGenString* _stringLiteral1875;
extern "C" Object_t * CrossAppDomainChannel_CreateMessageSink_m6173 (CrossAppDomainChannel_t1076 * __this, String_t* ___url, Object_t * ___data, String_t** ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainData_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(734);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CrossAppDomainSink_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		_stringLiteral1874 = il2cpp_codegen_string_literal_from_index(1874);
		_stringLiteral1875 = il2cpp_codegen_string_literal_from_index(1875);
		s_Il2CppMethodIntialized = true;
	}
	CrossAppDomainData_t1075 * V_0 = {0};
	{
		String_t** L_0 = ___uri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Object_t * L_1 = ___data;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Object_t * L_2 = ___data;
		V_0 = ((CrossAppDomainData_t1075 *)IsInst(L_2, CrossAppDomainData_t1075_il2cpp_TypeInfo_var));
		CrossAppDomainData_t1075 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1075 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = CrossAppDomainData_get_ProcessID_m6165(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_6 = RemotingConfiguration_get_ProcessId_m6421(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1191(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1075 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = CrossAppDomainData_get_DomainID_m6164(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
		CrossAppDomainSink_t1077 * L_10 = CrossAppDomainSink_GetSink_m6176(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		String_t* L_11 = ___url;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_12 = ___url;
		NullCheck(L_12);
		bool L_13 = String_StartsWith_m1238(L_12, _stringLiteral1874, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t582 * L_14 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2270(L_14, _stringLiteral1875, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0058:
	{
		return (Object_t *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.ctor(System.Int32)
extern "C" void CrossAppDomainSink__ctor_m6174 (CrossAppDomainSink_t1077 * __this, int32_t ___domainID, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___domainID;
		__this->____domainID_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const Il2CppType* CrossAppDomainSink_t1077_0_0_0_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1077_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1876;
extern "C" void CrossAppDomainSink__cctor_m6175 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1077_0_0_0_var = il2cpp_codegen_type_from_index(735);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		CrossAppDomainSink_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		_stringLiteral1876 = il2cpp_codegen_string_literal_from_index(1876);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t1077_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral1876, ((int32_t)40));
		((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink System.Runtime.Remoting.Channels.CrossAppDomainSink::GetSink(System.Int32)
extern TypeInfo* CrossAppDomainSink_t1077_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern "C" CrossAppDomainSink_t1077 * CrossAppDomainSink_GetSink_m6176 (Object_t * __this /* static, unused */, int32_t ___domainID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainSink_t1077 * V_1 = {0};
	CrossAppDomainSink_t1077 * V_2 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_3 = ((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_4 = ___domainID;
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_3);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_6);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_8 = ((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_9 = ___domainID;
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_10);
			NullCheck(L_8);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_11);
			V_2 = ((CrossAppDomainSink_t1077 *)Castclass(L_12, CrossAppDomainSink_t1077_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0041:
		{
			int32_t L_13 = ___domainID;
			CrossAppDomainSink_t1077 * L_14 = (CrossAppDomainSink_t1077 *)il2cpp_codegen_object_new (CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
			CrossAppDomainSink__ctor_m6174(L_14, L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1077_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_15 = ((CrossAppDomainSink_t1077_StaticFields*)CrossAppDomainSink_t1077_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_16 = ___domainID;
			int32_t L_17 = L_16;
			Object_t * L_18 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_17);
			CrossAppDomainSink_t1077 * L_19 = V_1;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
			CrossAppDomainSink_t1077 * L_20 = V_1;
			V_2 = L_20;
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0060:
		{
			; // IL_0060: leave IL_006c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Object_t * L_21 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_006c:
	{
		CrossAppDomainSink_t1077 * L_22 = V_2;
		return L_22;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m6177 (CrossAppDomainSink_t1077 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.SinkProviderData::.ctor(System.String)
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void SinkProviderData__ctor_m6178 (SinkProviderData_t1078 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___sinkName_0 = L_0;
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->___children_1 = L_1;
		Hashtable_t392 * L_2 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Channels.SinkProviderData::get_Children()
extern "C" Object_t * SinkProviderData_get_Children_m6179 (SinkProviderData_t1078 * __this, const MethodInfo* method)
{
	{
		ArrayList_t402 * L_0 = (__this->___children_1);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Channels.SinkProviderData::get_Properties()
extern "C" Object_t * SinkProviderData_get_Properties_m6180 (SinkProviderData_t1078 * __this, const MethodInfo* method)
{
	{
		Hashtable_t392 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1079_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m6181 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Context_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(736);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((Context_t1079_StaticFields*)Context_t1079_il2cpp_TypeInfo_var->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m6182 (Context_t1079 * __this, const MethodInfo* method)
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
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t1079 * Context_get_DefaultContext_m6183 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t1079 * L_0 = AppDomain_InternalGetDefaultContext_m7473(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m6184 (Context_t1079 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1406_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m6185 (Context_t1079 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		IContextProperty_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(737);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000d:
	{
		ArrayList_t402 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001e:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1406_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1406_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m1191(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}

IL_0042:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0064:
	{
		return (Object_t *)NULL;
	}

IL_0066:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1877;
extern "C" String_t* Context_ToString_m6186 (Context_t1079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral1877 = il2cpp_codegen_string_literal_from_index(1877);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1215(NULL /*static, unused*/, _stringLiteral1877, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C" void ContextAttribute__ctor_m6187 (ContextAttribute_t1071 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m6188 (ContextAttribute_t1071 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern TypeInfo* ContextAttribute_t1071_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m6189 (ContextAttribute_t1071 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t1071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(738);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t1071 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1071 *)IsInst(L_1, ContextAttribute_t1071_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1071 *)Castclass(L_2, ContextAttribute_t1071_il2cpp_TypeInfo_var));
		ContextAttribute_t1071 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m2290(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m6190 (ContextAttribute_t1071 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = String_GetHashCode_m1199(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1878;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m6191 (ContextAttribute_t1071 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IConstructionCallMessage_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(739);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		_stringLiteral1878 = il2cpp_codegen_string_literal_from_index(1878);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral1878, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t526_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1403_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1878;
extern Il2CppCodeGenString* _stringLiteral1879;
extern "C" bool ContextAttribute_IsContextOK_m6192 (ContextAttribute_t1071 * __this, Context_t1079 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IConstructionCallMessage_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(739);
		_stringLiteral1878 = il2cpp_codegen_string_literal_from_index(1878);
		_stringLiteral1879 = il2cpp_codegen_string_literal_from_index(1879);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral1878, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Context_t1079 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t348 * L_3 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_3, _stringLiteral1879, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Context_t1079 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		return 0;
	}

IL_0049:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1071 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0052;
		}
	}
	{
		return 0;
	}

IL_0052:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m6193 (CrossContextChannel_t1073 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m6194 (SynchronizationAttribute_t1082 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m6195(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern TypeInfo* Mutex_t1080_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1880;
extern Il2CppCodeGenString* _stringLiteral414;
extern "C" void SynchronizationAttribute__ctor_m6195 (SynchronizationAttribute_t1082 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t1080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(740);
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1880 = il2cpp_codegen_string_literal_from_index(1880);
		_stringLiteral414 = il2cpp_codegen_string_literal_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t1080 * L_0 = (Mutex_t1080 *)il2cpp_codegen_object_new (Mutex_t1080_il2cpp_TypeInfo_var);
		Mutex__ctor_m7379(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m6187(__this, _stringLiteral1880, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t320 * L_5 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_5, _stringLiteral414, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003e:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m6196 (SynchronizationAttribute_t1082 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1082 * V_0 = {0};
	SynchronizationAttribute_t1082 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		Mutex_t1080 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1082 * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			SynchronizationAttribute_ReleaseLock_m6197(__this, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
			Thread_t1081 * L_5 = Thread_get_CurrentThread_m7394(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1082 * L_6 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0051:
	{
		goto IL_00ab;
	}

IL_0056:
	{
		V_1 = __this;
		SynchronizationAttribute_t1082 * L_7 = V_1;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_0063:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1080 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m7382(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1081 *)NULL;
		}

IL_0083:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_009f;
			}
		}

IL_008f:
		{
			Thread_t1081 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
			Thread_t1081 * L_12 = Thread_get_CurrentThread_m7394(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1081 *)L_11) == ((Object_t*)(Thread_t1081 *)L_12)))
			{
				goto IL_0063;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1082 * L_13 = V_1;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m6197 (SynchronizationAttribute_t1082 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1082 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1082 * L_0 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_0044;
			}
		}

IL_0014:
		{
			Thread_t1081 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
			Thread_t1081 * L_3 = Thread_get_CurrentThread_m7394(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1081 *)L_2) == ((Object_t*)(Thread_t1081 *)L_3))))
			{
				goto IL_0044;
			}
		}

IL_0024:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1080 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m7382(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1081 *)NULL;
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1082 * L_6 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m6198 (SynchronizationAttribute_t1082 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(739);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t526_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0019:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* SynchronizationAttribute_t1082_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1880;
extern "C" bool SynchronizationAttribute_IsContextOK_m6199 (SynchronizationAttribute_t1082 * __this, Context_t1079 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(741);
		_stringLiteral1880 = il2cpp_codegen_string_literal_from_index(1880);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1082 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1079 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, _stringLiteral1880);
		V_0 = ((SynchronizationAttribute_t1082 *)IsInst(L_1, SynchronizationAttribute_t1082_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0045:
	{
		SynchronizationAttribute_t1082 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1082 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_004a:
	{
		SynchronizationAttribute_t1082 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1082 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1082_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1880;
extern "C" void SynchronizationAttribute_ExitContext_m6200 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		SynchronizationAttribute_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(741);
		_stringLiteral1880 = il2cpp_codegen_string_literal_from_index(1880);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1082 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		Context_t1079 * L_0 = Thread_get_CurrentContext_m7392(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m6184(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		Context_t1079 * L_2 = Thread_get_CurrentContext_m7392(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral1880);
		V_0 = ((SynchronizationAttribute_t1082 *)IsInst(L_3, SynchronizationAttribute_t1082_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1082 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1082 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1081_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1082_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1880;
extern "C" void SynchronizationAttribute_EnterContext_m6201 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		SynchronizationAttribute_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(741);
		_stringLiteral1880 = il2cpp_codegen_string_literal_from_index(1880);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1082 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		Context_t1079 * L_0 = Thread_get_CurrentContext_m7392(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m6184(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1081_il2cpp_TypeInfo_var);
		Context_t1079 * L_2 = Thread_get_CurrentContext_m7392(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral1880);
		V_0 = ((SynchronizationAttribute_t1082 *)IsInst(L_3, SynchronizationAttribute_t1082_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1082 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1082 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m6202 (LeaseManager_t1084 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C" void LeaseManager_SetPollTime_m6203 (LeaseManager_t1084 * __this, TimeSpan_t470  ___timeSpan, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Timer_t1083 * L_3 = (__this->____timer_1);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001d:
		{
			Timer_t1083 * L_4 = (__this->____timer_1);
			TimeSpan_t470  L_5 = ___timeSpan;
			TimeSpan_t470  L_6 = ___timeSpan;
			NullCheck(L_4);
			Timer_Change_m7439(L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern TypeInfo* LeaseManager_t1084_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t470_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m6204 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t1084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		TimeSpan_t470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t1084 * L_0 = (LeaseManager_t1084 *)il2cpp_codegen_object_new (LeaseManager_t1084_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m6202(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_1 = TimeSpan_FromSeconds_m8180(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t470  L_2 = TimeSpan_FromMinutes_m8179(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t470  L_3 = TimeSpan_FromMinutes_m8179(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t470  L_4 = TimeSpan_FromMinutes_m8179(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m6205 (Object_t * __this /* static, unused */, TimeSpan_t470  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t470  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_0;
		LeaseManager_t1084 * L_1 = ((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		TimeSpan_t470  L_2 = ___value;
		NullCheck(L_1);
		LeaseManager_SetPollTime_m6203(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseTime_m6206 (Object_t * __this /* static, unused */, TimeSpan_t470  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t470  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_RenewOnCallTime_m6207 (Object_t * __this /* static, unused */, TimeSpan_t470  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t470  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_SponsorshipTimeout_m6208 (Object_t * __this /* static, unused */, TimeSpan_t470  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t470  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		((LifetimeServices_t1085_StaticFields*)LifetimeServices_t1085_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern TypeInfo* Int32U5BU5D_t501_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m6209 (ArgInfo_t1087 * __this, MethodBase_t386 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t376* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		MethodBase_t386 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t386 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t376* L_2 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t376* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t501*)SZArrayNew(Int32U5BU5D_t501_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0078;
		}
	}
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_003b:
	{
		ParameterInfoU5BU5D_t376* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t501* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_0066:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t376* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c4;
	}

IL_0078:
	{
		V_2 = 0;
		goto IL_00bb;
	}

IL_007f:
	{
		ParameterInfoU5BU5D_t376* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		ParameterInfoU5BU5D_t376* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m6073((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b7;
		}
	}

IL_009e:
	{
		Int32U5BU5D_t501* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_00b7:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t376* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_00c4:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t207* ArgInfo_GetInOutArgs_m6210 (ArgInfo_t1087 * __this, ObjectU5BU5D_t207* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t207* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0024;
	}

IL_0013:
	{
		ObjectU5BU5D_t207* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t207* L_3 = ___args;
		Int32U5BU5D_t501* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t207* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m6211 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m6212 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t698_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t745 * AsyncResult_get_AsyncWaitHandle_m6213 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1092 * V_0 = {0};
	WaitHandle_t745 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1092 * L_0 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t745 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0024;
			}
		}

IL_0013:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t698 * L_3 = (ManualResetEvent_t698 *)il2cpp_codegen_object_new (ManualResetEvent_t698_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m3364(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0024:
		{
			WaitHandle_t745 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}

IL_0030:
		{
			; // IL_0030: leave IL_003c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AsyncResult_t1092 * L_5 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_003c:
	{
		WaitHandle_t745 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m6214 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m6215 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m6216 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m6217 (AsyncResult_t1092 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m6218 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m6219 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m6220 (AsyncResult_t1092 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t582 * L_0 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2299(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m6221 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m6222 (AsyncResult_t1092 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m6223 (AsyncResult_t1092 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m6224 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	AsyncResult_t1092 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1092 * L_0 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x3E, FINALLY_0024);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		AsyncResult_t1092 * L_3 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_002b:
	{
		WaitHandle_t745 * L_4 = (WaitHandle_t745 *)VirtFuncInvoker0< WaitHandle_t745 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_003e:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern TypeInfo* ManualResetEvent_t698_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t54_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m6225 (AsyncResult_t1092 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		AsyncCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1092 * V_0 = {0};
	AsyncCallback_t54 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1092 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t745 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			WaitHandle_t745 * L_3 = (WaitHandle_t745 *)VirtFuncInvoker0< WaitHandle_t745 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t698 *)Castclass(L_3, ManualResetEvent_t698_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m3365(((ManualResetEvent_t698 *)Castclass(L_3, ManualResetEvent_t698_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		AsyncResult_t1092 * L_4 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_003e:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t54 *)Castclass(L_6, AsyncCallback_t54_il2cpp_TypeInfo_var));
		AsyncCallback_t54 * L_7 = V_1;
		NullCheck(L_7);
		AsyncCallback_Invoke_m4232(L_7, __this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t1089 * AsyncResult_get_CallMessage_m6226 (AsyncResult_t1092 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1089 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m6227 (AsyncResult_t1092 * __this, MonoMethodMessage_t1089 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1089 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m6228 (ConstructionCall_t1093 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m6258(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m6229 (ConstructionCall_t1093 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t317 * L_0 = ___info;
		StreamingContext_t318  L_1 = ___context;
		MethodCall__ctor_m6257(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern TypeInfo* ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m6230 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t1095 * V_0 = {0};
	{
		ConstructionCallDictionary_t1095 * L_0 = (ConstructionCallDictionary_t1095 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m6242(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t1095 * L_1 = V_0;
		((MethodCall_t1094 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1095 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m6289(L_2, /*hidden argument*/NULL);
		((MethodCall_t1094 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m6231 (ConstructionCall_t1093 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m6232 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m4150(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->____activationType_14 = L_2;
	}

IL_001c:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m6233 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m6234 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m6235 (ConstructionCall_t1093 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t207* ConstructionCall_get_CallSiteActivationAttributes_m6236 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m6237 (ConstructionCall_t1093 * __this, ObjectU5BU5D_t207* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m6238 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0016:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCall_t1093_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1064_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1882;
extern Il2CppCodeGenString* _stringLiteral1883;
extern Il2CppCodeGenString* _stringLiteral1884;
extern Il2CppCodeGenString* _stringLiteral1885;
extern "C" void ConstructionCall_InitMethodProperty_m6239 (ConstructionCall_t1093 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(720);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		IActivator_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t86 * L_2 = ((ConstructionCall_t1093_StaticFields*)ConstructionCall_t1093_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1881, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1882, 1);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1883, 2);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1884, 3);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1885, 4);
		Dictionary_2_t86 * L_9 = V_1;
		((ConstructionCall_t1093_StaticFields*)ConstructionCall_t1093_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17 = L_9;
	}

IL_005b:
	{
		Dictionary_2_t86 * L_10 = ((ConstructionCall_t1093_StaticFields*)ConstructionCall_t1093_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_0099;
		}
		if (L_13 == 2)
		{
			goto IL_00a6;
		}
		if (L_13 == 3)
		{
			goto IL_00b3;
		}
		if (L_13 == 4)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00cd;
	}

IL_008c:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t1064_il2cpp_TypeInfo_var));
		return;
	}

IL_0099:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t207*)Castclass(L_15, ObjectU5BU5D_t207_il2cpp_TypeInfo_var));
		return;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t526_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m6260(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ICollection_t576_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1882;
extern Il2CppCodeGenString* _stringLiteral1883;
extern Il2CppCodeGenString* _stringLiteral1884;
extern Il2CppCodeGenString* _stringLiteral1885;
extern "C" void ConstructionCall_GetObjectData_m6240 (ConstructionCall_t1093 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t317 * L_0 = ___info;
		StreamingContext_t318  L_1 = ___context;
		MethodCall_GetObjectData_m6261(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t576_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_0022:
	{
		SerializationInfo_t317 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m2277(L_6, _stringLiteral1881, L_7, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_8 = ___info;
		ObjectU5BU5D_t207* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m2277(L_8, _stringLiteral1882, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m2277(L_10, _stringLiteral1883, NULL, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m2277(L_11, _stringLiteral1884, L_12, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m2277(L_13, _stringLiteral1885, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m6241 (ConstructionCall_t1093 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m6267(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m6242 (ConstructionCallDictionary_t1095 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m6285(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_1 = ((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m6287(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1891;
extern Il2CppCodeGenString* _stringLiteral1882;
extern Il2CppCodeGenString* _stringLiteral1883;
extern Il2CppCodeGenString* _stringLiteral1884;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1885;
extern "C" void ConstructionCallDictionary__cctor_m6243 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t204* L_0 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1886);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral1886;
		StringU5BU5D_t204* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1887);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral1887;
		StringU5BU5D_t204* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1888);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral1888;
		StringU5BU5D_t204* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1889);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral1889;
		StringU5BU5D_t204* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1890);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral1890;
		StringU5BU5D_t204* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1891);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral1891;
		StringU5BU5D_t204* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral1882);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)_stringLiteral1882;
		StringU5BU5D_t204* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, _stringLiteral1883);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)_stringLiteral1883;
		StringU5BU5D_t204* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, _stringLiteral1884);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)_stringLiteral1884;
		StringU5BU5D_t204* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, _stringLiteral1881);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)_stringLiteral1881;
		StringU5BU5D_t204* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, _stringLiteral1885);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)_stringLiteral1885;
		((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern TypeInfo* ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1403_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1882;
extern Il2CppCodeGenString* _stringLiteral1883;
extern Il2CppCodeGenString* _stringLiteral1884;
extern Il2CppCodeGenString* _stringLiteral1885;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m6244 (ConstructionCallDictionary_t1095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		IConstructionCallMessage_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(739);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_2 = ((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1881, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1882, 1);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1883, 2);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1884, 3);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1885, 4);
		Dictionary_2_t86 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_10 = ((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_009d;
		}
		if (L_13 == 2)
		{
			goto IL_00ae;
		}
		if (L_13 == 3)
		{
			goto IL_00bf;
		}
		if (L_13 == 4)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00e1;
	}

IL_008c:
	{
		Object_t * L_14 = (((MethodDictionary_t1096 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_009d:
	{
		Object_t * L_16 = (((MethodDictionary_t1096 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t207* L_17 = (ObjectU5BU5D_t207*)InterfaceFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00ae:
	{
		Object_t * L_18 = (((MethodDictionary_t1096 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00bf:
	{
		Object_t * L_20 = (((MethodDictionary_t1096 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00d0:
	{
		Object_t * L_22 = (((MethodDictionary_t1096 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00e1:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m6293(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1064_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1881;
extern Il2CppCodeGenString* _stringLiteral1882;
extern Il2CppCodeGenString* _stringLiteral1883;
extern Il2CppCodeGenString* _stringLiteral1884;
extern Il2CppCodeGenString* _stringLiteral1885;
extern Il2CppCodeGenString* _stringLiteral1892;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m6245 (ConstructionCallDictionary_t1095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		IConstructionCallMessage_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(739);
		IActivator_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1881 = il2cpp_codegen_string_literal_from_index(1881);
		_stringLiteral1882 = il2cpp_codegen_string_literal_from_index(1882);
		_stringLiteral1883 = il2cpp_codegen_string_literal_from_index(1883);
		_stringLiteral1884 = il2cpp_codegen_string_literal_from_index(1884);
		_stringLiteral1885 = il2cpp_codegen_string_literal_from_index(1885);
		_stringLiteral1892 = il2cpp_codegen_string_literal_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_2 = ((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1881, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1882, 1);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1883, 1);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1884, 1);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1885, 1);
		Dictionary_2_t86 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_10 = ((ConstructionCallDictionary_t1095_StaticFields*)ConstructionCallDictionary_t1095_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_007f:
	{
		Object_t * L_15 = (((MethodDictionary_t1096 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t1403_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t1064_il2cpp_TypeInfo_var)));
		goto IL_00b2;
	}

IL_009a:
	{
		ArgumentException_t320 * L_17 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_17, _stringLiteral1892, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00a5:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m6294(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00b2:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m6246 (EnvoyTerminatorSink_t1097 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern TypeInfo* EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m6247 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t1097 * L_0 = (EnvoyTerminatorSink_t1097 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m6246(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t1097_StaticFields*)EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern "C" void Header__ctor_m6248 (Header_t1098 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m6249(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m6249 (Header_t1098 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m6250(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m6250 (Header_t1098 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern TypeInfo* CallContextRemotingData_t1099_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m6251 (LogicalCallContext_t1100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(747);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t1099 * L_0 = (CallContextRemotingData_t1099 *)il2cpp_codegen_object_new (CallContextRemotingData_t1099_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m6255(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CallContextRemotingData_t1099_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1893;
extern "C" void LogicalCallContext__ctor_m6252 (LogicalCallContext_t1100 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(747);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral1893 = il2cpp_codegen_string_literal_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t1181  V_0 = {0};
	SerializationInfoEnumerator_t1183 * V_1 = {0};
	{
		CallContextRemotingData_t1099 * L_0 = (CallContextRemotingData_t1099 *)il2cpp_codegen_object_new (CallContextRemotingData_t1099_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m6255(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1183 * L_2 = SerializationInfo_GetEnumerator_m6646(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0065;
	}

IL_001d:
	{
		SerializationInfoEnumerator_t1183 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1181  L_4 = SerializationInfoEnumerator_get_Current_m6654(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m6640((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1191(NULL /*static, unused*/, L_5, _stringLiteral1893, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m6641((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t1099 *)Castclass(L_7, CallContextRemotingData_t1099_il2cpp_TypeInfo_var));
		goto IL_0065;
	}

IL_0051:
	{
		String_t* L_8 = SerializationEntry_get_Name_m6640((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m6641((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m6254(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0065:
	{
		SerializationInfoEnumerator_t1183 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = SerializationInfoEnumerator_MoveNext_m6657(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1893;
extern "C" void LogicalCallContext_GetObjectData_m6253 (LogicalCallContext_t1100 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		DictionaryEntry_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		_stringLiteral1893 = il2cpp_codegen_string_literal_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t567  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t317 * L_0 = ___info;
		CallContextRemotingData_t1099 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2277(L_0, _stringLiteral1893, L_1, /*hidden argument*/NULL);
		Hashtable_t392 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t392 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(26 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_002d:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t567 *)((DictionaryEntry_t567 *)UnBox (L_6, DictionaryEntry_t567_il2cpp_TypeInfo_var))));
			SerializationInfo_t317 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m2277(L_7, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_0052:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_002d;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_006d;
			}
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(98)
		}

IL_006d:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m6254 (LogicalCallContext_t1100 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t392 * L_1 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0016:
	{
		Hashtable_t392 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m6255 (CallContextRemotingData_t1099 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C" void MethodCall__ctor_m6256 (MethodCall_t1094 * __this, HeaderU5BU5D_t1369* ___h1, const MethodInfo* method)
{
	Header_t1098 * V_0 = {0};
	HeaderU5BU5D_t1369* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t1369* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		HeaderU5BU5D_t1369* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		HeaderU5BU5D_t1369* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		HeaderU5BU5D_t1369* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1098 **)(Header_t1098 **)SZArrayLdElema(L_3, L_5));
		Header_t1098 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1098 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1369* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		MethodCall_ResolveMethod_m6273(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m6257 (MethodCall_t1094 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	SerializationEntry_t1181  V_0 = {0};
	SerializationInfoEnumerator_t1183 * V_1 = {0};
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t317 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1183 * L_1 = SerializationInfo_GetEnumerator_m6646(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0033;
	}

IL_0018:
	{
		SerializationInfoEnumerator_t1183 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1181  L_3 = SerializationInfoEnumerator_get_Current_m6654(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m6640((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m6641((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0033:
	{
		SerializationInfoEnumerator_t1183 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = SerializationInfoEnumerator_MoveNext_m6657(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m6258 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m6259 (MethodCall_t1094 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* MethodCall_t1094_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t1100_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1891;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1894;
extern "C" void MethodCall_InitMethodProperty_m6260 (MethodCall_t1094 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t1094_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(748);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		LogicalCallContext_t1100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(749);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1894 = il2cpp_codegen_string_literal_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		Dictionary_2_t86 * L_2 = ((MethodCall_t1094_StaticFields*)MethodCall_t1094_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		if (L_2)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1888, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1887, 1);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1889, 2);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1890, 3);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1891, 4);
		Dictionary_2_t86 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1886, 5);
		Dictionary_2_t86 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1894, 6);
		Dictionary_2_t86 * L_11 = V_1;
		((MethodCall_t1094_StaticFields*)MethodCall_t1094_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10 = L_11;
	}

IL_0073:
	{
		Dictionary_2_t86 * L_12 = ((MethodCall_t1094_StaticFields*)MethodCall_t1094_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00ac;
		}
		if (L_15 == 1)
		{
			goto IL_00b9;
		}
		if (L_15 == 2)
		{
			goto IL_00c6;
		}
		if (L_15 == 3)
		{
			goto IL_00d3;
		}
		if (L_15 == 4)
		{
			goto IL_00e0;
		}
		if (L_15 == 5)
		{
			goto IL_00ed;
		}
		if (L_15 == 6)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0107;
	}

IL_00ac:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b9:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c6:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t203*)Castclass(L_18, TypeU5BU5D_t203_il2cpp_TypeInfo_var));
		return;
	}

IL_00d3:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t207*)Castclass(L_19, ObjectU5BU5D_t207_il2cpp_TypeInfo_var));
		return;
	}

IL_00e0:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1100 *)Castclass(L_20, LogicalCallContext_t1100_il2cpp_TypeInfo_var));
		return;
	}

IL_00ed:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00fa:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t203*)Castclass(L_22, TypeU5BU5D_t203_il2cpp_TypeInfo_var));
		return;
	}

IL_0107:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1891;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1894;
extern "C" void MethodCall_GetObjectData_m6261 (MethodCall_t1094 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		DictionaryEntry_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1894 = il2cpp_codegen_string_literal_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t567  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t317 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2277(L_0, _stringLiteral1888, L_1, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2277(L_2, _stringLiteral1887, L_3, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_4 = ___info;
		TypeU5BU5D_t203* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2277(L_4, _stringLiteral1889, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_6 = ___info;
		ObjectU5BU5D_t207* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m2277(L_6, _stringLiteral1890, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_8 = ___info;
		LogicalCallContext_t1100 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m2277(L_8, _stringLiteral1891, L_9, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m2277(L_10, _stringLiteral1886, L_11, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_12 = ___info;
		TypeU5BU5D_t203* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m2277(L_12, _stringLiteral1894, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00da;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t500_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0093:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t567 *)((DictionaryEntry_t567 *)UnBox (L_18, DictionaryEntry_t567_il2cpp_TypeInfo_var))));
			SerializationInfo_t317 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m2277(L_19, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b8:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0093;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00d3;
			}
		}

IL_00d2:
		{
			IL2CPP_END_FINALLY(200)
		}

IL_00d3:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(200)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00da:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t207* MethodCall_get_Args_m6262 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t1100_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1100 * MethodCall_get_LogicalCallContext_m6263 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(749);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1100 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1100 * L_1 = (LogicalCallContext_t1100 *)il2cpp_codegen_object_new (LogicalCallContext_t1100_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m6251(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1100 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t386 * MethodCall_get_MethodBase_m6264 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		MethodBase_t386 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		MethodCall_ResolveMethod_m6273(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		MethodBase_t386 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m6265 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MethodBase_t386 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_001c:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m6266 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t376* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t203* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t386 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t386 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t376* L_3 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t376* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t203* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t376* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t376* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t203* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m6267 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_0011:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern TypeInfo* MethodCallDictionary_t1101_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m6268 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t1101 * V_0 = {0};
	{
		MethodCallDictionary_t1101 * L_0 = (MethodCallDictionary_t1101 *)il2cpp_codegen_object_new (MethodCallDictionary_t1101_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m6277(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t1101 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1101 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m6289(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m6269 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t386 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m6270 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m6271 (MethodCall_t1094 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m6272 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral488;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral1895;
extern Il2CppCodeGenString* _stringLiteral1896;
extern Il2CppCodeGenString* _stringLiteral1897;
extern Il2CppCodeGenString* _stringLiteral1898;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral1899;
extern Il2CppCodeGenString* _stringLiteral1900;
extern Il2CppCodeGenString* _stringLiteral1901;
extern "C" void MethodCall_ResolveMethod_m6273 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		_stringLiteral488 = il2cpp_codegen_string_literal_from_index(488);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral1895 = il2cpp_codegen_string_literal_from_index(1895);
		_stringLiteral1896 = il2cpp_codegen_string_literal_from_index(1896);
		_stringLiteral1897 = il2cpp_codegen_string_literal_from_index(1897);
		_stringLiteral1898 = il2cpp_codegen_string_literal_from_index(1898);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral1899 = il2cpp_codegen_string_literal_from_index(1899);
		_stringLiteral1900 = il2cpp_codegen_string_literal_from_index(1900);
		_stringLiteral1901 = il2cpp_codegen_string_literal_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0171;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m6473(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral488, L_5, _stringLiteral250, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0047;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_0047:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral1895, L_8, _stringLiteral1896, L_9, /*hidden argument*/NULL);
		RemotingException_t1138 * L_11 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0064:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m6274(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00b3;
		}
	}
	{
		StringU5BU5D_t204* L_16 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, _stringLiteral1897);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)_stringLiteral1897;
		StringU5BU5D_t204* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t204* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, _stringLiteral1898);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)_stringLiteral1898;
		StringU5BU5D_t204* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t204* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, _stringLiteral84);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)_stringLiteral84;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m1245(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t1138 * L_25 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00b3:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t203* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_29 = RemotingServices_GetMethodBaseFromName_m6478(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t386 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_0104;
		}
	}
	{
		ObjectU5BU5D_t207* L_31 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, _stringLiteral1899);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)_stringLiteral1899;
		ObjectU5BU5D_t207* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t207* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, _stringLiteral1900);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)_stringLiteral1900;
		ObjectU5BU5D_t207* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m1207(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t1138 * L_38 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_0104:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t386 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_47 = RemotingServices_GetVirtualMethod_m6471(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t386 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_016c;
		}
	}
	{
		ObjectU5BU5D_t207* L_49 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, _stringLiteral1899);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)_stringLiteral1899;
		ObjectU5BU5D_t207* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t207* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, _stringLiteral1900);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)_stringLiteral1900;
		ObjectU5BU5D_t207* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1207(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t1138 * L_56 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_016c:
	{
		goto IL_01a9;
	}

IL_0171:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m6477(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t386 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_01a9;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral1899, L_59, _stringLiteral1900, L_60, /*hidden argument*/NULL);
		RemotingException_t1138 * L_62 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_01a9:
	{
		MethodBase_t386 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01fb;
		}
	}
	{
		MethodBase_t386 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01fb;
		}
	}
	{
		TypeU5BU5D_t203* L_67 = MethodCall_get_GenericArguments_m6276(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01df;
		}
	}
	{
		RemotingException_t1138 * L_68 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_68, _stringLiteral1901, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01df:
	{
		MethodBase_t386 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t203* L_70 = MethodCall_get_GenericArguments_m6276(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t203* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01fb:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m6274 (MethodCall_t1094 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t203* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t203* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m6275(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1191(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001b:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_0041;
	}

IL_0027:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1191(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_003a:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t203* L_18 = (TypeU5BU5D_t203*)VirtFuncInvoker0< TypeU5BU5D_t203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t203* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		TypeU5BU5D_t203* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m1191(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0070:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t203* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_0058;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern Il2CppCodeGenString* _stringLiteral1902;
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m6275 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1902 = il2cpp_codegen_string_literal_from_index(1902);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m1239(L_0, _stringLiteral1902, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m1222(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1227(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m1224(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_003b:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t203* MethodCall_get_GenericArguments_m6276 (MethodCall_t1094 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t203* V_0 = {0};
	{
		TypeU5BU5D_t203* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeU5BU5D_t203* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_0012:
	{
		MethodBase_t386 * L_2 = (MethodBase_t386 *)VirtFuncInvoker0< MethodBase_t386 * >::Invoke(8 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t203* L_3 = (TypeU5BU5D_t203*)VirtFuncInvoker0< TypeU5BU5D_t203* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t203* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t203* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* MethodCallDictionary_t1101_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m6277 (MethodCallDictionary_t1101 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m6285(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t1101_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_1 = ((MethodCallDictionary_t1101_StaticFields*)MethodCallDictionary_t1101_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m6287(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t1101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1891;
extern "C" void MethodCallDictionary__cctor_m6278 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		MethodCallDictionary_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t204* L_0 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1886);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral1886;
		StringU5BU5D_t204* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1887);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral1887;
		StringU5BU5D_t204* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1888);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral1888;
		StringU5BU5D_t204* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1889);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral1889;
		StringU5BU5D_t204* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1890);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral1890;
		StringU5BU5D_t204* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1891);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral1891;
		((MethodCallDictionary_t1101_StaticFields*)MethodCallDictionary_t1101_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m6279 (DictionaryEnumerator_t1102 * __this, MethodDictionary_t1096 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1102 * G_B2_0 = {0};
	DictionaryEnumerator_t1102 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1102 * G_B3_1 = {0};
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		MethodDictionary_t1096 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1096 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		MethodDictionary_t1096 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t500_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m6280 (DictionaryEnumerator_t1102 * __this, const MethodInfo* method)
{
	DictionaryEntry_t567  V_0 = {0};
	{
		DictionaryEntry_t567  L_0 = (DictionaryEntry_t567 )VirtFuncInvoker0< DictionaryEntry_t567  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern TypeInfo* IDictionaryEnumerator_t566_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m6281 (DictionaryEnumerator_t1102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1096 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t204* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_003d:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		goto IL_0071;
	}

IL_004f:
	{
		MethodDictionary_t1096 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t566_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m6290(L_6, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		return 1;
	}

IL_0071:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern TypeInfo* InvalidOperationException_t580_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t566_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1903;
extern "C" DictionaryEntry_t567  DictionaryEnumerator_get_Entry_m6282 (DictionaryEnumerator_t1102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		IDictionaryEnumerator_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		_stringLiteral1903 = il2cpp_codegen_string_literal_from_index(1903);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		MethodDictionary_t1096 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t204* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1096 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1096 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t204* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t567  L_11 = {0};
		DictionaryEntry__ctor_m2254(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0041:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_0063;
		}
	}

IL_0058:
	{
		InvalidOperationException_t580 * L_14 = (InvalidOperationException_t580 *)il2cpp_codegen_object_new (InvalidOperationException_t580_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2253(L_14, _stringLiteral1903, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0063:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t567  L_16 = (DictionaryEntry_t567 )InterfaceFuncInvoker0< DictionaryEntry_t567  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t566_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m6283 (DictionaryEnumerator_t1102 * __this, const MethodInfo* method)
{
	DictionaryEntry_t567  V_0 = {0};
	{
		DictionaryEntry_t567  L_0 = (DictionaryEntry_t567 )VirtFuncInvoker0< DictionaryEntry_t567  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m6284 (DictionaryEnumerator_t1102 * __this, const MethodInfo* method)
{
	DictionaryEntry_t567  V_0 = {0};
	{
		DictionaryEntry_t567  L_0 = (DictionaryEntry_t567 )VirtFuncInvoker0< DictionaryEntry_t567  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m6285 (MethodDictionary_t1096 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1102_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m6286 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1102 * L_0 = (DictionaryEnumerator_t1102 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1102_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m6279(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m6287 (MethodDictionary_t1096 * __this, StringU5BU5D_t204* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t204* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m6288 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m6289 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(14 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0017:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m6290 (MethodDictionary_t1096 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t204* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t204* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		StringU5BU5D_t204* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1191(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t204* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m6291 (MethodDictionary_t1096 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		StringU5BU5D_t204* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1191(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t204* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0053:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m6292 (MethodDictionary_t1096 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* MethodDictionary_t1096_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t1103_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t1407_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1891;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1904;
extern Il2CppCodeGenString* _stringLiteral1905;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m6293 (MethodDictionary_t1096 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1096_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(752);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		IMethodMessage_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		IMethodReturnMessage_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(754);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1904 = il2cpp_codegen_string_literal_from_index(1904);
		_stringLiteral1905 = il2cpp_codegen_string_literal_from_index(1905);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0126;
		}
	}
	{
		Dictionary_2_t86 * L_2 = ((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1886, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1887, 1);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1888, 2);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1889, 3);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1891, 4);
		Dictionary_2_t86 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1890, 5);
		Dictionary_2_t86 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1904, 6);
		Dictionary_2_t86 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1905, 7);
		Dictionary_2_t86 * L_12 = V_1;
		((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t86 * L_13 = ((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00bc;
		}
		if (L_16 == 1)
		{
			goto IL_00c8;
		}
		if (L_16 == 2)
		{
			goto IL_00d4;
		}
		if (L_16 == 3)
		{
			goto IL_00e0;
		}
		if (L_16 == 4)
		{
			goto IL_00ec;
		}
		if (L_16 == 5)
		{
			goto IL_00f8;
		}
		if (L_16 == 6)
		{
			goto IL_0104;
		}
		if (L_16 == 7)
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0126;
	}

IL_00bc:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c8:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00d4:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00e0:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00ec:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1100 * L_26 = (LogicalCallContext_t1100 *)InterfaceFuncInvoker0< LogicalCallContext_t1100 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f8:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t207* L_28 = (ObjectU5BU5D_t207*)InterfaceFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_0104:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t207* L_30 = (ObjectU5BU5D_t207*)InterfaceFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_0115:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0126:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* MethodDictionary_t1096_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t1426_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1891;
extern Il2CppCodeGenString* _stringLiteral1904;
extern Il2CppCodeGenString* _stringLiteral1905;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1890;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1892;
extern "C" void MethodDictionary_SetMethodProperty_m6294 (MethodDictionary_t1096 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1096_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(752);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IInternalMessage_t1426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(755);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		_stringLiteral1904 = il2cpp_codegen_string_literal_from_index(1904);
		_stringLiteral1905 = il2cpp_codegen_string_literal_from_index(1905);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1890 = il2cpp_codegen_string_literal_from_index(1890);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1892 = il2cpp_codegen_string_literal_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t86 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t86 * L_2 = ((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t86 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral1891, 0);
		Dictionary_2_t86 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral1904, 0);
		Dictionary_2_t86 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral1905, 0);
		Dictionary_2_t86 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1887, 1);
		Dictionary_2_t86 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1888, 1);
		Dictionary_2_t86 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1889, 1);
		Dictionary_2_t86 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1890, 1);
		Dictionary_2_t86 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1886, 2);
		Dictionary_2_t86 * L_12 = V_1;
		((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t86 * L_13 = ((MethodDictionary_t1096_StaticFields*)MethodDictionary_t1096_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00a8;
		}
		if (L_16 == 1)
		{
			goto IL_00a9;
		}
		if (L_16 == 2)
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00cb;
	}

IL_00a8:
	{
		return;
	}

IL_00a9:
	{
		ArgumentException_t320 * L_17 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_17, _stringLiteral1892, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00b4:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t1426_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t1426_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t1426_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00cb:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m6295 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		DictionaryEntry_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t402 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t567  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		ArrayList_t402 * L_1 = V_0;
		StringU5BU5D_t204* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t204* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t500_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0050:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t567 *)((DictionaryEntry_t567 *)UnBox (L_13, DictionaryEntry_t567_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m4898((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m6290(__this, ((String_t*)Castclass(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0081;
			}
		}

IL_0073:
		{
			ArrayList_t402 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m4899((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0081:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0050;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(145)
		}

IL_009e:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00a6:
	{
		ArrayList_t402 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m6296 (MethodDictionary_t1096 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002e;
	}

IL_000e:
	{
		StringU5BU5D_t204* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1191(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t204* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(14 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0053:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m6297 (MethodDictionary_t1096 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		StringU5BU5D_t204* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1191(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t204* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1892;
extern "C" void MethodDictionary_Remove_m6298 (MethodDictionary_t1096 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		_stringLiteral1892 = il2cpp_codegen_string_literal_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		StringU5BU5D_t204* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1191(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t320 * L_6 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_6, _stringLiteral1892, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t204* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0055:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t576_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m6299 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t576_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t204* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_0020:
	{
		StringU5BU5D_t204* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m6300 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t576_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m6301 (MethodDictionary_t1096 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t576_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1102_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m6302 (MethodDictionary_t1096 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1102 * L_0 = (DictionaryEnumerator_t1102 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1102_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m6279(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern TypeInfo* IMethodReturnMessage_t1407_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1104_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m6303 (MethodReturnDictionary_t1104 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(754);
		MethodReturnDictionary_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(756);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m6285(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t74 * L_2 = (Exception_t74 *)InterfaceFuncInvoker0< Exception_t74 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t1407_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1104_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_3 = ((MethodReturnDictionary_t1104_StaticFields*)MethodReturnDictionary_t1104_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m6287(__this, L_3, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1104_il2cpp_TypeInfo_var);
		StringU5BU5D_t204* L_4 = ((MethodReturnDictionary_t1104_StaticFields*)MethodReturnDictionary_t1104_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m6287(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1104_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1886;
extern Il2CppCodeGenString* _stringLiteral1887;
extern Il2CppCodeGenString* _stringLiteral1888;
extern Il2CppCodeGenString* _stringLiteral1889;
extern Il2CppCodeGenString* _stringLiteral1904;
extern Il2CppCodeGenString* _stringLiteral1905;
extern Il2CppCodeGenString* _stringLiteral1891;
extern "C" void MethodReturnDictionary__cctor_m6304 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		MethodReturnDictionary_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(756);
		_stringLiteral1886 = il2cpp_codegen_string_literal_from_index(1886);
		_stringLiteral1887 = il2cpp_codegen_string_literal_from_index(1887);
		_stringLiteral1888 = il2cpp_codegen_string_literal_from_index(1888);
		_stringLiteral1889 = il2cpp_codegen_string_literal_from_index(1889);
		_stringLiteral1904 = il2cpp_codegen_string_literal_from_index(1904);
		_stringLiteral1905 = il2cpp_codegen_string_literal_from_index(1905);
		_stringLiteral1891 = il2cpp_codegen_string_literal_from_index(1891);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t204* L_0 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral1886);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral1886;
		StringU5BU5D_t204* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral1887);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral1887;
		StringU5BU5D_t204* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral1888);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral1888;
		StringU5BU5D_t204* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral1889);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral1889;
		StringU5BU5D_t204* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral1904);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral1904;
		StringU5BU5D_t204* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral1905);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral1905;
		StringU5BU5D_t204* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral1891);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)_stringLiteral1891;
		((MethodReturnDictionary_t1104_StaticFields*)MethodReturnDictionary_t1104_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t204* L_7 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, _stringLiteral1891);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)_stringLiteral1891;
		((MethodReturnDictionary_t1104_StaticFields*)MethodReturnDictionary_t1104_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t207* MonoMethodMessage_get_Args_m6305 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1100 * MonoMethodMessage_get_LogicalCallContext_m6306 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t1100 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t386 * MonoMethodMessage_get_MethodBase_m6307 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m6308 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m6309 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t376* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t203* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t376* L_2 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t376* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		TypeU5BU5D_t203* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t376* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t376* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0049:
	{
		TypeU5BU5D_t203* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m6310 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m6311 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m6312 (MonoMethodMessage_t1089 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t74 * MonoMethodMessage_get_Exception_m6313 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		Exception_t74 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m6314 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t112* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t207* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = 0;
		ByteU5BU5D_t112* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		ByteU5BU5D_t112* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t112* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t207* MonoMethodMessage_get_OutArgs_m6315 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t207* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t112* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t207* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ObjectU5BU5D_t207*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t112* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_0058;
	}

IL_002f:
	{
		ByteU5BU5D_t112* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t207* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t207* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t112* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t207* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m6316 (MonoMethodMessage_t1089 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m6317 (RemotingSurrogate_t1105 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m6318 (RemotingSurrogate_t1105 * __this, Object_t * ___obj, SerializationInfo_t317 * ___si, StreamingContext_t318  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t582 * L_0 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2299(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m6319 (ObjRefSurrogate_t1106 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1906;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m6320 (ObjRefSurrogate_t1106 * __this, Object_t * ___obj, SerializationInfo_t317 * ___si, StreamingContext_t318  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		_stringLiteral1906 = il2cpp_codegen_string_literal_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t582 * L_0 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2270(L_0, _stringLiteral1906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m6321 (RemotingSurrogateSelector_t1108 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const Il2CppType* ObjRef_t1126_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t1105_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m6322 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_0_0_0_var = il2cpp_codegen_type_from_index(757);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(758);
		ObjRefSurrogate_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(759);
		RemotingSurrogate_t1105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(760);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(ObjRef_t1126_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1106 * L_1 = (ObjRefSurrogate_t1106 *)il2cpp_codegen_object_new (ObjRefSurrogate_t1106_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m6319(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1105 * L_2 = (RemotingSurrogate_t1105 *)il2cpp_codegen_object_new (RemotingSurrogate_t1105_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m6317(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern TypeInfo* RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t1107_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m6323 (RemotingSurrogateSelector_t1108 * __this, Type_t * ___type, StreamingContext_t318  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(758);
		ISurrogateSelector_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(761);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var);
		RemotingSurrogate_t1105 * L_3 = ((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t1106 * L_8 = ((RemotingSurrogateSelector_t1108_StaticFields*)RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_002d:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t318  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t318 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t1107_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t1103_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m6324 (ReturnMessage_t1109 * __this, Object_t * ___ret, ObjectU5BU5D_t207* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1100 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t207* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1100 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t386 * L_8 = (MethodBase_t386 *)InterfaceFuncInvoker0< MethodBase_t386 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0044:
	{
		ObjectU5BU5D_t207* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, L_10));
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t1103_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m6325 (ReturnMessage_t1109 * __this, Exception_t74 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Exception_t74 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t386 * L_3 = (MethodBase_t386 *)InterfaceFuncInvoker0< MethodBase_t386 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1100 * L_5 = (LogicalCallContext_t1100 *)InterfaceFuncInvoker0< LogicalCallContext_t1100 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_002b:
	{
		__this->____args_1 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m6326 (ReturnMessage_t1109 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t207* ReturnMessage_get_Args_m6327 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t207* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t1100_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1100 * ReturnMessage_get_LogicalCallContext_m6328 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(749);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1100 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1100 * L_1 = (LogicalCallContext_t1100 *)il2cpp_codegen_object_new (LogicalCallContext_t1100_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m6251(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1100 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t386 * ReturnMessage_get_MethodBase_m6329 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		MethodBase_t386 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m6330 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		MethodBase_t386 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		MethodBase_t386 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0027:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m6331 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t376* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t386 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		TypeU5BU5D_t203* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t386 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t376* L_3 = (ParameterInfoU5BU5D_t376*)VirtFuncInvoker0< ParameterInfoU5BU5D_t376* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t376* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t203*)SZArrayNew(TypeU5BU5D_t203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t203* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t376* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t377 **)(ParameterInfo_t377 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t376* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t203* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern TypeInfo* MethodReturnDictionary_t1104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m6332 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t1104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(756);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t1104 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		MethodReturnDictionary_t1104 * L_1 = (MethodReturnDictionary_t1104 *)il2cpp_codegen_object_new (MethodReturnDictionary_t1104_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m6303(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0017:
	{
		MethodReturnDictionary_t1104 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m6333 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		MethodBase_t386 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		MethodBase_t386 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_002c:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m6334 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m6335 (ReturnMessage_t1109 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t74 * ReturnMessage_get_Exception_m6336 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		Exception_t74 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern TypeInfo* ArgInfo_t1087_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t207* ReturnMessage_get_OutArgs_m6337 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(762);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t207* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		ObjectU5BU5D_t207* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		ArgInfo_t1087 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		MethodBase_t386 * L_3 = (MethodBase_t386 *)VirtFuncInvoker0< MethodBase_t386 * >::Invoke(7 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t1087 * L_4 = (ArgInfo_t1087 *)il2cpp_codegen_object_new (ArgInfo_t1087_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m6209(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_0033:
	{
		ArgInfo_t1087 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t207* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t207* L_7 = ArgInfo_GetInOutArgs_m6210(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_004a:
	{
		ObjectU5BU5D_t207* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m6338 (ReturnMessage_t1109 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::.ctor()
extern "C" void SoapAttribute__ctor_m6339 (SoapAttribute_t1110 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute()
extern "C" bool SoapAttribute_get_UseAttribute_m6340 (SoapAttribute_t1110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace()
extern "C" String_t* SoapAttribute_get_XmlNamespace_m6341 (SoapAttribute_t1110 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___ProtXmlNamespace_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object)
extern "C" void SoapAttribute_SetReflectionObject_m6342 (SoapAttribute_t1110 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___reflectionObject;
		__this->___ReflectInfo_2 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"

// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"


// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::.ctor()
extern "C" void SoapFieldAttribute__ctor_m6343 (SoapFieldAttribute_t1111 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m6339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::get_XmlElementName()
extern "C" String_t* SoapFieldAttribute_get_XmlElementName_m6344 (SoapFieldAttribute_t1111 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____elementName_3);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::IsInteropXmlElement()
extern "C" bool SoapFieldAttribute_IsInteropXmlElement_m6345 (SoapFieldAttribute_t1111 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::SetReflectionObject(System.Object)
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" void SoapFieldAttribute_SetReflectionObject_m6346 (SoapFieldAttribute_t1111 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfo_t * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((FieldInfo_t *)Castclass(L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____elementName_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____elementName_3 = L_3;
	}

IL_001e:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttribut.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"

// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::.ctor()
extern "C" void SoapMethodAttribute__ctor_m6347 (SoapMethodAttribute_t1112 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m6339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_UseAttribute()
extern "C" bool SoapMethodAttribute_get_UseAttribute_m6348 (SoapMethodAttribute_t1112 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_XmlNamespace()
extern "C" String_t* SoapMethodAttribute_get_XmlNamespace_m6349 (SoapMethodAttribute_t1112 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____namespace_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::SetReflectionObject(System.Object)
extern TypeInfo* MethodBase_t386_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1907;
extern Il2CppCodeGenString* _stringLiteral1908;
extern Il2CppCodeGenString* _stringLiteral586;
extern "C" void SoapMethodAttribute_SetReflectionObject_m6350 (SoapMethodAttribute_t1112 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBase_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(672);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		_stringLiteral1907 = il2cpp_codegen_string_literal_from_index(1907);
		_stringLiteral1908 = il2cpp_codegen_string_literal_from_index(1908);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t386 * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((MethodBase_t386 *)Castclass(L_0, MethodBase_t386_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____responseElement_3);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		MethodBase_t386 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1205(NULL /*static, unused*/, L_3, _stringLiteral1907, /*hidden argument*/NULL);
		__this->____responseElement_3 = L_4;
	}

IL_0028:
	{
		String_t* L_5 = (__this->____responseNamespace_4);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		MethodBase_t386 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_7 = SoapServices_GetXmlNamespaceForMethodResponse_m6510(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____responseNamespace_4 = L_7;
	}

IL_003f:
	{
		String_t* L_8 = (__this->____returnElement_5);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		__this->____returnElement_5 = _stringLiteral1908;
	}

IL_0055:
	{
		String_t* L_9 = (__this->____soapAction_6);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		MethodBase_t386 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_11 = SoapServices_GetXmlNamespaceForMethodCall_m6509(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		MethodBase_t386 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1209(NULL /*static, unused*/, L_11, _stringLiteral586, L_13, /*hidden argument*/NULL);
		__this->____soapAction_6 = L_14;
	}

IL_007c:
	{
		String_t* L_15 = (__this->____namespace_8);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		MethodBase_t386 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_17 = SoapServices_GetXmlNamespaceForMethodCall_m6509(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		__this->____namespace_8 = L_17;
	}

IL_0093:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Metadata.SoapParameterAttribute::.ctor()
extern "C" void SoapParameterAttribute__ctor_m6351 (SoapParameterAttribute_t1113 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m6339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::.ctor()
extern "C" void SoapTypeAttribute__ctor_m6352 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m6339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_UseAttribute()
extern "C" bool SoapTypeAttribute_get_UseAttribute_m6353 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlElementName()
extern "C" String_t* SoapTypeAttribute_get_XmlElementName_m6354 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlElementName_4);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlNamespace_m6355 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlNamespace_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeName()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeName_m6356 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeName_6);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeNamespace_m6357 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeNamespace_7);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlElement()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlElement_m6358 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_9);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlType()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlType_m6359 (SoapTypeAttribute_t1114 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isType_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::SetReflectionObject(System.Object)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern "C" void SoapTypeAttribute_SetReflectionObject_m6360 (SoapTypeAttribute_t1114 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((Type_t *)Castclass(L_0, Type_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____xmlElementName_4);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____xmlElementName_4 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____xmlTypeName_6);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		__this->____xmlTypeName_6 = L_6;
	}

IL_0035:
	{
		String_t* L_7 = (__this->____xmlTypeNamespace_7);
		if (L_7)
		{
			goto IL_0088;
		}
	}
	{
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		Assembly_t587 * L_9 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Assembly_t587 * L_11 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_10);
		if ((!(((Object_t*)(Assembly_t587 *)L_9) == ((Object_t*)(Assembly_t587 *)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_12;
		goto IL_0076;
	}

IL_0065:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		Assembly_t587 * L_14 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_13);
		NullCheck(L_14);
		AssemblyName_t1002 * L_15 = (AssemblyName_t1002 *)VirtFuncInvoker0< AssemblyName_t1002 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = AssemblyName_get_Name_m5841(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0076:
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_17);
		String_t* L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_20 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m6505(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->____xmlTypeNamespace_7 = L_20;
	}

IL_0088:
	{
		String_t* L_21 = (__this->____xmlNamespace_5);
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_22 = (__this->____xmlTypeNamespace_7);
		__this->____xmlNamespace_5 = L_22;
	}

IL_009f:
	{
		return;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"


// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1120_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t441_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t441 * ProxyAttribute_CreateInstance_m6361 (ProxyAttribute_t1115 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		RemotingProxy_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(764);
		MarshalByRefObject_t441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t1120 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t1120 * L_2 = (RemotingProxy_t1120 *)il2cpp_codegen_object_new (RemotingProxy_t1120_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m6374(L_2, L_0, L_1, (ObjectU5BU5D_t207*)(ObjectU5BU5D_t207*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t1120 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t441 *)Castclass(L_4, MarshalByRefObject_t441_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" RealProxy_t1116 * ProxyAttribute_CreateProxy_m6362 (ProxyAttribute_t1115 * __this, ObjRef_t1126 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1079 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1126 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m6489(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t1116 * L_3 = RemotingServices_GetRealProxy_m6476(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m6363 (ProxyAttribute_t1115 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m6364 (ProxyAttribute_t1115 * __this, Context_t1079 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m6365 (RealProxy_t1116 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m6367(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m6366 (RealProxy_t1116 * __this, Type_t * ___classToProxy, ClientIdentity_t1128 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m6367(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t1128 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1909;
extern Il2CppCodeGenString* _stringLiteral1910;
extern "C" void RealProxy__ctor_m6367 (RealProxy_t1116 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		_stringLiteral1909 = il2cpp_codegen_string_literal_from_index(1909);
		_stringLiteral1910 = il2cpp_codegen_string_literal_from_index(1910);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t320 * L_4 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1183(L_4, _stringLiteral1909, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002e:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m1250(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		NotSupportedException_t582 * L_9 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2270(L_9, _stringLiteral1910, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0050:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m6368 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Type_t * (*RealProxy_InternalGetProxyType_m6368_ftn) (Object_t *);
	return  ((RealProxy_InternalGetProxyType_m6368_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType) (___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const Il2CppType* MarshalByRefObject_t441_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m6369 (RealProxy_t1116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t441_0_0_0_var = il2cpp_codegen_type_from_index(547);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_002d:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m6368(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m6370 (RealProxy_t1116 * __this, String_t* ___className, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m6370_ftn) (RealProxy_t1116 *, String_t*);
	return  ((RealProxy_InternalGetTransparentProxy_m6370_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy) (__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const Il2CppType* MarshalByRefObject_t441_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m6371 (RealProxy_t1116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t441_0_0_0_var = il2cpp_codegen_type_from_index(547);
		IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(765);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1191(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}

IL_003f:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_004b:
	{
		goto IL_005c;
	}

IL_0050:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_005c:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_0069:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m6372 (RealProxy_t1116 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m6373 (RemotingProxy_t1120 * __this, Type_t * ___type, ClientIdentity_t1128 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1128 * L_1 = ___identity;
		RealProxy__ctor_m6366(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t1128 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m6391(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1128 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m6400(L_4, /*hidden argument*/NULL);
		((RealProxy_t1116 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m6374 (RemotingProxy_t1120 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m6365(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t207* L_3 = ___activationAttributes;
		ConstructionCall_t1093 * L_4 = ActivationServices_CreateConstructionCall_m6142(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1120_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1911;
extern Il2CppCodeGenString* _stringLiteral1912;
extern "C" void RemotingProxy__cctor_m6375 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		RemotingProxy_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(764);
		_stringLiteral1911 = il2cpp_codegen_string_literal_from_index(1911);
		_stringLiteral1912 = il2cpp_codegen_string_literal_from_index(1912);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, _stringLiteral1911);
		((RemotingProxy_t1120_StaticFields*)RemotingProxy_t1120_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, _stringLiteral1912);
		((RemotingProxy_t1120_StaticFields*)RemotingProxy_t1120_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t1128_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m6376 (RemotingProxy_t1120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(766);
		IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(765);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t1126 * V_0 = {0};
	{
		Identity_t1118 * L_0 = (((RealProxy_t1116 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t1128 *)IsInst(L_0, ClientIdentity_t1128_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		Identity_t1118 * L_1 = (((RealProxy_t1116 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1126 * L_2 = (ObjRef_t1126 *)VirtFuncInvoker1< ObjRef_t1126 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1126 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ObjRef_t1126 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0034:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m6369(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern TypeInfo* ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m6377 (RemotingProxy_t1120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(767);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
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
		{
			Identity_t1118 * L_0 = (((RealProxy_t1116 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_000b:
		{
			Identity_t1118 * L_1 = (((RealProxy_t1116 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1141 *)IsInst(L_1, ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var)))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Identity_t1118 * L_2 = (((RealProxy_t1116 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m6492(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_LEAVE(0x32, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0032:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1121_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m6378 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		TrackingServices_t1121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(768);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		((TrackingServices_t1121_StaticFields*)TrackingServices_t1121_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t1428_0_0_0_var;
extern TypeInfo* TrackingServices_t1121_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t1427_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t1428_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m6379 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1126 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t1428_0_0_0_var = il2cpp_codegen_type_from_index(769);
		TrackingServices_t1121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(768);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		ITrackingHandlerU5BU5D_t1427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(770);
		ITrackingHandler_t1428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(769);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t1427* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
		ArrayList_t402 * L_0 = ((TrackingServices_t1121_StaticFields*)TrackingServices_t1121_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_3 = ((TrackingServices_t1121_StaticFields*)TrackingServices_t1121_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0044);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
			ArrayList_t402 * L_5 = ((TrackingServices_t1121_StaticFields*)TrackingServices_t1121_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t1428_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(43 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1427*)Castclass(L_7, ITrackingHandlerU5BU5D_t1427_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_004b:
	{
		V_2 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		ITrackingHandlerU5BU5D_t1427* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1126 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1126 * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t1428_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1427* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0052;
		}
	}

IL_0069:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1913;
extern Il2CppCodeGenString* _stringLiteral252;
extern "C" void ActivatedClientTypeEntry__ctor_m6380 (ActivatedClientTypeEntry_t1122 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1913 = il2cpp_codegen_string_literal_from_index(1913);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t587 * V_0 = {0};
	{
		TypeEntry__ctor_m6517(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m6519(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m6521(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appUrl;
		__this->___applicationUrl_2 = L_2;
		String_t* L_3 = ___assemblyName;
		Assembly_t587 * L_4 = Assembly_Load_m5826(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Assembly_t587 * L_5 = V_0;
		String_t* L_6 = ___typeName;
		NullCheck(L_5);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_5, L_6);
		__this->___obj_type_3 = L_7;
		Type_t * L_8 = (__this->___obj_type_3);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = ___typeName;
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral1913, L_9, _stringLiteral252, L_10, /*hidden argument*/NULL);
		RemotingException_t1138 * L_12 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m6381 (ActivatedClientTypeEntry_t1122 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t1409* ActivatedClientTypeEntry_get_ContextAttributes_m6382 (ActivatedClientTypeEntry_t1122 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1409*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m6383 (ActivatedClientTypeEntry_t1122 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m6384 (ActivatedClientTypeEntry_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m6520(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m6518(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m6381(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1209(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"



// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1913;
extern Il2CppCodeGenString* _stringLiteral252;
extern "C" void ActivatedServiceTypeEntry__ctor_m6385 (ActivatedServiceTypeEntry_t1124 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1913 = il2cpp_codegen_string_literal_from_index(1913);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t587 * V_0 = {0};
	{
		TypeEntry__ctor_m6517(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m6519(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m6521(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___assemblyName;
		Assembly_t587 * L_3 = Assembly_Load_m5826(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t587 * L_4 = V_0;
		String_t* L_5 = ___typeName;
		NullCheck(L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		__this->___obj_type_2 = L_6;
		Type_t * L_7 = (__this->___obj_type_2);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___typeName;
		String_t* L_9 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral1913, L_8, _stringLiteral252, L_9, /*hidden argument*/NULL);
		RemotingException_t1138 * L_11 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004a:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m6386 (ActivatedServiceTypeEntry_t1124 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_2);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m6387 (ActivatedServiceTypeEntry_t1124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_AssemblyName_m6518(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_TypeName_m6520(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1205(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m6388 (EnvoyInfo_t1125 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m6389 (EnvoyInfo_t1125 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m6390 (Identity_t1118 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m6391 (Identity_t1118 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m6392 (Identity_t1118 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m6393 (Identity_t1118 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m6394 (Identity_t1118 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m6395 (Identity_t1118 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern TypeInfo* IEnvoyInfo_t1132_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m6396 (ClientIdentity_t1128 * __this, String_t* ___objectUri, ObjRef_t1126 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(771);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t1128 * G_B2_0 = {0};
	ClientIdentity_t1128 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t1128 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m6390(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t1126 * L_1 = ___objRef;
		((Identity_t1118 *)__this)->____objRef_3 = L_1;
		ObjRef_t1126 * L_2 = (((Identity_t1118 *)__this)->____objRef_3);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		ObjRef_t1126 * L_4 = (((Identity_t1118 *)__this)->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t1132_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		((Identity_t1118 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t441_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t441 * ClientIdentity_get_ClientProxy_m6397 (ClientIdentity_t1128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t1127 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t441 *)Castclass(L_1, MarshalByRefObject_t441_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern TypeInfo* WeakReference_t1127_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m6398 (ClientIdentity_t1128 * __this, MarshalByRefObject_t441 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(772);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t441 * L_0 = ___value;
		WeakReference_t1127 * L_1 = (WeakReference_t1127 *)il2cpp_codegen_object_new (WeakReference_t1127_il2cpp_TypeInfo_var);
		WeakReference__ctor_m8249(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1126 * ClientIdentity_CreateObjRef_m6399 (ClientIdentity_t1128 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t1126 * L_0 = (((Identity_t1118 *)__this)->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m6400 (ClientIdentity_t1128 * __this, const MethodInfo* method)
{
	{
		ObjRef_t1126 * L_0 = (((Identity_t1118 *)__this)->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServicesMethodDeclarations.h"



// System.Void System.Runtime.Remoting.InternalRemotingServices::.cctor()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1129_il2cpp_TypeInfo_var;
extern "C" void InternalRemotingServices__cctor_m6401 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		InternalRemotingServices_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(773);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((InternalRemotingServices_t1129_StaticFields*)InternalRemotingServices_t1129_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute System.Runtime.Remoting.InternalRemotingServices::GetCachedSoapAttribute(System.Object)
extern const Il2CppType* SoapAttribute_t1110_0_0_0_var;
extern TypeInfo* InternalRemotingServices_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SoapAttribute_t1110_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t1411_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1114_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1111_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBase_t386_il2cpp_TypeInfo_var;
extern TypeInfo* SoapMethodAttribute_t1112_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t377_il2cpp_TypeInfo_var;
extern TypeInfo* SoapParameterAttribute_t1113_il2cpp_TypeInfo_var;
extern "C" SoapAttribute_t1110 * InternalRemotingServices_GetCachedSoapAttribute_m6402 (Object_t * __this /* static, unused */, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapAttribute_t1110_0_0_0_var = il2cpp_codegen_type_from_index(774);
		InternalRemotingServices_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(773);
		SoapAttribute_t1110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(774);
		ICustomAttributeProvider_t1411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(775);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		SoapTypeAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(776);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		SoapFieldAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(777);
		MethodBase_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(672);
		SoapMethodAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		ParameterInfo_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(659);
		SoapParameterAttribute_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(779);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	SoapAttribute_t1110 * V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t207* V_3 = {0};
	SoapAttribute_t1110 * V_4 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((InternalRemotingServices_t1129_StaticFields*)InternalRemotingServices_t1129_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_3 = ((InternalRemotingServices_t1129_StaticFields*)InternalRemotingServices_t1129_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_4 = ___reflectionObject;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((SoapAttribute_t1110 *)IsInst(L_5, SoapAttribute_t1110_il2cpp_TypeInfo_var));
			SoapAttribute_t1110 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			SoapAttribute_t1110 * L_7 = V_1;
			V_4 = L_7;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_0030:
		{
			Object_t * L_8 = ___reflectionObject;
			V_2 = ((Object_t *)Castclass(L_8, ICustomAttributeProvider_t1411_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_10 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(SoapAttribute_t1110_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			ObjectU5BU5D_t207* L_11 = (ObjectU5BU5D_t207*)InterfaceFuncInvoker2< ObjectU5BU5D_t207*, Type_t *, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t1411_il2cpp_TypeInfo_var, L_9, L_10, 1);
			V_3 = L_11;
			ObjectU5BU5D_t207* L_12 = V_3;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) <= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_0052:
		{
			ObjectU5BU5D_t207* L_13 = V_3;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			V_1 = ((SoapAttribute_t1110 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), SoapAttribute_t1110_il2cpp_TypeInfo_var));
			goto IL_00b3;
		}

IL_0060:
		{
			Object_t * L_15 = ___reflectionObject;
			if (!((Type_t *)IsInst(L_15, Type_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0076;
			}
		}

IL_006b:
		{
			SoapTypeAttribute_t1114 * L_16 = (SoapTypeAttribute_t1114 *)il2cpp_codegen_object_new (SoapTypeAttribute_t1114_il2cpp_TypeInfo_var);
			SoapTypeAttribute__ctor_m6352(L_16, /*hidden argument*/NULL);
			V_1 = L_16;
			goto IL_00b3;
		}

IL_0076:
		{
			Object_t * L_17 = ___reflectionObject;
			if (!((FieldInfo_t *)IsInst(L_17, FieldInfo_t_il2cpp_TypeInfo_var)))
			{
				goto IL_008c;
			}
		}

IL_0081:
		{
			SoapFieldAttribute_t1111 * L_18 = (SoapFieldAttribute_t1111 *)il2cpp_codegen_object_new (SoapFieldAttribute_t1111_il2cpp_TypeInfo_var);
			SoapFieldAttribute__ctor_m6343(L_18, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00b3;
		}

IL_008c:
		{
			Object_t * L_19 = ___reflectionObject;
			if (!((MethodBase_t386 *)IsInst(L_19, MethodBase_t386_il2cpp_TypeInfo_var)))
			{
				goto IL_00a2;
			}
		}

IL_0097:
		{
			SoapMethodAttribute_t1112 * L_20 = (SoapMethodAttribute_t1112 *)il2cpp_codegen_object_new (SoapMethodAttribute_t1112_il2cpp_TypeInfo_var);
			SoapMethodAttribute__ctor_m6347(L_20, /*hidden argument*/NULL);
			V_1 = L_20;
			goto IL_00b3;
		}

IL_00a2:
		{
			Object_t * L_21 = ___reflectionObject;
			if (!((ParameterInfo_t377 *)IsInst(L_21, ParameterInfo_t377_il2cpp_TypeInfo_var)))
			{
				goto IL_00b3;
			}
		}

IL_00ad:
		{
			SoapParameterAttribute_t1113 * L_22 = (SoapParameterAttribute_t1113 *)il2cpp_codegen_object_new (SoapParameterAttribute_t1113_il2cpp_TypeInfo_var);
			SoapParameterAttribute__ctor_m6351(L_22, /*hidden argument*/NULL);
			V_1 = L_22;
		}

IL_00b3:
		{
			SoapAttribute_t1110 * L_23 = V_1;
			Object_t * L_24 = ___reflectionObject;
			NullCheck(L_23);
			VirtActionInvoker1< Object_t * >::Invoke(6 /* System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object) */, L_23, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_25 = ((InternalRemotingServices_t1129_StaticFields*)InternalRemotingServices_t1129_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_26 = ___reflectionObject;
			SoapAttribute_t1110 * L_27 = V_1;
			NullCheck(L_25);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_25, L_26, L_27);
			SoapAttribute_t1110 * L_28 = V_1;
			V_4 = L_28;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_00ce:
		{
			; // IL_00ce: leave IL_00da
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Object_t * L_29 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00da:
	{
		SoapAttribute_t1110 * L_30 = V_4;
		return L_30;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m6403 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m6416(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t1130_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t1132_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t1416_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t342_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t582_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral289;
extern Il2CppCodeGenString* _stringLiteral1914;
extern Il2CppCodeGenString* _stringLiteral1915;
extern Il2CppCodeGenString* _stringLiteral1916;
extern Il2CppCodeGenString* _stringLiteral1917;
extern Il2CppCodeGenString* _stringLiteral1918;
extern "C" void ObjRef__ctor_m6404 (ObjRef_t1126 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(765);
		IChannelInfo_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(780);
		IEnvoyInfo_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(771);
		IConvertible_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Convert_t342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		NotSupportedException_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral289 = il2cpp_codegen_string_literal_from_index(289);
		_stringLiteral1914 = il2cpp_codegen_string_literal_from_index(1914);
		_stringLiteral1915 = il2cpp_codegen_string_literal_from_index(1915);
		_stringLiteral1916 = il2cpp_codegen_string_literal_from_index(1916);
		_stringLiteral1917 = il2cpp_codegen_string_literal_from_index(1917);
		_stringLiteral1918 = il2cpp_codegen_string_literal_from_index(1918);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t1183 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t86 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1183 * L_1 = SerializationInfo_GetEnumerator_m6646(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_016d;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1183 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m6655(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_0167;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_5 = ((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		Dictionary_2_t86 * L_6 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t86 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral289, 0);
		Dictionary_2_t86 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1914, 1);
		Dictionary_2_t86 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1915, 2);
		Dictionary_2_t86 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1916, 3);
		Dictionary_2_t86 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1917, 4);
		Dictionary_2_t86 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral1918, 5);
		Dictionary_2_t86 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8 = L_13;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		Dictionary_2_t86 * L_14 = ((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00c1;
		}
		if (L_17 == 1)
		{
			goto IL_00d7;
		}
		if (L_17 == 2)
		{
			goto IL_00ed;
		}
		if (L_17 == 3)
		{
			goto IL_0103;
		}
		if (L_17 == 4)
		{
			goto IL_0119;
		}
		if (L_17 == 5)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		SerializationInfoEnumerator_t1183 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m6656(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00d7:
	{
		SerializationInfoEnumerator_t1183 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m6656(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00ed:
	{
		SerializationInfoEnumerator_t1183 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m6656(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t1130_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0103:
	{
		SerializationInfoEnumerator_t1183 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m6656(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t1132_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0119:
	{
		SerializationInfoEnumerator_t1183 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m6656(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInst(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_013d;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t1416_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1416_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t1416_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0144;
	}

IL_013d:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t327_il2cpp_TypeInfo_var))));
	}

IL_0144:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_014c;
		}
	}
	{
		V_1 = 0;
	}

IL_014c:
	{
		goto IL_016d;
	}

IL_0151:
	{
		SerializationInfoEnumerator_t1183 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m6656(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t342_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m1259(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_016d;
	}

IL_0167:
	{
		NotSupportedException_t582 * L_36 = (NotSupportedException_t582 *)il2cpp_codegen_object_new (NotSupportedException_t582_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2299(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_016d:
	{
		SerializationInfoEnumerator_t1183 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = SerializationInfoEnumerator_MoveNext_m6657(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0190:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t1126_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m6405 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t1126_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m6406 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m6407 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m6408 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m6409 (ObjRef_t1126 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m6410 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m6411 (ObjRef_t1126 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m6412 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m6413 (ObjRef_t1126 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IRemotingTypeInfo_t1131_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t1132_0_0_0_var;
extern const Il2CppType* IChannelInfo_t1130_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral289;
extern Il2CppCodeGenString* _stringLiteral1914;
extern Il2CppCodeGenString* _stringLiteral1916;
extern Il2CppCodeGenString* _stringLiteral1915;
extern Il2CppCodeGenString* _stringLiteral1918;
extern "C" void ObjRef_GetObjectData_m6414 (ObjRef_t1126 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1131_0_0_0_var = il2cpp_codegen_type_from_index(765);
		IEnvoyInfo_t1132_0_0_0_var = il2cpp_codegen_type_from_index(771);
		IChannelInfo_t1130_0_0_0_var = il2cpp_codegen_type_from_index(780);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		_stringLiteral289 = il2cpp_codegen_string_literal_from_index(289);
		_stringLiteral1914 = il2cpp_codegen_string_literal_from_index(1914);
		_stringLiteral1916 = il2cpp_codegen_string_literal_from_index(1916);
		_stringLiteral1915 = il2cpp_codegen_string_literal_from_index(1915);
		_stringLiteral1918 = il2cpp_codegen_string_literal_from_index(1918);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t317 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m1206(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m6645(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2277(L_2, _stringLiteral289, L_3, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t1131_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2264(L_4, _stringLiteral1914, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t1132_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m2264(L_7, _stringLiteral1916, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t1130_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m2264(L_10, _stringLiteral1915, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t317 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m2266(L_13, _stringLiteral1918, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m6415 (ObjRef_t1126 * __this, StreamingContext_t318  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1126_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1126_StaticFields*)ObjRef_t1126_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m6474(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern TypeInfo* ChannelInfo_t1072_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m6416 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t1072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(781);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t1072 * L_0 = (ChannelInfo_t1072 *)il2cpp_codegen_object_new (ChannelInfo_t1072_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m6153(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m6417 (ObjRef_t1126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(765);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1131_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetType_m4150(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____serverType_5 = L_3;
	}

IL_0021:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
#ifndef _MSC_VER
#else
#endif

// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandler.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m6418 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6 = L_0;
		Hashtable_t392 * L_1 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7 = L_1;
		Hashtable_t392 * L_2 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8 = L_2;
		Hashtable_t392 * L_3 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9 = L_3;
		Hashtable_t392 * L_4 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10 = L_4;
		Hashtable_t392 * L_5 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11 = L_5;
		Hashtable_t392 * L_6 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m6419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_set_ApplicationName_m6420 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m6421 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m7475(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* SmallXmlParser_t865_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t945_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1135_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m6422 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		SmallXmlParser_t865_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		StreamReader_t945_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(636);
		ConfigHandler_t1135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(782);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	SmallXmlParser_t865 * V_1 = {0};
	TextReader_t868 * V_2 = {0};
	ConfigHandler_t1135 * V_3 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			bool L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			bool L_3 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3;
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}

IL_0025:
		{
			SmallXmlParser_t865 * L_4 = (SmallXmlParser_t865 *)il2cpp_codegen_object_new (SmallXmlParser_t865_il2cpp_TypeInfo_var);
			SmallXmlParser__ctor_m4709(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = Environment_GetMachineConfigPath_m7871(NULL /*static, unused*/, /*hidden argument*/NULL);
			StreamReader_t945 * L_6 = (StreamReader_t945 *)il2cpp_codegen_object_new (StreamReader_t945_il2cpp_TypeInfo_var);
			StreamReader__ctor_m5431(L_6, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			ConfigHandler_t1135 * L_7 = (ConfigHandler_t1135 *)il2cpp_codegen_object_new (ConfigHandler_t1135_il2cpp_TypeInfo_var);
			ConfigHandler__ctor_m6434(L_7, 1, /*hidden argument*/NULL);
			V_3 = L_7;
			SmallXmlParser_t865 * L_8 = V_1;
			TextReader_t868 * L_9 = V_2;
			ConfigHandler_t1135 * L_10 = V_3;
			NullCheck(L_8);
			SmallXmlParser_Parse_m4722(L_8, L_9, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x57, FINALLY_004a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_004a;
		}

FINALLY_004a:
		{ // begin finally (depth: 2)
			{
				TextReader_t868 * L_11 = V_2;
				if (!L_11)
				{
					goto IL_0056;
				}
			}

IL_0050:
			{
				TextReader_t868 * L_12 = V_2;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_12);
			}

IL_0056:
			{
				IL2CPP_END_FINALLY(74)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(74)
		{
			IL2CPP_JUMP_TBL(0x57, IL_0057)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 1;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_13 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t1122 * RemotingConfiguration_IsRemotelyActivatedClientType_m6423 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(783);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	ActivatedClientTypeEntry_t1122 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t1122 *)IsInst(L_4, ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		}

IL_0022:
		{
			; // IL_0022: leave IL_002e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_5 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_002e:
	{
		ActivatedClientTypeEntry_t1122 * L_6 = V_1;
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1919;
extern Il2CppCodeGenString* _stringLiteral1920;
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m6424 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1122 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1919 = il2cpp_codegen_string_literal_from_index(1919);
		_stringLiteral1920 = il2cpp_codegen_string_literal_from_index(1920);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			ActivatedClientTypeEntry_t1122 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_6 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1122 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			ActivatedClientTypeEntry_t1122 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1919, L_12, _stringLiteral1920, /*hidden argument*/NULL);
			RemotingException_t1138 * L_14 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_15 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1122 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_16, /*hidden argument*/NULL);
			ActivatedClientTypeEntry_t1122 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			ActivatedClientTypeEntry_t1122 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m6144(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_21 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m6425 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1124 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9;
		ActivatedServiceTypeEntry_t1124 * L_3 = ___entry;
		NullCheck(L_3);
		Type_t * L_4 = ActivatedServiceTypeEntry_get_ObjectType_m6386(L_3, /*hidden argument*/NULL);
		ActivatedServiceTypeEntry_t1124 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_4, L_5);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_6 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1919;
extern Il2CppCodeGenString* _stringLiteral1920;
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m6426 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1147 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1919 = il2cpp_codegen_string_literal_from_index(1919);
		_stringLiteral1920 = il2cpp_codegen_string_literal_from_index(1920);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1147 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = WellKnownClientTypeEntry_get_ObjectType_m6526(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_6 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			WellKnownClientTypeEntry_t1147 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = WellKnownClientTypeEntry_get_ObjectType_m6526(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			WellKnownClientTypeEntry_t1147 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = WellKnownClientTypeEntry_get_ObjectType_m6526(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1919, L_12, _stringLiteral1920, /*hidden argument*/NULL);
			RemotingException_t1138 * L_14 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_15 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1147 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = WellKnownClientTypeEntry_get_ObjectType_m6526(L_16, /*hidden argument*/NULL);
			WellKnownClientTypeEntry_t1147 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			WellKnownClientTypeEntry_t1147 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = WellKnownClientTypeEntry_get_ObjectType_m6526(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m6144(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_21 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m6427 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1149 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_2 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8;
		WellKnownServiceTypeEntry_t1149 * L_3 = ___entry;
		NullCheck(L_3);
		String_t* L_4 = WellKnownServiceTypeEntry_get_ObjectUri_m6532(L_3, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1149 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_4, L_5);
		WellKnownServiceTypeEntry_t1149 * L_6 = ___entry;
		NullCheck(L_6);
		Type_t * L_7 = WellKnownServiceTypeEntry_get_ObjectType_m6531(L_6, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1149 * L_8 = ___entry;
		NullCheck(L_8);
		String_t* L_9 = WellKnownServiceTypeEntry_get_ObjectUri_m6532(L_8, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1149 * L_10 = ___entry;
		NullCheck(L_10);
		int32_t L_11 = WellKnownServiceTypeEntry_get_Mode_m6530(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		RemotingServices_CreateWellKnownServerIdentity_m6487(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_12 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m6428 (Object_t * __this /* static, unused */, ChannelData_t1134 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		ChannelData_t1134 * L_1 = ___channel;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ChannelData_t1134 * L_3 = ___channel;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m6429 (Object_t * __this /* static, unused */, ProviderData_t1136 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
		ProviderData_t1136 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1136 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m6430 (Object_t * __this /* static, unused */, ProviderData_t1136 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
		ProviderData_t1136 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1136 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelData_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral1921;
extern Il2CppCodeGenString* _stringLiteral1869;
extern Il2CppCodeGenString* _stringLiteral1922;
extern "C" void RemotingConfiguration_RegisterChannels_m6431 (Object_t * __this /* static, unused */, ArrayList_t402 * ___channels, bool ___onlyDelayed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		ChannelData_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(784);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		ProviderData_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(732);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral1921 = il2cpp_codegen_string_literal_from_index(1921);
		_stringLiteral1869 = il2cpp_codegen_string_literal_from_index(1869);
		_stringLiteral1922 = il2cpp_codegen_string_literal_from_index(1922);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1134 * V_0 = {0};
	Object_t * V_1 = {0};
	ChannelData_t1134 * V_2 = {0};
	ProviderData_t1136 * V_3 = {0};
	Object_t * V_4 = {0};
	ProviderData_t1136 * V_5 = {0};
	ProviderData_t1136 * V_6 = {0};
	Object_t * V_7 = {0};
	ProviderData_t1136 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = ___channels;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d4;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ChannelData_t1134 *)Castclass(L_3, ChannelData_t1134_il2cpp_TypeInfo_var));
			bool L_4 = ___onlyDelayed;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_001e:
		{
			ChannelData_t1134 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (L_5->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Inequality_m2290(NULL /*static, unused*/, L_6, _stringLiteral182, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			goto IL_01d4;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			bool L_8 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (!L_8)
			{
				goto IL_005c;
			}
		}

IL_0042:
		{
			ChannelData_t1134 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (L_9->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_11 = String_op_Equality_m1191(NULL /*static, unused*/, L_10, _stringLiteral182, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			goto IL_01d4;
		}

IL_005c:
		{
			ChannelData_t1134 * L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = (L_12->___Ref_0);
			if (!L_13)
			{
				goto IL_00a5;
			}
		}

IL_0067:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_14 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
			ChannelData_t1134 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = (L_15->___Ref_0);
			NullCheck(L_14);
			Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_16);
			V_2 = ((ChannelData_t1134 *)Castclass(L_17, ChannelData_t1134_il2cpp_TypeInfo_var));
			ChannelData_t1134 * L_18 = V_2;
			if (L_18)
			{
				goto IL_009e;
			}
		}

IL_0083:
		{
			ChannelData_t1134 * L_19 = V_0;
			NullCheck(L_19);
			String_t* L_20 = (L_19->___Ref_0);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1921, L_20, _stringLiteral1869, /*hidden argument*/NULL);
			RemotingException_t1138 * L_22 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_22, L_21, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_22);
		}

IL_009e:
		{
			ChannelData_t1134 * L_23 = V_0;
			ChannelData_t1134 * L_24 = V_2;
			NullCheck(L_23);
			ChannelData_CopyFrom_m6462(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			ChannelData_t1134 * L_25 = V_0;
			NullCheck(L_25);
			ArrayList_t402 * L_26 = ChannelData_get_ServerProviders_m6459(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_26);
			V_4 = L_27;
		}

IL_00b2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0110;
			}

IL_00b7:
			{
				Object_t * L_28 = V_4;
				NullCheck(L_28);
				Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_28);
				V_3 = ((ProviderData_t1136 *)Castclass(L_29, ProviderData_t1136_il2cpp_TypeInfo_var));
				ProviderData_t1136 * L_30 = V_3;
				NullCheck(L_30);
				String_t* L_31 = (L_30->___Ref_0);
				if (!L_31)
				{
					goto IL_0110;
				}
			}

IL_00cf:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
				Hashtable_t392 * L_32 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
				ProviderData_t1136 * L_33 = V_3;
				NullCheck(L_33);
				String_t* L_34 = (L_33->___Ref_0);
				NullCheck(L_32);
				Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, L_34);
				V_5 = ((ProviderData_t1136 *)Castclass(L_35, ProviderData_t1136_il2cpp_TypeInfo_var));
				ProviderData_t1136 * L_36 = V_5;
				if (L_36)
				{
					goto IL_0108;
				}
			}

IL_00ed:
			{
				ProviderData_t1136 * L_37 = V_3;
				NullCheck(L_37);
				String_t* L_38 = (L_37->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_39 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1922, L_38, _stringLiteral1869, /*hidden argument*/NULL);
				RemotingException_t1138 * L_40 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
				RemotingException__ctor_m6467(L_40, L_39, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_40);
			}

IL_0108:
			{
				ProviderData_t1136 * L_41 = V_3;
				ProviderData_t1136 * L_42 = V_5;
				NullCheck(L_41);
				ProviderData_CopyFrom_m6464(L_41, L_42, /*hidden argument*/NULL);
			}

IL_0110:
			{
				Object_t * L_43 = V_4;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00b7;
				}
			}

IL_011c:
			{
				IL2CPP_LEAVE(0x137, FINALLY_0121);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_0121;
		}

FINALLY_0121:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_4;
				V_9 = ((Object_t *)IsInst(L_45, IDisposable_t326_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_9;
				if (L_46)
				{
					goto IL_012f;
				}
			}

IL_012e:
			{
				IL2CPP_END_FINALLY(289)
			}

IL_012f:
			{
				Object_t * L_47 = V_9;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(289)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(289)
		{
			IL2CPP_JUMP_TBL(0x137, IL_0137)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_0137:
		{
			ChannelData_t1134 * L_48 = V_0;
			NullCheck(L_48);
			ArrayList_t402 * L_49 = ChannelData_get_ClientProviders_m6460(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_49);
			V_7 = L_50;
		}

IL_0144:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01a7;
			}

IL_0149:
			{
				Object_t * L_51 = V_7;
				NullCheck(L_51);
				Object_t * L_52 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_51);
				V_6 = ((ProviderData_t1136 *)Castclass(L_52, ProviderData_t1136_il2cpp_TypeInfo_var));
				ProviderData_t1136 * L_53 = V_6;
				NullCheck(L_53);
				String_t* L_54 = (L_53->___Ref_0);
				if (!L_54)
				{
					goto IL_01a7;
				}
			}

IL_0163:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
				Hashtable_t392 * L_55 = ((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
				ProviderData_t1136 * L_56 = V_6;
				NullCheck(L_56);
				String_t* L_57 = (L_56->___Ref_0);
				NullCheck(L_55);
				Object_t * L_58 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_55, L_57);
				V_8 = ((ProviderData_t1136 *)Castclass(L_58, ProviderData_t1136_il2cpp_TypeInfo_var));
				ProviderData_t1136 * L_59 = V_8;
				if (L_59)
				{
					goto IL_019e;
				}
			}

IL_0182:
			{
				ProviderData_t1136 * L_60 = V_6;
				NullCheck(L_60);
				String_t* L_61 = (L_60->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_62 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1922, L_61, _stringLiteral1869, /*hidden argument*/NULL);
				RemotingException_t1138 * L_63 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
				RemotingException__ctor_m6467(L_63, L_62, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_63);
			}

IL_019e:
			{
				ProviderData_t1136 * L_64 = V_6;
				ProviderData_t1136 * L_65 = V_8;
				NullCheck(L_64);
				ProviderData_CopyFrom_m6464(L_64, L_65, /*hidden argument*/NULL);
			}

IL_01a7:
			{
				Object_t * L_66 = V_7;
				NullCheck(L_66);
				bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_66);
				if (L_67)
				{
					goto IL_0149;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CE, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t74 *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			{
				Object_t * L_68 = V_7;
				V_10 = ((Object_t *)IsInst(L_68, IDisposable_t326_il2cpp_TypeInfo_var));
				Object_t * L_69 = V_10;
				if (L_69)
				{
					goto IL_01c6;
				}
			}

IL_01c5:
			{
				IL2CPP_END_FINALLY(440)
			}

IL_01c6:
			{
				Object_t * L_70 = V_10;
				NullCheck(L_70);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_70);
				IL2CPP_END_FINALLY(440)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
		}

IL_01ce:
		{
			ChannelData_t1134 * L_71 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannelConfig_m6160(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		}

IL_01d4:
		{
			Object_t * L_72 = V_1;
			NullCheck(L_72);
			bool L_73 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_000c;
			}
		}

IL_01df:
		{
			IL2CPP_LEAVE(0x1F9, FINALLY_01e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_01e4;
	}

FINALLY_01e4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_74 = V_1;
			V_11 = ((Object_t *)IsInst(L_74, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_75 = V_11;
			if (L_75)
			{
				goto IL_01f1;
			}
		}

IL_01f0:
		{
			IL2CPP_END_FINALLY(484)
		}

IL_01f1:
		{
			Object_t * L_76 = V_11;
			NullCheck(L_76);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_76);
			IL2CPP_END_FINALLY(484)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(484)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_01f9:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* TypeEntry_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterTypes_m6432 (Object_t * __this /* static, unused */, ArrayList_t402 * ___types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		TypeEntry_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(785);
		ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(783);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(786);
		WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(788);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	TypeEntry_t1123 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t402 * L_0 = ___types;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_2);
			V_0 = ((TypeEntry_t1123 *)Castclass(L_3, TypeEntry_t1123_il2cpp_TypeInfo_var));
			TypeEntry_t1123 * L_4 = V_0;
			if (!((ActivatedClientTypeEntry_t1122 *)IsInst(L_4, ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var)))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			TypeEntry_t1123 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedClientType_m6424(NULL /*static, unused*/, ((ActivatedClientTypeEntry_t1122 *)Castclass(L_5, ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0033:
		{
			TypeEntry_t1123 * L_6 = V_0;
			if (!((ActivatedServiceTypeEntry_t1124 *)IsInst(L_6, ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var)))
			{
				goto IL_004e;
			}
		}

IL_003e:
		{
			TypeEntry_t1123 * L_7 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedServiceType_m6425(NULL /*static, unused*/, ((ActivatedServiceTypeEntry_t1124 *)Castclass(L_7, ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_004e:
		{
			TypeEntry_t1123 * L_8 = V_0;
			if (!((WellKnownClientTypeEntry_t1147 *)IsInst(L_8, WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var)))
			{
				goto IL_0069;
			}
		}

IL_0059:
		{
			TypeEntry_t1123 * L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownClientType_m6426(NULL /*static, unused*/, ((WellKnownClientTypeEntry_t1147 *)Castclass(L_9, WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0069:
		{
			TypeEntry_t1123 * L_10 = V_0;
			if (!((WellKnownServiceTypeEntry_t1149 *)IsInst(L_10, WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var)))
			{
				goto IL_007f;
			}
		}

IL_0074:
		{
			TypeEntry_t1123 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownServiceType_m6427(NULL /*static, unused*/, ((WellKnownServiceTypeEntry_t1149 *)Castclass(L_11, WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_007f:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000c;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_009a;
			}
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009a:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1923;
extern Il2CppCodeGenString* _stringLiteral1924;
extern Il2CppCodeGenString* _stringLiteral1925;
extern Il2CppCodeGenString* _stringLiteral1926;
extern Il2CppCodeGenString* _stringLiteral1927;
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m6433 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		_stringLiteral1923 = il2cpp_codegen_string_literal_from_index(1923);
		_stringLiteral1924 = il2cpp_codegen_string_literal_from_index(1924);
		_stringLiteral1925 = il2cpp_codegen_string_literal_from_index(1925);
		_stringLiteral1926 = il2cpp_codegen_string_literal_from_index(1926);
		_stringLiteral1927 = il2cpp_codegen_string_literal_from_index(1927);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___mode;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RemotingException_t1138 * L_1 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_1, _stringLiteral1923, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___mode;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2410(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m2290(NULL /*static, unused*/, L_4, _stringLiteral1924, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m2290(NULL /*static, unused*/, L_6, _stringLiteral1925, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m2290(NULL /*static, unused*/, L_8, _stringLiteral1926, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = ___mode;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral1927, L_10, /*hidden argument*/NULL);
		RemotingException_t1138 * L_12 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0059:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1133_StaticFields*)RemotingConfiguration_t1133_il2cpp_TypeInfo_var->static_fields)->____errorMode_5 = L_13;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterData.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler__ctor_m6434 (ConfigHandler_t1135 * __this, bool ___onlyDelayedChannels, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		__this->___typeEntries_0 = L_0;
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->___channelInstances_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currentXmlPath_6 = L_2;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		bool L_3 = ___onlyDelayedChannels;
		__this->___onlyDelayedChannels_7 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1928;
extern Il2CppCodeGenString* _stringLiteral1929;
extern "C" void ConfigHandler_ValidatePath_m6435 (ConfigHandler_t1135 * __this, String_t* ___element, StringU5BU5D_t204* ___paths, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1928 = il2cpp_codegen_string_literal_from_index(1928);
		_stringLiteral1929 = il2cpp_codegen_string_literal_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t204* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringU5BU5D_t204* L_0 = ___paths;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t204* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_0;
		bool L_5 = ConfigHandler_CheckPath_m6436(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t204* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_9 = ___element;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1928, L_9, _stringLiteral1929, /*hidden argument*/NULL);
		RemotingException_t1138 * L_11 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}
}
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral600;
extern "C" bool ConfigHandler_CheckPath_m6436 (ConfigHandler_t1135 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	CompareInfo_t760 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_0 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CompareInfo_t760 * L_1 = (CompareInfo_t760 *)VirtFuncInvoker0< CompareInfo_t760 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		V_0 = L_1;
		CompareInfo_t760 * L_2 = V_0;
		String_t* L_3 = ___path;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(11 /* System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions) */, L_2, L_3, _stringLiteral600, ((int32_t)1073741824));
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___path;
		String_t* L_6 = (__this->___currentXmlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1191(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002e:
	{
		CompareInfo_t760 * L_8 = V_0;
		String_t* L_9 = (__this->___currentXmlPath_6);
		String_t* L_10 = ___path;
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(12 /* System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions) */, L_8, L_9, L_10, ((int32_t)1073741824));
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnStartParsing_m6437 (ConfigHandler_t1135 * __this, SmallXmlParser_t865 * ___parser, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m6438 (ConfigHandler_t1135 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m6439 (ConfigHandler_t1135 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t74_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1930;
extern Il2CppCodeGenString* _stringLiteral600;
extern Il2CppCodeGenString* _stringLiteral1931;
extern Il2CppCodeGenString* _stringLiteral88;
extern "C" void ConfigHandler_OnStartElement_m6440 (ConfigHandler_t1135 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Exception_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1930 = il2cpp_codegen_string_literal_from_index(1930);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		_stringLiteral1931 = il2cpp_codegen_string_literal_from_index(1931);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t74 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = (__this->___currentXmlPath_6);
			NullCheck(L_0);
			bool L_1 = String_StartsWith_m1238(L_0, _stringLiteral1930, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001d;
			}
		}

IL_0015:
		{
			String_t* L_2 = ___name;
			Object_t * L_3 = ___attrs;
			ConfigHandler_ParseElement_m6441(__this, L_2, L_3, /*hidden argument*/NULL);
		}

IL_001d:
		{
			String_t* L_4 = (__this->___currentXmlPath_6);
			String_t* L_5 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, L_4, _stringLiteral600, L_5, /*hidden argument*/NULL);
			__this->___currentXmlPath_6 = L_6;
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t74 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t74_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t74 *)__exception_local);
		String_t* L_7 = ___name;
		Exception_t74 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1337(NULL /*static, unused*/, _stringLiteral1931, L_7, _stringLiteral88, L_9, /*hidden argument*/NULL);
		Exception_t74 * L_11 = V_0;
		RemotingException_t1138 * L_12 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6469(L_12, L_10, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* ConfigHandler_t1135_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1932;
extern Il2CppCodeGenString* _stringLiteral1933;
extern Il2CppCodeGenString* _stringLiteral1934;
extern Il2CppCodeGenString* _stringLiteral1935;
extern Il2CppCodeGenString* _stringLiteral1936;
extern Il2CppCodeGenString* _stringLiteral1937;
extern Il2CppCodeGenString* _stringLiteral1938;
extern Il2CppCodeGenString* _stringLiteral1939;
extern Il2CppCodeGenString* _stringLiteral1940;
extern Il2CppCodeGenString* _stringLiteral1941;
extern Il2CppCodeGenString* _stringLiteral1942;
extern Il2CppCodeGenString* _stringLiteral1943;
extern Il2CppCodeGenString* _stringLiteral1944;
extern Il2CppCodeGenString* _stringLiteral1945;
extern Il2CppCodeGenString* _stringLiteral1946;
extern Il2CppCodeGenString* _stringLiteral1947;
extern Il2CppCodeGenString* _stringLiteral1948;
extern Il2CppCodeGenString* _stringLiteral1949;
extern Il2CppCodeGenString* _stringLiteral1950;
extern Il2CppCodeGenString* _stringLiteral1951;
extern Il2CppCodeGenString* _stringLiteral1952;
extern Il2CppCodeGenString* _stringLiteral1953;
extern Il2CppCodeGenString* _stringLiteral1954;
extern Il2CppCodeGenString* _stringLiteral1955;
extern Il2CppCodeGenString* _stringLiteral1956;
extern Il2CppCodeGenString* _stringLiteral1957;
extern Il2CppCodeGenString* _stringLiteral1958;
extern Il2CppCodeGenString* _stringLiteral1439;
extern Il2CppCodeGenString* _stringLiteral1959;
extern Il2CppCodeGenString* _stringLiteral1960;
extern "C" void ConfigHandler_ParseElement_m6441 (ConfigHandler_t1135 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigHandler_t1135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(782);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1932 = il2cpp_codegen_string_literal_from_index(1932);
		_stringLiteral1933 = il2cpp_codegen_string_literal_from_index(1933);
		_stringLiteral1934 = il2cpp_codegen_string_literal_from_index(1934);
		_stringLiteral1935 = il2cpp_codegen_string_literal_from_index(1935);
		_stringLiteral1936 = il2cpp_codegen_string_literal_from_index(1936);
		_stringLiteral1937 = il2cpp_codegen_string_literal_from_index(1937);
		_stringLiteral1938 = il2cpp_codegen_string_literal_from_index(1938);
		_stringLiteral1939 = il2cpp_codegen_string_literal_from_index(1939);
		_stringLiteral1940 = il2cpp_codegen_string_literal_from_index(1940);
		_stringLiteral1941 = il2cpp_codegen_string_literal_from_index(1941);
		_stringLiteral1942 = il2cpp_codegen_string_literal_from_index(1942);
		_stringLiteral1943 = il2cpp_codegen_string_literal_from_index(1943);
		_stringLiteral1944 = il2cpp_codegen_string_literal_from_index(1944);
		_stringLiteral1945 = il2cpp_codegen_string_literal_from_index(1945);
		_stringLiteral1946 = il2cpp_codegen_string_literal_from_index(1946);
		_stringLiteral1947 = il2cpp_codegen_string_literal_from_index(1947);
		_stringLiteral1948 = il2cpp_codegen_string_literal_from_index(1948);
		_stringLiteral1949 = il2cpp_codegen_string_literal_from_index(1949);
		_stringLiteral1950 = il2cpp_codegen_string_literal_from_index(1950);
		_stringLiteral1951 = il2cpp_codegen_string_literal_from_index(1951);
		_stringLiteral1952 = il2cpp_codegen_string_literal_from_index(1952);
		_stringLiteral1953 = il2cpp_codegen_string_literal_from_index(1953);
		_stringLiteral1954 = il2cpp_codegen_string_literal_from_index(1954);
		_stringLiteral1955 = il2cpp_codegen_string_literal_from_index(1955);
		_stringLiteral1956 = il2cpp_codegen_string_literal_from_index(1956);
		_stringLiteral1957 = il2cpp_codegen_string_literal_from_index(1957);
		_stringLiteral1958 = il2cpp_codegen_string_literal_from_index(1958);
		_stringLiteral1439 = il2cpp_codegen_string_literal_from_index(1439);
		_stringLiteral1959 = il2cpp_codegen_string_literal_from_index(1959);
		_stringLiteral1960 = il2cpp_codegen_string_literal_from_index(1960);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1136 * V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t86 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_t278 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___name;
		Object_t * L_2 = ___attrs;
		ConfigHandler_ReadCustomProviderData_m6443(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		String_t* L_3 = ___name;
		V_1 = L_3;
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0512;
		}
	}
	{
		Dictionary_2_t86 * L_5 = ((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		if (L_5)
		{
			goto IL_0121;
		}
	}
	{
		Dictionary_2_t86 * L_6 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_6, ((int32_t)19), /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t86 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1932, 0);
		Dictionary_2_t86 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1933, 1);
		Dictionary_2_t86 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1934, 2);
		Dictionary_2_t86 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1935, 3);
		Dictionary_2_t86 * L_11 = V_2;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral1936, 4);
		Dictionary_2_t86 * L_12 = V_2;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral1937, 5);
		Dictionary_2_t86 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_13, _stringLiteral1938, 6);
		Dictionary_2_t86 * L_14 = V_2;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_14, _stringLiteral1939, 6);
		Dictionary_2_t86 * L_15 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_15, _stringLiteral1940, 7);
		Dictionary_2_t86 * L_16 = V_2;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_16, _stringLiteral1941, 8);
		Dictionary_2_t86 * L_17 = V_2;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_17, _stringLiteral1942, ((int32_t)9));
		Dictionary_2_t86 * L_18 = V_2;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_18, _stringLiteral1943, ((int32_t)10));
		Dictionary_2_t86 * L_19 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_19, _stringLiteral1944, ((int32_t)11));
		Dictionary_2_t86 * L_20 = V_2;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_20, _stringLiteral1945, ((int32_t)12));
		Dictionary_2_t86 * L_21 = V_2;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_21, _stringLiteral1946, ((int32_t)13));
		Dictionary_2_t86 * L_22 = V_2;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_22, _stringLiteral1947, ((int32_t)14));
		Dictionary_2_t86 * L_23 = V_2;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_23, _stringLiteral1948, ((int32_t)15));
		Dictionary_2_t86 * L_24 = V_2;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_24, _stringLiteral1949, ((int32_t)16));
		Dictionary_2_t86 * L_25 = V_2;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_25, _stringLiteral1950, ((int32_t)17));
		Dictionary_2_t86 * L_26 = V_2;
		((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8 = L_26;
	}

IL_0121:
	{
		Dictionary_2_t86 * L_27 = ((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		String_t* L_28 = V_1;
		NullCheck(L_27);
		bool L_29 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_27, L_28, (&V_3));
		if (!L_29)
		{
			goto IL_0512;
		}
	}
	{
		int32_t L_30 = V_3;
		if (L_30 == 0)
		{
			goto IL_0186;
		}
		if (L_30 == 1)
		{
			goto IL_01bc;
		}
		if (L_30 == 2)
		{
			goto IL_01dd;
		}
		if (L_30 == 3)
		{
			goto IL_01ff;
		}
		if (L_30 == 4)
		{
			goto IL_0244;
		}
		if (L_30 == 5)
		{
			goto IL_0266;
		}
		if (L_30 == 6)
		{
			goto IL_0288;
		}
		if (L_30 == 7)
		{
			goto IL_0366;
		}
		if (L_30 == 8)
		{
			goto IL_0391;
		}
		if (L_30 == 9)
		{
			goto IL_03ab;
		}
		if (L_30 == 10)
		{
			goto IL_03f0;
		}
		if (L_30 == 11)
		{
			goto IL_0435;
		}
		if (L_30 == 12)
		{
			goto IL_044f;
		}
		if (L_30 == 13)
		{
			goto IL_0471;
		}
		if (L_30 == 14)
		{
			goto IL_0493;
		}
		if (L_30 == 15)
		{
			goto IL_04b4;
		}
		if (L_30 == 16)
		{
			goto IL_04ce;
		}
		if (L_30 == 17)
		{
			goto IL_04e8;
		}
	}
	{
		goto IL_0512;
	}

IL_0186:
	{
		String_t* L_31 = ___name;
		StringU5BU5D_t204* L_32 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, _stringLiteral1951);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, 0)) = (String_t*)_stringLiteral1951;
		ConfigHandler_ValidatePath_m6435(__this, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t204* L_34 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_01b7;
		}
	}
	{
		Object_t * L_35 = ___attrs;
		NullCheck(L_35);
		StringU5BU5D_t204* L_36 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		int32_t L_37 = 0;
		__this->___appName_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_36, L_37));
	}

IL_01b7:
	{
		goto IL_0528;
	}

IL_01bc:
	{
		String_t* L_38 = ___name;
		StringU5BU5D_t204* L_39 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, 0)) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m6435(__this, L_38, L_39, /*hidden argument*/NULL);
		Object_t * L_40 = ___attrs;
		ConfigHandler_ReadLifetine_m6444(__this, L_40, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01dd:
	{
		String_t* L_41 = ___name;
		StringU5BU5D_t204* L_42 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, _stringLiteral1951);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0)) = (String_t*)_stringLiteral1951;
		StringU5BU5D_t204* L_43 = L_42;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		ArrayElementTypeCheck (L_43, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, 1)) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m6435(__this, L_41, L_43, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01ff:
	{
		String_t* L_44 = ___name;
		StringU5BU5D_t204* L_45 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 0);
		ArrayElementTypeCheck (L_45, _stringLiteral1934);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 0)) = (String_t*)_stringLiteral1934;
		ConfigHandler_ValidatePath_m6435(__this, L_44, L_45, /*hidden argument*/NULL);
		String_t* L_46 = (__this->___currentXmlPath_6);
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m1239(L_46, _stringLiteral1932, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0237;
		}
	}
	{
		Object_t * L_48 = ___attrs;
		ConfigHandler_ReadChannel_m6446(__this, L_48, 0, /*hidden argument*/NULL);
		goto IL_023f;
	}

IL_0237:
	{
		Object_t * L_49 = ___attrs;
		ConfigHandler_ReadChannel_m6446(__this, L_49, 1, /*hidden argument*/NULL);
	}

IL_023f:
	{
		goto IL_0528;
	}

IL_0244:
	{
		String_t* L_50 = ___name;
		StringU5BU5D_t204* L_51 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral1949);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, 0)) = (String_t*)_stringLiteral1949;
		StringU5BU5D_t204* L_52 = L_51;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, _stringLiteral1935);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, 1)) = (String_t*)_stringLiteral1935;
		ConfigHandler_ValidatePath_m6435(__this, L_50, L_52, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0266:
	{
		String_t* L_53 = ___name;
		StringU5BU5D_t204* L_54 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
		ArrayElementTypeCheck (L_54, _stringLiteral1949);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 0)) = (String_t*)_stringLiteral1949;
		StringU5BU5D_t204* L_55 = L_54;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 1);
		ArrayElementTypeCheck (L_55, _stringLiteral1935);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 1)) = (String_t*)_stringLiteral1935;
		ConfigHandler_ValidatePath_m6435(__this, L_53, L_55, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0288:
	{
		bool L_56 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1952, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_57 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1953, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_02c9;
		}
	}

IL_02a8:
	{
		String_t* L_58 = ___name;
		Object_t * L_59 = ___attrs;
		ProviderData_t1136 * L_60 = ConfigHandler_ReadProvider_m6447(__this, L_58, L_59, 0, /*hidden argument*/NULL);
		V_0 = L_60;
		ChannelData_t1134 * L_61 = (__this->___currentChannel_2);
		NullCheck(L_61);
		ArrayList_t402 * L_62 = ChannelData_get_ServerProviders_m6459(L_61, /*hidden argument*/NULL);
		ProviderData_t1136 * L_63 = V_0;
		NullCheck(L_62);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_63);
		goto IL_0361;
	}

IL_02c9:
	{
		bool L_64 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1954, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02e9;
		}
	}
	{
		bool L_65 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1955, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_030a;
		}
	}

IL_02e9:
	{
		String_t* L_66 = ___name;
		Object_t * L_67 = ___attrs;
		ProviderData_t1136 * L_68 = ConfigHandler_ReadProvider_m6447(__this, L_66, L_67, 0, /*hidden argument*/NULL);
		V_0 = L_68;
		ChannelData_t1134 * L_69 = (__this->___currentChannel_2);
		NullCheck(L_69);
		ArrayList_t402 * L_70 = ChannelData_get_ClientProviders_m6460(L_69, /*hidden argument*/NULL);
		ProviderData_t1136 * L_71 = V_0;
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_71);
		goto IL_0361;
	}

IL_030a:
	{
		bool L_72 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1956, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_032f;
		}
	}
	{
		String_t* L_73 = ___name;
		Object_t * L_74 = ___attrs;
		ProviderData_t1136 * L_75 = ConfigHandler_ReadProvider_m6447(__this, L_73, L_74, 1, /*hidden argument*/NULL);
		V_0 = L_75;
		ProviderData_t1136 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterServerProviderTemplate_m6430(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_032f:
	{
		bool L_77 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1957, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0354;
		}
	}
	{
		String_t* L_78 = ___name;
		Object_t * L_79 = ___attrs;
		ProviderData_t1136 * L_80 = ConfigHandler_ReadProvider_m6447(__this, L_78, L_79, 1, /*hidden argument*/NULL);
		V_0 = L_80;
		ProviderData_t1136 * L_81 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterClientProviderTemplate_m6429(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_0354:
	{
		String_t* L_82 = ___name;
		ConfigHandler_ValidatePath_m6435(__this, L_82, ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0361:
	{
		goto IL_0528;
	}

IL_0366:
	{
		String_t* L_83 = ___name;
		StringU5BU5D_t204* L_84 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		ArrayElementTypeCheck (L_84, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, 0)) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m6435(__this, L_83, L_84, /*hidden argument*/NULL);
		Object_t * L_85 = ___attrs;
		NullCheck(L_85);
		String_t* L_86 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_85, _stringLiteral1958);
		__this->___currentClientUrl_4 = L_86;
		goto IL_0528;
	}

IL_0391:
	{
		String_t* L_87 = ___name;
		StringU5BU5D_t204* L_88 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 0);
		ArrayElementTypeCheck (L_88, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, 0)) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m6435(__this, L_87, L_88, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_03ab:
	{
		String_t* L_89 = ___name;
		StringU5BU5D_t204* L_90 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, 0);
		ArrayElementTypeCheck (L_90, _stringLiteral1940);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, 0)) = (String_t*)_stringLiteral1940;
		StringU5BU5D_t204* L_91 = L_90;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 1);
		ArrayElementTypeCheck (L_91, _stringLiteral1941);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, 1)) = (String_t*)_stringLiteral1941;
		ConfigHandler_ValidatePath_m6435(__this, L_89, L_91, /*hidden argument*/NULL);
		bool L_92 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1940, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_03e4;
		}
	}
	{
		Object_t * L_93 = ___attrs;
		ConfigHandler_ReadClientWellKnown_m6450(__this, L_93, /*hidden argument*/NULL);
		goto IL_03eb;
	}

IL_03e4:
	{
		Object_t * L_94 = ___attrs;
		ConfigHandler_ReadServiceWellKnown_m6451(__this, L_94, /*hidden argument*/NULL);
	}

IL_03eb:
	{
		goto IL_0528;
	}

IL_03f0:
	{
		String_t* L_95 = ___name;
		StringU5BU5D_t204* L_96 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 2));
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 0);
		ArrayElementTypeCheck (L_96, _stringLiteral1940);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, 0)) = (String_t*)_stringLiteral1940;
		StringU5BU5D_t204* L_97 = L_96;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 1);
		ArrayElementTypeCheck (L_97, _stringLiteral1941);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, 1)) = (String_t*)_stringLiteral1941;
		ConfigHandler_ValidatePath_m6435(__this, L_95, L_97, /*hidden argument*/NULL);
		bool L_98 = ConfigHandler_CheckPath_m6436(__this, _stringLiteral1940, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0429;
		}
	}
	{
		Object_t * L_99 = ___attrs;
		ConfigHandler_ReadClientActivated_m6448(__this, L_99, /*hidden argument*/NULL);
		goto IL_0430;
	}

IL_0429:
	{
		Object_t * L_100 = ___attrs;
		ConfigHandler_ReadServiceActivated_m6449(__this, L_100, /*hidden argument*/NULL);
	}

IL_0430:
	{
		goto IL_0528;
	}

IL_0435:
	{
		String_t* L_101 = ___name;
		StringU5BU5D_t204* L_102 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 0);
		ArrayElementTypeCheck (L_102, _stringLiteral1932);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 0)) = (String_t*)_stringLiteral1932;
		ConfigHandler_ValidatePath_m6435(__this, L_101, L_102, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_044f:
	{
		String_t* L_103 = ___name;
		StringU5BU5D_t204* L_104 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, 0);
		ArrayElementTypeCheck (L_104, _stringLiteral1944);
		*((String_t**)(String_t**)SZArrayLdElema(L_104, 0)) = (String_t*)_stringLiteral1944;
		ConfigHandler_ValidatePath_m6435(__this, L_103, L_104, /*hidden argument*/NULL);
		Object_t * L_105 = ___attrs;
		ConfigHandler_ReadInteropXml_m6452(__this, L_105, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0471:
	{
		String_t* L_106 = ___name;
		StringU5BU5D_t204* L_107 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 0);
		ArrayElementTypeCheck (L_107, _stringLiteral1944);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 0)) = (String_t*)_stringLiteral1944;
		ConfigHandler_ValidatePath_m6435(__this, L_106, L_107, /*hidden argument*/NULL);
		Object_t * L_108 = ___attrs;
		ConfigHandler_ReadInteropXml_m6452(__this, L_108, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0493:
	{
		String_t* L_109 = ___name;
		StringU5BU5D_t204* L_110 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 0);
		ArrayElementTypeCheck (L_110, _stringLiteral1944);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, 0)) = (String_t*)_stringLiteral1944;
		ConfigHandler_ValidatePath_m6435(__this, L_109, L_110, /*hidden argument*/NULL);
		Object_t * L_111 = ___attrs;
		ConfigHandler_ReadPreload_m6453(__this, L_111, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04b4:
	{
		String_t* L_112 = ___name;
		StringU5BU5D_t204* L_113 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 0);
		ArrayElementTypeCheck (L_113, _stringLiteral1951);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, 0)) = (String_t*)_stringLiteral1951;
		ConfigHandler_ValidatePath_m6435(__this, L_112, L_113, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04ce:
	{
		String_t* L_114 = ___name;
		StringU5BU5D_t204* L_115 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 0);
		ArrayElementTypeCheck (L_115, _stringLiteral1951);
		*((String_t**)(String_t**)SZArrayLdElema(L_115, 0)) = (String_t*)_stringLiteral1951;
		ConfigHandler_ValidatePath_m6435(__this, L_114, L_115, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04e8:
	{
		String_t* L_116 = ___name;
		StringU5BU5D_t204* L_117 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, 0);
		ArrayElementTypeCheck (L_117, _stringLiteral1951);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, 0)) = (String_t*)_stringLiteral1951;
		ConfigHandler_ValidatePath_m6435(__this, L_116, L_117, /*hidden argument*/NULL);
		Object_t * L_118 = ___attrs;
		NullCheck(L_118);
		String_t* L_119 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_118, _stringLiteral1439);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_SetCustomErrorsMode_m6433(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0512:
	{
		String_t* L_120 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1959, L_120, _stringLiteral1960, /*hidden argument*/NULL);
		RemotingException_t1138 * L_122 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_122, L_121, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_122);
	}

IL_0528:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m6442 (ConfigHandler_t1135 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Stack_t278 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Stack_t278 * L_1 = (__this->___currentProviderData_3);
		NullCheck(L_1);
		VirtFuncInvoker0< Object_t * >::Invoke(14 /* System.Object System.Collections.Stack::Pop() */, L_1);
		Stack_t278 * L_2 = (__this->___currentProviderData_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		__this->___currentProviderData_3 = (Stack_t278 *)NULL;
	}

IL_002e:
	{
		String_t* L_4 = (__this->___currentXmlPath_6);
		String_t* L_5 = (__this->___currentXmlPath_6);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1182(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___name;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1182(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_9 = String_Substring_m1227(L_4, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___currentXmlPath_6 = L_9;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* SinkProviderData_t1078_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t500_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_ReadCustomProviderData_m6443 (ConfigHandler_t1135 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SinkProviderData_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(789);
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		IDictionary_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	SinkProviderData_t1078 * V_0 = {0};
	SinkProviderData_t1078 * V_1 = {0};
	int32_t V_2 = 0;
	{
		Stack_t278 * L_0 = (__this->___currentProviderData_3);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(13 /* System.Object System.Collections.Stack::Peek() */, L_0);
		V_0 = ((SinkProviderData_t1078 *)Castclass(L_1, SinkProviderData_t1078_il2cpp_TypeInfo_var));
		String_t* L_2 = ___name;
		SinkProviderData_t1078 * L_3 = (SinkProviderData_t1078 *)il2cpp_codegen_object_new (SinkProviderData_t1078_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m6178(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_001f:
	{
		SinkProviderData_t1078 * L_4 = V_1;
		NullCheck(L_4);
		Object_t * L_5 = SinkProviderData_get_Properties_m6180(L_4, /*hidden argument*/NULL);
		Object_t * L_6 = ___attrs;
		NullCheck(L_6);
		StringU5BU5D_t204* L_7 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Object_t * L_10 = ___attrs;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_5);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t500_il2cpp_TypeInfo_var, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t204* L_16 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		SinkProviderData_t1078 * L_17 = V_0;
		NullCheck(L_17);
		Object_t * L_18 = SinkProviderData_get_Children_m6179(L_17, /*hidden argument*/NULL);
		SinkProviderData_t1078 * L_19 = V_1;
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t526_il2cpp_TypeInfo_var, L_18, L_19);
		Stack_t278 * L_20 = (__this->___currentProviderData_3);
		SinkProviderData_t1078 * L_21 = V_1;
		NullCheck(L_20);
		VirtActionInvoker1< Object_t * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_20, L_21);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1135_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1085_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1961;
extern Il2CppCodeGenString* _stringLiteral1962;
extern Il2CppCodeGenString* _stringLiteral1963;
extern Il2CppCodeGenString* _stringLiteral1964;
extern Il2CppCodeGenString* _stringLiteral1965;
extern "C" void ConfigHandler_ReadLifetine_m6444 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		ConfigHandler_t1135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(782);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		LifetimeServices_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		Dictionary_2__ctor_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral1961 = il2cpp_codegen_string_literal_from_index(1961);
		_stringLiteral1962 = il2cpp_codegen_string_literal_from_index(1962);
		_stringLiteral1963 = il2cpp_codegen_string_literal_from_index(1963);
		_stringLiteral1964 = il2cpp_codegen_string_literal_from_index(1964);
		_stringLiteral1965 = il2cpp_codegen_string_literal_from_index(1965);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t86 * V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		StringU5BU5D_t204* L_1 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		Dictionary_2_t86 * L_5 = ((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t86 * L_6 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2308(L_6, 4, /*hidden argument*/Dictionary_2__ctor_m2308_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t86 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral1961, 0);
		Dictionary_2_t86 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral1962, 1);
		Dictionary_2_t86 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral1963, 2);
		Dictionary_2_t86 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral1964, 3);
		Dictionary_2_t86 * L_11 = V_2;
		((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9 = L_11;
	}

IL_005d:
	{
		Dictionary_2_t86 * L_12 = ((ConfigHandler_t1135_StaticFields*)ConfigHandler_t1135_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_008a;
		}
		if (L_15 == 1)
		{
			goto IL_00a1;
		}
		if (L_15 == 2)
		{
			goto IL_00b8;
		}
		if (L_15 == 3)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e6;
	}

IL_008a:
	{
		Object_t * L_16 = ___attrs;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_16, L_17);
		TimeSpan_t470  L_19 = ConfigHandler_ParseTime_m6445(__this, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseTime_m6206(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00a1:
	{
		Object_t * L_20 = ___attrs;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_20, L_21);
		TimeSpan_t470  L_23 = ConfigHandler_ParseTime_m6445(__this, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		LifetimeServices_set_SponsorshipTimeout_m6208(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00b8:
	{
		Object_t * L_24 = ___attrs;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		String_t* L_26 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_24, L_25);
		TimeSpan_t470  L_27 = ConfigHandler_ParseTime_m6445(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		LifetimeServices_set_RenewOnCallTime_m6207(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00cf:
	{
		Object_t * L_28 = ___attrs;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_28, L_29);
		TimeSpan_t470  L_31 = ConfigHandler_ParseTime_m6445(__this, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1085_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseManagerPollTime_m6205(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00e6:
	{
		Object_t * L_32 = ___attrs;
		NullCheck(L_32);
		StringU5BU5D_t204* L_33 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral1965, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35)), /*hidden argument*/NULL);
		RemotingException_t1138 * L_37 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00fe:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_39 = V_0;
		Object_t * L_40 = ___attrs;
		NullCheck(L_40);
		StringU5BU5D_t204* L_41 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t307_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t470_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1394____U24U24fieldU2D31_21_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral1966;
extern Il2CppCodeGenString* _stringLiteral1967;
extern Il2CppCodeGenString* _stringLiteral1968;
extern Il2CppCodeGenString* _stringLiteral201;
extern Il2CppCodeGenString* _stringLiteral1969;
extern Il2CppCodeGenString* _stringLiteral1970;
extern Il2CppCodeGenString* _stringLiteral1971;
extern Il2CppCodeGenString* _stringLiteral1972;
extern "C" TimeSpan_t470  ConfigHandler_ParseTime_m6445 (ConfigHandler_t1135 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		CharU5BU5D_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TimeSpan_t470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		U3CPrivateImplementationDetailsU3E_t1394____U24U24fieldU2D31_21_FieldInfo_var = il2cpp_codegen_field_info_from_index(507, 21);
		_stringLiteral1966 = il2cpp_codegen_string_literal_from_index(1966);
		_stringLiteral1967 = il2cpp_codegen_string_literal_from_index(1967);
		_stringLiteral1968 = il2cpp_codegen_string_literal_from_index(1968);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		_stringLiteral1969 = il2cpp_codegen_string_literal_from_index(1969);
		_stringLiteral1970 = il2cpp_codegen_string_literal_from_index(1970);
		_stringLiteral1971 = il2cpp_codegen_string_literal_from_index(1971);
		_stringLiteral1972 = il2cpp_codegen_string_literal_from_index(1972);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	double V_2 = 0.0;
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m1191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___s;
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		RemotingException_t1138 * L_4 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_4, _stringLiteral1966, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		String_t* L_5 = ___s;
		CharU5BU5D_t307* L_6 = ((CharU5BU5D_t307*)SZArrayNew(CharU5BU5D_t307_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1394____U24U24fieldU2D31_21_FieldInfo_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_7 = String_IndexOfAny_m2418(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = _stringLiteral1967;
		goto IL_005d;
	}

IL_004b:
	{
		String_t* L_9 = ___s;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1223(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = ___s;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m1227(L_12, 0, L_13, /*hidden argument*/NULL);
		___s = L_14;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = ___s;
		double L_16 = Double_Parse_m3794(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t74 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		String_t* L_17 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral1968, L_17, /*hidden argument*/NULL);
		RemotingException_t1138 * L_19 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_19, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m1191(NULL /*static, unused*/, L_20, _stringLiteral201, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		double L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_23 = TimeSpan_FromDays_m8177(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0097:
	{
		String_t* L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1191(NULL /*static, unused*/, L_24, _stringLiteral1969, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		double L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_27 = TimeSpan_FromHours_m8178(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ae:
	{
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m1191(NULL /*static, unused*/, L_28, _stringLiteral1970, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		double L_30 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_31 = TimeSpan_FromMinutes_m8179(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00c5:
	{
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m1191(NULL /*static, unused*/, L_32, _stringLiteral1967, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		double L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_35 = TimeSpan_FromSeconds_m8180(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00dc:
	{
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1191(NULL /*static, unused*/, L_36, _stringLiteral1971, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f3;
		}
	}
	{
		double L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t470_il2cpp_TypeInfo_var);
		TimeSpan_t470  L_39 = TimeSpan_FromMilliseconds_m8181(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00f3:
	{
		String_t* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral1972, L_40, /*hidden argument*/NULL);
		RemotingException_t1138 * L_42 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_42, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_42);
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* ChannelData_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1973;
extern Il2CppCodeGenString* _stringLiteral1974;
extern Il2CppCodeGenString* _stringLiteral1975;
extern Il2CppCodeGenString* _stringLiteral968;
extern Il2CppCodeGenString* _stringLiteral1976;
extern "C" void ConfigHandler_ReadChannel_m6446 (ConfigHandler_t1135 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelData_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(784);
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		_stringLiteral1973 = il2cpp_codegen_string_literal_from_index(1973);
		_stringLiteral1974 = il2cpp_codegen_string_literal_from_index(1974);
		_stringLiteral1975 = il2cpp_codegen_string_literal_from_index(1975);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		_stringLiteral1976 = il2cpp_codegen_string_literal_from_index(1976);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1134 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	{
		ChannelData_t1134 * L_0 = (ChannelData_t1134 *)il2cpp_codegen_object_new (ChannelData_t1134_il2cpp_TypeInfo_var);
		ChannelData__ctor_m6458(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ac;
	}

IL_000d:
	{
		Object_t * L_1 = ___attrs;
		NullCheck(L_1);
		StringU5BU5D_t204* L_2 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		Object_t * L_5 = ___attrs;
		NullCheck(L_5);
		StringU5BU5D_t204* L_6 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1191(NULL /*static, unused*/, L_9, _stringLiteral1973, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		bool L_11 = ___isTemplate;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ChannelData_t1134 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		L_12->___Ref_0 = L_13;
		goto IL_00a8;
	}

IL_0041:
	{
		String_t* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1191(NULL /*static, unused*/, L_14, _stringLiteral1974, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		ChannelData_t1134 * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		L_16->___DelayLoadAsClientChannel_3 = L_17;
		goto IL_00a8;
	}

IL_005d:
	{
		String_t* L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1191(NULL /*static, unused*/, L_18, _stringLiteral1975, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007f;
		}
	}
	{
		bool L_20 = ___isTemplate;
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		ChannelData_t1134 * L_21 = V_0;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		L_21->___Id_2 = L_22;
		goto IL_00a8;
	}

IL_007f:
	{
		String_t* L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m1191(NULL /*static, unused*/, L_23, _stringLiteral968, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		ChannelData_t1134 * L_25 = V_0;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		L_25->___Type_1 = L_26;
		goto IL_00a8;
	}

IL_009b:
	{
		ChannelData_t1134 * L_27 = V_0;
		NullCheck(L_27);
		Hashtable_t392 * L_28 = ChannelData_get_CustomProperties_m6461(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_2;
		String_t* L_30 = V_3;
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_28, L_29, L_30);
	}

IL_00a8:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_32 = V_1;
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t204* L_34 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_35 = ___isTemplate;
		if (!L_35)
		{
			goto IL_00f7;
		}
	}
	{
		ChannelData_t1134 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = (L_36->___Id_2);
		if (L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RemotingException_t1138 * L_38 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_38, _stringLiteral1976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00d6:
	{
		ChannelData_t1134 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = (L_39->___Type_1);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		RemotingException_t1138 * L_41 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_41, _stringLiteral1976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_00ec:
	{
		ChannelData_t1134 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannelTemplate_m6428(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_00f7:
	{
		ArrayList_t402 * L_43 = (__this->___channelInstances_1);
		ChannelData_t1134 * L_44 = V_0;
		NullCheck(L_43);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
	}

IL_0104:
	{
		ChannelData_t1134 * L_45 = V_0;
		__this->___currentChannel_2 = L_45;
		return;
	}
}
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1136_il2cpp_TypeInfo_var;
extern TypeInfo* FormatterData_t1137_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1078_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t278_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1938;
extern Il2CppCodeGenString* _stringLiteral1977;
extern Il2CppCodeGenString* _stringLiteral1975;
extern Il2CppCodeGenString* _stringLiteral968;
extern Il2CppCodeGenString* _stringLiteral1973;
extern Il2CppCodeGenString* _stringLiteral1976;
extern "C" ProviderData_t1136 * ConfigHandler_ReadProvider_m6447 (ConfigHandler_t1135 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ProviderData_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(732);
		FormatterData_t1137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(790);
		SinkProviderData_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(789);
		Stack_t278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1938 = il2cpp_codegen_string_literal_from_index(1938);
		_stringLiteral1977 = il2cpp_codegen_string_literal_from_index(1977);
		_stringLiteral1975 = il2cpp_codegen_string_literal_from_index(1975);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		_stringLiteral1973 = il2cpp_codegen_string_literal_from_index(1973);
		_stringLiteral1976 = il2cpp_codegen_string_literal_from_index(1976);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1136 * V_0 = {0};
	SinkProviderData_t1078 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	ProviderData_t1136 * G_B3_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1191(NULL /*static, unused*/, L_0, _stringLiteral1938, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ProviderData_t1136 * L_2 = (ProviderData_t1136 *)il2cpp_codegen_object_new (ProviderData_t1136_il2cpp_TypeInfo_var);
		ProviderData__ctor_m6463(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		FormatterData_t1137 * L_3 = (FormatterData_t1137 *)il2cpp_codegen_object_new (FormatterData_t1137_il2cpp_TypeInfo_var);
		FormatterData__ctor_m6465(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ProviderData_t1136 *)(L_3));
	}

IL_001f:
	{
		V_0 = G_B3_0;
		SinkProviderData_t1078 * L_4 = (SinkProviderData_t1078 *)il2cpp_codegen_object_new (SinkProviderData_t1078_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m6178(L_4, _stringLiteral1977, /*hidden argument*/NULL);
		V_1 = L_4;
		ProviderData_t1136 * L_5 = V_0;
		SinkProviderData_t1078 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = SinkProviderData_get_Children_m6179(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___CustomData_4 = L_7;
		Stack_t278 * L_8 = (Stack_t278 *)il2cpp_codegen_object_new (Stack_t278_il2cpp_TypeInfo_var);
		Stack__ctor_m1357(L_8, /*hidden argument*/NULL);
		__this->___currentProviderData_3 = L_8;
		Stack_t278 * L_9 = (__this->___currentProviderData_3);
		SinkProviderData_t1078 * L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_9, L_10);
		V_2 = 0;
		goto IL_00dd;
	}

IL_0055:
	{
		Object_t * L_11 = ___attrs;
		NullCheck(L_11);
		StringU5BU5D_t204* L_12 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_11);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t204* L_16 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_16, L_18));
		String_t* L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m1191(NULL /*static, unused*/, L_19, _stringLiteral1975, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = ___isTemplate;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		ProviderData_t1136 * L_22 = V_0;
		String_t* L_23 = V_4;
		NullCheck(L_22);
		L_22->___Id_2 = L_23;
		goto IL_00d9;
	}

IL_008b:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1191(NULL /*static, unused*/, L_24, _stringLiteral968, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		ProviderData_t1136 * L_26 = V_0;
		String_t* L_27 = V_4;
		NullCheck(L_26);
		L_26->___Type_1 = L_27;
		goto IL_00d9;
	}

IL_00a8:
	{
		String_t* L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m1191(NULL /*static, unused*/, L_28, _stringLiteral1973, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_30 = ___isTemplate;
		if (L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ProviderData_t1136 * L_31 = V_0;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		L_31->___Ref_0 = L_32;
		goto IL_00d9;
	}

IL_00cb:
	{
		ProviderData_t1136 * L_33 = V_0;
		NullCheck(L_33);
		Hashtable_t392 * L_34 = (L_33->___CustomProperties_3);
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_35, L_36);
	}

IL_00d9:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_38 = V_2;
		Object_t * L_39 = ___attrs;
		NullCheck(L_39);
		StringU5BU5D_t204* L_40 = (StringU5BU5D_t204*)InterfaceFuncInvoker0< StringU5BU5D_t204* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1401_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		ProviderData_t1136 * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = (L_41->___Id_2);
		if (L_42)
		{
			goto IL_0107;
		}
	}
	{
		bool L_43 = ___isTemplate;
		if (!L_43)
		{
			goto IL_0107;
		}
	}
	{
		RemotingException_t1138 * L_44 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_44, _stringLiteral1976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0107:
	{
		ProviderData_t1136 * L_45 = V_0;
		return L_45;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral968;
extern Il2CppCodeGenString* _stringLiteral1978;
extern "C" void ConfigHandler_ReadClientActivated_m6448 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(783);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		_stringLiteral1978 = il2cpp_codegen_string_literal_from_index(1978);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m6454(__this, L_0, _stringLiteral968, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m6455(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = (__this->___currentClientUrl_4);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = (__this->___currentClientUrl_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m1191(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		RemotingException_t1138 * L_7 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_7, _stringLiteral1978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0041:
	{
		ArrayList_t402 * L_8 = (__this->___typeEntries_0);
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = (__this->___currentClientUrl_4);
		ActivatedClientTypeEntry_t1122 * L_12 = (ActivatedClientTypeEntry_t1122 *)il2cpp_codegen_object_new (ActivatedClientTypeEntry_t1122_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry__ctor_m6380(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_12);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral968;
extern "C" void ConfigHandler_ReadServiceActivated_m6449 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(786);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m6454(__this, L_0, _stringLiteral968, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m6455(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t402 * L_3 = (__this->___typeEntries_0);
		String_t* L_4 = V_0;
		String_t* L_5 = V_1;
		ActivatedServiceTypeEntry_t1124 * L_6 = (ActivatedServiceTypeEntry_t1124 *)il2cpp_codegen_object_new (ActivatedServiceTypeEntry_t1124_il2cpp_TypeInfo_var);
		ActivatedServiceTypeEntry__ctor_m6385(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_6);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1958;
extern Il2CppCodeGenString* _stringLiteral968;
extern "C" void ConfigHandler_ReadClientWellKnown_m6450 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		_stringLiteral1958 = il2cpp_codegen_string_literal_from_index(1958);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m6454(__this, L_0, _stringLiteral1958, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m6454(__this, L_2, _stringLiteral968, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = ConfigHandler_ExtractAssembly_m6455(__this, (&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		ArrayList_t402 * L_5 = (__this->___typeEntries_0);
		String_t* L_6 = V_1;
		String_t* L_7 = V_2;
		String_t* L_8 = V_0;
		WellKnownClientTypeEntry_t1147 * L_9 = (WellKnownClientTypeEntry_t1147 *)il2cpp_codegen_object_new (WellKnownClientTypeEntry_t1147_il2cpp_TypeInfo_var);
		WellKnownClientTypeEntry__ctor_m6524(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1979;
extern Il2CppCodeGenString* _stringLiteral1439;
extern Il2CppCodeGenString* _stringLiteral968;
extern Il2CppCodeGenString* _stringLiteral1980;
extern Il2CppCodeGenString* _stringLiteral1981;
extern Il2CppCodeGenString* _stringLiteral1982;
extern Il2CppCodeGenString* _stringLiteral1983;
extern "C" void ConfigHandler_ReadServiceWellKnown_m6451 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(788);
		_stringLiteral1979 = il2cpp_codegen_string_literal_from_index(1979);
		_stringLiteral1439 = il2cpp_codegen_string_literal_from_index(1439);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		_stringLiteral1980 = il2cpp_codegen_string_literal_from_index(1980);
		_stringLiteral1981 = il2cpp_codegen_string_literal_from_index(1981);
		_stringLiteral1982 = il2cpp_codegen_string_literal_from_index(1982);
		_stringLiteral1983 = il2cpp_codegen_string_literal_from_index(1983);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m6454(__this, L_0, _stringLiteral1979, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m6454(__this, L_2, _stringLiteral1439, /*hidden argument*/NULL);
		V_1 = L_3;
		Object_t * L_4 = ___attrs;
		String_t* L_5 = ConfigHandler_GetNotNull_m6454(__this, L_4, _stringLiteral968, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = ConfigHandler_ExtractAssembly_m6455(__this, (&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1191(NULL /*static, unused*/, L_7, _stringLiteral1980, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 2;
		goto IL_0076;
	}

IL_0048:
	{
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1191(NULL /*static, unused*/, L_9, _stringLiteral1981, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 1;
		goto IL_0076;
	}

IL_0060:
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1982, L_11, _stringLiteral1983, /*hidden argument*/NULL);
		RemotingException_t1138 * L_13 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0076:
	{
		ArrayList_t402 * L_14 = (__this->___typeEntries_0);
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		WellKnownServiceTypeEntry_t1149 * L_19 = (WellKnownServiceTypeEntry_t1149 *)il2cpp_codegen_object_new (WellKnownServiceTypeEntry_t1149_il2cpp_TypeInfo_var);
		WellKnownServiceTypeEntry__ctor_m6529(L_19, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_19);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t307_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1984;
extern Il2CppCodeGenString* _stringLiteral1985;
extern "C" void ConfigHandler_ReadInteropXml_m6452 (ConfigHandler_t1135 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		CharU5BU5D_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		_stringLiteral1984 = il2cpp_codegen_string_literal_from_index(1984);
		_stringLiteral1985 = il2cpp_codegen_string_literal_from_index(1985);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	StringU5BU5D_t204* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m6454(__this, L_0, _stringLiteral1984, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m4150(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = ___attrs;
		String_t* L_4 = ConfigHandler_GetNotNull_m6454(__this, L_3, _stringLiteral1985, /*hidden argument*/NULL);
		CharU5BU5D_t307* L_5 = ((CharU5BU5D_t307*)SZArrayNew(CharU5BU5D_t307_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_4);
		StringU5BU5D_t204* L_6 = String_Split_m1338(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t204* L_7 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)));
		String_t* L_9 = String_Trim_m1224((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t204* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		StringU5BU5D_t204* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)));
		String_t* L_13 = String_Trim_m1224((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		goto IL_004f;
	}

IL_004e:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_004f:
	{
		V_3 = G_B3_0;
		bool L_14 = ___isElement;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		Type_t * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m6514(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0063:
	{
		String_t* L_18 = V_2;
		String_t* L_19 = V_3;
		Type_t * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m6515(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral968;
extern Il2CppCodeGenString* _stringLiteral1986;
extern Il2CppCodeGenString* _stringLiteral1987;
extern Il2CppCodeGenString* _stringLiteral1988;
extern "C" void ConfigHandler_ReadPreload_m6453 (ConfigHandler_t1135 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		_stringLiteral968 = il2cpp_codegen_string_literal_from_index(968);
		_stringLiteral1986 = il2cpp_codegen_string_literal_from_index(1986);
		_stringLiteral1987 = il2cpp_codegen_string_literal_from_index(1987);
		_stringLiteral1988 = il2cpp_codegen_string_literal_from_index(1988);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_0, _stringLiteral968);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_2, _stringLiteral1986);
		V_1 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RemotingException_t1138 * L_6 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_6, _stringLiteral1987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetType_m4150(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m6513(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0045:
	{
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_11 = V_1;
		Assembly_t587 * L_12 = Assembly_Load_m5826(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m6512(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_005b:
	{
		RemotingException_t1138 * L_13 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_13, _stringLiteral1988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0066:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern TypeInfo* IAttrList_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1989;
extern "C" String_t* ConfigHandler_GetNotNull_m6454 (ConfigHandler_t1135 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1989 = il2cpp_codegen_string_literal_from_index(1989);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1401_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m1191(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1205(NULL /*static, unused*/, L_7, _stringLiteral1989, /*hidden argument*/NULL);
		RemotingException_t1138 * L_9 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigHandler_ExtractAssembly_m6455 (ConfigHandler_t1135 * __this, String_t** ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		String_t** L_0 = ___type;
		NullCheck((*((String_t**)L_0)));
		int32_t L_1 = String_IndexOf_m1226((*((String_t**)L_0)), ((int32_t)44), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}

IL_0017:
	{
		String_t** L_4 = ___type;
		int32_t L_5 = V_0;
		NullCheck((*((String_t**)L_4)));
		String_t* L_6 = String_Substring_m1223((*((String_t**)L_4)), ((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m1224(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t** L_8 = ___type;
		String_t** L_9 = ___type;
		int32_t L_10 = V_0;
		NullCheck((*((String_t**)L_9)));
		String_t* L_11 = String_Substring_m1227((*((String_t**)L_9)), 0, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m1224(L_11, /*hidden argument*/NULL);
		*((Object_t **)(L_8)) = (Object_t *)L_12;
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m6456 (ConfigHandler_t1135 * __this, String_t* ___ch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_OnEndParsing_m6457 (ConfigHandler_t1135 * __this, SmallXmlParser_t865 * ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (__this->___channelInstances_1);
		bool L_1 = (__this->___onlyDelayedChannels_7);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannels_m6431(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___appName_5);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___appName_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_set_ApplicationName_m6420(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_4 = (__this->___onlyDelayedChannels_7);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t402 * L_5 = (__this->___typeEntries_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterTypes_m6432(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void ChannelData__ctor_m6458 (ChannelData_t1134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_0, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_0;
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
		Hashtable_t392 * L_2 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_2, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_2;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern "C" ArrayList_t402 * ChannelData_get_ServerProviders_m6459 (ChannelData_t1134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (__this->____serverProviders_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_1;
	}

IL_0016:
	{
		ArrayList_t402 * L_2 = (__this->____serverProviders_4);
		return L_2;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern "C" ArrayList_t402 * ChannelData_get_ClientProviders_m6460 (ChannelData_t1134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t402 * L_0 = (__this->____clientProviders_5);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t402 * L_1 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
	}

IL_0016:
	{
		ArrayList_t402 * L_2 = (__this->____clientProviders_5);
		return L_2;
	}
}
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" Hashtable_t392 * ChannelData_get_CustomProperties_m6461 (ChannelData_t1134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (__this->____customProperties_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t392 * L_1 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_1, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_1;
	}

IL_0016:
	{
		Hashtable_t392 * L_2 = (__this->____customProperties_6);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t567_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1136_il2cpp_TypeInfo_var;
extern "C" void ChannelData_CopyFrom_m6462 (ChannelData_t1134 * __this, ChannelData_t1134 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		DictionaryEntry_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		ProviderData_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(732);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t567  V_0 = {0};
	Object_t * V_1 = {0};
	ProviderData_t1136 * V_2 = {0};
	Object_t * V_3 = {0};
	ProviderData_t1136 * V_4 = {0};
	ProviderData_t1136 * V_5 = {0};
	Object_t * V_6 = {0};
	ProviderData_t1136 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1134 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ChannelData_t1134 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ChannelData_t1134 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		String_t* L_9 = (__this->___DelayLoadAsClientChannel_3);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		ChannelData_t1134 * L_10 = ___other;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___DelayLoadAsClientChannel_3);
		__this->___DelayLoadAsClientChannel_3 = L_11;
	}

IL_005c:
	{
		ChannelData_t1134 * L_12 = ___other;
		NullCheck(L_12);
		Hashtable_t392 * L_13 = (L_12->____customProperties_6);
		if (!L_13)
		{
			goto IL_00d9;
		}
	}
	{
		ChannelData_t1134 * L_14 = ___other;
		NullCheck(L_14);
		Hashtable_t392 * L_15 = (L_14->____customProperties_6);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(26 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_15);
		V_1 = L_16;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0078:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t567 *)((DictionaryEntry_t567 *)UnBox (L_18, DictionaryEntry_t567_il2cpp_TypeInfo_var))));
			Hashtable_t392 * L_19 = ChannelData_get_CustomProperties_m6461(__this, /*hidden argument*/NULL);
			Object_t * L_20 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_19, L_20);
			if (L_21)
			{
				goto IL_00b4;
			}
		}

IL_009b:
		{
			Hashtable_t392 * L_22 = ChannelData_get_CustomProperties_m6461(__this, /*hidden argument*/NULL);
			Object_t * L_23 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			Object_t * L_24 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, L_23, L_24);
		}

IL_00b4:
		{
			Object_t * L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0078;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_27 = V_1;
			V_8 = ((Object_t *)IsInst(L_27, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_28 = V_8;
			if (L_28)
			{
				goto IL_00d1;
			}
		}

IL_00d0:
		{
			IL2CPP_END_FINALLY(196)
		}

IL_00d1:
		{
			Object_t * L_29 = V_8;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_29);
			IL2CPP_END_FINALLY(196)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00d9:
	{
		ArrayList_t402 * L_30 = (__this->____serverProviders_4);
		if (L_30)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1134 * L_31 = ___other;
		NullCheck(L_31);
		ArrayList_t402 * L_32 = (L_31->____serverProviders_4);
		if (!L_32)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1134 * L_33 = ___other;
		NullCheck(L_33);
		ArrayList_t402 * L_34 = (L_33->____serverProviders_4);
		NullCheck(L_34);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_34);
		V_3 = L_35;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0100:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			Object_t * L_37 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_36);
			V_2 = ((ProviderData_t1136 *)Castclass(L_37, ProviderData_t1136_il2cpp_TypeInfo_var));
			ProviderData_t1136 * L_38 = (ProviderData_t1136 *)il2cpp_codegen_object_new (ProviderData_t1136_il2cpp_TypeInfo_var);
			ProviderData__ctor_m6463(L_38, /*hidden argument*/NULL);
			V_4 = L_38;
			ProviderData_t1136 * L_39 = V_4;
			ProviderData_t1136 * L_40 = V_2;
			NullCheck(L_39);
			ProviderData_CopyFrom_m6464(L_39, L_40, /*hidden argument*/NULL);
			ArrayList_t402 * L_41 = ChannelData_get_ServerProviders_m6459(__this, /*hidden argument*/NULL);
			ProviderData_t1136 * L_42 = V_4;
			NullCheck(L_41);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_42);
		}

IL_0129:
		{
			Object_t * L_43 = V_3;
			NullCheck(L_43);
			bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_0100;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x14E, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		{
			Object_t * L_45 = V_3;
			V_9 = ((Object_t *)IsInst(L_45, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_9;
			if (L_46)
			{
				goto IL_0146;
			}
		}

IL_0145:
		{
			IL2CPP_END_FINALLY(313)
		}

IL_0146:
		{
			Object_t * L_47 = V_9;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_47);
			IL2CPP_END_FINALLY(313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x14E, IL_014e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_014e:
	{
		ArrayList_t402 * L_48 = (__this->____clientProviders_5);
		if (L_48)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1134 * L_49 = ___other;
		NullCheck(L_49);
		ArrayList_t402 * L_50 = (L_49->____clientProviders_5);
		if (!L_50)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1134 * L_51 = ___other;
		NullCheck(L_51);
		ArrayList_t402 * L_52 = (L_51->____clientProviders_5);
		NullCheck(L_52);
		Object_t * L_53 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_52);
		V_6 = L_53;
	}

IL_0171:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a2;
		}

IL_0176:
		{
			Object_t * L_54 = V_6;
			NullCheck(L_54);
			Object_t * L_55 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_54);
			V_5 = ((ProviderData_t1136 *)Castclass(L_55, ProviderData_t1136_il2cpp_TypeInfo_var));
			ProviderData_t1136 * L_56 = (ProviderData_t1136 *)il2cpp_codegen_object_new (ProviderData_t1136_il2cpp_TypeInfo_var);
			ProviderData__ctor_m6463(L_56, /*hidden argument*/NULL);
			V_7 = L_56;
			ProviderData_t1136 * L_57 = V_7;
			ProviderData_t1136 * L_58 = V_5;
			NullCheck(L_57);
			ProviderData_CopyFrom_m6464(L_57, L_58, /*hidden argument*/NULL);
			ArrayList_t402 * L_59 = ChannelData_get_ClientProviders_m6460(__this, /*hidden argument*/NULL);
			ProviderData_t1136 * L_60 = V_7;
			NullCheck(L_59);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_59, L_60);
		}

IL_01a2:
		{
			Object_t * L_61 = V_6;
			NullCheck(L_61);
			bool L_62 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0176;
			}
		}

IL_01ae:
		{
			IL2CPP_LEAVE(0x1C9, FINALLY_01b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_01b3;
	}

FINALLY_01b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_63 = V_6;
			V_10 = ((Object_t *)IsInst(L_63, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_64 = V_10;
			if (L_64)
			{
				goto IL_01c1;
			}
		}

IL_01c0:
		{
			IL2CPP_END_FINALLY(435)
		}

IL_01c1:
		{
			Object_t * L_65 = V_10;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_65);
			IL2CPP_END_FINALLY(435)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(435)
	{
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_01c9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ProviderData::.ctor()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void ProviderData__ctor_m6463 (ProviderData_t1136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		__this->___CustomProperties_3 = L_0;
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ProviderData::CopyFrom(System.Runtime.Remoting.ProviderData)
extern TypeInfo* IEnumerator_t286_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t567_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t326_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t309_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1078_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t526_il2cpp_TypeInfo_var;
extern "C" void ProviderData_CopyFrom_m6464 (ProviderData_t1136 * __this, ProviderData_t1136 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		DictionaryEntry_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		IEnumerable_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		SinkProviderData_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(789);
		IList_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t567  V_0 = {0};
	Object_t * V_1 = {0};
	SinkProviderData_t1078 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ProviderData_t1136 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ProviderData_t1136 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ProviderData_t1136 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		ProviderData_t1136 * L_9 = ___other;
		NullCheck(L_9);
		Hashtable_t392 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(26 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_10);
		V_1 = L_11;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0056:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_12);
			V_0 = ((*(DictionaryEntry_t567 *)((DictionaryEntry_t567 *)UnBox (L_13, DictionaryEntry_t567_il2cpp_TypeInfo_var))));
			Hashtable_t392 * L_14 = (__this->___CustomProperties_3);
			Object_t * L_15 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_14, L_15);
			if (L_16)
			{
				goto IL_0092;
			}
		}

IL_0079:
		{
			Hashtable_t392 * L_17 = (__this->___CustomProperties_3);
			Object_t * L_18 = DictionaryEntry_get_Key_m4898((&V_0), /*hidden argument*/NULL);
			Object_t * L_19 = DictionaryEntry_get_Value_m4899((&V_0), /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_19);
		}

IL_0092:
		{
			Object_t * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0056;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_1;
			V_4 = ((Object_t *)IsInst(L_22, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_4;
			if (L_23)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			Object_t * L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_00b7:
	{
		ProviderData_t1136 * L_25 = ___other;
		NullCheck(L_25);
		Object_t * L_26 = (L_25->___CustomData_4);
		if (!L_26)
		{
			goto IL_0127;
		}
	}
	{
		Object_t * L_27 = (__this->___CustomData_4);
		if (L_27)
		{
			goto IL_00d8;
		}
	}
	{
		ArrayList_t402 * L_28 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_28, /*hidden argument*/NULL);
		__this->___CustomData_4 = L_28;
	}

IL_00d8:
	{
		ProviderData_t1136 * L_29 = ___other;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___CustomData_4);
		NullCheck(L_30);
		Object_t * L_31 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t309_il2cpp_TypeInfo_var, L_30);
		V_3 = L_31;
	}

IL_00e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0102;
		}

IL_00e9:
		{
			Object_t * L_32 = V_3;
			NullCheck(L_32);
			Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_32);
			V_2 = ((SinkProviderData_t1078 *)Castclass(L_33, SinkProviderData_t1078_il2cpp_TypeInfo_var));
			Object_t * L_34 = (__this->___CustomData_4);
			SinkProviderData_t1078 * L_35 = V_2;
			NullCheck(L_34);
			InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t526_il2cpp_TypeInfo_var, L_34, L_35);
		}

IL_0102:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t286_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_00e9;
			}
		}

IL_010d:
		{
			IL2CPP_LEAVE(0x127, FINALLY_0112);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0112;
	}

FINALLY_0112:
	{ // begin finally (depth: 1)
		{
			Object_t * L_38 = V_3;
			V_5 = ((Object_t *)IsInst(L_38, IDisposable_t326_il2cpp_TypeInfo_var));
			Object_t * L_39 = V_5;
			if (L_39)
			{
				goto IL_011f;
			}
		}

IL_011e:
		{
			IL2CPP_END_FINALLY(274)
		}

IL_011f:
		{
			Object_t * L_40 = V_5;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t326_il2cpp_TypeInfo_var, L_40);
			IL2CPP_END_FINALLY(274)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(274)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0127:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.FormatterData::.ctor()
extern "C" void FormatterData__ctor_m6465 (FormatterData_t1137 * __this, const MethodInfo* method)
{
	{
		ProviderData__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C" void RemotingException__ctor_m6466 (RemotingException_t1138 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m8150(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m6467 (RemotingException_t1138 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m2397(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingException__ctor_m6468 (RemotingException_t1138 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t317 * L_0 = ___info;
		StreamingContext_t318  L_1 = ___context;
		SystemException__ctor_m8151(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String,System.Exception)
extern "C" void RemotingException__ctor_m6469 (RemotingException_t1138 * __this, String_t* ___message, Exception_t74 * ___InnerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t74 * L_1 = ___InnerException;
		SystemException__ctor_m8152(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern const Il2CppType* RemoteActivator_t1069_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t371_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral600;
extern Il2CppCodeGenString* _stringLiteral1990;
extern Il2CppCodeGenString* _stringLiteral1991;
extern Il2CppCodeGenString* _stringLiteral1992;
extern "C" void RemotingServices__cctor_m6470 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteActivator_t1069_0_0_0_var = il2cpp_codegen_type_from_index(791);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(758);
		BinaryFormatter_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(792);
		Guid_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		_stringLiteral1990 = il2cpp_codegen_string_literal_from_index(1990);
		_stringLiteral1991 = il2cpp_codegen_string_literal_from_index(1991);
		_stringLiteral1992 = il2cpp_codegen_string_literal_from_index(1992);
		s_Il2CppMethodIntialized = true;
	}
	RemotingSurrogateSelector_t1108 * V_0 = {0};
	StreamingContext_t318  V_1 = {0};
	Guid_t371  V_2 = {0};
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___next_id_4 = 1;
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5 = ((int32_t)52);
		RemotingSurrogateSelector_t1108 * L_1 = (RemotingSurrogateSelector_t1108 *)il2cpp_codegen_object_new (RemotingSurrogateSelector_t1108_il2cpp_TypeInfo_var);
		RemotingSurrogateSelector__ctor_m6321(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		StreamingContext__ctor_m6659((&V_1), ((int32_t)16), NULL, /*hidden argument*/NULL);
		RemotingSurrogateSelector_t1108 * L_2 = V_0;
		StreamingContext_t318  L_3 = V_1;
		BinaryFormatter_t1139 * L_4 = (BinaryFormatter_t1139 *)il2cpp_codegen_object_new (BinaryFormatter_t1139_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m6539(L_4, L_2, L_3, /*hidden argument*/NULL);
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t318  L_5 = V_1;
		BinaryFormatter_t1139 * L_6 = (BinaryFormatter_t1139 *)il2cpp_codegen_object_new (BinaryFormatter_t1139_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m6539(L_6, (Object_t *)NULL, L_5, /*hidden argument*/NULL);
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t1139 * L_7 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m6541(L_7, 1, /*hidden argument*/NULL);
		BinaryFormatter_t1139 * L_8 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m6541(L_8, 1, /*hidden argument*/NULL);
		RemotingServices_RegisterInternalChannels_m6491(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t371_il2cpp_TypeInfo_var);
		Guid_t371  L_9 = Guid_NewGuid_m7895(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m7900((&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1344(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1205(NULL /*static, unused*/, L_11, _stringLiteral600, /*hidden argument*/NULL);
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(RemoteActivator_t1069_0_0_0_var), /*hidden argument*/NULL);
		RemotingServices_CreateWellKnownServerIdentity_m6487(NULL /*static, unused*/, L_13, _stringLiteral1990, 1, /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_14, _stringLiteral1991, ((int32_t)36));
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_16, _stringLiteral1992, ((int32_t)36));
		((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t386 * RemotingServices_GetVirtualMethod_m6471 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t386 * ___method, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef MethodBase_t386 * (*RemotingServices_GetVirtualMethod_m6471_ftn) (Type_t *, MethodBase_t386 *);
	return  ((RemotingServices_GetVirtualMethod_m6471_ftn)mscorlib::System::Runtime::Remoting::RemotingServices::GetVirtualMethod) (___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m6472 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef bool (*RemotingServices_IsTransparentProxy_m6472_ftn) (Object_t *);
	return  ((RemotingServices_IsTransparentProxy_m6472_ftn)mscorlib::System::Runtime::Remoting::RemotingServices::IsTransparentProxy) (___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ServerIdentity_t796_il2cpp_TypeInfo_var;
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m6473 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		ServerIdentity_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(793);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t796 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Identity_t1118 * L_1 = RemotingServices_GetIdentityForUri_m6483(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ServerIdentity_t796 *)IsInst(L_1, ServerIdentity_t796_il2cpp_TypeInfo_var));
		ServerIdentity_t796 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0014:
	{
		ServerIdentity_t796 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m6495(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m6474 (Object_t * __this /* static, unused */, ObjRef_t1126 * ___objectRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1126 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_1 = RemotingServices_Unmarshal_m6475(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern const Il2CppType* MarshalByRefObject_t441_0_0_0_var;
extern const Il2CppType* ProxyAttribute_t1115_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1121_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t1115_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m6475 (Object_t * __this /* static, unused */, ObjRef_t1126 * ___objectRef, bool ___fRefine, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t441_0_0_0_var = il2cpp_codegen_type_from_index(547);
		ProxyAttribute_t1115_0_0_0_var = il2cpp_codegen_type_from_index(794);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		TrackingServices_t1121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(768);
		ProxyAttribute_t1115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(794);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t1115 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ObjRef_t1126 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m6417(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002d:
	{
		ObjRef_t1126 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m6406(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		ObjRef_t1126 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_10 = RemotingServices_GetRemoteObject_m6490(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t1126 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m6379(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Object_t * L_13 = V_1;
		return L_13;
	}

IL_0049:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_14);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t1115_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t105 * L_18 = Attribute_GetCustomAttribute_m3395(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/NULL);
		V_3 = ((ProxyAttribute_t1115 *)Castclass(L_18, ProxyAttribute_t1115_il2cpp_TypeInfo_var));
		ProxyAttribute_t1115 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_008a;
		}
	}
	{
		ProxyAttribute_t1115 * L_20 = V_3;
		ObjRef_t1126 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t1116 * L_23 = (RealProxy_t1116 *)VirtFuncInvoker4< RealProxy_t1116 *, ObjRef_t1126 *, Type_t *, Object_t *, Context_t1079 * >::Invoke(7 /* System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context) */, L_20, L_21, L_22, NULL, (Context_t1079 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t1126 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m6379(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_008a:
	{
		ObjRef_t1126 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m6489(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t1126 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1121_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m6379(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* TransparentProxy_t1117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1993;
extern "C" RealProxy_t1116 * RemotingServices_GetRealProxy_m6476 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		TransparentProxy_t1117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(795);
		_stringLiteral1993 = il2cpp_codegen_string_literal_from_index(1993);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m6472(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RemotingException_t1138 * L_2 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_2, _stringLiteral1993, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t1117 *)Castclass(L_3, TransparentProxy_t1117_il2cpp_TypeInfo_var)));
		RealProxy_t1116 * L_4 = (((TransparentProxy_t1117 *)Castclass(L_3, TransparentProxy_t1117_il2cpp_TypeInfo_var))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t1103_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t203_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1868;
extern Il2CppCodeGenString* _stringLiteral1418;
extern "C" MethodBase_t386 * RemotingServices_GetMethodBaseFromMethodMessage_m6477 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		TypeU5BU5D_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		_stringLiteral1868 = il2cpp_codegen_string_literal_from_index(1868);
		_stringLiteral1418 = il2cpp_codegen_string_literal_from_index(1418);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m4150(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1868, L_5, _stringLiteral1418, /*hidden argument*/NULL);
		RemotingException_t1138 * L_7 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1103_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_13 = RemotingServices_GetMethodBaseFromName_m6478(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t203*)Castclass(L_12, TypeU5BU5D_t203_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1991;
extern Il2CppCodeGenString* _stringLiteral1992;
extern "C" MethodBase_t386 * RemotingServices_GetMethodBaseFromName_m6478 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t203* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		_stringLiteral1991 = il2cpp_codegen_string_literal_from_index(1991);
		_stringLiteral1992 = il2cpp_codegen_string_literal_from_index(1992);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t386 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_2 = ___type;
		String_t* L_3 = ___methodName;
		TypeU5BU5D_t203* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_5 = RemotingServices_FindInterfaceMethod_m6479(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0014:
	{
		V_0 = (MethodBase_t386 *)NULL;
		TypeU5BU5D_t203* L_6 = ___signature;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_003e;
	}

IL_002e:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_13 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t203* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t383 *, TypeU5BU5D_t203*, ParameterModifierU5BU5D_t384* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_11, L_12, L_13, (Binder_t383 *)NULL, L_14, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL);
		V_0 = L_15;
	}

IL_003e:
	{
		MethodBase_t386 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t386 * L_17 = V_0;
		return L_17;
	}

IL_0046:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1191(NULL /*static, unused*/, L_18, _stringLiteral1991, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_005c:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m1191(NULL /*static, unused*/, L_21, _stringLiteral1992, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodInfo_t * L_23 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0072:
	{
		TypeU5BU5D_t203* L_24 = ___signature;
		if (L_24)
		{
			goto IL_008b;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_26 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t203* L_27 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t209 * L_28 = (ConstructorInfo_t209 *)VirtFuncInvoker4< ConstructorInfo_t209 *, int32_t, Binder_t383 *, TypeU5BU5D_t203*, ParameterModifierU5BU5D_t384* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_25, L_26, (Binder_t383 *)NULL, L_27, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL);
		return L_28;
	}

IL_008b:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t203* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t209 * L_32 = (ConstructorInfo_t209 *)VirtFuncInvoker4< ConstructorInfo_t209 *, int32_t, Binder_t383 *, TypeU5BU5D_t203*, ParameterModifierU5BU5D_t384* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_29, L_30, (Binder_t383 *)NULL, L_31, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" MethodBase_t386 * RemotingServices_FindInterfaceMethod_m6479 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t203* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t386 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t203* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t386 *)NULL;
		TypeU5BU5D_t203* L_0 = ___signature;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_3 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_002a;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t203* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t383 *, TypeU5BU5D_t203*, ParameterModifierU5BU5D_t384* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, (Binder_t383 *)NULL, L_8, (ParameterModifierU5BU5D_t384*)(ParameterModifierU5BU5D_t384*)NULL);
		V_0 = L_9;
	}

IL_002a:
	{
		MethodBase_t386 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		MethodBase_t386 * L_11 = V_0;
		return L_11;
	}

IL_0032:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t203* L_13 = (TypeU5BU5D_t203*)VirtFuncInvoker0< TypeU5BU5D_t203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_0059;
	}

IL_0040:
	{
		TypeU5BU5D_t203* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t203* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		MethodBase_t386 * L_20 = RemotingServices_FindInterfaceMethod_m6479(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		MethodBase_t386 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0055;
		}
	}
	{
		MethodBase_t386 * L_22 = V_0;
		return L_22;
	}

IL_0055:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t203* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		return (MethodBase_t386 *)NULL;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxy_m6480 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1122 * ___entry, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t402 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t1122 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t1409* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m6382(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t207* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0053;
		}
	}

IL_0011:
	{
		ArrayList_t402 * L_3 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ActivatedClientTypeEntry_t1122 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t1409* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m6382(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ArrayList_t402 * L_6 = V_0;
		ActivatedClientTypeEntry_t1122 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t1409* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m6382(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(39 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_002e:
	{
		ObjectU5BU5D_t207* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ArrayList_t402 * L_10 = V_0;
		ObjectU5BU5D_t207* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(39 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_003b:
	{
		ActivatedClientTypeEntry_t1122 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_12, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t1122 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m6381(L_14, /*hidden argument*/NULL);
		ArrayList_t402 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t207* L_17 = (ObjectU5BU5D_t207*)VirtFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(42 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m6481(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0053:
	{
		ActivatedClientTypeEntry_t1122 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m6383(L_19, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t1122 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m6381(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m6481(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t207*)(ObjectU5BU5D_t207*)NULL, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1120_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral600;
extern Il2CppCodeGenString* _stringLiteral1990;
extern "C" Object_t * RemotingServices_CreateClientProxy_m6481 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		RemotingProxy_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(764);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		_stringLiteral1990 = il2cpp_codegen_string_literal_from_index(1990);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	RemotingProxy_t1120 * V_2 = {0};
	{
		String_t* L_0 = ___url;
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m1340(L_1, _stringLiteral600, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1205(NULL /*static, unused*/, L_3, _stringLiteral600, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001e:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1205(NULL /*static, unused*/, L_5, _stringLiteral1990, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		RemotingServices_GetClientChannelSinkChain_m6486(NULL /*static, unused*/, L_7, NULL, (&V_1), /*hidden argument*/NULL);
		Type_t * L_8 = ___objectType;
		String_t* L_9 = V_0;
		ObjectU5BU5D_t207* L_10 = ___activationAttributes;
		RemotingProxy_t1120 * L_11 = (RemotingProxy_t1120 *)il2cpp_codegen_object_new (RemotingProxy_t1120_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m6374(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		RemotingProxy_t1120 * L_12 = V_2;
		NullCheck(L_12);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_12);
		return L_13;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern const Il2CppType* ProxyAttribute_t1115_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t1115_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1120_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m6482 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t207* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProxyAttribute_t1115_0_0_0_var = il2cpp_codegen_type_from_index(794);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		ProxyAttribute_t1115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(794);
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		RemotingProxy_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(764);
		s_Il2CppMethodIntialized = true;
	}
	ProxyAttribute_t1115 * V_0 = {0};
	RemotingProxy_t1120 * V_1 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_0);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t1115_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t105 * L_4 = Attribute_GetCustomAttribute_m3395(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ProxyAttribute_t1115 *)Castclass(L_4, ProxyAttribute_t1115_il2cpp_TypeInfo_var));
		ProxyAttribute_t1115 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ProxyAttribute_t1115 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t441 * L_8 = (MarshalByRefObject_t441 *)VirtFuncInvoker1< MarshalByRefObject_t441 *, Type_t * >::Invoke(6 /* System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type) */, L_6, L_7);
		return L_8;
	}

IL_0030:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ChannelServices_t1074_StaticFields*)ChannelServices_t1074_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t207* L_11 = ___activationAttributes;
		RemotingProxy_t1120 * L_12 = (RemotingProxy_t1120 *)il2cpp_codegen_object_new (RemotingProxy_t1120_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m6374(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		RemotingProxy_t1120 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* Identity_t1118_il2cpp_TypeInfo_var;
extern "C" Identity_t1118 * RemotingServices_GetIdentityForUri_m6483 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		Identity_t1118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(796);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Hashtable_t392 * V_1 = {0};
	Identity_t1118 * V_2 = {0};
	Identity_t1118 * V_3 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		String_t* L_1 = RemotingServices_GetNormalizedUri_m6493(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t392 * L_2 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t392 * L_3 = V_1;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_4 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
			V_2 = ((Identity_t1118 *)Castclass(L_6, Identity_t1118_il2cpp_TypeInfo_var));
			Identity_t1118 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_002a:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m6484(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0037:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_11 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, L_12);
			V_2 = ((Identity_t1118 *)Castclass(L_13, Identity_t1118_il2cpp_TypeInfo_var));
		}

IL_0048:
		{
			Identity_t1118 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x5B, FINALLY_0054);
		}

IL_004f:
		{
			; // IL_004f: leave IL_005b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_15 = V_1;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_005b:
	{
		Identity_t1118 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern TypeInfo* RemotingConfiguration_t1133_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral600;
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m6484 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1133_il2cpp_TypeInfo_var);
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m6419(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000e:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral600, L_2, _stringLiteral600, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___uri;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_StartsWith_m1238(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_7 = ___uri;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1182(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m1223(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0038:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern TypeInfo* IChannelInfo_t1130_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t1128_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1120_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1077_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t441_il2cpp_TypeInfo_var;
extern "C" ClientIdentity_t1128 * RemotingServices_GetOrCreateClientIdentity_m6485 (Object_t * __this /* static, unused */, ObjRef_t1126 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelInfo_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(780);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		ClientIdentity_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(766);
		RemotingProxy_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(764);
		CrossAppDomainSink_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		MarshalByRefObject_t441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t392 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t1128 * V_5 = {0};
	RemotingProxy_t1120 * V_6 = {0};
	CrossAppDomainSink_t1077 * V_7 = {0};
	ClientIdentity_t1128 * V_8 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t207* G_B3_0 = {0};
	{
		ObjRef_t1126 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ObjRef_t1126 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t207* L_4 = (ObjectU5BU5D_t207*)InterfaceFuncInvoker0< ObjectU5BU5D_t207* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.IChannelInfo::get_ChannelData() */, IChannelInfo_t1130_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((ObjectU5BU5D_t207*)(NULL));
	}

IL_001c:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t1126 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_5);
		Object_t * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m6486(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0039;
		}
	}
	{
		ObjRef_t1126 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_10);
		V_1 = L_11;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_12 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t392 * L_13 = V_3;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t1126 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			String_t* L_17 = RemotingServices_GetNormalizedUri_m6493(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			Hashtable_t392 * L_18 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
			V_5 = ((ClientIdentity_t1128 *)IsInst(L_20, ClientIdentity_t1128_il2cpp_TypeInfo_var));
			ClientIdentity_t1128 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_008f;
			}
		}

IL_006f:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t1128 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t441 * L_24 = ClientIdentity_get_ClientProxy_m6397(L_23, /*hidden argument*/NULL);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0088;
			}
		}

IL_007f:
		{
			ClientIdentity_t1128 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0x107, FINALLY_0100);
		}

IL_0088:
		{
			ClientIdentity_t1128 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m6492(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		}

IL_008f:
		{
			String_t* L_28 = V_1;
			ObjRef_t1126 * L_29 = ___objRef;
			ClientIdentity_t1128 * L_30 = (ClientIdentity_t1128 *)il2cpp_codegen_object_new (ClientIdentity_t1128_il2cpp_TypeInfo_var);
			ClientIdentity__ctor_m6396(L_30, L_28, L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			ClientIdentity_t1128 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m6392(L_31, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_33 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t1128 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00f2;
			}
		}

IL_00b4:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t1128 * L_38 = V_5;
			RemotingProxy_t1120 * L_39 = (RemotingProxy_t1120 *)il2cpp_codegen_object_new (RemotingProxy_t1120_il2cpp_TypeInfo_var);
			RemotingProxy__ctor_m6373(L_39, L_37, L_38, /*hidden argument*/NULL);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t1077 *)IsInst(L_40, CrossAppDomainSink_t1077_il2cpp_TypeInfo_var));
			CrossAppDomainSink_t1077 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			RemotingProxy_t1120 * L_42 = V_6;
			CrossAppDomainSink_t1077 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m6177(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m6372(L_42, L_44, /*hidden argument*/NULL);
		}

IL_00db:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t1120 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t1128 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m6398(L_48, ((MarshalByRefObject_t441 *)Castclass((*((Object_t **)L_49)), MarshalByRefObject_t441_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00f2:
		{
			ClientIdentity_t1128 * L_50 = V_5;
			V_8 = L_50;
			IL2CPP_LEAVE(0x107, FINALLY_0100);
		}

IL_00fb:
		{
			; // IL_00fb: leave IL_0107
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_51 = V_3;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(256)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x107, IL_0107)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0107:
	{
		ClientIdentity_t1128 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern TypeInfo* ChannelServices_t1074_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1994;
extern Il2CppCodeGenString* _stringLiteral1995;
extern "C" Object_t * RemotingServices_GetClientChannelSinkChain_m6486 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(723);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1994 = il2cpp_codegen_string_literal_from_index(1994);
		_stringLiteral1995 = il2cpp_codegen_string_literal_from_index(1995);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___url;
		Object_t * L_1 = ___channelData;
		String_t** L_2 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1074_il2cpp_TypeInfo_var);
		Object_t * L_3 = ChannelServices_CreateClientChannelSinkChain_m6156(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = ___url;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2331(NULL /*static, unused*/, _stringLiteral1994, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		RemotingException_t1138 * L_9 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0028:
	{
		String_t* L_10 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2331(NULL /*static, unused*/, _stringLiteral1995, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = V_2;
		RemotingException_t1138 * L_13 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
		RemotingException__ctor_m6467(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003b:
	{
		Object_t * L_14 = V_0;
		return L_14;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern TypeInfo* Context_t1079_il2cpp_TypeInfo_var;
extern TypeInfo* SingleCallIdentity_t1143_il2cpp_TypeInfo_var;
extern TypeInfo* SingletonIdentity_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" ServerIdentity_t796 * RemotingServices_CreateWellKnownServerIdentity_m6487 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(736);
		SingleCallIdentity_t1143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(797);
		SingletonIdentity_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(798);
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t796 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1079_il2cpp_TypeInfo_var);
		Context_t1079 * L_2 = Context_get_DefaultContext_m6183(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t1143 * L_4 = (SingleCallIdentity_t1143 *)il2cpp_codegen_object_new (SingleCallIdentity_t1143_il2cpp_TypeInfo_var);
		SingleCallIdentity__ctor_m6499(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0026;
	}

IL_0019:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1079_il2cpp_TypeInfo_var);
		Context_t1079 * L_6 = Context_get_DefaultContext_m6183(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t1142 * L_8 = (SingletonIdentity_t1142 *)il2cpp_codegen_object_new (SingletonIdentity_t1142_il2cpp_TypeInfo_var);
		SingletonIdentity__ctor_m6498(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0026:
	{
		ServerIdentity_t796 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m6488(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ServerIdentity_t796 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1996;
extern Il2CppCodeGenString* _stringLiteral178;
extern "C" void RemotingServices_RegisterServerIdentity_m6488 (Object_t * __this /* static, unused */, ServerIdentity_t796 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		RemotingException_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(716);
		_stringLiteral1996 = il2cpp_codegen_string_literal_from_index(1996);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_2 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t796 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m6393(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0021:
		{
			ServerIdentity_t796 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m6393(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m1209(NULL /*static, unused*/, _stringLiteral1996, L_7, _stringLiteral178, /*hidden argument*/NULL);
			RemotingException_t1138 * L_9 = (RemotingException_t1138 *)il2cpp_codegen_object_new (RemotingException_t1138_il2cpp_TypeInfo_var);
			RemotingException__ctor_m6467(L_9, L_8, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_003c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_10 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t796 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m6393(L_11, /*hidden argument*/NULL);
			ServerIdentity_t796 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_14 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0059:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m6489 (Object_t * __this /* static, unused */, ObjRef_t1126 * ___objref, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(767);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t1141 * V_0 = {0};
	{
		ObjRef_t1126 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Identity_t1118 * L_2 = RemotingServices_GetIdentityForUri_m6483(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ClientActivatedIdentity_t1141 *)IsInst(L_2, ClientActivatedIdentity_t1141_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t1141 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		ClientActivatedIdentity_t1141 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t441 * L_5 = ClientActivatedIdentity_GetServerObject_m6497(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		ObjRef_t1126 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetRemoteObject_m6490(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetRemoteObject_m6490 (Object_t * __this /* static, unused */, ObjRef_t1126 * ___objRef, Type_t * ___proxyType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ObjRef_t1126 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		RemotingServices_GetOrCreateClientIdentity_m6485(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern TypeInfo* CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterInternalChannels_m6491 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(733);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1076_il2cpp_TypeInfo_var);
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m6168(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern TypeInfo* RemotingServices_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t1128_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_DisposeIdentity_m6492 (Object_t * __this /* static, unused */, Identity_t1118 * ___ident, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		ClientIdentity_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(766);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t392 * V_0 = {0};
	ClientIdentity_t1128 * V_1 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t392 * L_1 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t1118 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m6394(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0055;
			}
		}

IL_0017:
		{
			Identity_t1118 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t1128 *)IsInst(L_4, ClientIdentity_t1128_il2cpp_TypeInfo_var));
			ClientIdentity_t1128 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_003e;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_6 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ClientIdentity_t1128 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m6400(L_7, /*hidden argument*/NULL);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m6493(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_9);
			goto IL_004e;
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1140_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_10 = ((RemotingServices_t1140_StaticFields*)RemotingServices_t1140_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			Identity_t1118 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m6393(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_10, L_12);
		}

IL_004e:
		{
			Identity_t1118 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m6395(L_13, 1, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x61, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Hashtable_t392 * L_14 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0061:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern Il2CppCodeGenString* _stringLiteral600;
extern "C" String_t* RemotingServices_GetNormalizedUri_m6493 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m1238(L_0, _stringLiteral600, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m1223(L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		String_t* L_4 = ___uri;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m6494 (ServerIdentity_t796 * __this, String_t* ___objectUri, Context_t1079 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m6390(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t1079 * L_2 = ___context;
		__this->____context_7 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m6495 (ServerIdentity_t796 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern TypeInfo* ObjRef_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t1146_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyInfo_t1125_il2cpp_TypeInfo_var;
extern "C" ObjRef_t1126 * ServerIdentity_CreateObjRef_m6496 (ServerIdentity_t796 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		TypeInfo_t1146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(799);
		EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		EnvoyInfo_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(800);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1126 * L_0 = (((Identity_t1118 *)__this)->____objRef_3);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ObjRef_t1126 * L_1 = (((Identity_t1118 *)__this)->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m6416(L_1, /*hidden argument*/NULL);
		ObjRef_t1126 * L_2 = (((Identity_t1118 *)__this)->____objRef_3);
		return L_2;
	}

IL_001d:
	{
		Type_t * L_3 = ___requestedType;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_4 = (__this->____objectType_5);
		___requestedType = L_4;
	}

IL_002b:
	{
		ObjRef_t1126 * L_5 = (ObjRef_t1126 *)il2cpp_codegen_object_new (ObjRef_t1126_il2cpp_TypeInfo_var);
		ObjRef__ctor_m6403(L_5, /*hidden argument*/NULL);
		((Identity_t1118 *)__this)->____objRef_3 = L_5;
		ObjRef_t1126 * L_6 = (((Identity_t1118 *)__this)->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t1146 * L_8 = (TypeInfo_t1146 *)il2cpp_codegen_object_new (TypeInfo_t1146_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m6522(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo) */, L_6, L_8);
		ObjRef_t1126 * L_9 = (((Identity_t1118 *)__this)->____objRef_3);
		String_t* L_10 = (((Identity_t1118 *)__this)->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String) */, L_9, L_10);
		Object_t * L_11 = (((Identity_t1118 *)__this)->____envoySink_2);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		Object_t * L_12 = (((Identity_t1118 *)__this)->____envoySink_2);
		if (((EnvoyTerminatorSink_t1097 *)IsInst(L_12, EnvoyTerminatorSink_t1097_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		ObjRef_t1126 * L_13 = (((Identity_t1118 *)__this)->____objRef_3);
		Object_t * L_14 = (((Identity_t1118 *)__this)->____envoySink_2);
		EnvoyInfo_t1125 * L_15 = (EnvoyInfo_t1125 *)il2cpp_codegen_object_new (EnvoyInfo_t1125_il2cpp_TypeInfo_var);
		EnvoyInfo__ctor_m6388(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo) */, L_13, L_15);
	}

IL_0089:
	{
		ObjRef_t1126 * L_16 = (((Identity_t1118 *)__this)->____objRef_3);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t441 * ClientActivatedIdentity_GetServerObject_m6497 (ClientActivatedIdentity_t1141 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject_t441 * L_0 = (((ServerIdentity_t796 *)__this)->____serverObject_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m6498 (SingletonIdentity_t1142 * __this, String_t* ___objectUri, Context_t1079 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1079 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m6494(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m6499 (SingleCallIdentity_t1143 * __this, String_t* ___objectUri, Context_t1079 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1079 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m6494(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.SoapServices/TypeInfo
#include "mscorlib_System_Runtime_Remoting_SoapServices_TypeInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.SoapServices/TypeInfo
#include "mscorlib_System_Runtime_Remoting_SoapServices_TypeInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.SoapServices/TypeInfo::.ctor()
extern "C" void TypeInfo__ctor_m6500 (TypeInfo_t1144 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SoapServices::.cctor()
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern "C" void SoapServices__cctor_m6501 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t392 * L_0 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_0, /*hidden argument*/NULL);
		((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0 = L_0;
		Hashtable_t392 * L_1 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_1, /*hidden argument*/NULL);
		((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1 = L_1;
		Hashtable_t392 * L_2 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_2, /*hidden argument*/NULL);
		((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____soapActions_2 = L_2;
		Hashtable_t392 * L_3 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_3, /*hidden argument*/NULL);
		((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____soapActionsMethods_3 = L_3;
		Hashtable_t392 * L_4 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2399(L_4, /*hidden argument*/NULL);
		((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4 = L_4;
		return;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithAssembly()
extern Il2CppCodeGenString* _stringLiteral1997;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithAssembly_m6502 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1997 = il2cpp_codegen_string_literal_from_index(1997);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1997;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNs()
extern Il2CppCodeGenString* _stringLiteral1998;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNs_m6503 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1998 = il2cpp_codegen_string_literal_from_index(1998);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1998;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNsAndAssembly()
extern Il2CppCodeGenString* _stringLiteral1999;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m6504 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1999 = il2cpp_codegen_string_literal_from_index(1999);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral1999;
	}
}
// System.String System.Runtime.Remoting.SoapServices::CodeXmlNamespaceForClrTypeNamespace(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral600;
extern "C" String_t* SoapServices_CodeXmlNamespaceForClrTypeNamespace_m6505 (Object_t * __this /* static, unused */, String_t* ___typeNamespace, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		_stringLiteral600 = il2cpp_codegen_string_literal_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m1191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_3 = SoapServices_get_XmlNsForClrTypeWithNs_m6503(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___typeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1205(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		String_t* L_6 = ___typeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_8 = String_op_Equality_m1191(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_9 = SoapServices_get_XmlNsForClrTypeWithAssembly_m6502(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1205(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		String_t* L_12 = SoapServices_EncodeNs_m6516(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_13 = SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m6504(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = ___typeNamespace;
		String_t* L_15 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1337(NULL /*static, unused*/, L_13, L_14, _stringLiteral600, L_15, /*hidden argument*/NULL);
		String_t* L_17 = SoapServices_EncodeNs_m6516(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetNameKey(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" String_t* SoapServices_GetNameKey_m6506 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___namspace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___namspace;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___name;
		return L_1;
	}

IL_0008:
	{
		String_t* L_2 = ___name;
		String_t* L_3 = ___namspace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1209(NULL /*static, unused*/, L_2, _stringLiteral19, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetAssemblyName(System.Reflection.MethodBase)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetAssemblyName_m6507 (Object_t * __this /* static, unused */, MethodBase_t386 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t386 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		Assembly_t587 * L_2 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Assembly_t587 * L_4 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		if ((!(((Object_t*)(Assembly_t587 *)L_2) == ((Object_t*)(Assembly_t587 *)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_5;
	}

IL_0025:
	{
		MethodBase_t386 * L_6 = ___mb;
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		NullCheck(L_7);
		Assembly_t587 * L_8 = (Assembly_t587 *)VirtFuncInvoker0< Assembly_t587 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		AssemblyName_t1002 * L_9 = (AssemblyName_t1002 *)VirtFuncInvoker0< AssemblyName_t1002 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_8);
		NullCheck(L_9);
		String_t* L_10 = AssemblyName_get_Name_m5841(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlElementForInteropType(System.Type,System.String&,System.String&)
extern TypeInfo* InternalRemotingServices_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1114_il2cpp_TypeInfo_var;
extern "C" bool SoapServices_GetXmlElementForInteropType_m6508 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlElement, String_t** ___xmlNamespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalRemotingServices_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(773);
		SoapTypeAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(776);
		s_Il2CppMethodIntialized = true;
	}
	SoapTypeAttribute_t1114 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
		SoapAttribute_t1110 * L_1 = InternalRemotingServices_GetCachedSoapAttribute_m6402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((SoapTypeAttribute_t1114 *)Castclass(L_1, SoapTypeAttribute_t1114_il2cpp_TypeInfo_var));
		SoapTypeAttribute_t1114 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = SoapTypeAttribute_get_IsInteropXmlElement_m6358(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t** L_4 = ___xmlElement;
		*((Object_t **)(L_4)) = (Object_t *)NULL;
		String_t** L_5 = ___xmlNamespace;
		*((Object_t **)(L_5)) = (Object_t *)NULL;
		return 0;
	}

IL_001f:
	{
		String_t** L_6 = ___xmlElement;
		SoapTypeAttribute_t1114 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = SoapTypeAttribute_get_XmlElementName_m6354(L_7, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
		String_t** L_9 = ___xmlNamespace;
		SoapTypeAttribute_t1114 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = SoapTypeAttribute_get_XmlNamespace_m6355(L_10, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_11;
		return 1;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodCall(System.Reflection.MethodBase)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodCall_m6509 (Object_t * __this /* static, unused */, MethodBase_t386 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t386 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		MethodBase_t386 * L_3 = ___mb;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_4 = SoapServices_GetAssemblyName_m6507(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_5 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m6505(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodResponse(System.Reflection.MethodBase)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodResponse_m6510 (Object_t * __this /* static, unused */, MethodBase_t386 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t386 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		MethodBase_t386 * L_3 = ___mb;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		String_t* L_4 = SoapServices_GetAssemblyName_m6507(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_5 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m6505(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlTypeForInteropType(System.Type,System.String&,System.String&)
extern TypeInfo* InternalRemotingServices_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1114_il2cpp_TypeInfo_var;
extern "C" bool SoapServices_GetXmlTypeForInteropType_m6511 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlType, String_t** ___xmlTypeNamespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalRemotingServices_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(773);
		SoapTypeAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(776);
		s_Il2CppMethodIntialized = true;
	}
	SoapTypeAttribute_t1114 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
		SoapAttribute_t1110 * L_1 = InternalRemotingServices_GetCachedSoapAttribute_m6402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((SoapTypeAttribute_t1114 *)Castclass(L_1, SoapTypeAttribute_t1114_il2cpp_TypeInfo_var));
		SoapTypeAttribute_t1114 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = SoapTypeAttribute_get_IsInteropXmlType_m6359(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t** L_4 = ___xmlType;
		*((Object_t **)(L_4)) = (Object_t *)NULL;
		String_t** L_5 = ___xmlTypeNamespace;
		*((Object_t **)(L_5)) = (Object_t *)NULL;
		return 0;
	}

IL_001f:
	{
		String_t** L_6 = ___xmlType;
		SoapTypeAttribute_t1114 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = SoapTypeAttribute_get_XmlTypeName_m6356(L_7, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
		String_t** L_9 = ___xmlTypeNamespace;
		SoapTypeAttribute_t1114 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = SoapTypeAttribute_get_XmlTypeNamespace_m6357(L_10, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_11;
		return 1;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Reflection.Assembly)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern "C" void SoapServices_PreLoad_m6512 (Object_t * __this /* static, unused */, Assembly_t587 * ___assembly, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t203* V_1 = {0};
	int32_t V_2 = 0;
	{
		Assembly_t587 * L_0 = ___assembly;
		NullCheck(L_0);
		TypeU5BU5D_t203* L_1 = (TypeU5BU5D_t203*)VirtFuncInvoker0< TypeU5BU5D_t203* >::Invoke(11 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		TypeU5BU5D_t203* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m6513(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t203* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Type)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t1144_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1111_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t392_il2cpp_TypeInfo_var;
extern "C" void SoapServices_PreLoad_m6513 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		TypeInfo_t1144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(801);
		InternalRemotingServices_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(773);
		SoapFieldAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(777);
		Hashtable_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	TypeInfo_t1144 * V_2 = {0};
	Object_t * V_3 = {0};
	FieldInfoU5BU5D_t380* V_4 = {0};
	FieldInfo_t * V_5 = {0};
	FieldInfoU5BU5D_t380* V_6 = {0};
	int32_t V_7 = 0;
	SoapFieldAttribute_t1111 * V_8 = {0};
	String_t* V_9 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_2 = ((TypeInfo_t1144 *)IsInst(L_2, TypeInfo_t1144_il2cpp_TypeInfo_var));
		TypeInfo_t1144 * L_3 = V_2;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		bool L_5 = SoapServices_GetXmlTypeForInteropType_m6511(NULL /*static, unused*/, L_4, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = V_1;
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m6515(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_002f:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		bool L_10 = SoapServices_GetXmlElementForInteropType_m6508(NULL /*static, unused*/, L_9, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_11 = V_0;
		String_t* L_12 = V_1;
		Type_t * L_13 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m6514(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_14 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_14);
		V_3 = L_15;
		Object_t * L_16 = V_3;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			TypeInfo_t1144 * L_17 = (TypeInfo_t1144 *)il2cpp_codegen_object_new (TypeInfo_t1144_il2cpp_TypeInfo_var);
			TypeInfo__ctor_m6500(L_17, /*hidden argument*/NULL);
			V_2 = L_17;
			Type_t * L_18 = ___type;
			NullCheck(L_18);
			FieldInfoU5BU5D_t380* L_19 = (FieldInfoU5BU5D_t380*)VirtFuncInvoker1< FieldInfoU5BU5D_t380*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_18, ((int32_t)52));
			V_4 = L_19;
			FieldInfoU5BU5D_t380* L_20 = V_4;
			V_6 = L_20;
			V_7 = 0;
			goto IL_010f;
		}

IL_0073:
		{
			FieldInfoU5BU5D_t380* L_21 = V_6;
			int32_t L_22 = V_7;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			V_5 = (*(FieldInfo_t **)(FieldInfo_t **)SZArrayLdElema(L_21, L_23));
			FieldInfo_t * L_24 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1129_il2cpp_TypeInfo_var);
			SoapAttribute_t1110 * L_25 = InternalRemotingServices_GetCachedSoapAttribute_m6402(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_8 = ((SoapFieldAttribute_t1111 *)Castclass(L_25, SoapFieldAttribute_t1111_il2cpp_TypeInfo_var));
			SoapFieldAttribute_t1111 * L_26 = V_8;
			NullCheck(L_26);
			bool L_27 = SoapFieldAttribute_IsInteropXmlElement_m6345(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_0099;
			}
		}

IL_0094:
		{
			goto IL_0109;
		}

IL_0099:
		{
			SoapFieldAttribute_t1111 * L_28 = V_8;
			NullCheck(L_28);
			String_t* L_29 = SoapFieldAttribute_get_XmlElementName_m6344(L_28, /*hidden argument*/NULL);
			SoapFieldAttribute_t1111 * L_30 = V_8;
			NullCheck(L_30);
			String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace() */, L_30);
			IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
			String_t* L_32 = SoapServices_GetNameKey_m6506(NULL /*static, unused*/, L_29, L_31, /*hidden argument*/NULL);
			V_9 = L_32;
			SoapFieldAttribute_t1111 * L_33 = V_8;
			NullCheck(L_33);
			bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute() */, L_33);
			if (!L_34)
			{
				goto IL_00e4;
			}
		}

IL_00ba:
		{
			TypeInfo_t1144 * L_35 = V_2;
			NullCheck(L_35);
			Hashtable_t392 * L_36 = (L_35->___Attributes_0);
			if (L_36)
			{
				goto IL_00d0;
			}
		}

IL_00c5:
		{
			TypeInfo_t1144 * L_37 = V_2;
			Hashtable_t392 * L_38 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
			Hashtable__ctor_m2399(L_38, /*hidden argument*/NULL);
			NullCheck(L_37);
			L_37->___Attributes_0 = L_38;
		}

IL_00d0:
		{
			TypeInfo_t1144 * L_39 = V_2;
			NullCheck(L_39);
			Hashtable_t392 * L_40 = (L_39->___Attributes_0);
			String_t* L_41 = V_9;
			FieldInfo_t * L_42 = V_5;
			NullCheck(L_40);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_40, L_41, L_42);
			goto IL_0109;
		}

IL_00e4:
		{
			TypeInfo_t1144 * L_43 = V_2;
			NullCheck(L_43);
			Hashtable_t392 * L_44 = (L_43->___Elements_1);
			if (L_44)
			{
				goto IL_00fa;
			}
		}

IL_00ef:
		{
			TypeInfo_t1144 * L_45 = V_2;
			Hashtable_t392 * L_46 = (Hashtable_t392 *)il2cpp_codegen_object_new (Hashtable_t392_il2cpp_TypeInfo_var);
			Hashtable__ctor_m2399(L_46, /*hidden argument*/NULL);
			NullCheck(L_45);
			L_45->___Elements_1 = L_46;
		}

IL_00fa:
		{
			TypeInfo_t1144 * L_47 = V_2;
			NullCheck(L_47);
			Hashtable_t392 * L_48 = (L_47->___Elements_1);
			String_t* L_49 = V_9;
			FieldInfo_t * L_50 = V_5;
			NullCheck(L_48);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_48, L_49, L_50);
		}

IL_0109:
		{
			int32_t L_51 = V_7;
			V_7 = ((int32_t)((int32_t)L_51+(int32_t)1));
		}

IL_010f:
		{
			int32_t L_52 = V_7;
			FieldInfoU5BU5D_t380* L_53 = V_6;
			NullCheck(L_53);
			if ((((int32_t)L_52) < ((int32_t)(((int32_t)(((Array_t *)L_53)->max_length))))))
			{
				goto IL_0073;
			}
		}

IL_011a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
			Hashtable_t392 * L_54 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
			Type_t * L_55 = ___type;
			TypeInfo_t1144 * L_56 = V_2;
			NullCheck(L_54);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_54, L_55, L_56);
			IL2CPP_LEAVE(0x132, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		Object_t * L_57 = V_3;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(299)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x132, IL_0132)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0132:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlElement(System.String,System.String,System.Type)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void SoapServices_RegisterInteropXmlElement_m6514 (Object_t * __this /* static, unused */, String_t* ___xmlElement, String_t* ___xmlNamespace, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_3 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1;
		String_t* L_4 = ___xmlElement;
		String_t* L_5 = ___xmlNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, L_4, _stringLiteral19, L_5, /*hidden argument*/NULL);
		Type_t * L_7 = ___type;
		NullCheck(L_3);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_6, L_7);
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlType(System.String,System.String,System.Type)
extern TypeInfo* SoapServices_t1145_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void SoapServices_RegisterInteropXmlType_m6515 (Object_t * __this /* static, unused */, String_t* ___xmlType, String_t* ___xmlTypeNamespace, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(763);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_0 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m2280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1145_il2cpp_TypeInfo_var);
		Hashtable_t392 * L_3 = ((SoapServices_t1145_StaticFields*)SoapServices_t1145_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0;
		String_t* L_4 = ___xmlType;
		String_t* L_5 = ___xmlTypeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1209(NULL /*static, unused*/, L_4, _stringLiteral19, L_5, /*hidden argument*/NULL);
		Type_t * L_7 = ___type;
		NullCheck(L_3);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_6, L_7);
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m2281(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0034:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.SoapServices::EncodeNs(System.String)
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral2000;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral2001;
extern Il2CppCodeGenString* _stringLiteral103;
extern Il2CppCodeGenString* _stringLiteral2002;
extern "C" String_t* SoapServices_EncodeNs_m6516 (Object_t * __this /* static, unused */, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral2000 = il2cpp_codegen_string_literal_from_index(2000);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral2001 = il2cpp_codegen_string_literal_from_index(2001);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		_stringLiteral2002 = il2cpp_codegen_string_literal_from_index(2002);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___ns;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m1343(L_0, _stringLiteral186, _stringLiteral2000, /*hidden argument*/NULL);
		___ns = L_1;
		String_t* L_2 = ___ns;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m1343(L_2, _stringLiteral19, _stringLiteral2001, /*hidden argument*/NULL);
		___ns = L_3;
		String_t* L_4 = ___ns;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m1343(L_4, _stringLiteral103, _stringLiteral2002, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.TypeEntry::.ctor()
extern "C" void TypeEntry__ctor_m6517 (TypeEntry_t1123 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_AssemblyName()
extern "C" String_t* TypeEntry_get_AssemblyName_m6518 (TypeEntry_t1123 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assembly_name_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.TypeEntry::set_AssemblyName(System.String)
extern "C" void TypeEntry_set_AssemblyName_m6519 (TypeEntry_t1123 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___assembly_name_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_TypeName()
extern "C" String_t* TypeEntry_get_TypeName_m6520 (TypeEntry_t1123 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___type_name_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.TypeEntry::set_TypeName(System.String)
extern "C" void TypeEntry_set_TypeName_m6521 (TypeEntry_t1123 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___type_name_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern const Il2CppType* MarshalByRefObject_t441_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern "C" void TypeInfo__ctor_m6522 (TypeInfo_t1146 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t441_0_0_0_var = il2cpp_codegen_type_from_index(547);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t203* V_3 = {0};
	int32_t V_4 = 0;
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___serverType_0 = L_3;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 0));
		StringU5BU5D_t204* L_4 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 0)) = (String_t*)L_6;
		__this->___interfacesImplemented_2 = L_4;
		goto IL_010a;
	}

IL_004c:
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_7);
		__this->___serverType_0 = L_8;
		V_0 = 0;
		Type_t * L_9 = ___type;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_9);
		V_1 = L_10;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_11);
		V_1 = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0071:
	{
		Type_t * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t441_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_14) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0091;
		}
	}
	{
		Type_t * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0066;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_0;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, L_18));
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_19);
		V_1 = L_20;
		V_2 = 0;
		goto IL_00c4;
	}

IL_00ab:
	{
		StringU5BU5D_t204* L_21 = (__this->___serverHierarchy_1);
		int32_t L_22 = V_2;
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		ArrayElementTypeCheck (L_21, L_24);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, L_22)) = (String_t*)L_24;
		Type_t * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_25);
		V_1 = L_26;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00ab;
		}
	}
	{
		Type_t * L_30 = ___type;
		NullCheck(L_30);
		TypeU5BU5D_t203* L_31 = (TypeU5BU5D_t203*)VirtFuncInvoker0< TypeU5BU5D_t203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_30);
		V_3 = L_31;
		TypeU5BU5D_t203* L_32 = V_3;
		NullCheck(L_32);
		__this->___interfacesImplemented_2 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_32)->max_length)))));
		V_4 = 0;
		goto IL_0100;
	}

IL_00e8:
	{
		StringU5BU5D_t204* L_33 = (__this->___interfacesImplemented_2);
		int32_t L_34 = V_4;
		TypeU5BU5D_t203* L_35 = V_3;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, (*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		ArrayElementTypeCheck (L_33, L_38);
		*((String_t**)(String_t**)SZArrayLdElema(L_33, L_34)) = (String_t*)L_38;
		int32_t L_39 = V_4;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_0100:
	{
		int32_t L_40 = V_4;
		TypeU5BU5D_t203* L_41 = V_3;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_00e8;
		}
	}

IL_010a:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m6523 (TypeInfo_t1146 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___serverType_0);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
