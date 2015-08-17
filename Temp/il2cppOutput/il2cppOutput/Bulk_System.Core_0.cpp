﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "System_Core_U3CModuleU3E.h"
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
#include "System_Core_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern "C" void ExtensionAttribute__ctor_m2430 (ExtensionAttribute_t609 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1219(__this, /*hidden argument*/NULL);
		return;
	}
}
// Locale
#include "System_Core_Locale.h"
#ifndef _MSC_VER
#else
#endif
// Locale
#include "System_Core_LocaleMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m2431 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	{
		String_t* L_0 = ___msg;
		return L_0;
	}
}
// System.String Locale::GetText(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Locale_GetText_m2432 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t207* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t207* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1246(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Mono.Security.Cryptography.KeyBuilder
#include "System_Core_Mono_Security_Cryptography_KeyBuilder.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Cryptography.KeyBuilder
#include "System_Core_Mono_Security_Cryptography_KeyBuilderMethodDeclarations.h"

// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGenerator.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGeneratorMethodDeclarations.h"


// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern TypeInfo* KeyBuilder_t612_il2cpp_TypeInfo_var;
extern "C" RandomNumberGenerator_t611 * KeyBuilder_get_Rng_m2433 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyBuilder_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		RandomNumberGenerator_t611 * L_0 = ((KeyBuilder_t612_StaticFields*)KeyBuilder_t612_il2cpp_TypeInfo_var->static_fields)->___rng_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		RandomNumberGenerator_t611 * L_1 = RandomNumberGenerator_Create_m2476(NULL /*static, unused*/, /*hidden argument*/NULL);
		((KeyBuilder_t612_StaticFields*)KeyBuilder_t612_il2cpp_TypeInfo_var->static_fields)->___rng_0 = L_1;
	}

IL_0014:
	{
		RandomNumberGenerator_t611 * L_2 = ((KeyBuilder_t612_StaticFields*)KeyBuilder_t612_il2cpp_TypeInfo_var->static_fields)->___rng_0;
		return L_2;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t112* KeyBuilder_Key_m2434 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t112* V_0 = {0};
	{
		int32_t L_0 = ___size;
		V_0 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_0));
		RandomNumberGenerator_t611 * L_1 = KeyBuilder_get_Rng_m2433(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t112* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_t112* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t112* KeyBuilder_IV_m2435 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t112* V_0 = {0};
	{
		int32_t L_0 = ___size;
		V_0 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_0));
		RandomNumberGenerator_t611 * L_1 = KeyBuilder_get_Rng_m2433(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t112* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_t112* L_3 = V_0;
		return L_3;
	}
}
// Mono.Security.Cryptography.SymmetricTransform
#include "System_Core_Mono_Security_Cryptography_SymmetricTransform.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Cryptography.SymmetricTransform
#include "System_Core_Mono_Security_Cryptography_SymmetricTransformMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"
// System.Security.Cryptography.CryptographicException
#include "mscorlib_System_Security_Cryptography_CryptographicException.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithmMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Security.Cryptography.CryptographicException
#include "mscorlib_System_Security_Cryptography_CryptographicExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral620;
extern "C" void SymmetricTransform__ctor_m2436 (SymmetricTransform_t614 * __this, SymmetricAlgorithm_t613 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t112* ___rgbIV, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral620 = il2cpp_codegen_string_literal_from_index(620);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m1185(__this, /*hidden argument*/NULL);
		SymmetricAlgorithm_t613 * L_0 = ___symmAlgo;
		__this->___algo_0 = L_0;
		bool L_1 = ___encryption;
		__this->___encrypt_1 = L_1;
		SymmetricAlgorithm_t613 * L_2 = (__this->___algo_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_2);
		__this->___BlockSizeByte_2 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		ByteU5BU5D_t112* L_4 = ___rgbIV;
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_6 = KeyBuilder_IV_m2435(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___rgbIV = L_6;
		goto IL_004c;
	}

IL_003f:
	{
		ByteU5BU5D_t112* L_7 = ___rgbIV;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Object System.Array::Clone() */, L_7);
		___rgbIV = ((ByteU5BU5D_t112*)Castclass(L_8, ByteU5BU5D_t112_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		ByteU5BU5D_t112* L_9 = ___rgbIV;
		NullCheck(L_9);
		int32_t L_10 = (__this->___BlockSizeByte_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) >= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t207* L_11 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t112* L_12 = ___rgbIV;
		NullCheck(L_12);
		int32_t L_13 = (((int32_t)(((Array_t *)L_12)->max_length)));
		Object_t * L_14 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_14;
		ObjectU5BU5D_t207* L_15 = L_11;
		int32_t L_16 = (__this->___BlockSizeByte_2);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_18;
		String_t* L_19 = Locale_GetText_m2432(NULL /*static, unused*/, _stringLiteral620, L_15, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		CryptographicException_t594 * L_21 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_008b:
	{
		int32_t L_22 = (__this->___BlockSizeByte_2);
		__this->___temp_3 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_22));
		ByteU5BU5D_t112* L_23 = ___rgbIV;
		ByteU5BU5D_t112* L_24 = (__this->___temp_3);
		int32_t L_25 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_26 = ___rgbIV;
		NullCheck(L_26);
		int32_t L_27 = Math_Min_m2477(NULL /*static, unused*/, L_25, (((int32_t)(((Array_t *)L_26)->max_length))), /*hidden argument*/NULL);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_23, 0, (Array_t *)(Array_t *)L_24, 0, L_27, /*hidden argument*/NULL);
		int32_t L_28 = (__this->___BlockSizeByte_2);
		__this->___temp2_4 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_28));
		SymmetricAlgorithm_t613 * L_29 = (__this->___algo_0);
		NullCheck(L_29);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, L_29);
		__this->___FeedBackByte_7 = ((int32_t)((int32_t)L_30>>(int32_t)3));
		int32_t L_31 = (__this->___FeedBackByte_7);
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_32 = (__this->___BlockSizeByte_2);
		int32_t L_33 = (__this->___FeedBackByte_7);
		__this->___FeedBackIter_8 = ((int32_t)((int32_t)L_32/(int32_t)L_33));
	}

IL_00fa:
	{
		int32_t L_34 = (__this->___BlockSizeByte_2);
		__this->___workBuff_5 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_34));
		int32_t L_35 = (__this->___BlockSizeByte_2);
		__this->___workout_6 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_35));
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" void SymmetricTransform_System_IDisposable_Dispose_m2437 (SymmetricTransform_t614 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m2478(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" void SymmetricTransform_Finalize_m2438 (SymmetricTransform_t614 * __this, const MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t74 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1184(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t74 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" void SymmetricTransform_Dispose_m2439 (SymmetricTransform_t614 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_disposed_9);
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t112* L_2 = (__this->___temp_3);
		int32_t L_3 = (__this->___BlockSizeByte_2);
		Array_Clear_m2479(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___temp_3 = (ByteU5BU5D_t112*)NULL;
		ByteU5BU5D_t112* L_4 = (__this->___temp2_4);
		int32_t L_5 = (__this->___BlockSizeByte_2);
		Array_Clear_m2479(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
		__this->___temp2_4 = (ByteU5BU5D_t112*)NULL;
	}

IL_0043:
	{
		__this->___m_disposed_9 = 1;
	}

IL_004a:
	{
		return;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" bool SymmetricTransform_get_CanReuseTransform_m2440 (SymmetricTransform_t614 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern TypeInfo* CipherMode_t624_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t588_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral621;
extern "C" void SymmetricTransform_Transform_m2441 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CipherMode_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		NotImplementedException_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		_stringLiteral621 = il2cpp_codegen_string_literal_from_index(621);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		SymmetricAlgorithm_t613 * L_0 = (__this->___algo_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_003a;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_002d;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 4)
		{
			goto IL_0061;
		}
	}
	{
		goto IL_006e;
	}

IL_002d:
	{
		ByteU5BU5D_t112* L_3 = ___input;
		ByteU5BU5D_t112* L_4 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_3, L_4);
		goto IL_0093;
	}

IL_003a:
	{
		ByteU5BU5D_t112* L_5 = ___input;
		ByteU5BU5D_t112* L_6 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(12 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[]) */, __this, L_5, L_6);
		goto IL_0093;
	}

IL_0047:
	{
		ByteU5BU5D_t112* L_7 = ___input;
		ByteU5BU5D_t112* L_8 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(13 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[]) */, __this, L_7, L_8);
		goto IL_0093;
	}

IL_0054:
	{
		ByteU5BU5D_t112* L_9 = ___input;
		ByteU5BU5D_t112* L_10 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(14 /* System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[]) */, __this, L_9, L_10);
		goto IL_0093;
	}

IL_0061:
	{
		ByteU5BU5D_t112* L_11 = ___input;
		ByteU5BU5D_t112* L_12 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(15 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		goto IL_0093;
	}

IL_006e:
	{
		SymmetricAlgorithm_t613 * L_13 = (__this->___algo_0);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_13);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(CipherMode_t624_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral621, L_17, /*hidden argument*/NULL);
		NotImplementedException_t588 * L_19 = (NotImplementedException_t588 *)il2cpp_codegen_object_new (NotImplementedException_t588_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m2300(L_19, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0093:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CBC_m2442 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___encrypt_1);
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		ByteU5BU5D_t112* L_1 = (__this->___temp_3);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		uint8_t* L_3 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2));
		ByteU5BU5D_t112* L_4 = ___input;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		*((int8_t*)(L_3)) = (int8_t)(((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_3))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t112* L_10 = (__this->___temp_3);
		ByteU5BU5D_t112* L_11 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_10, L_11);
		ByteU5BU5D_t112* L_12 = ___output;
		ByteU5BU5D_t112* L_13 = (__this->___temp_3);
		int32_t L_14 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_12, 0, (Array_t *)(Array_t *)L_13, 0, L_14, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_005c:
	{
		ByteU5BU5D_t112* L_15 = ___input;
		ByteU5BU5D_t112* L_16 = (__this->___temp2_4);
		int32_t L_17 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)L_16, 0, L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_18 = ___input;
		ByteU5BU5D_t112* L_19 = ___output;
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_18, L_19);
		V_1 = 0;
		goto IL_0097;
	}

IL_007f:
	{
		ByteU5BU5D_t112* L_20 = ___output;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		uint8_t* L_22 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21));
		ByteU5BU5D_t112* L_23 = (__this->___temp_3);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		*((int8_t*)(L_22)) = (int8_t)(((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_22))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25))))));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t112* L_29 = (__this->___temp2_4);
		ByteU5BU5D_t112* L_30 = (__this->___temp_3);
		int32_t L_31 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, 0, (Array_t *)(Array_t *)L_30, 0, L_31, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CFB_m2443 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->___encrypt_1);
		if (!L_0)
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 0;
		goto IL_0098;
	}

IL_0012:
	{
		ByteU5BU5D_t112* L_1 = (__this->___temp_3);
		ByteU5BU5D_t112* L_2 = (__this->___temp2_4);
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0043;
	}

IL_002b:
	{
		ByteU5BU5D_t112* L_3 = ___output;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		ByteU5BU5D_t112* L_6 = (__this->___temp2_4);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t112* L_9 = ___input;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)));
		int32_t L_12 = ((int32_t)((int32_t)L_10+(int32_t)L_11));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_12))))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = (__this->___FeedBackByte_7);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_t112* L_16 = (__this->___temp_3);
		int32_t L_17 = (__this->___FeedBackByte_7);
		ByteU5BU5D_t112* L_18 = (__this->___temp_3);
		int32_t L_19 = (__this->___BlockSizeByte_2);
		int32_t L_20 = (__this->___FeedBackByte_7);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_16, L_17, (Array_t *)(Array_t *)L_18, 0, ((int32_t)((int32_t)L_19-(int32_t)L_20)), /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_21 = ___output;
		int32_t L_22 = V_0;
		ByteU5BU5D_t112* L_23 = (__this->___temp_3);
		int32_t L_24 = (__this->___BlockSizeByte_2);
		int32_t L_25 = (__this->___FeedBackByte_7);
		int32_t L_26 = (__this->___FeedBackByte_7);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___FeedBackIter_8);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0150;
	}

IL_00a9:
	{
		V_2 = 0;
		goto IL_0144;
	}

IL_00b0:
	{
		__this->___encrypt_1 = 1;
		ByteU5BU5D_t112* L_30 = (__this->___temp_3);
		ByteU5BU5D_t112* L_31 = (__this->___temp2_4);
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_30, L_31);
		__this->___encrypt_1 = 0;
		ByteU5BU5D_t112* L_32 = (__this->___temp_3);
		int32_t L_33 = (__this->___FeedBackByte_7);
		ByteU5BU5D_t112* L_34 = (__this->___temp_3);
		int32_t L_35 = (__this->___BlockSizeByte_2);
		int32_t L_36 = (__this->___FeedBackByte_7);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_32, L_33, (Array_t *)(Array_t *)L_34, 0, ((int32_t)((int32_t)L_35-(int32_t)L_36)), /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_37 = ___input;
		int32_t L_38 = V_2;
		ByteU5BU5D_t112* L_39 = (__this->___temp_3);
		int32_t L_40 = (__this->___BlockSizeByte_2);
		int32_t L_41 = (__this->___FeedBackByte_7);
		int32_t L_42 = (__this->___FeedBackByte_7);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, L_38, (Array_t *)(Array_t *)L_39, ((int32_t)((int32_t)L_40-(int32_t)L_41)), L_42, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0134;
	}

IL_011c:
	{
		ByteU5BU5D_t112* L_43 = ___output;
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		ByteU5BU5D_t112* L_46 = (__this->___temp2_4);
		int32_t L_47 = V_3;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		ByteU5BU5D_t112* L_49 = ___input;
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, ((int32_t)((int32_t)L_50+(int32_t)L_51)));
		int32_t L_52 = ((int32_t)((int32_t)L_50+(int32_t)L_51));
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)((int32_t)L_44+(int32_t)L_45)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, ((int32_t)((int32_t)L_44+(int32_t)L_45)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_46, L_48))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_52))))));
		int32_t L_53 = V_3;
		V_3 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_0134:
	{
		int32_t L_54 = V_3;
		int32_t L_55 = (__this->___FeedBackByte_7);
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_56 = V_2;
		V_2 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_0144:
	{
		int32_t L_57 = V_2;
		int32_t L_58 = (__this->___FeedBackIter_8);
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b0;
		}
	}

IL_0150:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral622;
extern "C" void SymmetricTransform_OFB_m2444 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral622 = il2cpp_codegen_string_literal_from_index(622);
		s_Il2CppMethodIntialized = true;
	}
	{
		CryptographicException_t594 * L_0 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_0, _stringLiteral622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral623;
extern "C" void SymmetricTransform_CTS_m2445 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral623 = il2cpp_codegen_string_literal_from_index(623);
		s_Il2CppMethodIntialized = true;
	}
	{
		CryptographicException_t594 * L_0 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_0, _stringLiteral623, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral624;
extern Il2CppCodeGenString* _stringLiteral625;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral627;
extern Il2CppCodeGenString* _stringLiteral628;
extern "C" void SymmetricTransform_CheckInput_m2446 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		ArgumentException_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral624 = il2cpp_codegen_string_literal_from_index(624);
		_stringLiteral625 = il2cpp_codegen_string_literal_from_index(625);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral627 = il2cpp_codegen_string_literal_from_index(627);
		_stringLiteral628 = il2cpp_codegen_string_literal_from_index(628);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t112* L_0 = ___inputBuffer;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t348 * L_1 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_1, _stringLiteral624, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___inputOffset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t350 * L_3 = (ArgumentOutOfRangeException_t350 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1296(L_3, _stringLiteral625, _stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		int32_t L_4 = ___inputCount;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_t350 * L_5 = (ArgumentOutOfRangeException_t350 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1296(L_5, _stringLiteral627, _stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003f:
	{
		int32_t L_6 = ___inputOffset;
		ByteU5BU5D_t112* L_7 = ___inputBuffer;
		NullCheck(L_7);
		int32_t L_8 = ___inputCount;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral628, /*hidden argument*/NULL);
		ArgumentException_t320 * L_10 = (ArgumentException_t320 *)il2cpp_codegen_object_new (ArgumentException_t320_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2258(L_10, _stringLiteral624, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005f:
	{
		return;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t348_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var;
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral629;
extern Il2CppCodeGenString* _stringLiteral630;
extern Il2CppCodeGenString* _stringLiteral631;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral628;
extern "C" int32_t SymmetricTransform_TransformBlock_m2447 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t112* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		ArgumentNullException_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral629 = il2cpp_codegen_string_literal_from_index(629);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		_stringLiteral631 = il2cpp_codegen_string_literal_from_index(631);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral628 = il2cpp_codegen_string_literal_from_index(628);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_disposed_9);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t625 * L_1 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_1, _stringLiteral629, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t112* L_2 = ___inputBuffer;
		int32_t L_3 = ___inputOffset;
		int32_t L_4 = ___inputCount;
		SymmetricTransform_CheckInput_m2446(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_5 = ___outputBuffer;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t348 * L_6 = (ArgumentNullException_t348 *)il2cpp_codegen_object_new (ArgumentNullException_t348_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1287(L_6, _stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		int32_t L_7 = ___outputOffset;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t350 * L_8 = (ArgumentOutOfRangeException_t350 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t350_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1296(L_8, _stringLiteral631, _stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0049:
	{
		ByteU5BU5D_t112* L_9 = ___outputBuffer;
		NullCheck(L_9);
		int32_t L_10 = ___inputCount;
		int32_t L_11 = ___outputOffset;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10))-(int32_t)L_11));
		bool L_12 = (__this->___encrypt_1);
		if (L_12)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_13)))
		{
			goto IL_009c;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_14 = (__this->___algo_0);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_16 = (__this->___algo_0);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}

IL_0087:
	{
		String_t* L_18 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral628, /*hidden argument*/NULL);
		CryptographicException_t594 * L_19 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2481(L_19, _stringLiteral630, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_009c:
	{
		bool L_20 = SymmetricTransform_get_KeepLastBlock_m2448(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (__this->___BlockSizeByte_2);
		if ((((int32_t)0) <= ((int32_t)((int32_t)((int32_t)L_21+(int32_t)L_22)))))
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_23 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral628, /*hidden argument*/NULL);
		CryptographicException_t594 * L_24 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2481(L_24, _stringLiteral630, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00ca:
	{
		goto IL_010e;
	}

IL_00cf:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_25)))
		{
			goto IL_010e;
		}
	}
	{
		ByteU5BU5D_t112* L_26 = ___inputBuffer;
		NullCheck(L_26);
		int32_t L_27 = ___inputOffset;
		ByteU5BU5D_t112* L_28 = ___outputBuffer;
		NullCheck(L_28);
		int32_t L_29 = (__this->___BlockSizeByte_2);
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)L_27))-(int32_t)(((int32_t)(((Array_t *)L_28)->max_length)))))) == ((uint32_t)L_29))))
		{
			goto IL_00f9;
		}
	}
	{
		ByteU5BU5D_t112* L_30 = ___outputBuffer;
		NullCheck(L_30);
		int32_t L_31 = ___outputOffset;
		___inputCount = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))-(int32_t)L_31));
		goto IL_010e;
	}

IL_00f9:
	{
		String_t* L_32 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral628, /*hidden argument*/NULL);
		CryptographicException_t594 * L_33 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2481(L_33, _stringLiteral630, L_32, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_010e:
	{
		ByteU5BU5D_t112* L_34 = ___inputBuffer;
		int32_t L_35 = ___inputOffset;
		int32_t L_36 = ___inputCount;
		ByteU5BU5D_t112* L_37 = ___outputBuffer;
		int32_t L_38 = ___outputOffset;
		int32_t L_39 = SymmetricTransform_InternalTransformBlock_m2449(__this, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" bool SymmetricTransform_get_KeepLastBlock_m2448 (SymmetricTransform_t614 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (__this->___encrypt_1);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_1 = (__this->___algo_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_3 = (__this->___algo_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_3);
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		return G_B4_0;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral632;
extern "C" int32_t SymmetricTransform_InternalTransformBlock_m2449 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t112* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral632 = il2cpp_codegen_string_literal_from_index(632);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___inputOffset;
		V_0 = L_0;
		int32_t L_1 = ___inputCount;
		int32_t L_2 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___inputCount;
		int32_t L_4 = (__this->___BlockSizeByte_2);
		if (!((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		CryptographicException_t594 * L_5 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_5, _stringLiteral632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		int32_t L_6 = ___inputCount;
		int32_t L_7 = (__this->___BlockSizeByte_2);
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)L_7));
		goto IL_0036;
	}

IL_0034:
	{
		V_1 = 1;
	}

IL_0036:
	{
		bool L_8 = SymmetricTransform_get_KeepLastBlock_m2448(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_0045:
	{
		V_2 = 0;
		bool L_10 = (__this->___lastBlock_10);
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_t112* L_11 = (__this->___workBuff_5);
		ByteU5BU5D_t112* L_12 = (__this->___workout_6);
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		ByteU5BU5D_t112* L_13 = (__this->___workout_6);
		ByteU5BU5D_t112* L_14 = ___outputBuffer;
		int32_t L_15 = ___outputOffset;
		int32_t L_16 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, 0, (Array_t *)(Array_t *)L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___outputOffset;
		int32_t L_18 = (__this->___BlockSizeByte_2);
		___outputOffset = ((int32_t)((int32_t)L_17+(int32_t)L_18));
		int32_t L_19 = V_2;
		int32_t L_20 = (__this->___BlockSizeByte_2);
		V_2 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		__this->___lastBlock_10 = 0;
	}

IL_0095:
	{
		V_3 = 0;
		goto IL_00f9;
	}

IL_009c:
	{
		ByteU5BU5D_t112* L_21 = ___inputBuffer;
		int32_t L_22 = V_0;
		ByteU5BU5D_t112* L_23 = (__this->___workBuff_5);
		int32_t L_24 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, 0, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_25 = (__this->___workBuff_5);
		ByteU5BU5D_t112* L_26 = (__this->___workout_6);
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_25, L_26);
		ByteU5BU5D_t112* L_27 = (__this->___workout_6);
		ByteU5BU5D_t112* L_28 = ___outputBuffer;
		int32_t L_29 = ___outputOffset;
		int32_t L_30 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_27, 0, (Array_t *)(Array_t *)L_28, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		int32_t L_32 = (__this->___BlockSizeByte_2);
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)L_32));
		int32_t L_33 = ___outputOffset;
		int32_t L_34 = (__this->___BlockSizeByte_2);
		___outputOffset = ((int32_t)((int32_t)L_33+(int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = (__this->___BlockSizeByte_2);
		V_2 = ((int32_t)((int32_t)L_35+(int32_t)L_36));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00f9:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_009c;
		}
	}
	{
		bool L_40 = SymmetricTransform_get_KeepLastBlock_m2448(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0126;
		}
	}
	{
		ByteU5BU5D_t112* L_41 = ___inputBuffer;
		int32_t L_42 = V_0;
		ByteU5BU5D_t112* L_43 = (__this->___workBuff_5);
		int32_t L_44 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_41, L_42, (Array_t *)(Array_t *)L_43, 0, L_44, /*hidden argument*/NULL);
		__this->___lastBlock_10 = 1;
	}

IL_0126:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern "C" void SymmetricTransform_Random_m2450 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t112* V_0 = {0};
	{
		RandomNumberGenerator_t611 * L_0 = (__this->____rng_11);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RandomNumberGenerator_t611 * L_1 = RandomNumberGenerator_Create_m2476(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____rng_11 = L_1;
	}

IL_0016:
	{
		int32_t L_2 = ___length;
		V_0 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_2));
		RandomNumberGenerator_t611 * L_3 = (__this->____rng_11);
		ByteU5BU5D_t112* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t112* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_3, L_4);
		ByteU5BU5D_t112* L_5 = V_0;
		ByteU5BU5D_t112* L_6 = ___buffer;
		int32_t L_7 = ___start;
		int32_t L_8 = ___length;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, 0, (Array_t *)(Array_t *)L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern TypeInfo* PaddingMode_t626_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral633;
extern Il2CppCodeGenString* _stringLiteral634;
extern Il2CppCodeGenString* _stringLiteral635;
extern "C" void SymmetricTransform_ThrowBadPaddingException_m2451 (SymmetricTransform_t614 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PaddingMode_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral633 = il2cpp_codegen_string_literal_from_index(633);
		_stringLiteral634 = il2cpp_codegen_string_literal_from_index(634);
		_stringLiteral635 = il2cpp_codegen_string_literal_from_index(635);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral633, /*hidden argument*/NULL);
		int32_t L_1 = ___padding;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(PaddingMode_t626_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2331(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___length;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral634, /*hidden argument*/NULL);
		int32_t L_8 = ___length;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2331(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m1205(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0039:
	{
		int32_t L_13 = ___position;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_0;
		String_t* L_15 = Locale_GetText_m2431(NULL /*static, unused*/, _stringLiteral635, /*hidden argument*/NULL);
		int32_t L_16 = ___position;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2331(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m1205(NULL /*static, unused*/, L_14, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_005c:
	{
		String_t* L_21 = V_0;
		CryptographicException_t594 * L_22 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral636;
extern "C" ByteU5BU5D_t112* SymmetricTransform_FinalEncrypt_m2452 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		_stringLiteral636 = il2cpp_codegen_string_literal_from_index(636);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t112* V_3 = {0};
	ByteU5BU5D_t112* V_4 = {0};
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = {0};
	{
		int32_t L_0 = ___inputCount;
		int32_t L_1 = (__this->___BlockSizeByte_2);
		int32_t L_2 = (__this->___BlockSizeByte_2);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)L_1))*(int32_t)L_2));
		int32_t L_3 = ___inputCount;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)L_4));
		int32_t L_5 = V_0;
		V_2 = L_5;
		SymmetricAlgorithm_t613 * L_6 = (__this->___algo_0);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_6);
		V_8 = L_7;
		int32_t L_8 = V_8;
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 0)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 1)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 2)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004f;
	}

IL_0041:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = (__this->___BlockSizeByte_2);
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		goto IL_00a8;
	}

IL_004f:
	{
		int32_t L_11 = ___inputCount;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		return ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, 0));
	}

IL_005c:
	{
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_00a3;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_13 = (__this->___algo_0);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		CryptographicException_t594 * L_15 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_15, _stringLiteral636, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_007e:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->___BlockSizeByte_2);
		V_3 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_16+(int32_t)L_17))));
		ByteU5BU5D_t112* L_18 = ___inputBuffer;
		int32_t L_19 = ___inputOffset;
		ByteU5BU5D_t112* L_20 = V_3;
		int32_t L_21 = ___inputCount;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, L_19, (Array_t *)(Array_t *)L_20, 0, L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_22 = V_3;
		___inputBuffer = L_22;
		___inputOffset = 0;
		ByteU5BU5D_t112* L_23 = V_3;
		NullCheck(L_23);
		___inputCount = (((int32_t)(((Array_t *)L_23)->max_length)));
		int32_t L_24 = ___inputCount;
		V_2 = L_24;
	}

IL_00a3:
	{
		goto IL_00a8;
	}

IL_00a8:
	{
		int32_t L_25 = V_2;
		V_4 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_25));
		V_5 = 0;
		goto IL_00e9;
	}

IL_00b8:
	{
		ByteU5BU5D_t112* L_26 = ___inputBuffer;
		int32_t L_27 = ___inputOffset;
		int32_t L_28 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_29 = V_4;
		int32_t L_30 = V_5;
		SymmetricTransform_InternalTransformBlock_m2449(__this, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = ___inputOffset;
		int32_t L_32 = (__this->___BlockSizeByte_2);
		___inputOffset = ((int32_t)((int32_t)L_31+(int32_t)L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = (__this->___BlockSizeByte_2);
		V_5 = ((int32_t)((int32_t)L_33+(int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = (__this->___BlockSizeByte_2);
		V_2 = ((int32_t)((int32_t)L_35-(int32_t)L_36));
	}

IL_00e9:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_37) > ((int32_t)L_38)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_39 = (__this->___BlockSizeByte_2);
		int32_t L_40 = V_1;
		V_6 = (((uint8_t)((int32_t)((int32_t)L_39-(int32_t)L_40))));
		SymmetricAlgorithm_t613 * L_41 = (__this->___algo_0);
		NullCheck(L_41);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_41);
		V_8 = L_42;
		int32_t L_43 = V_8;
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 1)
		{
			goto IL_01e2;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 2)
		{
			goto IL_012b;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 3)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_01e2;
	}

IL_012b:
	{
		ByteU5BU5D_t112* L_44 = V_4;
		ByteU5BU5D_t112* L_45 = V_4;
		NullCheck(L_45);
		uint8_t L_46 = V_6;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_45)->max_length)))-(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_45)->max_length)))-(int32_t)1)))) = (uint8_t)L_46;
		ByteU5BU5D_t112* L_47 = ___inputBuffer;
		int32_t L_48 = ___inputOffset;
		ByteU5BU5D_t112* L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_47, L_48, (Array_t *)(Array_t *)L_49, L_50, L_51, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_55 = V_4;
		int32_t L_56 = V_0;
		SymmetricTransform_InternalTransformBlock_m2449(__this, L_52, L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_0159:
	{
		ByteU5BU5D_t112* L_57 = V_4;
		ByteU5BU5D_t112* L_58 = V_4;
		NullCheck(L_58);
		uint8_t L_59 = V_6;
		uint8_t L_60 = V_6;
		SymmetricTransform_Random_m2450(__this, L_57, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_58)->max_length)))-(int32_t)L_59)), ((int32_t)((int32_t)L_60-(int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_61 = V_4;
		ByteU5BU5D_t112* L_62 = V_4;
		NullCheck(L_62);
		uint8_t L_63 = V_6;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_62)->max_length)))-(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_62)->max_length)))-(int32_t)1)))) = (uint8_t)L_63;
		ByteU5BU5D_t112* L_64 = ___inputBuffer;
		int32_t L_65 = ___inputOffset;
		ByteU5BU5D_t112* L_66 = V_4;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_64, L_65, (Array_t *)(Array_t *)L_66, L_67, L_68, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_72 = V_4;
		int32_t L_73 = V_0;
		SymmetricTransform_InternalTransformBlock_m2449(__this, L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_019a:
	{
		ByteU5BU5D_t112* L_74 = V_4;
		NullCheck(L_74);
		V_7 = (((int32_t)(((Array_t *)L_74)->max_length)));
		goto IL_01ac;
	}

IL_01a5:
	{
		ByteU5BU5D_t112* L_75 = V_4;
		int32_t L_76 = V_7;
		uint8_t L_77 = V_6;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, L_76);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_76)) = (uint8_t)L_77;
	}

IL_01ac:
	{
		int32_t L_78 = V_7;
		int32_t L_79 = ((int32_t)((int32_t)L_78-(int32_t)1));
		V_7 = L_79;
		ByteU5BU5D_t112* L_80 = V_4;
		NullCheck(L_80);
		uint8_t L_81 = V_6;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_80)->max_length)))-(int32_t)L_81)))))
		{
			goto IL_01a5;
		}
	}
	{
		ByteU5BU5D_t112* L_82 = ___inputBuffer;
		int32_t L_83 = ___inputOffset;
		ByteU5BU5D_t112* L_84 = V_4;
		int32_t L_85 = V_0;
		int32_t L_86 = V_1;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_82, L_83, (Array_t *)(Array_t *)L_84, L_85, L_86, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_90 = V_4;
		int32_t L_91 = V_0;
		SymmetricTransform_InternalTransformBlock_m2449(__this, L_87, L_88, L_89, L_90, L_91, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01e2:
	{
		ByteU5BU5D_t112* L_92 = ___inputBuffer;
		int32_t L_93 = ___inputOffset;
		int32_t L_94 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_95 = V_4;
		int32_t L_96 = V_5;
		SymmetricTransform_InternalTransformBlock_m2449(__this, L_92, L_93, L_94, L_95, L_96, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01fa:
	{
		ByteU5BU5D_t112* L_97 = V_4;
		return L_97;
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral632;
extern "C" ByteU5BU5D_t112* SymmetricTransform_FinalDecrypt_m2453 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral632 = il2cpp_codegen_string_literal_from_index(632);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t112* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_t112* V_7 = {0};
	int32_t V_8 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = ___inputCount;
		int32_t L_1 = (__this->___BlockSizeByte_2);
		if ((((int32_t)((int32_t)((int32_t)L_0%(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		CryptographicException_t594 * L_2 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_2, _stringLiteral632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___inputCount;
		V_0 = L_3;
		bool L_4 = (__this->___lastBlock_10);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___BlockSizeByte_2);
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)L_6));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_1 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_7));
		V_2 = 0;
		goto IL_0066;
	}

IL_003d:
	{
		ByteU5BU5D_t112* L_8 = ___inputBuffer;
		int32_t L_9 = ___inputOffset;
		int32_t L_10 = (__this->___BlockSizeByte_2);
		ByteU5BU5D_t112* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = SymmetricTransform_InternalTransformBlock_m2449(__this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = ___inputOffset;
		int32_t L_15 = (__this->___BlockSizeByte_2);
		___inputOffset = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
		int32_t L_18 = ___inputCount;
		int32_t L_19 = (__this->___BlockSizeByte_2);
		___inputCount = ((int32_t)((int32_t)L_18-(int32_t)L_19));
	}

IL_0066:
	{
		int32_t L_20 = ___inputCount;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_21 = (__this->___lastBlock_10);
		if (!L_21)
		{
			goto IL_00ae;
		}
	}
	{
		ByteU5BU5D_t112* L_22 = (__this->___workBuff_5);
		ByteU5BU5D_t112* L_23 = (__this->___workout_6);
		VirtActionInvoker2< ByteU5BU5D_t112*, ByteU5BU5D_t112* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_22, L_23);
		ByteU5BU5D_t112* L_24 = (__this->___workout_6);
		ByteU5BU5D_t112* L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = (__this->___BlockSizeByte_2);
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_24, 0, (Array_t *)(Array_t *)L_25, L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		int32_t L_29 = (__this->___BlockSizeByte_2);
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		__this->___lastBlock_10 = 0;
	}

IL_00ae:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t112* L_31 = V_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)));
		int32_t L_33 = ((int32_t)((int32_t)L_32-(int32_t)1));
		G_B12_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_33))));
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B12_0 = 0;
	}

IL_00c0:
	{
		V_4 = G_B12_0;
		SymmetricAlgorithm_t613 * L_34 = (__this->___algo_0);
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_34);
		V_8 = L_35;
		int32_t L_36 = V_8;
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 0)
		{
			goto IL_01fd;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 1)
		{
			goto IL_018f;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 2)
		{
			goto IL_01fd;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 3)
		{
			goto IL_00f1;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 4)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_0202;
	}

IL_00f1:
	{
		uint8_t L_37 = V_4;
		if (!L_37)
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_38 = V_4;
		int32_t L_39 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_0119;
		}
	}

IL_0105:
	{
		SymmetricAlgorithm_t613 * L_40 = (__this->___algo_0);
		NullCheck(L_40);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_40);
		uint8_t L_42 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2451(__this, L_41, L_42, (-1), /*hidden argument*/NULL);
	}

IL_0119:
	{
		uint8_t L_43 = V_4;
		V_5 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_014b;
	}

IL_0124:
	{
		ByteU5BU5D_t112* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)((int32_t)((int32_t)((int32_t)L_45-(int32_t)1))-(int32_t)L_46)));
		int32_t L_47 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45-(int32_t)1))-(int32_t)L_46));
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_44, L_47)))
		{
			goto IL_0145;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_48 = (__this->___algo_0);
		NullCheck(L_48);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_48);
		int32_t L_50 = V_5;
		SymmetricTransform_ThrowBadPaddingException_m2451(__this, L_49, (-1), L_50, /*hidden argument*/NULL);
	}

IL_0145:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)((int32_t)L_51-(int32_t)1));
	}

IL_014b:
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_53 = V_0;
		uint8_t L_54 = V_4;
		V_0 = ((int32_t)((int32_t)L_53-(int32_t)L_54));
		goto IL_0202;
	}

IL_015d:
	{
		uint8_t L_55 = V_4;
		if (!L_55)
		{
			goto IL_0171;
		}
	}
	{
		uint8_t L_56 = V_4;
		int32_t L_57 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_0185;
		}
	}

IL_0171:
	{
		SymmetricAlgorithm_t613 * L_58 = (__this->___algo_0);
		NullCheck(L_58);
		int32_t L_59 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_58);
		uint8_t L_60 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2451(__this, L_59, L_60, (-1), /*hidden argument*/NULL);
	}

IL_0185:
	{
		int32_t L_61 = V_0;
		uint8_t L_62 = V_4;
		V_0 = ((int32_t)((int32_t)L_61-(int32_t)L_62));
		goto IL_0202;
	}

IL_018f:
	{
		uint8_t L_63 = V_4;
		if (!L_63)
		{
			goto IL_01a3;
		}
	}
	{
		uint8_t L_64 = V_4;
		int32_t L_65 = (__this->___BlockSizeByte_2);
		if ((((int32_t)L_64) <= ((int32_t)L_65)))
		{
			goto IL_01b7;
		}
	}

IL_01a3:
	{
		SymmetricAlgorithm_t613 * L_66 = (__this->___algo_0);
		NullCheck(L_66);
		int32_t L_67 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_66);
		uint8_t L_68 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2451(__this, L_67, L_68, (-1), /*hidden argument*/NULL);
	}

IL_01b7:
	{
		uint8_t L_69 = V_4;
		V_6 = ((int32_t)((int32_t)L_69-(int32_t)1));
		goto IL_01eb;
	}

IL_01c2:
	{
		ByteU5BU5D_t112* L_70 = V_1;
		int32_t L_71 = V_0;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)((int32_t)((int32_t)L_71-(int32_t)1))-(int32_t)L_72)));
		int32_t L_73 = ((int32_t)((int32_t)((int32_t)((int32_t)L_71-(int32_t)1))-(int32_t)L_72));
		uint8_t L_74 = V_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_73))) == ((int32_t)L_74)))
		{
			goto IL_01e5;
		}
	}
	{
		SymmetricAlgorithm_t613 * L_75 = (__this->___algo_0);
		NullCheck(L_75);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_75);
		int32_t L_77 = V_6;
		SymmetricTransform_ThrowBadPaddingException_m2451(__this, L_76, (-1), L_77, /*hidden argument*/NULL);
	}

IL_01e5:
	{
		int32_t L_78 = V_6;
		V_6 = ((int32_t)((int32_t)L_78-(int32_t)1));
	}

IL_01eb:
	{
		int32_t L_79 = V_6;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_80 = V_0;
		uint8_t L_81 = V_4;
		V_0 = ((int32_t)((int32_t)L_80-(int32_t)L_81));
		goto IL_0202;
	}

IL_01fd:
	{
		goto IL_0202;
	}

IL_0202:
	{
		int32_t L_82 = V_0;
		if ((((int32_t)L_82) <= ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_83 = V_0;
		V_7 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_83));
		ByteU5BU5D_t112* L_84 = V_1;
		ByteU5BU5D_t112* L_85 = V_7;
		int32_t L_86 = V_0;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_84, 0, (Array_t *)(Array_t *)L_85, 0, L_86, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_87 = V_1;
		ByteU5BU5D_t112* L_88 = V_1;
		NullCheck(L_88);
		Array_Clear_m2479(NULL /*static, unused*/, (Array_t *)(Array_t *)L_87, 0, (((int32_t)(((Array_t *)L_88)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_89 = V_7;
		return L_89;
	}

IL_0229:
	{
		return ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, 0));
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ObjectDisposedException_t625_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral629;
extern "C" ByteU5BU5D_t112* SymmetricTransform_TransformFinalBlock_m2454 (SymmetricTransform_t614 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		_stringLiteral629 = il2cpp_codegen_string_literal_from_index(629);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_disposed_9);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t625 * L_1 = (ObjectDisposedException_t625 *)il2cpp_codegen_object_new (ObjectDisposedException_t625_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m2480(L_1, _stringLiteral629, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t112* L_2 = ___inputBuffer;
		int32_t L_3 = ___inputOffset;
		int32_t L_4 = ___inputCount;
		SymmetricTransform_CheckInput_m2446(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = (__this->___encrypt_1);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_t112* L_6 = ___inputBuffer;
		int32_t L_7 = ___inputOffset;
		int32_t L_8 = ___inputCount;
		ByteU5BU5D_t112* L_9 = SymmetricTransform_FinalEncrypt_m2452(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		ByteU5BU5D_t112* L_10 = ___inputBuffer;
		int32_t L_11 = ___inputOffset;
		int32_t L_12 = ___inputCount;
		ByteU5BU5D_t112* L_13 = SymmetricTransform_FinalDecrypt_m2453(__this, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Security.Cryptography.Aes
#include "System_Core_System_Security_Cryptography_Aes.h"
#ifndef _MSC_VER
#else
#endif
// System.Security.Cryptography.Aes
#include "System_Core_System_Security_Cryptography_AesMethodDeclarations.h"

// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizes.h"
// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizesMethodDeclarations.h"


// System.Void System.Security.Cryptography.Aes::.ctor()
extern TypeInfo* KeySizesU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* KeySizes_t628_il2cpp_TypeInfo_var;
extern "C" void Aes__ctor_m2455 (Aes_t615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeySizesU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		KeySizes_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		SymmetricAlgorithm__ctor_m2482(__this, /*hidden argument*/NULL);
		((SymmetricAlgorithm_t613 *)__this)->___KeySizeValue_2 = ((int32_t)256);
		((SymmetricAlgorithm_t613 *)__this)->___BlockSizeValue_0 = ((int32_t)128);
		((SymmetricAlgorithm_t613 *)__this)->___LegalKeySizesValue_5 = ((KeySizesU5BU5D_t627*)SZArrayNew(KeySizesU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		KeySizesU5BU5D_t627* L_0 = (((SymmetricAlgorithm_t613 *)__this)->___LegalKeySizesValue_5);
		KeySizes_t628 * L_1 = (KeySizes_t628 *)il2cpp_codegen_object_new (KeySizes_t628_il2cpp_TypeInfo_var);
		KeySizes__ctor_m2483(L_1, ((int32_t)128), ((int32_t)256), ((int32_t)64), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((KeySizes_t628 **)(KeySizes_t628 **)SZArrayLdElema(L_0, 0)) = (KeySizes_t628 *)L_1;
		((SymmetricAlgorithm_t613 *)__this)->___LegalBlockSizesValue_4 = ((KeySizesU5BU5D_t627*)SZArrayNew(KeySizesU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		KeySizesU5BU5D_t627* L_2 = (((SymmetricAlgorithm_t613 *)__this)->___LegalBlockSizesValue_4);
		KeySizes_t628 * L_3 = (KeySizes_t628 *)il2cpp_codegen_object_new (KeySizes_t628_il2cpp_TypeInfo_var);
		KeySizes__ctor_m2483(L_3, ((int32_t)128), ((int32_t)128), 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((KeySizes_t628 **)(KeySizes_t628 **)SZArrayLdElema(L_2, 0)) = (KeySizes_t628 *)L_3;
		return;
	}
}
// System.Security.Cryptography.AesManaged
#include "System_Core_System_Security_Cryptography_AesManaged.h"
#ifndef _MSC_VER
#else
#endif
// System.Security.Cryptography.AesManaged
#include "System_Core_System_Security_Cryptography_AesManagedMethodDeclarations.h"

// System.Security.Cryptography.AesTransform
#include "System_Core_System_Security_Cryptography_AesTransform.h"
// System.Security.Cryptography.AesTransform
#include "System_Core_System_Security_Cryptography_AesTransformMethodDeclarations.h"


// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C" void AesManaged__ctor_m2456 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		Aes__ctor_m2455(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C" void AesManaged_GenerateIV_m2457 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (((SymmetricAlgorithm_t613 *)__this)->___BlockSizeValue_0);
		ByteU5BU5D_t112* L_1 = KeyBuilder_IV_m2435(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t613 *)__this)->___IVValue_1 = L_1;
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C" void AesManaged_GenerateKey_m2458 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (((SymmetricAlgorithm_t613 *)__this)->___KeySizeValue_2);
		ByteU5BU5D_t112* L_1 = KeyBuilder_Key_m2434(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t613 *)__this)->___KeyValue_3 = L_1;
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern "C" Object_t * AesManaged_CreateDecryptor_m2459 (AesManaged_t616 * __this, ByteU5BU5D_t112* ___rgbKey, ByteU5BU5D_t112* ___rgbIV, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t112* L_0 = ___rgbKey;
		ByteU5BU5D_t112* L_1 = ___rgbIV;
		AesTransform_t618 * L_2 = (AesTransform_t618 *)il2cpp_codegen_object_new (AesTransform_t618_il2cpp_TypeInfo_var);
		AesTransform__ctor_m2470(L_2, __this, 0, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern "C" Object_t * AesManaged_CreateEncryptor_m2460 (AesManaged_t616 * __this, ByteU5BU5D_t112* ___rgbKey, ByteU5BU5D_t112* ___rgbIV, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t112* L_0 = ___rgbKey;
		ByteU5BU5D_t112* L_1 = ___rgbIV;
		AesTransform_t618 * L_2 = (AesTransform_t618 *)il2cpp_codegen_object_new (AesTransform_t618_il2cpp_TypeInfo_var);
		AesTransform__ctor_m2470(L_2, __this, 1, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" ByteU5BU5D_t112* AesManaged_get_IV_m2461 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = SymmetricAlgorithm_get_IV_m2484(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C" void AesManaged_set_IV_m2462 (AesManaged_t616 * __this, ByteU5BU5D_t112* ___value, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = ___value;
		SymmetricAlgorithm_set_IV_m2485(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" ByteU5BU5D_t112* AesManaged_get_Key_m2463 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = SymmetricAlgorithm_get_Key_m2486(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C" void AesManaged_set_Key_m2464 (AesManaged_t616 * __this, ByteU5BU5D_t112* ___value, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = ___value;
		SymmetricAlgorithm_set_Key_m2487(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C" int32_t AesManaged_get_KeySize_m2465 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = SymmetricAlgorithm_get_KeySize_m2488(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C" void AesManaged_set_KeySize_m2466 (AesManaged_t616 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		SymmetricAlgorithm_set_KeySize_m2489(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C" Object_t * AesManaged_CreateDecryptor_m2467 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = AesManaged_get_Key_m2463(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_1 = AesManaged_get_IV_m2461(__this, /*hidden argument*/NULL);
		Object_t * L_2 = AesManaged_CreateDecryptor_m2459(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C" Object_t * AesManaged_CreateEncryptor_m2468 (AesManaged_t616 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t112* L_0 = AesManaged_get_Key_m2463(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_1 = AesManaged_get_IV_m2461(__this, /*hidden argument*/NULL);
		Object_t * L_2 = AesManaged_CreateEncryptor_m2460(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C" void AesManaged_Dispose_m2469 (AesManaged_t616 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		SymmetricAlgorithm_Dispose_m2490(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$120
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU_0.h"
// <PrivateImplementationDetails>/$ArrayType$1024
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU_1.h"
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern TypeInfo* CryptographicException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32U5BU5D_t617_il2cpp_TypeInfo_var;
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral637;
extern Il2CppCodeGenString* _stringLiteral638;
extern Il2CppCodeGenString* _stringLiteral639;
extern "C" void AesTransform__ctor_m2470 (AesTransform_t618 * __this, Aes_t615 * ___algo, bool ___encryption, ByteU5BU5D_t112* ___key, ByteU5BU5D_t112* ___iv, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		ObjectU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		UInt32U5BU5D_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		_stringLiteral637 = il2cpp_codegen_string_literal_from_index(637);
		_stringLiteral638 = il2cpp_codegen_string_literal_from_index(638);
		_stringLiteral639 = il2cpp_codegen_string_literal_from_index(639);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	UInt32U5BU5D_t617* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		Aes_t615 * L_0 = ___algo;
		bool L_1 = ___encryption;
		ByteU5BU5D_t112* L_2 = ___iv;
		SymmetricTransform__ctor_m2436(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_3 = ___key;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_t594 * L_4 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_4, _stringLiteral637, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001b:
	{
		ByteU5BU5D_t112* L_5 = ___iv;
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t112* L_6 = ___iv;
		NullCheck(L_6);
		Aes_t615 * L_7 = ___algo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)((int32_t)((int32_t)L_8>>(int32_t)3)))))
		{
			goto IL_0067;
		}
	}
	{
		ObjectU5BU5D_t207* L_9 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t112* L_10 = ___iv;
		NullCheck(L_10);
		int32_t L_11 = (((int32_t)(((Array_t *)L_10)->max_length)));
		Object_t * L_12 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_12;
		ObjectU5BU5D_t207* L_13 = L_9;
		Aes_t615 * L_14 = ___algo;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_14);
		int32_t L_16 = ((int32_t)((int32_t)L_15>>(int32_t)3));
		Object_t * L_17 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_17;
		String_t* L_18 = Locale_GetText_m2432(NULL /*static, unused*/, _stringLiteral638, L_13, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		CryptographicException_t594 * L_20 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0067:
	{
		ByteU5BU5D_t112* L_21 = ___key;
		NullCheck(L_21);
		V_1 = (((int32_t)(((Array_t *)L_21)->max_length)));
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)16))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)24))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)32))))
		{
			goto IL_00c2;
		}
	}
	{
		ObjectU5BU5D_t207* L_25 = ((ObjectU5BU5D_t207*)SZArrayNew(ObjectU5BU5D_t207_il2cpp_TypeInfo_var, 4));
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		Object_t * L_28 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 0)) = (Object_t *)L_28;
		ObjectU5BU5D_t207* L_29 = L_25;
		int32_t L_30 = ((int32_t)16);
		Object_t * L_31 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 1);
		ArrayElementTypeCheck (L_29, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, 1)) = (Object_t *)L_31;
		ObjectU5BU5D_t207* L_32 = L_29;
		int32_t L_33 = ((int32_t)24);
		Object_t * L_34 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 2);
		ArrayElementTypeCheck (L_32, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 2)) = (Object_t *)L_34;
		ObjectU5BU5D_t207* L_35 = L_32;
		int32_t L_36 = ((int32_t)32);
		Object_t * L_37 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_37;
		String_t* L_38 = Locale_GetText_m2432(NULL /*static, unused*/, _stringLiteral639, L_35, /*hidden argument*/NULL);
		V_2 = L_38;
		String_t* L_39 = V_2;
		CryptographicException_t594 * L_40 = (CryptographicException_t594 *)il2cpp_codegen_object_new (CryptographicException_t594_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2312(L_40, L_39, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_00c2:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)((int32_t)L_41<<(int32_t)3));
		int32_t L_42 = V_1;
		__this->___Nk_13 = ((int32_t)((int32_t)L_42>>(int32_t)5));
		int32_t L_43 = (__this->___Nk_13);
		if ((!(((uint32_t)L_43) == ((uint32_t)8))))
		{
			goto IL_00e8;
		}
	}
	{
		__this->___Nr_14 = ((int32_t)14);
		goto IL_0109;
	}

IL_00e8:
	{
		int32_t L_44 = (__this->___Nk_13);
		if ((!(((uint32_t)L_44) == ((uint32_t)6))))
		{
			goto IL_0101;
		}
	}
	{
		__this->___Nr_14 = ((int32_t)12);
		goto IL_0109;
	}

IL_0101:
	{
		__this->___Nr_14 = ((int32_t)10);
	}

IL_0109:
	{
		int32_t L_45 = (__this->___Nr_14);
		V_3 = ((int32_t)((int32_t)4*(int32_t)((int32_t)((int32_t)L_45+(int32_t)1))));
		int32_t L_46 = V_3;
		V_4 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, L_46));
		V_5 = 0;
		V_6 = 0;
		goto IL_0171;
	}

IL_0127:
	{
		ByteU5BU5D_t112* L_47 = ___key;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_5 = ((int32_t)((int32_t)L_49+(int32_t)1));
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_49);
		int32_t L_50 = L_49;
		V_7 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_50))<<(int32_t)((int32_t)24)));
		uint32_t L_51 = V_7;
		ByteU5BU5D_t112* L_52 = ___key;
		int32_t L_53 = V_5;
		int32_t L_54 = L_53;
		V_5 = ((int32_t)((int32_t)L_54+(int32_t)1));
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_54);
		int32_t L_55 = L_54;
		V_7 = ((int32_t)((int32_t)L_51|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_55))<<(int32_t)((int32_t)16)))));
		uint32_t L_56 = V_7;
		ByteU5BU5D_t112* L_57 = ___key;
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		V_5 = ((int32_t)((int32_t)L_59+(int32_t)1));
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_59);
		int32_t L_60 = L_59;
		V_7 = ((int32_t)((int32_t)L_56|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_57, L_60))<<(int32_t)8))));
		uint32_t L_61 = V_7;
		ByteU5BU5D_t112* L_62 = ___key;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)((int32_t)L_64+(int32_t)1));
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_64);
		int32_t L_65 = L_64;
		V_7 = ((int32_t)((int32_t)L_61|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_65))));
		UInt32U5BU5D_t617* L_66 = V_4;
		int32_t L_67 = V_6;
		uint32_t L_68 = V_7;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_66, L_67)) = (uint32_t)L_68;
		int32_t L_69 = V_6;
		V_6 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0171:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = (__this->___Nk_13);
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_72 = (__this->___Nk_13);
		V_8 = L_72;
		goto IL_0212;
	}

IL_018b:
	{
		UInt32U5BU5D_t617* L_73 = V_4;
		int32_t L_74 = V_8;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)L_74-(int32_t)1)));
		int32_t L_75 = ((int32_t)((int32_t)L_74-(int32_t)1));
		V_9 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_73, L_75));
		int32_t L_76 = V_8;
		int32_t L_77 = (__this->___Nk_13);
		if (((int32_t)((int32_t)L_76%(int32_t)L_77)))
		{
			goto IL_01d3;
		}
	}
	{
		uint32_t L_78 = V_9;
		uint32_t L_79 = V_9;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78<<(int32_t)8))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_79>>((int32_t)24)))&(int32_t)((int32_t)255)))));
		uint32_t L_80 = V_10;
		uint32_t L_81 = AesTransform_SubByte_m2473(__this, L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_82 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___Rcon_15;
		int32_t L_83 = V_8;
		int32_t L_84 = (__this->___Nk_13);
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)((int32_t)L_83/(int32_t)L_84)));
		int32_t L_85 = ((int32_t)((int32_t)L_83/(int32_t)L_84));
		V_9 = ((int32_t)((int32_t)L_81^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_82, L_85))));
		goto IL_01f8;
	}

IL_01d3:
	{
		int32_t L_86 = (__this->___Nk_13);
		if ((((int32_t)L_86) <= ((int32_t)6)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_87 = V_8;
		int32_t L_88 = (__this->___Nk_13);
		if ((!(((uint32_t)((int32_t)((int32_t)L_87%(int32_t)L_88))) == ((uint32_t)4))))
		{
			goto IL_01f8;
		}
	}
	{
		uint32_t L_89 = V_9;
		uint32_t L_90 = AesTransform_SubByte_m2473(__this, L_89, /*hidden argument*/NULL);
		V_9 = L_90;
	}

IL_01f8:
	{
		UInt32U5BU5D_t617* L_91 = V_4;
		int32_t L_92 = V_8;
		UInt32U5BU5D_t617* L_93 = V_4;
		int32_t L_94 = V_8;
		int32_t L_95 = (__this->___Nk_13);
		NullCheck(L_93);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_93, ((int32_t)((int32_t)L_94-(int32_t)L_95)));
		int32_t L_96 = ((int32_t)((int32_t)L_94-(int32_t)L_95));
		uint32_t L_97 = V_9;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, L_92);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_91, L_92)) = (uint32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_93, L_96))^(int32_t)L_97));
		int32_t L_98 = V_8;
		V_8 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0212:
	{
		int32_t L_99 = V_8;
		int32_t L_100 = V_3;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_018b;
		}
	}
	{
		bool L_101 = ___encryption;
		if (L_101)
		{
			goto IL_02ef;
		}
	}
	{
		V_11 = 0;
		int32_t L_102 = V_3;
		V_12 = ((int32_t)((int32_t)L_102-(int32_t)4));
		goto IL_0273;
	}

IL_022d:
	{
		V_13 = 0;
		goto IL_025f;
	}

IL_0235:
	{
		UInt32U5BU5D_t617* L_103 = V_4;
		int32_t L_104 = V_11;
		int32_t L_105 = V_13;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, ((int32_t)((int32_t)L_104+(int32_t)L_105)));
		int32_t L_106 = ((int32_t)((int32_t)L_104+(int32_t)L_105));
		V_14 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_103, L_106));
		UInt32U5BU5D_t617* L_107 = V_4;
		int32_t L_108 = V_11;
		int32_t L_109 = V_13;
		UInt32U5BU5D_t617* L_110 = V_4;
		int32_t L_111 = V_12;
		int32_t L_112 = V_13;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, ((int32_t)((int32_t)L_111+(int32_t)L_112)));
		int32_t L_113 = ((int32_t)((int32_t)L_111+(int32_t)L_112));
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, ((int32_t)((int32_t)L_108+(int32_t)L_109)));
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_107, ((int32_t)((int32_t)L_108+(int32_t)L_109)))) = (uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_110, L_113));
		UInt32U5BU5D_t617* L_114 = V_4;
		int32_t L_115 = V_12;
		int32_t L_116 = V_13;
		uint32_t L_117 = V_14;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, ((int32_t)((int32_t)L_115+(int32_t)L_116)));
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_114, ((int32_t)((int32_t)L_115+(int32_t)L_116)))) = (uint32_t)L_117;
		int32_t L_118 = V_13;
		V_13 = ((int32_t)((int32_t)L_118+(int32_t)1));
	}

IL_025f:
	{
		int32_t L_119 = V_13;
		if ((((int32_t)L_119) < ((int32_t)4)))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_120 = V_11;
		V_11 = ((int32_t)((int32_t)L_120+(int32_t)4));
		int32_t L_121 = V_12;
		V_12 = ((int32_t)((int32_t)L_121-(int32_t)4));
	}

IL_0273:
	{
		int32_t L_122 = V_11;
		int32_t L_123 = V_12;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_022d;
		}
	}
	{
		V_15 = 4;
		goto IL_02e2;
	}

IL_0284:
	{
		UInt32U5BU5D_t617* L_124 = V_4;
		int32_t L_125 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_126 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		ByteU5BU5D_t112* L_127 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		UInt32U5BU5D_t617* L_128 = V_4;
		int32_t L_129 = V_15;
		NullCheck(L_128);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_128, L_129);
		int32_t L_130 = L_129;
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, (((uintptr_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_128, L_130))>>((int32_t)24))))));
		uintptr_t L_131 = (((uintptr_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_128, L_130))>>((int32_t)24)))));
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_127, L_131)));
		uint8_t L_132 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_127, L_131));
		UInt32U5BU5D_t617* L_133 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		ByteU5BU5D_t112* L_134 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		UInt32U5BU5D_t617* L_135 = V_4;
		int32_t L_136 = V_15;
		NullCheck(L_135);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_135, L_136);
		int32_t L_137 = L_136;
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, (((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_135, L_137))>>((int32_t)16))))));
		uint8_t L_138 = (((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_135, L_137))>>((int32_t)16)))));
		NullCheck(L_133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_133, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_134, L_138)));
		uint8_t L_139 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_134, L_138));
		UInt32U5BU5D_t617* L_140 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		ByteU5BU5D_t112* L_141 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		UInt32U5BU5D_t617* L_142 = V_4;
		int32_t L_143 = V_15;
		NullCheck(L_142);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_142, L_143);
		int32_t L_144 = L_143;
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, (((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_142, L_144))>>8)))));
		uint8_t L_145 = (((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_142, L_144))>>8))));
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_141, L_145)));
		uint8_t L_146 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_141, L_145));
		UInt32U5BU5D_t617* L_147 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		ByteU5BU5D_t112* L_148 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		UInt32U5BU5D_t617* L_149 = V_4;
		int32_t L_150 = V_15;
		NullCheck(L_149);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_149, L_150);
		int32_t L_151 = L_150;
		NullCheck(L_148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_148, (((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_149, L_151)))));
		uint8_t L_152 = (((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_149, L_151))));
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_148, L_152)));
		uint8_t L_153 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_148, L_152));
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, L_125);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_124, L_125)) = (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_126, L_132))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_133, L_139))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_140, L_146))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_147, L_153))));
		int32_t L_154 = V_15;
		V_15 = ((int32_t)((int32_t)L_154+(int32_t)1));
	}

IL_02e2:
	{
		int32_t L_155 = V_15;
		UInt32U5BU5D_t617* L_156 = V_4;
		NullCheck(L_156);
		if ((((int32_t)L_155) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_156)->max_length)))-(int32_t)4)))))
		{
			goto IL_0284;
		}
	}

IL_02ef:
	{
		UInt32U5BU5D_t617* L_157 = V_4;
		__this->___expandedKey_12 = L_157;
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern TypeInfo* UInt32U5BU5D_t617_il2cpp_TypeInfo_var;
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D1_0_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D2_1_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D3_2_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D4_3_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D5_4_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D6_5_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D7_6_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D8_7_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D9_8_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D10_9_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D11_10_FieldInfo_var;
extern "C" void AesTransform__cctor_m2471 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32U5BU5D_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D1_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 0);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D2_1_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 1);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D3_2_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 2);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D4_3_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 3);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D5_4_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 4);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D6_5_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 5);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D7_6_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 6);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D8_7_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 7);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D9_8_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 8);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D10_9_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 9);
		U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D11_10_FieldInfo_var = il2cpp_codegen_field_info_from_index(402, 10);
		s_Il2CppMethodIntialized = true;
	}
	{
		UInt32U5BU5D_t617* L_0 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)30)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D1_0_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___Rcon_15 = L_0;
		ByteU5BU5D_t112* L_1 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D2_1_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16 = L_1;
		ByteU5BU5D_t112* L_2 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D3_2_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17 = L_2;
		UInt32U5BU5D_t617* L_3 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D4_3_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18 = L_3;
		UInt32U5BU5D_t617* L_4 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D5_4_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19 = L_4;
		UInt32U5BU5D_t617* L_5 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D6_5_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20 = L_5;
		UInt32U5BU5D_t617* L_6 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D7_6_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21 = L_6;
		UInt32U5BU5D_t617* L_7 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D8_7_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22 = L_7;
		UInt32U5BU5D_t617* L_8 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D9_8_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23 = L_8;
		UInt32U5BU5D_t617* L_9 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_9, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D10_9_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24 = L_9;
		UInt32U5BU5D_t617* L_10 = ((UInt32U5BU5D_t617*)SZArrayNew(UInt32U5BU5D_t617_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_10, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t622____U24U24fieldU2D11_10_FieldInfo_var), /*hidden argument*/NULL);
		((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25 = L_10;
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" void AesTransform_ECB_m2472 (AesTransform_t618 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method)
{
	{
		bool L_0 = (((SymmetricTransform_t614 *)__this)->___encrypt_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_t112* L_1 = ___input;
		ByteU5BU5D_t112* L_2 = ___output;
		UInt32U5BU5D_t617* L_3 = (__this->___expandedKey_12);
		AesTransform_Encrypt128_m2474(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_001e:
	{
		ByteU5BU5D_t112* L_4 = ___input;
		ByteU5BU5D_t112* L_5 = ___output;
		UInt32U5BU5D_t617* L_6 = (__this->___expandedKey_12);
		AesTransform_Decrypt128_m2475(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern "C" uint32_t AesTransform_SubByte_m2473 (AesTransform_t618 * __this, uint32_t ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___a;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		ByteU5BU5D_t112* L_1 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, (((uintptr_t)L_2)));
		uintptr_t L_3 = (((uintptr_t)L_2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		uint32_t L_4 = ___a;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_4>>8))));
		uint32_t L_5 = V_1;
		ByteU5BU5D_t112* L_6 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, (((uintptr_t)L_7)));
		uintptr_t L_8 = (((uintptr_t)L_7));
		V_1 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))<<(int32_t)8))));
		uint32_t L_9 = ___a;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_9>>((int32_t)16)))));
		uint32_t L_10 = V_1;
		ByteU5BU5D_t112* L_11 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, (((uintptr_t)L_12)));
		uintptr_t L_13 = (((uintptr_t)L_12));
		V_1 = ((int32_t)((int32_t)L_10|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_13))<<(int32_t)((int32_t)16)))));
		uint32_t L_14 = ___a;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		uint32_t L_15 = V_1;
		ByteU5BU5D_t112* L_16 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, (((uintptr_t)L_17)));
		uintptr_t L_18 = (((uintptr_t)L_17));
		return ((int32_t)((int32_t)L_15|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_18))<<(int32_t)((int32_t)24)))));
	}
}
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern "C" void AesTransform_Encrypt128_m2474 (AesTransform_t618 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t112* L_0 = ___indata;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t112* L_2 = ___indata;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t112* L_4 = ___indata;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t112* L_6 = ___indata;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		UInt32U5BU5D_t617* L_8 = ___ekey;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_8, L_9))));
		ByteU5BU5D_t112* L_10 = ___indata;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		int32_t L_11 = 4;
		ByteU5BU5D_t112* L_12 = ___indata;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		int32_t L_13 = 5;
		ByteU5BU5D_t112* L_14 = ___indata;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 6);
		int32_t L_15 = 6;
		ByteU5BU5D_t112* L_16 = ___indata;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 7);
		int32_t L_17 = 7;
		UInt32U5BU5D_t617* L_18 = ___ekey;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 1);
		int32_t L_19 = 1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_18, L_19))));
		ByteU5BU5D_t112* L_20 = ___indata;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 8);
		int32_t L_21 = 8;
		ByteU5BU5D_t112* L_22 = ___indata;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)9));
		int32_t L_23 = ((int32_t)9);
		ByteU5BU5D_t112* L_24 = ___indata;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)10));
		int32_t L_25 = ((int32_t)10);
		ByteU5BU5D_t112* L_26 = ___indata;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)11));
		int32_t L_27 = ((int32_t)11);
		UInt32U5BU5D_t617* L_28 = ___ekey;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 2);
		int32_t L_29 = 2;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_28, L_29))));
		ByteU5BU5D_t112* L_30 = ___indata;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)12));
		int32_t L_31 = ((int32_t)12);
		ByteU5BU5D_t112* L_32 = ___indata;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)13));
		int32_t L_33 = ((int32_t)13);
		ByteU5BU5D_t112* L_34 = ___indata;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)14));
		int32_t L_35 = ((int32_t)14);
		ByteU5BU5D_t112* L_36 = ___indata;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)15));
		int32_t L_37 = ((int32_t)15);
		UInt32U5BU5D_t617* L_38 = ___ekey;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 3);
		int32_t L_39 = 3;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_32, L_33))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_38, L_39))));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_40 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_41 = V_0;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, (((uintptr_t)((int32_t)((uint32_t)L_41>>((int32_t)24))))));
		uintptr_t L_42 = (((uintptr_t)((int32_t)((uint32_t)L_41>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_43 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, (((uint8_t)((int32_t)((uint32_t)L_44>>((int32_t)16))))));
		uint8_t L_45 = (((uint8_t)((int32_t)((uint32_t)L_44>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_46 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, (((uint8_t)((int32_t)((uint32_t)L_47>>8)))));
		uint8_t L_48 = (((uint8_t)((int32_t)((uint32_t)L_47>>8))));
		UInt32U5BU5D_t617* L_49 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_50 = V_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, (((uint8_t)L_50)));
		uint8_t L_51 = (((uint8_t)L_50));
		UInt32U5BU5D_t617* L_52 = ___ekey;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 4);
		int32_t L_53 = 4;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_40, L_42))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_43, L_45))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_46, L_48))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_49, L_51))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_52, L_53))));
		UInt32U5BU5D_t617* L_54 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_55 = V_1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, (((uintptr_t)((int32_t)((uint32_t)L_55>>((int32_t)24))))));
		uintptr_t L_56 = (((uintptr_t)((int32_t)((uint32_t)L_55>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_57 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_58 = V_2;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, (((uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16))))));
		uint8_t L_59 = (((uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_60 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_61 = V_3;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, (((uint8_t)((int32_t)((uint32_t)L_61>>8)))));
		uint8_t L_62 = (((uint8_t)((int32_t)((uint32_t)L_61>>8))));
		UInt32U5BU5D_t617* L_63 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_64 = V_0;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, (((uint8_t)L_64)));
		uint8_t L_65 = (((uint8_t)L_64));
		UInt32U5BU5D_t617* L_66 = ___ekey;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 5);
		int32_t L_67 = 5;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_54, L_56))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_57, L_59))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_60, L_62))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_63, L_65))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_66, L_67))));
		UInt32U5BU5D_t617* L_68 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, (((uintptr_t)((int32_t)((uint32_t)L_69>>((int32_t)24))))));
		uintptr_t L_70 = (((uintptr_t)((int32_t)((uint32_t)L_69>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_71 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_72 = V_3;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, (((uint8_t)((int32_t)((uint32_t)L_72>>((int32_t)16))))));
		uint8_t L_73 = (((uint8_t)((int32_t)((uint32_t)L_72>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_74 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_75 = V_0;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, (((uint8_t)((int32_t)((uint32_t)L_75>>8)))));
		uint8_t L_76 = (((uint8_t)((int32_t)((uint32_t)L_75>>8))));
		UInt32U5BU5D_t617* L_77 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_78 = V_1;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, (((uint8_t)L_78)));
		uint8_t L_79 = (((uint8_t)L_78));
		UInt32U5BU5D_t617* L_80 = ___ekey;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 6);
		int32_t L_81 = 6;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_68, L_70))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_71, L_73))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_74, L_76))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_77, L_79))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_80, L_81))));
		UInt32U5BU5D_t617* L_82 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_83 = V_3;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, (((uintptr_t)((int32_t)((uint32_t)L_83>>((int32_t)24))))));
		uintptr_t L_84 = (((uintptr_t)((int32_t)((uint32_t)L_83>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_85 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_86 = V_0;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, (((uint8_t)((int32_t)((uint32_t)L_86>>((int32_t)16))))));
		uint8_t L_87 = (((uint8_t)((int32_t)((uint32_t)L_86>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_88 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_89 = V_1;
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, (((uint8_t)((int32_t)((uint32_t)L_89>>8)))));
		uint8_t L_90 = (((uint8_t)((int32_t)((uint32_t)L_89>>8))));
		UInt32U5BU5D_t617* L_91 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_92 = V_2;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, (((uint8_t)L_92)));
		uint8_t L_93 = (((uint8_t)L_92));
		UInt32U5BU5D_t617* L_94 = ___ekey;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 7);
		int32_t L_95 = 7;
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_82, L_84))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_85, L_87))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_88, L_90))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_91, L_93))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_94, L_95))));
		UInt32U5BU5D_t617* L_96 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_97 = V_4;
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, (((uintptr_t)((int32_t)((uint32_t)L_97>>((int32_t)24))))));
		uintptr_t L_98 = (((uintptr_t)((int32_t)((uint32_t)L_97>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_99 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_100 = V_5;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, (((uint8_t)((int32_t)((uint32_t)L_100>>((int32_t)16))))));
		uint8_t L_101 = (((uint8_t)((int32_t)((uint32_t)L_100>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_102 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_103 = V_6;
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, (((uint8_t)((int32_t)((uint32_t)L_103>>8)))));
		uint8_t L_104 = (((uint8_t)((int32_t)((uint32_t)L_103>>8))));
		UInt32U5BU5D_t617* L_105 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_106 = V_7;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, (((uint8_t)L_106)));
		uint8_t L_107 = (((uint8_t)L_106));
		UInt32U5BU5D_t617* L_108 = ___ekey;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 8);
		int32_t L_109 = 8;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_96, L_98))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_99, L_101))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_102, L_104))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_105, L_107))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_108, L_109))));
		UInt32U5BU5D_t617* L_110 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_111 = V_5;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, (((uintptr_t)((int32_t)((uint32_t)L_111>>((int32_t)24))))));
		uintptr_t L_112 = (((uintptr_t)((int32_t)((uint32_t)L_111>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_113 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_114 = V_6;
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, (((uint8_t)((int32_t)((uint32_t)L_114>>((int32_t)16))))));
		uint8_t L_115 = (((uint8_t)((int32_t)((uint32_t)L_114>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_116 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_117 = V_7;
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, (((uint8_t)((int32_t)((uint32_t)L_117>>8)))));
		uint8_t L_118 = (((uint8_t)((int32_t)((uint32_t)L_117>>8))));
		UInt32U5BU5D_t617* L_119 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_120 = V_4;
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, (((uint8_t)L_120)));
		uint8_t L_121 = (((uint8_t)L_120));
		UInt32U5BU5D_t617* L_122 = ___ekey;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, ((int32_t)9));
		int32_t L_123 = ((int32_t)9);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_110, L_112))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_113, L_115))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_116, L_118))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_119, L_121))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_122, L_123))));
		UInt32U5BU5D_t617* L_124 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_125 = V_6;
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, (((uintptr_t)((int32_t)((uint32_t)L_125>>((int32_t)24))))));
		uintptr_t L_126 = (((uintptr_t)((int32_t)((uint32_t)L_125>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_127 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_128 = V_7;
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, (((uint8_t)((int32_t)((uint32_t)L_128>>((int32_t)16))))));
		uint8_t L_129 = (((uint8_t)((int32_t)((uint32_t)L_128>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_130 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_131 = V_4;
		NullCheck(L_130);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_130, (((uint8_t)((int32_t)((uint32_t)L_131>>8)))));
		uint8_t L_132 = (((uint8_t)((int32_t)((uint32_t)L_131>>8))));
		UInt32U5BU5D_t617* L_133 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_134 = V_5;
		NullCheck(L_133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_133, (((uint8_t)L_134)));
		uint8_t L_135 = (((uint8_t)L_134));
		UInt32U5BU5D_t617* L_136 = ___ekey;
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, ((int32_t)10));
		int32_t L_137 = ((int32_t)10);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_124, L_126))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_127, L_129))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_130, L_132))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_133, L_135))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_136, L_137))));
		UInt32U5BU5D_t617* L_138 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_139 = V_7;
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, (((uintptr_t)((int32_t)((uint32_t)L_139>>((int32_t)24))))));
		uintptr_t L_140 = (((uintptr_t)((int32_t)((uint32_t)L_139>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_141 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_142 = V_4;
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, (((uint8_t)((int32_t)((uint32_t)L_142>>((int32_t)16))))));
		uint8_t L_143 = (((uint8_t)((int32_t)((uint32_t)L_142>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_144 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_145 = V_5;
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, (((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint8_t L_146 = (((uint8_t)((int32_t)((uint32_t)L_145>>8))));
		UInt32U5BU5D_t617* L_147 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_148 = V_6;
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, (((uint8_t)L_148)));
		uint8_t L_149 = (((uint8_t)L_148));
		UInt32U5BU5D_t617* L_150 = ___ekey;
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, ((int32_t)11));
		int32_t L_151 = ((int32_t)11);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_138, L_140))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_141, L_143))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_144, L_146))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_147, L_149))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_150, L_151))));
		UInt32U5BU5D_t617* L_152 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_153 = V_0;
		NullCheck(L_152);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_152, (((uintptr_t)((int32_t)((uint32_t)L_153>>((int32_t)24))))));
		uintptr_t L_154 = (((uintptr_t)((int32_t)((uint32_t)L_153>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_155 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_156 = V_1;
		NullCheck(L_155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_155, (((uint8_t)((int32_t)((uint32_t)L_156>>((int32_t)16))))));
		uint8_t L_157 = (((uint8_t)((int32_t)((uint32_t)L_156>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_158 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_159 = V_2;
		NullCheck(L_158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_158, (((uint8_t)((int32_t)((uint32_t)L_159>>8)))));
		uint8_t L_160 = (((uint8_t)((int32_t)((uint32_t)L_159>>8))));
		UInt32U5BU5D_t617* L_161 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_162 = V_3;
		NullCheck(L_161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_161, (((uint8_t)L_162)));
		uint8_t L_163 = (((uint8_t)L_162));
		UInt32U5BU5D_t617* L_164 = ___ekey;
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, ((int32_t)12));
		int32_t L_165 = ((int32_t)12);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_152, L_154))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_155, L_157))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_158, L_160))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_161, L_163))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_164, L_165))));
		UInt32U5BU5D_t617* L_166 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_167 = V_1;
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, (((uintptr_t)((int32_t)((uint32_t)L_167>>((int32_t)24))))));
		uintptr_t L_168 = (((uintptr_t)((int32_t)((uint32_t)L_167>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_169 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_170 = V_2;
		NullCheck(L_169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_169, (((uint8_t)((int32_t)((uint32_t)L_170>>((int32_t)16))))));
		uint8_t L_171 = (((uint8_t)((int32_t)((uint32_t)L_170>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_172 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_173 = V_3;
		NullCheck(L_172);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_172, (((uint8_t)((int32_t)((uint32_t)L_173>>8)))));
		uint8_t L_174 = (((uint8_t)((int32_t)((uint32_t)L_173>>8))));
		UInt32U5BU5D_t617* L_175 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_176 = V_0;
		NullCheck(L_175);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_175, (((uint8_t)L_176)));
		uint8_t L_177 = (((uint8_t)L_176));
		UInt32U5BU5D_t617* L_178 = ___ekey;
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, ((int32_t)13));
		int32_t L_179 = ((int32_t)13);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_166, L_168))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_169, L_171))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_172, L_174))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_175, L_177))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_178, L_179))));
		UInt32U5BU5D_t617* L_180 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_181 = V_2;
		NullCheck(L_180);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_180, (((uintptr_t)((int32_t)((uint32_t)L_181>>((int32_t)24))))));
		uintptr_t L_182 = (((uintptr_t)((int32_t)((uint32_t)L_181>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_183 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_184 = V_3;
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, (((uint8_t)((int32_t)((uint32_t)L_184>>((int32_t)16))))));
		uint8_t L_185 = (((uint8_t)((int32_t)((uint32_t)L_184>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_186 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_187 = V_0;
		NullCheck(L_186);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_186, (((uint8_t)((int32_t)((uint32_t)L_187>>8)))));
		uint8_t L_188 = (((uint8_t)((int32_t)((uint32_t)L_187>>8))));
		UInt32U5BU5D_t617* L_189 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_190 = V_1;
		NullCheck(L_189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_189, (((uint8_t)L_190)));
		uint8_t L_191 = (((uint8_t)L_190));
		UInt32U5BU5D_t617* L_192 = ___ekey;
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, ((int32_t)14));
		int32_t L_193 = ((int32_t)14);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_180, L_182))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_183, L_185))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_186, L_188))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_189, L_191))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_192, L_193))));
		UInt32U5BU5D_t617* L_194 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_195 = V_3;
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, (((uintptr_t)((int32_t)((uint32_t)L_195>>((int32_t)24))))));
		uintptr_t L_196 = (((uintptr_t)((int32_t)((uint32_t)L_195>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_197 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_198 = V_0;
		NullCheck(L_197);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_197, (((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint8_t L_199 = (((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_200 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_201 = V_1;
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, (((uint8_t)((int32_t)((uint32_t)L_201>>8)))));
		uint8_t L_202 = (((uint8_t)((int32_t)((uint32_t)L_201>>8))));
		UInt32U5BU5D_t617* L_203 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_204 = V_2;
		NullCheck(L_203);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_203, (((uint8_t)L_204)));
		uint8_t L_205 = (((uint8_t)L_204));
		UInt32U5BU5D_t617* L_206 = ___ekey;
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, ((int32_t)15));
		int32_t L_207 = ((int32_t)15);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_194, L_196))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_197, L_199))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_200, L_202))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_203, L_205))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_206, L_207))));
		UInt32U5BU5D_t617* L_208 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_209 = V_4;
		NullCheck(L_208);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_208, (((uintptr_t)((int32_t)((uint32_t)L_209>>((int32_t)24))))));
		uintptr_t L_210 = (((uintptr_t)((int32_t)((uint32_t)L_209>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_211 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_212 = V_5;
		NullCheck(L_211);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_211, (((uint8_t)((int32_t)((uint32_t)L_212>>((int32_t)16))))));
		uint8_t L_213 = (((uint8_t)((int32_t)((uint32_t)L_212>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_214 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_215 = V_6;
		NullCheck(L_214);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_214, (((uint8_t)((int32_t)((uint32_t)L_215>>8)))));
		uint8_t L_216 = (((uint8_t)((int32_t)((uint32_t)L_215>>8))));
		UInt32U5BU5D_t617* L_217 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_218 = V_7;
		NullCheck(L_217);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_217, (((uint8_t)L_218)));
		uint8_t L_219 = (((uint8_t)L_218));
		UInt32U5BU5D_t617* L_220 = ___ekey;
		NullCheck(L_220);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_220, ((int32_t)16));
		int32_t L_221 = ((int32_t)16);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_208, L_210))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_211, L_213))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_214, L_216))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_217, L_219))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_220, L_221))));
		UInt32U5BU5D_t617* L_222 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_223 = V_5;
		NullCheck(L_222);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_222, (((uintptr_t)((int32_t)((uint32_t)L_223>>((int32_t)24))))));
		uintptr_t L_224 = (((uintptr_t)((int32_t)((uint32_t)L_223>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_225 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_226 = V_6;
		NullCheck(L_225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_225, (((uint8_t)((int32_t)((uint32_t)L_226>>((int32_t)16))))));
		uint8_t L_227 = (((uint8_t)((int32_t)((uint32_t)L_226>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_228 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_229 = V_7;
		NullCheck(L_228);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_228, (((uint8_t)((int32_t)((uint32_t)L_229>>8)))));
		uint8_t L_230 = (((uint8_t)((int32_t)((uint32_t)L_229>>8))));
		UInt32U5BU5D_t617* L_231 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_232 = V_4;
		NullCheck(L_231);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_231, (((uint8_t)L_232)));
		uint8_t L_233 = (((uint8_t)L_232));
		UInt32U5BU5D_t617* L_234 = ___ekey;
		NullCheck(L_234);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_234, ((int32_t)17));
		int32_t L_235 = ((int32_t)17);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_222, L_224))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_225, L_227))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_228, L_230))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_231, L_233))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_234, L_235))));
		UInt32U5BU5D_t617* L_236 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_237 = V_6;
		NullCheck(L_236);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_236, (((uintptr_t)((int32_t)((uint32_t)L_237>>((int32_t)24))))));
		uintptr_t L_238 = (((uintptr_t)((int32_t)((uint32_t)L_237>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_239 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_240 = V_7;
		NullCheck(L_239);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_239, (((uint8_t)((int32_t)((uint32_t)L_240>>((int32_t)16))))));
		uint8_t L_241 = (((uint8_t)((int32_t)((uint32_t)L_240>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_242 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_243 = V_4;
		NullCheck(L_242);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_242, (((uint8_t)((int32_t)((uint32_t)L_243>>8)))));
		uint8_t L_244 = (((uint8_t)((int32_t)((uint32_t)L_243>>8))));
		UInt32U5BU5D_t617* L_245 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_246 = V_5;
		NullCheck(L_245);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_245, (((uint8_t)L_246)));
		uint8_t L_247 = (((uint8_t)L_246));
		UInt32U5BU5D_t617* L_248 = ___ekey;
		NullCheck(L_248);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_248, ((int32_t)18));
		int32_t L_249 = ((int32_t)18);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_236, L_238))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_239, L_241))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_242, L_244))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_245, L_247))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_248, L_249))));
		UInt32U5BU5D_t617* L_250 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_251 = V_7;
		NullCheck(L_250);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_250, (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24))))));
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_253 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_254 = V_4;
		NullCheck(L_253);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_253, (((uint8_t)((int32_t)((uint32_t)L_254>>((int32_t)16))))));
		uint8_t L_255 = (((uint8_t)((int32_t)((uint32_t)L_254>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_256 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_257 = V_5;
		NullCheck(L_256);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_256, (((uint8_t)((int32_t)((uint32_t)L_257>>8)))));
		uint8_t L_258 = (((uint8_t)((int32_t)((uint32_t)L_257>>8))));
		UInt32U5BU5D_t617* L_259 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_260 = V_6;
		NullCheck(L_259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_259, (((uint8_t)L_260)));
		uint8_t L_261 = (((uint8_t)L_260));
		UInt32U5BU5D_t617* L_262 = ___ekey;
		NullCheck(L_262);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_262, ((int32_t)19));
		int32_t L_263 = ((int32_t)19);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_250, L_252))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_253, L_255))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_256, L_258))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_259, L_261))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_262, L_263))));
		UInt32U5BU5D_t617* L_264 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_265 = V_0;
		NullCheck(L_264);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_264, (((uintptr_t)((int32_t)((uint32_t)L_265>>((int32_t)24))))));
		uintptr_t L_266 = (((uintptr_t)((int32_t)((uint32_t)L_265>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_267 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_268 = V_1;
		NullCheck(L_267);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_267, (((uint8_t)((int32_t)((uint32_t)L_268>>((int32_t)16))))));
		uint8_t L_269 = (((uint8_t)((int32_t)((uint32_t)L_268>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_270 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_271 = V_2;
		NullCheck(L_270);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_270, (((uint8_t)((int32_t)((uint32_t)L_271>>8)))));
		uint8_t L_272 = (((uint8_t)((int32_t)((uint32_t)L_271>>8))));
		UInt32U5BU5D_t617* L_273 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_274 = V_3;
		NullCheck(L_273);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_273, (((uint8_t)L_274)));
		uint8_t L_275 = (((uint8_t)L_274));
		UInt32U5BU5D_t617* L_276 = ___ekey;
		NullCheck(L_276);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_276, ((int32_t)20));
		int32_t L_277 = ((int32_t)20);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_264, L_266))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_267, L_269))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_270, L_272))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_273, L_275))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_276, L_277))));
		UInt32U5BU5D_t617* L_278 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_279 = V_1;
		NullCheck(L_278);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_278, (((uintptr_t)((int32_t)((uint32_t)L_279>>((int32_t)24))))));
		uintptr_t L_280 = (((uintptr_t)((int32_t)((uint32_t)L_279>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_281 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_282 = V_2;
		NullCheck(L_281);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_281, (((uint8_t)((int32_t)((uint32_t)L_282>>((int32_t)16))))));
		uint8_t L_283 = (((uint8_t)((int32_t)((uint32_t)L_282>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_284 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_285 = V_3;
		NullCheck(L_284);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_284, (((uint8_t)((int32_t)((uint32_t)L_285>>8)))));
		uint8_t L_286 = (((uint8_t)((int32_t)((uint32_t)L_285>>8))));
		UInt32U5BU5D_t617* L_287 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_288 = V_0;
		NullCheck(L_287);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_287, (((uint8_t)L_288)));
		uint8_t L_289 = (((uint8_t)L_288));
		UInt32U5BU5D_t617* L_290 = ___ekey;
		NullCheck(L_290);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_290, ((int32_t)21));
		int32_t L_291 = ((int32_t)21);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_278, L_280))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_281, L_283))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_284, L_286))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_287, L_289))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_290, L_291))));
		UInt32U5BU5D_t617* L_292 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_293 = V_2;
		NullCheck(L_292);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_292, (((uintptr_t)((int32_t)((uint32_t)L_293>>((int32_t)24))))));
		uintptr_t L_294 = (((uintptr_t)((int32_t)((uint32_t)L_293>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_295 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_296 = V_3;
		NullCheck(L_295);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_295, (((uint8_t)((int32_t)((uint32_t)L_296>>((int32_t)16))))));
		uint8_t L_297 = (((uint8_t)((int32_t)((uint32_t)L_296>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_298 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_299 = V_0;
		NullCheck(L_298);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_298, (((uint8_t)((int32_t)((uint32_t)L_299>>8)))));
		uint8_t L_300 = (((uint8_t)((int32_t)((uint32_t)L_299>>8))));
		UInt32U5BU5D_t617* L_301 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_302 = V_1;
		NullCheck(L_301);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_301, (((uint8_t)L_302)));
		uint8_t L_303 = (((uint8_t)L_302));
		UInt32U5BU5D_t617* L_304 = ___ekey;
		NullCheck(L_304);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_304, ((int32_t)22));
		int32_t L_305 = ((int32_t)22);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_292, L_294))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_295, L_297))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_298, L_300))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_301, L_303))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_304, L_305))));
		UInt32U5BU5D_t617* L_306 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_307 = V_3;
		NullCheck(L_306);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_306, (((uintptr_t)((int32_t)((uint32_t)L_307>>((int32_t)24))))));
		uintptr_t L_308 = (((uintptr_t)((int32_t)((uint32_t)L_307>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_309 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_310 = V_0;
		NullCheck(L_309);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_309, (((uint8_t)((int32_t)((uint32_t)L_310>>((int32_t)16))))));
		uint8_t L_311 = (((uint8_t)((int32_t)((uint32_t)L_310>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_312 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_313 = V_1;
		NullCheck(L_312);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_312, (((uint8_t)((int32_t)((uint32_t)L_313>>8)))));
		uint8_t L_314 = (((uint8_t)((int32_t)((uint32_t)L_313>>8))));
		UInt32U5BU5D_t617* L_315 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_316 = V_2;
		NullCheck(L_315);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_315, (((uint8_t)L_316)));
		uint8_t L_317 = (((uint8_t)L_316));
		UInt32U5BU5D_t617* L_318 = ___ekey;
		NullCheck(L_318);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_318, ((int32_t)23));
		int32_t L_319 = ((int32_t)23);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_306, L_308))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_309, L_311))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_312, L_314))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_315, L_317))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_318, L_319))));
		UInt32U5BU5D_t617* L_320 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_321 = V_4;
		NullCheck(L_320);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_320, (((uintptr_t)((int32_t)((uint32_t)L_321>>((int32_t)24))))));
		uintptr_t L_322 = (((uintptr_t)((int32_t)((uint32_t)L_321>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_323 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_324 = V_5;
		NullCheck(L_323);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_323, (((uint8_t)((int32_t)((uint32_t)L_324>>((int32_t)16))))));
		uint8_t L_325 = (((uint8_t)((int32_t)((uint32_t)L_324>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_326 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_326, (((uint8_t)((int32_t)((uint32_t)L_327>>8)))));
		uint8_t L_328 = (((uint8_t)((int32_t)((uint32_t)L_327>>8))));
		UInt32U5BU5D_t617* L_329 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_330 = V_7;
		NullCheck(L_329);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_329, (((uint8_t)L_330)));
		uint8_t L_331 = (((uint8_t)L_330));
		UInt32U5BU5D_t617* L_332 = ___ekey;
		NullCheck(L_332);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_332, ((int32_t)24));
		int32_t L_333 = ((int32_t)24);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_320, L_322))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_323, L_325))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_326, L_328))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_329, L_331))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_332, L_333))));
		UInt32U5BU5D_t617* L_334 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_335 = V_5;
		NullCheck(L_334);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_334, (((uintptr_t)((int32_t)((uint32_t)L_335>>((int32_t)24))))));
		uintptr_t L_336 = (((uintptr_t)((int32_t)((uint32_t)L_335>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_337 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_338 = V_6;
		NullCheck(L_337);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_337, (((uint8_t)((int32_t)((uint32_t)L_338>>((int32_t)16))))));
		uint8_t L_339 = (((uint8_t)((int32_t)((uint32_t)L_338>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_340 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_341 = V_7;
		NullCheck(L_340);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_340, (((uint8_t)((int32_t)((uint32_t)L_341>>8)))));
		uint8_t L_342 = (((uint8_t)((int32_t)((uint32_t)L_341>>8))));
		UInt32U5BU5D_t617* L_343 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_344 = V_4;
		NullCheck(L_343);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_343, (((uint8_t)L_344)));
		uint8_t L_345 = (((uint8_t)L_344));
		UInt32U5BU5D_t617* L_346 = ___ekey;
		NullCheck(L_346);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_346, ((int32_t)25));
		int32_t L_347 = ((int32_t)25);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_334, L_336))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_337, L_339))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_340, L_342))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_343, L_345))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_346, L_347))));
		UInt32U5BU5D_t617* L_348 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_349 = V_6;
		NullCheck(L_348);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_348, (((uintptr_t)((int32_t)((uint32_t)L_349>>((int32_t)24))))));
		uintptr_t L_350 = (((uintptr_t)((int32_t)((uint32_t)L_349>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_351 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_352 = V_7;
		NullCheck(L_351);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_351, (((uint8_t)((int32_t)((uint32_t)L_352>>((int32_t)16))))));
		uint8_t L_353 = (((uint8_t)((int32_t)((uint32_t)L_352>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_354 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_355 = V_4;
		NullCheck(L_354);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_354, (((uint8_t)((int32_t)((uint32_t)L_355>>8)))));
		uint8_t L_356 = (((uint8_t)((int32_t)((uint32_t)L_355>>8))));
		UInt32U5BU5D_t617* L_357 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_358 = V_5;
		NullCheck(L_357);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_357, (((uint8_t)L_358)));
		uint8_t L_359 = (((uint8_t)L_358));
		UInt32U5BU5D_t617* L_360 = ___ekey;
		NullCheck(L_360);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_360, ((int32_t)26));
		int32_t L_361 = ((int32_t)26);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_348, L_350))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_351, L_353))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_354, L_356))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_357, L_359))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_360, L_361))));
		UInt32U5BU5D_t617* L_362 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_363 = V_7;
		NullCheck(L_362);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_362, (((uintptr_t)((int32_t)((uint32_t)L_363>>((int32_t)24))))));
		uintptr_t L_364 = (((uintptr_t)((int32_t)((uint32_t)L_363>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_365 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_366 = V_4;
		NullCheck(L_365);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_365, (((uint8_t)((int32_t)((uint32_t)L_366>>((int32_t)16))))));
		uint8_t L_367 = (((uint8_t)((int32_t)((uint32_t)L_366>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_368 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_369 = V_5;
		NullCheck(L_368);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_368, (((uint8_t)((int32_t)((uint32_t)L_369>>8)))));
		uint8_t L_370 = (((uint8_t)((int32_t)((uint32_t)L_369>>8))));
		UInt32U5BU5D_t617* L_371 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_372 = V_6;
		NullCheck(L_371);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_371, (((uint8_t)L_372)));
		uint8_t L_373 = (((uint8_t)L_372));
		UInt32U5BU5D_t617* L_374 = ___ekey;
		NullCheck(L_374);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_374, ((int32_t)27));
		int32_t L_375 = ((int32_t)27);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_362, L_364))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_365, L_367))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_368, L_370))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_371, L_373))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_374, L_375))));
		UInt32U5BU5D_t617* L_376 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_377 = V_0;
		NullCheck(L_376);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_376, (((uintptr_t)((int32_t)((uint32_t)L_377>>((int32_t)24))))));
		uintptr_t L_378 = (((uintptr_t)((int32_t)((uint32_t)L_377>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_379 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_380 = V_1;
		NullCheck(L_379);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_379, (((uint8_t)((int32_t)((uint32_t)L_380>>((int32_t)16))))));
		uint8_t L_381 = (((uint8_t)((int32_t)((uint32_t)L_380>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_382 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_383 = V_2;
		NullCheck(L_382);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_382, (((uint8_t)((int32_t)((uint32_t)L_383>>8)))));
		uint8_t L_384 = (((uint8_t)((int32_t)((uint32_t)L_383>>8))));
		UInt32U5BU5D_t617* L_385 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_386 = V_3;
		NullCheck(L_385);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_385, (((uint8_t)L_386)));
		uint8_t L_387 = (((uint8_t)L_386));
		UInt32U5BU5D_t617* L_388 = ___ekey;
		NullCheck(L_388);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_388, ((int32_t)28));
		int32_t L_389 = ((int32_t)28);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_376, L_378))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_379, L_381))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_382, L_384))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_385, L_387))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_388, L_389))));
		UInt32U5BU5D_t617* L_390 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_391 = V_1;
		NullCheck(L_390);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_390, (((uintptr_t)((int32_t)((uint32_t)L_391>>((int32_t)24))))));
		uintptr_t L_392 = (((uintptr_t)((int32_t)((uint32_t)L_391>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_393 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_394 = V_2;
		NullCheck(L_393);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_393, (((uint8_t)((int32_t)((uint32_t)L_394>>((int32_t)16))))));
		uint8_t L_395 = (((uint8_t)((int32_t)((uint32_t)L_394>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_396 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_397 = V_3;
		NullCheck(L_396);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_396, (((uint8_t)((int32_t)((uint32_t)L_397>>8)))));
		uint8_t L_398 = (((uint8_t)((int32_t)((uint32_t)L_397>>8))));
		UInt32U5BU5D_t617* L_399 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_400 = V_0;
		NullCheck(L_399);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_399, (((uint8_t)L_400)));
		uint8_t L_401 = (((uint8_t)L_400));
		UInt32U5BU5D_t617* L_402 = ___ekey;
		NullCheck(L_402);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_402, ((int32_t)29));
		int32_t L_403 = ((int32_t)29);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_390, L_392))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_393, L_395))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_396, L_398))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_399, L_401))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_402, L_403))));
		UInt32U5BU5D_t617* L_404 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_405 = V_2;
		NullCheck(L_404);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_404, (((uintptr_t)((int32_t)((uint32_t)L_405>>((int32_t)24))))));
		uintptr_t L_406 = (((uintptr_t)((int32_t)((uint32_t)L_405>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_407 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_408 = V_3;
		NullCheck(L_407);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_407, (((uint8_t)((int32_t)((uint32_t)L_408>>((int32_t)16))))));
		uint8_t L_409 = (((uint8_t)((int32_t)((uint32_t)L_408>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_410 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_410, (((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint8_t L_412 = (((uint8_t)((int32_t)((uint32_t)L_411>>8))));
		UInt32U5BU5D_t617* L_413 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_414 = V_1;
		NullCheck(L_413);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_413, (((uint8_t)L_414)));
		uint8_t L_415 = (((uint8_t)L_414));
		UInt32U5BU5D_t617* L_416 = ___ekey;
		NullCheck(L_416);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_416, ((int32_t)30));
		int32_t L_417 = ((int32_t)30);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_404, L_406))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_407, L_409))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_410, L_412))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_413, L_415))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_416, L_417))));
		UInt32U5BU5D_t617* L_418 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_419 = V_3;
		NullCheck(L_418);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_418, (((uintptr_t)((int32_t)((uint32_t)L_419>>((int32_t)24))))));
		uintptr_t L_420 = (((uintptr_t)((int32_t)((uint32_t)L_419>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_421 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_422 = V_0;
		NullCheck(L_421);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_421, (((uint8_t)((int32_t)((uint32_t)L_422>>((int32_t)16))))));
		uint8_t L_423 = (((uint8_t)((int32_t)((uint32_t)L_422>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_424 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_425 = V_1;
		NullCheck(L_424);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_424, (((uint8_t)((int32_t)((uint32_t)L_425>>8)))));
		uint8_t L_426 = (((uint8_t)((int32_t)((uint32_t)L_425>>8))));
		UInt32U5BU5D_t617* L_427 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_428 = V_2;
		NullCheck(L_427);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_427, (((uint8_t)L_428)));
		uint8_t L_429 = (((uint8_t)L_428));
		UInt32U5BU5D_t617* L_430 = ___ekey;
		NullCheck(L_430);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_430, ((int32_t)31));
		int32_t L_431 = ((int32_t)31);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_418, L_420))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_421, L_423))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_424, L_426))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_427, L_429))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_430, L_431))));
		UInt32U5BU5D_t617* L_432 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_433 = V_4;
		NullCheck(L_432);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_432, (((uintptr_t)((int32_t)((uint32_t)L_433>>((int32_t)24))))));
		uintptr_t L_434 = (((uintptr_t)((int32_t)((uint32_t)L_433>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_435 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_436 = V_5;
		NullCheck(L_435);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_435, (((uint8_t)((int32_t)((uint32_t)L_436>>((int32_t)16))))));
		uint8_t L_437 = (((uint8_t)((int32_t)((uint32_t)L_436>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_438 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_439 = V_6;
		NullCheck(L_438);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_438, (((uint8_t)((int32_t)((uint32_t)L_439>>8)))));
		uint8_t L_440 = (((uint8_t)((int32_t)((uint32_t)L_439>>8))));
		UInt32U5BU5D_t617* L_441 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_442 = V_7;
		NullCheck(L_441);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_441, (((uint8_t)L_442)));
		uint8_t L_443 = (((uint8_t)L_442));
		UInt32U5BU5D_t617* L_444 = ___ekey;
		NullCheck(L_444);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_444, ((int32_t)32));
		int32_t L_445 = ((int32_t)32);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_432, L_434))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_435, L_437))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_438, L_440))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_441, L_443))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_444, L_445))));
		UInt32U5BU5D_t617* L_446 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_447 = V_5;
		NullCheck(L_446);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_446, (((uintptr_t)((int32_t)((uint32_t)L_447>>((int32_t)24))))));
		uintptr_t L_448 = (((uintptr_t)((int32_t)((uint32_t)L_447>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_449 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_450 = V_6;
		NullCheck(L_449);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_449, (((uint8_t)((int32_t)((uint32_t)L_450>>((int32_t)16))))));
		uint8_t L_451 = (((uint8_t)((int32_t)((uint32_t)L_450>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_452 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_453 = V_7;
		NullCheck(L_452);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_452, (((uint8_t)((int32_t)((uint32_t)L_453>>8)))));
		uint8_t L_454 = (((uint8_t)((int32_t)((uint32_t)L_453>>8))));
		UInt32U5BU5D_t617* L_455 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_456 = V_4;
		NullCheck(L_455);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_455, (((uint8_t)L_456)));
		uint8_t L_457 = (((uint8_t)L_456));
		UInt32U5BU5D_t617* L_458 = ___ekey;
		NullCheck(L_458);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_458, ((int32_t)33));
		int32_t L_459 = ((int32_t)33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_446, L_448))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_449, L_451))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_452, L_454))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_455, L_457))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_458, L_459))));
		UInt32U5BU5D_t617* L_460 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_461 = V_6;
		NullCheck(L_460);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_460, (((uintptr_t)((int32_t)((uint32_t)L_461>>((int32_t)24))))));
		uintptr_t L_462 = (((uintptr_t)((int32_t)((uint32_t)L_461>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_463 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_464 = V_7;
		NullCheck(L_463);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_463, (((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint8_t L_465 = (((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_466 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_467 = V_4;
		NullCheck(L_466);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_466, (((uint8_t)((int32_t)((uint32_t)L_467>>8)))));
		uint8_t L_468 = (((uint8_t)((int32_t)((uint32_t)L_467>>8))));
		UInt32U5BU5D_t617* L_469 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_470 = V_5;
		NullCheck(L_469);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_469, (((uint8_t)L_470)));
		uint8_t L_471 = (((uint8_t)L_470));
		UInt32U5BU5D_t617* L_472 = ___ekey;
		NullCheck(L_472);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_472, ((int32_t)34));
		int32_t L_473 = ((int32_t)34);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_460, L_462))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_463, L_465))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_466, L_468))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_469, L_471))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_472, L_473))));
		UInt32U5BU5D_t617* L_474 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_475 = V_7;
		NullCheck(L_474);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_474, (((uintptr_t)((int32_t)((uint32_t)L_475>>((int32_t)24))))));
		uintptr_t L_476 = (((uintptr_t)((int32_t)((uint32_t)L_475>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_477 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_478 = V_4;
		NullCheck(L_477);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_477, (((uint8_t)((int32_t)((uint32_t)L_478>>((int32_t)16))))));
		uint8_t L_479 = (((uint8_t)((int32_t)((uint32_t)L_478>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_480 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_481 = V_5;
		NullCheck(L_480);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_480, (((uint8_t)((int32_t)((uint32_t)L_481>>8)))));
		uint8_t L_482 = (((uint8_t)((int32_t)((uint32_t)L_481>>8))));
		UInt32U5BU5D_t617* L_483 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_484 = V_6;
		NullCheck(L_483);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_483, (((uint8_t)L_484)));
		uint8_t L_485 = (((uint8_t)L_484));
		UInt32U5BU5D_t617* L_486 = ___ekey;
		NullCheck(L_486);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_486, ((int32_t)35));
		int32_t L_487 = ((int32_t)35);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_474, L_476))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_477, L_479))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_480, L_482))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_483, L_485))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_486, L_487))));
		UInt32U5BU5D_t617* L_488 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_489 = V_0;
		NullCheck(L_488);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_488, (((uintptr_t)((int32_t)((uint32_t)L_489>>((int32_t)24))))));
		uintptr_t L_490 = (((uintptr_t)((int32_t)((uint32_t)L_489>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_491 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_492 = V_1;
		NullCheck(L_491);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_491, (((uint8_t)((int32_t)((uint32_t)L_492>>((int32_t)16))))));
		uint8_t L_493 = (((uint8_t)((int32_t)((uint32_t)L_492>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_494 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_495 = V_2;
		NullCheck(L_494);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_494, (((uint8_t)((int32_t)((uint32_t)L_495>>8)))));
		uint8_t L_496 = (((uint8_t)((int32_t)((uint32_t)L_495>>8))));
		UInt32U5BU5D_t617* L_497 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_498 = V_3;
		NullCheck(L_497);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_497, (((uint8_t)L_498)));
		uint8_t L_499 = (((uint8_t)L_498));
		UInt32U5BU5D_t617* L_500 = ___ekey;
		NullCheck(L_500);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_500, ((int32_t)36));
		int32_t L_501 = ((int32_t)36);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_488, L_490))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_491, L_493))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_494, L_496))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_497, L_499))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_500, L_501))));
		UInt32U5BU5D_t617* L_502 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_503 = V_1;
		NullCheck(L_502);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_502, (((uintptr_t)((int32_t)((uint32_t)L_503>>((int32_t)24))))));
		uintptr_t L_504 = (((uintptr_t)((int32_t)((uint32_t)L_503>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_505 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_506 = V_2;
		NullCheck(L_505);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_505, (((uint8_t)((int32_t)((uint32_t)L_506>>((int32_t)16))))));
		uint8_t L_507 = (((uint8_t)((int32_t)((uint32_t)L_506>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_508 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_509 = V_3;
		NullCheck(L_508);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_508, (((uint8_t)((int32_t)((uint32_t)L_509>>8)))));
		uint8_t L_510 = (((uint8_t)((int32_t)((uint32_t)L_509>>8))));
		UInt32U5BU5D_t617* L_511 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_512 = V_0;
		NullCheck(L_511);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_511, (((uint8_t)L_512)));
		uint8_t L_513 = (((uint8_t)L_512));
		UInt32U5BU5D_t617* L_514 = ___ekey;
		NullCheck(L_514);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_514, ((int32_t)37));
		int32_t L_515 = ((int32_t)37);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_502, L_504))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_505, L_507))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_508, L_510))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_511, L_513))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_514, L_515))));
		UInt32U5BU5D_t617* L_516 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_517 = V_2;
		NullCheck(L_516);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_516, (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24))))));
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_519 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_520 = V_3;
		NullCheck(L_519);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_519, (((uint8_t)((int32_t)((uint32_t)L_520>>((int32_t)16))))));
		uint8_t L_521 = (((uint8_t)((int32_t)((uint32_t)L_520>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_522 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_523 = V_0;
		NullCheck(L_522);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_522, (((uint8_t)((int32_t)((uint32_t)L_523>>8)))));
		uint8_t L_524 = (((uint8_t)((int32_t)((uint32_t)L_523>>8))));
		UInt32U5BU5D_t617* L_525 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_526 = V_1;
		NullCheck(L_525);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_525, (((uint8_t)L_526)));
		uint8_t L_527 = (((uint8_t)L_526));
		UInt32U5BU5D_t617* L_528 = ___ekey;
		NullCheck(L_528);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_528, ((int32_t)38));
		int32_t L_529 = ((int32_t)38);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_516, L_518))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_519, L_521))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_522, L_524))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_525, L_527))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_528, L_529))));
		UInt32U5BU5D_t617* L_530 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_531 = V_3;
		NullCheck(L_530);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_530, (((uintptr_t)((int32_t)((uint32_t)L_531>>((int32_t)24))))));
		uintptr_t L_532 = (((uintptr_t)((int32_t)((uint32_t)L_531>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_533 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_534 = V_0;
		NullCheck(L_533);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_533, (((uint8_t)((int32_t)((uint32_t)L_534>>((int32_t)16))))));
		uint8_t L_535 = (((uint8_t)((int32_t)((uint32_t)L_534>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_536 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_537 = V_1;
		NullCheck(L_536);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_536, (((uint8_t)((int32_t)((uint32_t)L_537>>8)))));
		uint8_t L_538 = (((uint8_t)((int32_t)((uint32_t)L_537>>8))));
		UInt32U5BU5D_t617* L_539 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_540 = V_2;
		NullCheck(L_539);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_539, (((uint8_t)L_540)));
		uint8_t L_541 = (((uint8_t)L_540));
		UInt32U5BU5D_t617* L_542 = ___ekey;
		NullCheck(L_542);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_542, ((int32_t)39));
		int32_t L_543 = ((int32_t)39);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_530, L_532))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_533, L_535))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_536, L_538))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_539, L_541))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_542, L_543))));
		int32_t L_544 = (__this->___Nr_14);
		if ((((int32_t)L_544) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_545 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_546 = V_4;
		NullCheck(L_545);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_545, (((uintptr_t)((int32_t)((uint32_t)L_546>>((int32_t)24))))));
		uintptr_t L_547 = (((uintptr_t)((int32_t)((uint32_t)L_546>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_548 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_549 = V_5;
		NullCheck(L_548);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_548, (((uint8_t)((int32_t)((uint32_t)L_549>>((int32_t)16))))));
		uint8_t L_550 = (((uint8_t)((int32_t)((uint32_t)L_549>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_551 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_552 = V_6;
		NullCheck(L_551);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_551, (((uint8_t)((int32_t)((uint32_t)L_552>>8)))));
		uint8_t L_553 = (((uint8_t)((int32_t)((uint32_t)L_552>>8))));
		UInt32U5BU5D_t617* L_554 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_555 = V_7;
		NullCheck(L_554);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_554, (((uint8_t)L_555)));
		uint8_t L_556 = (((uint8_t)L_555));
		UInt32U5BU5D_t617* L_557 = ___ekey;
		NullCheck(L_557);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_557, ((int32_t)40));
		int32_t L_558 = ((int32_t)40);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_545, L_547))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_548, L_550))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_551, L_553))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_554, L_556))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_557, L_558))));
		UInt32U5BU5D_t617* L_559 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_560 = V_5;
		NullCheck(L_559);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_559, (((uintptr_t)((int32_t)((uint32_t)L_560>>((int32_t)24))))));
		uintptr_t L_561 = (((uintptr_t)((int32_t)((uint32_t)L_560>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_562 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_563 = V_6;
		NullCheck(L_562);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_562, (((uint8_t)((int32_t)((uint32_t)L_563>>((int32_t)16))))));
		uint8_t L_564 = (((uint8_t)((int32_t)((uint32_t)L_563>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_565 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_566 = V_7;
		NullCheck(L_565);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_565, (((uint8_t)((int32_t)((uint32_t)L_566>>8)))));
		uint8_t L_567 = (((uint8_t)((int32_t)((uint32_t)L_566>>8))));
		UInt32U5BU5D_t617* L_568 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_569 = V_4;
		NullCheck(L_568);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_568, (((uint8_t)L_569)));
		uint8_t L_570 = (((uint8_t)L_569));
		UInt32U5BU5D_t617* L_571 = ___ekey;
		NullCheck(L_571);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_571, ((int32_t)41));
		int32_t L_572 = ((int32_t)41);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_559, L_561))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_562, L_564))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_565, L_567))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_568, L_570))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_571, L_572))));
		UInt32U5BU5D_t617* L_573 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_574 = V_6;
		NullCheck(L_573);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_573, (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24))))));
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_576 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_577 = V_7;
		NullCheck(L_576);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_576, (((uint8_t)((int32_t)((uint32_t)L_577>>((int32_t)16))))));
		uint8_t L_578 = (((uint8_t)((int32_t)((uint32_t)L_577>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_579 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_580 = V_4;
		NullCheck(L_579);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_579, (((uint8_t)((int32_t)((uint32_t)L_580>>8)))));
		uint8_t L_581 = (((uint8_t)((int32_t)((uint32_t)L_580>>8))));
		UInt32U5BU5D_t617* L_582 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_583 = V_5;
		NullCheck(L_582);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_582, (((uint8_t)L_583)));
		uint8_t L_584 = (((uint8_t)L_583));
		UInt32U5BU5D_t617* L_585 = ___ekey;
		NullCheck(L_585);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_585, ((int32_t)42));
		int32_t L_586 = ((int32_t)42);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_573, L_575))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_576, L_578))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_579, L_581))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_582, L_584))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_585, L_586))));
		UInt32U5BU5D_t617* L_587 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_588 = V_7;
		NullCheck(L_587);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_587, (((uintptr_t)((int32_t)((uint32_t)L_588>>((int32_t)24))))));
		uintptr_t L_589 = (((uintptr_t)((int32_t)((uint32_t)L_588>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_590 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_591 = V_4;
		NullCheck(L_590);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_590, (((uint8_t)((int32_t)((uint32_t)L_591>>((int32_t)16))))));
		uint8_t L_592 = (((uint8_t)((int32_t)((uint32_t)L_591>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_593 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_594 = V_5;
		NullCheck(L_593);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_593, (((uint8_t)((int32_t)((uint32_t)L_594>>8)))));
		uint8_t L_595 = (((uint8_t)((int32_t)((uint32_t)L_594>>8))));
		UInt32U5BU5D_t617* L_596 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_597 = V_6;
		NullCheck(L_596);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_596, (((uint8_t)L_597)));
		uint8_t L_598 = (((uint8_t)L_597));
		UInt32U5BU5D_t617* L_599 = ___ekey;
		NullCheck(L_599);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_599, ((int32_t)43));
		int32_t L_600 = ((int32_t)43);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_587, L_589))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_590, L_592))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_593, L_595))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_596, L_598))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_599, L_600))));
		UInt32U5BU5D_t617* L_601 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_602 = V_0;
		NullCheck(L_601);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_601, (((uintptr_t)((int32_t)((uint32_t)L_602>>((int32_t)24))))));
		uintptr_t L_603 = (((uintptr_t)((int32_t)((uint32_t)L_602>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_604 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_605 = V_1;
		NullCheck(L_604);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_604, (((uint8_t)((int32_t)((uint32_t)L_605>>((int32_t)16))))));
		uint8_t L_606 = (((uint8_t)((int32_t)((uint32_t)L_605>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_607 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_608 = V_2;
		NullCheck(L_607);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_607, (((uint8_t)((int32_t)((uint32_t)L_608>>8)))));
		uint8_t L_609 = (((uint8_t)((int32_t)((uint32_t)L_608>>8))));
		UInt32U5BU5D_t617* L_610 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_611 = V_3;
		NullCheck(L_610);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_610, (((uint8_t)L_611)));
		uint8_t L_612 = (((uint8_t)L_611));
		UInt32U5BU5D_t617* L_613 = ___ekey;
		NullCheck(L_613);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_613, ((int32_t)44));
		int32_t L_614 = ((int32_t)44);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_601, L_603))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_604, L_606))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_607, L_609))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_610, L_612))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_613, L_614))));
		UInt32U5BU5D_t617* L_615 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_616 = V_1;
		NullCheck(L_615);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_615, (((uintptr_t)((int32_t)((uint32_t)L_616>>((int32_t)24))))));
		uintptr_t L_617 = (((uintptr_t)((int32_t)((uint32_t)L_616>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_618 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_619 = V_2;
		NullCheck(L_618);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_618, (((uint8_t)((int32_t)((uint32_t)L_619>>((int32_t)16))))));
		uint8_t L_620 = (((uint8_t)((int32_t)((uint32_t)L_619>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_621 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_622 = V_3;
		NullCheck(L_621);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_621, (((uint8_t)((int32_t)((uint32_t)L_622>>8)))));
		uint8_t L_623 = (((uint8_t)((int32_t)((uint32_t)L_622>>8))));
		UInt32U5BU5D_t617* L_624 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_625 = V_0;
		NullCheck(L_624);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_624, (((uint8_t)L_625)));
		uint8_t L_626 = (((uint8_t)L_625));
		UInt32U5BU5D_t617* L_627 = ___ekey;
		NullCheck(L_627);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_627, ((int32_t)45));
		int32_t L_628 = ((int32_t)45);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_615, L_617))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_618, L_620))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_621, L_623))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_624, L_626))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_627, L_628))));
		UInt32U5BU5D_t617* L_629 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_630 = V_2;
		NullCheck(L_629);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_629, (((uintptr_t)((int32_t)((uint32_t)L_630>>((int32_t)24))))));
		uintptr_t L_631 = (((uintptr_t)((int32_t)((uint32_t)L_630>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_632 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_633 = V_3;
		NullCheck(L_632);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_632, (((uint8_t)((int32_t)((uint32_t)L_633>>((int32_t)16))))));
		uint8_t L_634 = (((uint8_t)((int32_t)((uint32_t)L_633>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_635 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_636 = V_0;
		NullCheck(L_635);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_635, (((uint8_t)((int32_t)((uint32_t)L_636>>8)))));
		uint8_t L_637 = (((uint8_t)((int32_t)((uint32_t)L_636>>8))));
		UInt32U5BU5D_t617* L_638 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_639 = V_1;
		NullCheck(L_638);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_638, (((uint8_t)L_639)));
		uint8_t L_640 = (((uint8_t)L_639));
		UInt32U5BU5D_t617* L_641 = ___ekey;
		NullCheck(L_641);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_641, ((int32_t)46));
		int32_t L_642 = ((int32_t)46);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_629, L_631))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_632, L_634))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_635, L_637))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_638, L_640))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_641, L_642))));
		UInt32U5BU5D_t617* L_643 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_644 = V_3;
		NullCheck(L_643);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_643, (((uintptr_t)((int32_t)((uint32_t)L_644>>((int32_t)24))))));
		uintptr_t L_645 = (((uintptr_t)((int32_t)((uint32_t)L_644>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_646 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_647 = V_0;
		NullCheck(L_646);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_646, (((uint8_t)((int32_t)((uint32_t)L_647>>((int32_t)16))))));
		uint8_t L_648 = (((uint8_t)((int32_t)((uint32_t)L_647>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_649 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_650 = V_1;
		NullCheck(L_649);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_649, (((uint8_t)((int32_t)((uint32_t)L_650>>8)))));
		uint8_t L_651 = (((uint8_t)((int32_t)((uint32_t)L_650>>8))));
		UInt32U5BU5D_t617* L_652 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_653 = V_2;
		NullCheck(L_652);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_652, (((uint8_t)L_653)));
		uint8_t L_654 = (((uint8_t)L_653));
		UInt32U5BU5D_t617* L_655 = ___ekey;
		NullCheck(L_655);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_655, ((int32_t)47));
		int32_t L_656 = ((int32_t)47);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_643, L_645))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_646, L_648))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_649, L_651))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_652, L_654))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_655, L_656))));
		V_8 = ((int32_t)48);
		int32_t L_657 = (__this->___Nr_14);
		if ((((int32_t)L_657) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_658 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_659 = V_4;
		NullCheck(L_658);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_658, (((uintptr_t)((int32_t)((uint32_t)L_659>>((int32_t)24))))));
		uintptr_t L_660 = (((uintptr_t)((int32_t)((uint32_t)L_659>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_661 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_662 = V_5;
		NullCheck(L_661);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_661, (((uint8_t)((int32_t)((uint32_t)L_662>>((int32_t)16))))));
		uint8_t L_663 = (((uint8_t)((int32_t)((uint32_t)L_662>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_664 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_665 = V_6;
		NullCheck(L_664);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_664, (((uint8_t)((int32_t)((uint32_t)L_665>>8)))));
		uint8_t L_666 = (((uint8_t)((int32_t)((uint32_t)L_665>>8))));
		UInt32U5BU5D_t617* L_667 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_668 = V_7;
		NullCheck(L_667);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_667, (((uint8_t)L_668)));
		uint8_t L_669 = (((uint8_t)L_668));
		UInt32U5BU5D_t617* L_670 = ___ekey;
		NullCheck(L_670);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_670, ((int32_t)48));
		int32_t L_671 = ((int32_t)48);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_658, L_660))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_661, L_663))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_664, L_666))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_667, L_669))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_670, L_671))));
		UInt32U5BU5D_t617* L_672 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_673 = V_5;
		NullCheck(L_672);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_672, (((uintptr_t)((int32_t)((uint32_t)L_673>>((int32_t)24))))));
		uintptr_t L_674 = (((uintptr_t)((int32_t)((uint32_t)L_673>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_675 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_676 = V_6;
		NullCheck(L_675);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_675, (((uint8_t)((int32_t)((uint32_t)L_676>>((int32_t)16))))));
		uint8_t L_677 = (((uint8_t)((int32_t)((uint32_t)L_676>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_678 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_679 = V_7;
		NullCheck(L_678);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_678, (((uint8_t)((int32_t)((uint32_t)L_679>>8)))));
		uint8_t L_680 = (((uint8_t)((int32_t)((uint32_t)L_679>>8))));
		UInt32U5BU5D_t617* L_681 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_682 = V_4;
		NullCheck(L_681);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_681, (((uint8_t)L_682)));
		uint8_t L_683 = (((uint8_t)L_682));
		UInt32U5BU5D_t617* L_684 = ___ekey;
		NullCheck(L_684);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_684, ((int32_t)49));
		int32_t L_685 = ((int32_t)49);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_672, L_674))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_675, L_677))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_678, L_680))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_681, L_683))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_684, L_685))));
		UInt32U5BU5D_t617* L_686 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_687 = V_6;
		NullCheck(L_686);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_686, (((uintptr_t)((int32_t)((uint32_t)L_687>>((int32_t)24))))));
		uintptr_t L_688 = (((uintptr_t)((int32_t)((uint32_t)L_687>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_689 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_690 = V_7;
		NullCheck(L_689);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_689, (((uint8_t)((int32_t)((uint32_t)L_690>>((int32_t)16))))));
		uint8_t L_691 = (((uint8_t)((int32_t)((uint32_t)L_690>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_692 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_693 = V_4;
		NullCheck(L_692);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_692, (((uint8_t)((int32_t)((uint32_t)L_693>>8)))));
		uint8_t L_694 = (((uint8_t)((int32_t)((uint32_t)L_693>>8))));
		UInt32U5BU5D_t617* L_695 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_696 = V_5;
		NullCheck(L_695);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_695, (((uint8_t)L_696)));
		uint8_t L_697 = (((uint8_t)L_696));
		UInt32U5BU5D_t617* L_698 = ___ekey;
		NullCheck(L_698);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_698, ((int32_t)50));
		int32_t L_699 = ((int32_t)50);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_686, L_688))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_689, L_691))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_692, L_694))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_695, L_697))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_698, L_699))));
		UInt32U5BU5D_t617* L_700 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_701 = V_7;
		NullCheck(L_700);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_700, (((uintptr_t)((int32_t)((uint32_t)L_701>>((int32_t)24))))));
		uintptr_t L_702 = (((uintptr_t)((int32_t)((uint32_t)L_701>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_703 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_704 = V_4;
		NullCheck(L_703);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_703, (((uint8_t)((int32_t)((uint32_t)L_704>>((int32_t)16))))));
		uint8_t L_705 = (((uint8_t)((int32_t)((uint32_t)L_704>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_706 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_707 = V_5;
		NullCheck(L_706);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_706, (((uint8_t)((int32_t)((uint32_t)L_707>>8)))));
		uint8_t L_708 = (((uint8_t)((int32_t)((uint32_t)L_707>>8))));
		UInt32U5BU5D_t617* L_709 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_710 = V_6;
		NullCheck(L_709);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_709, (((uint8_t)L_710)));
		uint8_t L_711 = (((uint8_t)L_710));
		UInt32U5BU5D_t617* L_712 = ___ekey;
		NullCheck(L_712);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_712, ((int32_t)51));
		int32_t L_713 = ((int32_t)51);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_700, L_702))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_703, L_705))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_706, L_708))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_709, L_711))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_712, L_713))));
		UInt32U5BU5D_t617* L_714 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_714, (((uintptr_t)((int32_t)((uint32_t)L_715>>((int32_t)24))))));
		uintptr_t L_716 = (((uintptr_t)((int32_t)((uint32_t)L_715>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_717 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_718 = V_1;
		NullCheck(L_717);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_717, (((uint8_t)((int32_t)((uint32_t)L_718>>((int32_t)16))))));
		uint8_t L_719 = (((uint8_t)((int32_t)((uint32_t)L_718>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_720 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_721 = V_2;
		NullCheck(L_720);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_720, (((uint8_t)((int32_t)((uint32_t)L_721>>8)))));
		uint8_t L_722 = (((uint8_t)((int32_t)((uint32_t)L_721>>8))));
		UInt32U5BU5D_t617* L_723 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_724 = V_3;
		NullCheck(L_723);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_723, (((uint8_t)L_724)));
		uint8_t L_725 = (((uint8_t)L_724));
		UInt32U5BU5D_t617* L_726 = ___ekey;
		NullCheck(L_726);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_726, ((int32_t)52));
		int32_t L_727 = ((int32_t)52);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_714, L_716))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_717, L_719))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_720, L_722))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_723, L_725))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_726, L_727))));
		UInt32U5BU5D_t617* L_728 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_729 = V_1;
		NullCheck(L_728);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_728, (((uintptr_t)((int32_t)((uint32_t)L_729>>((int32_t)24))))));
		uintptr_t L_730 = (((uintptr_t)((int32_t)((uint32_t)L_729>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_731 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_732 = V_2;
		NullCheck(L_731);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_731, (((uint8_t)((int32_t)((uint32_t)L_732>>((int32_t)16))))));
		uint8_t L_733 = (((uint8_t)((int32_t)((uint32_t)L_732>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_734 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_735 = V_3;
		NullCheck(L_734);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_734, (((uint8_t)((int32_t)((uint32_t)L_735>>8)))));
		uint8_t L_736 = (((uint8_t)((int32_t)((uint32_t)L_735>>8))));
		UInt32U5BU5D_t617* L_737 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_738 = V_0;
		NullCheck(L_737);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_737, (((uint8_t)L_738)));
		uint8_t L_739 = (((uint8_t)L_738));
		UInt32U5BU5D_t617* L_740 = ___ekey;
		NullCheck(L_740);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_740, ((int32_t)53));
		int32_t L_741 = ((int32_t)53);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_728, L_730))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_731, L_733))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_734, L_736))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_737, L_739))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_740, L_741))));
		UInt32U5BU5D_t617* L_742 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_743 = V_2;
		NullCheck(L_742);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_742, (((uintptr_t)((int32_t)((uint32_t)L_743>>((int32_t)24))))));
		uintptr_t L_744 = (((uintptr_t)((int32_t)((uint32_t)L_743>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_745 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_746 = V_3;
		NullCheck(L_745);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_745, (((uint8_t)((int32_t)((uint32_t)L_746>>((int32_t)16))))));
		uint8_t L_747 = (((uint8_t)((int32_t)((uint32_t)L_746>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_748 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_749 = V_0;
		NullCheck(L_748);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_748, (((uint8_t)((int32_t)((uint32_t)L_749>>8)))));
		uint8_t L_750 = (((uint8_t)((int32_t)((uint32_t)L_749>>8))));
		UInt32U5BU5D_t617* L_751 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_752 = V_1;
		NullCheck(L_751);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_751, (((uint8_t)L_752)));
		uint8_t L_753 = (((uint8_t)L_752));
		UInt32U5BU5D_t617* L_754 = ___ekey;
		NullCheck(L_754);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_754, ((int32_t)54));
		int32_t L_755 = ((int32_t)54);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_742, L_744))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_745, L_747))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_748, L_750))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_751, L_753))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_754, L_755))));
		UInt32U5BU5D_t617* L_756 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T0_18;
		uint32_t L_757 = V_3;
		NullCheck(L_756);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_756, (((uintptr_t)((int32_t)((uint32_t)L_757>>((int32_t)24))))));
		uintptr_t L_758 = (((uintptr_t)((int32_t)((uint32_t)L_757>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_759 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T1_19;
		uint32_t L_760 = V_0;
		NullCheck(L_759);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_759, (((uint8_t)((int32_t)((uint32_t)L_760>>((int32_t)16))))));
		uint8_t L_761 = (((uint8_t)((int32_t)((uint32_t)L_760>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_762 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T2_20;
		uint32_t L_763 = V_1;
		NullCheck(L_762);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_762, (((uint8_t)((int32_t)((uint32_t)L_763>>8)))));
		uint8_t L_764 = (((uint8_t)((int32_t)((uint32_t)L_763>>8))));
		UInt32U5BU5D_t617* L_765 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___T3_21;
		uint32_t L_766 = V_2;
		NullCheck(L_765);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_765, (((uint8_t)L_766)));
		uint8_t L_767 = (((uint8_t)L_766));
		UInt32U5BU5D_t617* L_768 = ___ekey;
		NullCheck(L_768);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_768, ((int32_t)55));
		int32_t L_769 = ((int32_t)55);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_756, L_758))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_759, L_761))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_762, L_764))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_765, L_767))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_768, L_769))));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t112* L_770 = ___outdata;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		ByteU5BU5D_t112* L_771 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_772 = V_4;
		NullCheck(L_771);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_771, (((uintptr_t)((int32_t)((uint32_t)L_772>>((int32_t)24))))));
		uintptr_t L_773 = (((uintptr_t)((int32_t)((uint32_t)L_772>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_774 = ___ekey;
		int32_t L_775 = V_8;
		NullCheck(L_774);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_774, L_775);
		int32_t L_776 = L_775;
		NullCheck(L_770);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_770, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_770, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_771, L_773))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_774, L_776))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_777 = ___outdata;
		ByteU5BU5D_t112* L_778 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_779 = V_5;
		NullCheck(L_778);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_778, (((uint8_t)((int32_t)((uint32_t)L_779>>((int32_t)16))))));
		uint8_t L_780 = (((uint8_t)((int32_t)((uint32_t)L_779>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_781 = ___ekey;
		int32_t L_782 = V_8;
		NullCheck(L_781);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_781, L_782);
		int32_t L_783 = L_782;
		NullCheck(L_777);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_777, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_777, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_778, L_780))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_781, L_783))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_784 = ___outdata;
		ByteU5BU5D_t112* L_785 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_786 = V_6;
		NullCheck(L_785);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_785, (((uint8_t)((int32_t)((uint32_t)L_786>>8)))));
		uint8_t L_787 = (((uint8_t)((int32_t)((uint32_t)L_786>>8))));
		UInt32U5BU5D_t617* L_788 = ___ekey;
		int32_t L_789 = V_8;
		NullCheck(L_788);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_788, L_789);
		int32_t L_790 = L_789;
		NullCheck(L_784);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_784, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_784, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_785, L_787))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_788, L_790))>>8))))))));
		ByteU5BU5D_t112* L_791 = ___outdata;
		ByteU5BU5D_t112* L_792 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_793 = V_7;
		NullCheck(L_792);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_792, (((uint8_t)L_793)));
		uint8_t L_794 = (((uint8_t)L_793));
		UInt32U5BU5D_t617* L_795 = ___ekey;
		int32_t L_796 = V_8;
		int32_t L_797 = L_796;
		V_8 = ((int32_t)((int32_t)L_797+(int32_t)1));
		NullCheck(L_795);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_795, L_797);
		int32_t L_798 = L_797;
		NullCheck(L_791);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_791, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_791, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_792, L_794))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_795, L_798))))))));
		ByteU5BU5D_t112* L_799 = ___outdata;
		ByteU5BU5D_t112* L_800 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_801 = V_5;
		NullCheck(L_800);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_800, (((uintptr_t)((int32_t)((uint32_t)L_801>>((int32_t)24))))));
		uintptr_t L_802 = (((uintptr_t)((int32_t)((uint32_t)L_801>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_803 = ___ekey;
		int32_t L_804 = V_8;
		NullCheck(L_803);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_803, L_804);
		int32_t L_805 = L_804;
		NullCheck(L_799);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_799, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_799, 4)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_800, L_802))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_803, L_805))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_806 = ___outdata;
		ByteU5BU5D_t112* L_807 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_808 = V_6;
		NullCheck(L_807);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_807, (((uint8_t)((int32_t)((uint32_t)L_808>>((int32_t)16))))));
		uint8_t L_809 = (((uint8_t)((int32_t)((uint32_t)L_808>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_810 = ___ekey;
		int32_t L_811 = V_8;
		NullCheck(L_810);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_810, L_811);
		int32_t L_812 = L_811;
		NullCheck(L_806);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_806, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_806, 5)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_807, L_809))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_810, L_812))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_813 = ___outdata;
		ByteU5BU5D_t112* L_814 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_815 = V_7;
		NullCheck(L_814);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_814, (((uint8_t)((int32_t)((uint32_t)L_815>>8)))));
		uint8_t L_816 = (((uint8_t)((int32_t)((uint32_t)L_815>>8))));
		UInt32U5BU5D_t617* L_817 = ___ekey;
		int32_t L_818 = V_8;
		NullCheck(L_817);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_817, L_818);
		int32_t L_819 = L_818;
		NullCheck(L_813);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_813, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_813, 6)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_814, L_816))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_817, L_819))>>8))))))));
		ByteU5BU5D_t112* L_820 = ___outdata;
		ByteU5BU5D_t112* L_821 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_822 = V_4;
		NullCheck(L_821);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_821, (((uint8_t)L_822)));
		uint8_t L_823 = (((uint8_t)L_822));
		UInt32U5BU5D_t617* L_824 = ___ekey;
		int32_t L_825 = V_8;
		int32_t L_826 = L_825;
		V_8 = ((int32_t)((int32_t)L_826+(int32_t)1));
		NullCheck(L_824);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_824, L_826);
		int32_t L_827 = L_826;
		NullCheck(L_820);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_820, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_820, 7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_821, L_823))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_824, L_827))))))));
		ByteU5BU5D_t112* L_828 = ___outdata;
		ByteU5BU5D_t112* L_829 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_830 = V_6;
		NullCheck(L_829);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_829, (((uintptr_t)((int32_t)((uint32_t)L_830>>((int32_t)24))))));
		uintptr_t L_831 = (((uintptr_t)((int32_t)((uint32_t)L_830>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_832 = ___ekey;
		int32_t L_833 = V_8;
		NullCheck(L_832);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_832, L_833);
		int32_t L_834 = L_833;
		NullCheck(L_828);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_828, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_828, 8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_829, L_831))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_832, L_834))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_835 = ___outdata;
		ByteU5BU5D_t112* L_836 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_837 = V_7;
		NullCheck(L_836);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_836, (((uint8_t)((int32_t)((uint32_t)L_837>>((int32_t)16))))));
		uint8_t L_838 = (((uint8_t)((int32_t)((uint32_t)L_837>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_839 = ___ekey;
		int32_t L_840 = V_8;
		NullCheck(L_839);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_839, L_840);
		int32_t L_841 = L_840;
		NullCheck(L_835);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_835, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_835, ((int32_t)9))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_836, L_838))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_839, L_841))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_842 = ___outdata;
		ByteU5BU5D_t112* L_843 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_844 = V_4;
		NullCheck(L_843);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_843, (((uint8_t)((int32_t)((uint32_t)L_844>>8)))));
		uint8_t L_845 = (((uint8_t)((int32_t)((uint32_t)L_844>>8))));
		UInt32U5BU5D_t617* L_846 = ___ekey;
		int32_t L_847 = V_8;
		NullCheck(L_846);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_846, L_847);
		int32_t L_848 = L_847;
		NullCheck(L_842);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_842, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_842, ((int32_t)10))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_843, L_845))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_846, L_848))>>8))))))));
		ByteU5BU5D_t112* L_849 = ___outdata;
		ByteU5BU5D_t112* L_850 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_851 = V_5;
		NullCheck(L_850);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_850, (((uint8_t)L_851)));
		uint8_t L_852 = (((uint8_t)L_851));
		UInt32U5BU5D_t617* L_853 = ___ekey;
		int32_t L_854 = V_8;
		int32_t L_855 = L_854;
		V_8 = ((int32_t)((int32_t)L_855+(int32_t)1));
		NullCheck(L_853);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_853, L_855);
		int32_t L_856 = L_855;
		NullCheck(L_849);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_849, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_849, ((int32_t)11))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_850, L_852))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_853, L_856))))))));
		ByteU5BU5D_t112* L_857 = ___outdata;
		ByteU5BU5D_t112* L_858 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_859 = V_7;
		NullCheck(L_858);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_858, (((uintptr_t)((int32_t)((uint32_t)L_859>>((int32_t)24))))));
		uintptr_t L_860 = (((uintptr_t)((int32_t)((uint32_t)L_859>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_861 = ___ekey;
		int32_t L_862 = V_8;
		NullCheck(L_861);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_861, L_862);
		int32_t L_863 = L_862;
		NullCheck(L_857);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_857, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_857, ((int32_t)12))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_858, L_860))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_861, L_863))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_864 = ___outdata;
		ByteU5BU5D_t112* L_865 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_866 = V_4;
		NullCheck(L_865);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_865, (((uint8_t)((int32_t)((uint32_t)L_866>>((int32_t)16))))));
		uint8_t L_867 = (((uint8_t)((int32_t)((uint32_t)L_866>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_868 = ___ekey;
		int32_t L_869 = V_8;
		NullCheck(L_868);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_868, L_869);
		int32_t L_870 = L_869;
		NullCheck(L_864);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_864, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_864, ((int32_t)13))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_865, L_867))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_868, L_870))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_871 = ___outdata;
		ByteU5BU5D_t112* L_872 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_873 = V_5;
		NullCheck(L_872);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_872, (((uint8_t)((int32_t)((uint32_t)L_873>>8)))));
		uint8_t L_874 = (((uint8_t)((int32_t)((uint32_t)L_873>>8))));
		UInt32U5BU5D_t617* L_875 = ___ekey;
		int32_t L_876 = V_8;
		NullCheck(L_875);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_875, L_876);
		int32_t L_877 = L_876;
		NullCheck(L_871);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_871, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_871, ((int32_t)14))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_872, L_874))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_875, L_877))>>8))))))));
		ByteU5BU5D_t112* L_878 = ___outdata;
		ByteU5BU5D_t112* L_879 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___SBox_16;
		uint32_t L_880 = V_6;
		NullCheck(L_879);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_879, (((uint8_t)L_880)));
		uint8_t L_881 = (((uint8_t)L_880));
		UInt32U5BU5D_t617* L_882 = ___ekey;
		int32_t L_883 = V_8;
		int32_t L_884 = L_883;
		V_8 = ((int32_t)((int32_t)L_884+(int32_t)1));
		NullCheck(L_882);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_882, L_884);
		int32_t L_885 = L_884;
		NullCheck(L_878);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_878, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_878, ((int32_t)15))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_879, L_881))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_882, L_885))))))));
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern TypeInfo* AesTransform_t618_il2cpp_TypeInfo_var;
extern "C" void AesTransform_Decrypt128_m2475 (AesTransform_t618 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AesTransform_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t112* L_0 = ___indata;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		ByteU5BU5D_t112* L_2 = ___indata;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t112* L_4 = ___indata;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		ByteU5BU5D_t112* L_6 = ___indata;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		UInt32U5BU5D_t617* L_8 = ___ekey;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_8, L_9))));
		ByteU5BU5D_t112* L_10 = ___indata;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		int32_t L_11 = 4;
		ByteU5BU5D_t112* L_12 = ___indata;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		int32_t L_13 = 5;
		ByteU5BU5D_t112* L_14 = ___indata;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 6);
		int32_t L_15 = 6;
		ByteU5BU5D_t112* L_16 = ___indata;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 7);
		int32_t L_17 = 7;
		UInt32U5BU5D_t617* L_18 = ___ekey;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 1);
		int32_t L_19 = 1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_18, L_19))));
		ByteU5BU5D_t112* L_20 = ___indata;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 8);
		int32_t L_21 = 8;
		ByteU5BU5D_t112* L_22 = ___indata;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)9));
		int32_t L_23 = ((int32_t)9);
		ByteU5BU5D_t112* L_24 = ___indata;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)10));
		int32_t L_25 = ((int32_t)10);
		ByteU5BU5D_t112* L_26 = ___indata;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)11));
		int32_t L_27 = ((int32_t)11);
		UInt32U5BU5D_t617* L_28 = ___ekey;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 2);
		int32_t L_29 = 2;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_28, L_29))));
		ByteU5BU5D_t112* L_30 = ___indata;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)12));
		int32_t L_31 = ((int32_t)12);
		ByteU5BU5D_t112* L_32 = ___indata;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)13));
		int32_t L_33 = ((int32_t)13);
		ByteU5BU5D_t112* L_34 = ___indata;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)14));
		int32_t L_35 = ((int32_t)14);
		ByteU5BU5D_t112* L_36 = ___indata;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)15));
		int32_t L_37 = ((int32_t)15);
		UInt32U5BU5D_t617* L_38 = ___ekey;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 3);
		int32_t L_39 = 3;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_32, L_33))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_38, L_39))));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_40 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_41 = V_0;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, (((uintptr_t)((int32_t)((uint32_t)L_41>>((int32_t)24))))));
		uintptr_t L_42 = (((uintptr_t)((int32_t)((uint32_t)L_41>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_43 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_44 = V_3;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, (((uint8_t)((int32_t)((uint32_t)L_44>>((int32_t)16))))));
		uint8_t L_45 = (((uint8_t)((int32_t)((uint32_t)L_44>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_46 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, (((uint8_t)((int32_t)((uint32_t)L_47>>8)))));
		uint8_t L_48 = (((uint8_t)((int32_t)((uint32_t)L_47>>8))));
		UInt32U5BU5D_t617* L_49 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_50 = V_1;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, (((uint8_t)L_50)));
		uint8_t L_51 = (((uint8_t)L_50));
		UInt32U5BU5D_t617* L_52 = ___ekey;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 4);
		int32_t L_53 = 4;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_40, L_42))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_43, L_45))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_46, L_48))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_49, L_51))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_52, L_53))));
		UInt32U5BU5D_t617* L_54 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_55 = V_1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, (((uintptr_t)((int32_t)((uint32_t)L_55>>((int32_t)24))))));
		uintptr_t L_56 = (((uintptr_t)((int32_t)((uint32_t)L_55>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_57 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_58 = V_0;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, (((uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16))))));
		uint8_t L_59 = (((uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_60 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_61 = V_3;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, (((uint8_t)((int32_t)((uint32_t)L_61>>8)))));
		uint8_t L_62 = (((uint8_t)((int32_t)((uint32_t)L_61>>8))));
		UInt32U5BU5D_t617* L_63 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, (((uint8_t)L_64)));
		uint8_t L_65 = (((uint8_t)L_64));
		UInt32U5BU5D_t617* L_66 = ___ekey;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 5);
		int32_t L_67 = 5;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_54, L_56))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_57, L_59))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_60, L_62))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_63, L_65))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_66, L_67))));
		UInt32U5BU5D_t617* L_68 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, (((uintptr_t)((int32_t)((uint32_t)L_69>>((int32_t)24))))));
		uintptr_t L_70 = (((uintptr_t)((int32_t)((uint32_t)L_69>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_71 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_72 = V_1;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, (((uint8_t)((int32_t)((uint32_t)L_72>>((int32_t)16))))));
		uint8_t L_73 = (((uint8_t)((int32_t)((uint32_t)L_72>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_74 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_75 = V_0;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, (((uint8_t)((int32_t)((uint32_t)L_75>>8)))));
		uint8_t L_76 = (((uint8_t)((int32_t)((uint32_t)L_75>>8))));
		UInt32U5BU5D_t617* L_77 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_78 = V_3;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, (((uint8_t)L_78)));
		uint8_t L_79 = (((uint8_t)L_78));
		UInt32U5BU5D_t617* L_80 = ___ekey;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 6);
		int32_t L_81 = 6;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_68, L_70))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_71, L_73))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_74, L_76))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_77, L_79))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_80, L_81))));
		UInt32U5BU5D_t617* L_82 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_83 = V_3;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, (((uintptr_t)((int32_t)((uint32_t)L_83>>((int32_t)24))))));
		uintptr_t L_84 = (((uintptr_t)((int32_t)((uint32_t)L_83>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_85 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_86 = V_2;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, (((uint8_t)((int32_t)((uint32_t)L_86>>((int32_t)16))))));
		uint8_t L_87 = (((uint8_t)((int32_t)((uint32_t)L_86>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_88 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_89 = V_1;
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, (((uint8_t)((int32_t)((uint32_t)L_89>>8)))));
		uint8_t L_90 = (((uint8_t)((int32_t)((uint32_t)L_89>>8))));
		UInt32U5BU5D_t617* L_91 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_92 = V_0;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, (((uint8_t)L_92)));
		uint8_t L_93 = (((uint8_t)L_92));
		UInt32U5BU5D_t617* L_94 = ___ekey;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 7);
		int32_t L_95 = 7;
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_82, L_84))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_85, L_87))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_88, L_90))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_91, L_93))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_94, L_95))));
		UInt32U5BU5D_t617* L_96 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_97 = V_4;
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, (((uintptr_t)((int32_t)((uint32_t)L_97>>((int32_t)24))))));
		uintptr_t L_98 = (((uintptr_t)((int32_t)((uint32_t)L_97>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_99 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_100 = V_7;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, (((uint8_t)((int32_t)((uint32_t)L_100>>((int32_t)16))))));
		uint8_t L_101 = (((uint8_t)((int32_t)((uint32_t)L_100>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_102 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_103 = V_6;
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, (((uint8_t)((int32_t)((uint32_t)L_103>>8)))));
		uint8_t L_104 = (((uint8_t)((int32_t)((uint32_t)L_103>>8))));
		UInt32U5BU5D_t617* L_105 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_106 = V_5;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, (((uint8_t)L_106)));
		uint8_t L_107 = (((uint8_t)L_106));
		UInt32U5BU5D_t617* L_108 = ___ekey;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 8);
		int32_t L_109 = 8;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_96, L_98))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_99, L_101))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_102, L_104))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_105, L_107))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_108, L_109))));
		UInt32U5BU5D_t617* L_110 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_111 = V_5;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, (((uintptr_t)((int32_t)((uint32_t)L_111>>((int32_t)24))))));
		uintptr_t L_112 = (((uintptr_t)((int32_t)((uint32_t)L_111>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_113 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_114 = V_4;
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, (((uint8_t)((int32_t)((uint32_t)L_114>>((int32_t)16))))));
		uint8_t L_115 = (((uint8_t)((int32_t)((uint32_t)L_114>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_116 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_117 = V_7;
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, (((uint8_t)((int32_t)((uint32_t)L_117>>8)))));
		uint8_t L_118 = (((uint8_t)((int32_t)((uint32_t)L_117>>8))));
		UInt32U5BU5D_t617* L_119 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_120 = V_6;
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, (((uint8_t)L_120)));
		uint8_t L_121 = (((uint8_t)L_120));
		UInt32U5BU5D_t617* L_122 = ___ekey;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, ((int32_t)9));
		int32_t L_123 = ((int32_t)9);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_110, L_112))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_113, L_115))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_116, L_118))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_119, L_121))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_122, L_123))));
		UInt32U5BU5D_t617* L_124 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_125 = V_6;
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, (((uintptr_t)((int32_t)((uint32_t)L_125>>((int32_t)24))))));
		uintptr_t L_126 = (((uintptr_t)((int32_t)((uint32_t)L_125>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_127 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_128 = V_5;
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, (((uint8_t)((int32_t)((uint32_t)L_128>>((int32_t)16))))));
		uint8_t L_129 = (((uint8_t)((int32_t)((uint32_t)L_128>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_130 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_131 = V_4;
		NullCheck(L_130);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_130, (((uint8_t)((int32_t)((uint32_t)L_131>>8)))));
		uint8_t L_132 = (((uint8_t)((int32_t)((uint32_t)L_131>>8))));
		UInt32U5BU5D_t617* L_133 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_134 = V_7;
		NullCheck(L_133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_133, (((uint8_t)L_134)));
		uint8_t L_135 = (((uint8_t)L_134));
		UInt32U5BU5D_t617* L_136 = ___ekey;
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, ((int32_t)10));
		int32_t L_137 = ((int32_t)10);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_124, L_126))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_127, L_129))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_130, L_132))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_133, L_135))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_136, L_137))));
		UInt32U5BU5D_t617* L_138 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_139 = V_7;
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, (((uintptr_t)((int32_t)((uint32_t)L_139>>((int32_t)24))))));
		uintptr_t L_140 = (((uintptr_t)((int32_t)((uint32_t)L_139>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_141 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_142 = V_6;
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, (((uint8_t)((int32_t)((uint32_t)L_142>>((int32_t)16))))));
		uint8_t L_143 = (((uint8_t)((int32_t)((uint32_t)L_142>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_144 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_145 = V_5;
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, (((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint8_t L_146 = (((uint8_t)((int32_t)((uint32_t)L_145>>8))));
		UInt32U5BU5D_t617* L_147 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_148 = V_4;
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, (((uint8_t)L_148)));
		uint8_t L_149 = (((uint8_t)L_148));
		UInt32U5BU5D_t617* L_150 = ___ekey;
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, ((int32_t)11));
		int32_t L_151 = ((int32_t)11);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_138, L_140))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_141, L_143))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_144, L_146))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_147, L_149))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_150, L_151))));
		UInt32U5BU5D_t617* L_152 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_153 = V_0;
		NullCheck(L_152);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_152, (((uintptr_t)((int32_t)((uint32_t)L_153>>((int32_t)24))))));
		uintptr_t L_154 = (((uintptr_t)((int32_t)((uint32_t)L_153>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_155 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_156 = V_3;
		NullCheck(L_155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_155, (((uint8_t)((int32_t)((uint32_t)L_156>>((int32_t)16))))));
		uint8_t L_157 = (((uint8_t)((int32_t)((uint32_t)L_156>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_158 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_159 = V_2;
		NullCheck(L_158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_158, (((uint8_t)((int32_t)((uint32_t)L_159>>8)))));
		uint8_t L_160 = (((uint8_t)((int32_t)((uint32_t)L_159>>8))));
		UInt32U5BU5D_t617* L_161 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_162 = V_1;
		NullCheck(L_161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_161, (((uint8_t)L_162)));
		uint8_t L_163 = (((uint8_t)L_162));
		UInt32U5BU5D_t617* L_164 = ___ekey;
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, ((int32_t)12));
		int32_t L_165 = ((int32_t)12);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_152, L_154))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_155, L_157))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_158, L_160))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_161, L_163))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_164, L_165))));
		UInt32U5BU5D_t617* L_166 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_167 = V_1;
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, (((uintptr_t)((int32_t)((uint32_t)L_167>>((int32_t)24))))));
		uintptr_t L_168 = (((uintptr_t)((int32_t)((uint32_t)L_167>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_169 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_170 = V_0;
		NullCheck(L_169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_169, (((uint8_t)((int32_t)((uint32_t)L_170>>((int32_t)16))))));
		uint8_t L_171 = (((uint8_t)((int32_t)((uint32_t)L_170>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_172 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_173 = V_3;
		NullCheck(L_172);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_172, (((uint8_t)((int32_t)((uint32_t)L_173>>8)))));
		uint8_t L_174 = (((uint8_t)((int32_t)((uint32_t)L_173>>8))));
		UInt32U5BU5D_t617* L_175 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_176 = V_2;
		NullCheck(L_175);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_175, (((uint8_t)L_176)));
		uint8_t L_177 = (((uint8_t)L_176));
		UInt32U5BU5D_t617* L_178 = ___ekey;
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, ((int32_t)13));
		int32_t L_179 = ((int32_t)13);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_166, L_168))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_169, L_171))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_172, L_174))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_175, L_177))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_178, L_179))));
		UInt32U5BU5D_t617* L_180 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_181 = V_2;
		NullCheck(L_180);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_180, (((uintptr_t)((int32_t)((uint32_t)L_181>>((int32_t)24))))));
		uintptr_t L_182 = (((uintptr_t)((int32_t)((uint32_t)L_181>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_183 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_184 = V_1;
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, (((uint8_t)((int32_t)((uint32_t)L_184>>((int32_t)16))))));
		uint8_t L_185 = (((uint8_t)((int32_t)((uint32_t)L_184>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_186 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_187 = V_0;
		NullCheck(L_186);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_186, (((uint8_t)((int32_t)((uint32_t)L_187>>8)))));
		uint8_t L_188 = (((uint8_t)((int32_t)((uint32_t)L_187>>8))));
		UInt32U5BU5D_t617* L_189 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_190 = V_3;
		NullCheck(L_189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_189, (((uint8_t)L_190)));
		uint8_t L_191 = (((uint8_t)L_190));
		UInt32U5BU5D_t617* L_192 = ___ekey;
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, ((int32_t)14));
		int32_t L_193 = ((int32_t)14);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_180, L_182))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_183, L_185))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_186, L_188))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_189, L_191))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_192, L_193))));
		UInt32U5BU5D_t617* L_194 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_195 = V_3;
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, (((uintptr_t)((int32_t)((uint32_t)L_195>>((int32_t)24))))));
		uintptr_t L_196 = (((uintptr_t)((int32_t)((uint32_t)L_195>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_197 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_198 = V_2;
		NullCheck(L_197);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_197, (((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint8_t L_199 = (((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_200 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_201 = V_1;
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, (((uint8_t)((int32_t)((uint32_t)L_201>>8)))));
		uint8_t L_202 = (((uint8_t)((int32_t)((uint32_t)L_201>>8))));
		UInt32U5BU5D_t617* L_203 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_204 = V_0;
		NullCheck(L_203);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_203, (((uint8_t)L_204)));
		uint8_t L_205 = (((uint8_t)L_204));
		UInt32U5BU5D_t617* L_206 = ___ekey;
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, ((int32_t)15));
		int32_t L_207 = ((int32_t)15);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_194, L_196))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_197, L_199))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_200, L_202))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_203, L_205))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_206, L_207))));
		UInt32U5BU5D_t617* L_208 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_209 = V_4;
		NullCheck(L_208);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_208, (((uintptr_t)((int32_t)((uint32_t)L_209>>((int32_t)24))))));
		uintptr_t L_210 = (((uintptr_t)((int32_t)((uint32_t)L_209>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_211 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_212 = V_7;
		NullCheck(L_211);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_211, (((uint8_t)((int32_t)((uint32_t)L_212>>((int32_t)16))))));
		uint8_t L_213 = (((uint8_t)((int32_t)((uint32_t)L_212>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_214 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_215 = V_6;
		NullCheck(L_214);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_214, (((uint8_t)((int32_t)((uint32_t)L_215>>8)))));
		uint8_t L_216 = (((uint8_t)((int32_t)((uint32_t)L_215>>8))));
		UInt32U5BU5D_t617* L_217 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_218 = V_5;
		NullCheck(L_217);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_217, (((uint8_t)L_218)));
		uint8_t L_219 = (((uint8_t)L_218));
		UInt32U5BU5D_t617* L_220 = ___ekey;
		NullCheck(L_220);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_220, ((int32_t)16));
		int32_t L_221 = ((int32_t)16);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_208, L_210))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_211, L_213))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_214, L_216))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_217, L_219))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_220, L_221))));
		UInt32U5BU5D_t617* L_222 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_223 = V_5;
		NullCheck(L_222);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_222, (((uintptr_t)((int32_t)((uint32_t)L_223>>((int32_t)24))))));
		uintptr_t L_224 = (((uintptr_t)((int32_t)((uint32_t)L_223>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_225 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_226 = V_4;
		NullCheck(L_225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_225, (((uint8_t)((int32_t)((uint32_t)L_226>>((int32_t)16))))));
		uint8_t L_227 = (((uint8_t)((int32_t)((uint32_t)L_226>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_228 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_229 = V_7;
		NullCheck(L_228);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_228, (((uint8_t)((int32_t)((uint32_t)L_229>>8)))));
		uint8_t L_230 = (((uint8_t)((int32_t)((uint32_t)L_229>>8))));
		UInt32U5BU5D_t617* L_231 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_232 = V_6;
		NullCheck(L_231);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_231, (((uint8_t)L_232)));
		uint8_t L_233 = (((uint8_t)L_232));
		UInt32U5BU5D_t617* L_234 = ___ekey;
		NullCheck(L_234);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_234, ((int32_t)17));
		int32_t L_235 = ((int32_t)17);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_222, L_224))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_225, L_227))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_228, L_230))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_231, L_233))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_234, L_235))));
		UInt32U5BU5D_t617* L_236 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_237 = V_6;
		NullCheck(L_236);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_236, (((uintptr_t)((int32_t)((uint32_t)L_237>>((int32_t)24))))));
		uintptr_t L_238 = (((uintptr_t)((int32_t)((uint32_t)L_237>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_239 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_240 = V_5;
		NullCheck(L_239);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_239, (((uint8_t)((int32_t)((uint32_t)L_240>>((int32_t)16))))));
		uint8_t L_241 = (((uint8_t)((int32_t)((uint32_t)L_240>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_242 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_243 = V_4;
		NullCheck(L_242);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_242, (((uint8_t)((int32_t)((uint32_t)L_243>>8)))));
		uint8_t L_244 = (((uint8_t)((int32_t)((uint32_t)L_243>>8))));
		UInt32U5BU5D_t617* L_245 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_246 = V_7;
		NullCheck(L_245);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_245, (((uint8_t)L_246)));
		uint8_t L_247 = (((uint8_t)L_246));
		UInt32U5BU5D_t617* L_248 = ___ekey;
		NullCheck(L_248);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_248, ((int32_t)18));
		int32_t L_249 = ((int32_t)18);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_236, L_238))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_239, L_241))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_242, L_244))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_245, L_247))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_248, L_249))));
		UInt32U5BU5D_t617* L_250 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_251 = V_7;
		NullCheck(L_250);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_250, (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24))))));
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_253 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_254 = V_6;
		NullCheck(L_253);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_253, (((uint8_t)((int32_t)((uint32_t)L_254>>((int32_t)16))))));
		uint8_t L_255 = (((uint8_t)((int32_t)((uint32_t)L_254>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_256 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_257 = V_5;
		NullCheck(L_256);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_256, (((uint8_t)((int32_t)((uint32_t)L_257>>8)))));
		uint8_t L_258 = (((uint8_t)((int32_t)((uint32_t)L_257>>8))));
		UInt32U5BU5D_t617* L_259 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_260 = V_4;
		NullCheck(L_259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_259, (((uint8_t)L_260)));
		uint8_t L_261 = (((uint8_t)L_260));
		UInt32U5BU5D_t617* L_262 = ___ekey;
		NullCheck(L_262);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_262, ((int32_t)19));
		int32_t L_263 = ((int32_t)19);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_250, L_252))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_253, L_255))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_256, L_258))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_259, L_261))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_262, L_263))));
		UInt32U5BU5D_t617* L_264 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_265 = V_0;
		NullCheck(L_264);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_264, (((uintptr_t)((int32_t)((uint32_t)L_265>>((int32_t)24))))));
		uintptr_t L_266 = (((uintptr_t)((int32_t)((uint32_t)L_265>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_267 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_268 = V_3;
		NullCheck(L_267);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_267, (((uint8_t)((int32_t)((uint32_t)L_268>>((int32_t)16))))));
		uint8_t L_269 = (((uint8_t)((int32_t)((uint32_t)L_268>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_270 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_271 = V_2;
		NullCheck(L_270);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_270, (((uint8_t)((int32_t)((uint32_t)L_271>>8)))));
		uint8_t L_272 = (((uint8_t)((int32_t)((uint32_t)L_271>>8))));
		UInt32U5BU5D_t617* L_273 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_274 = V_1;
		NullCheck(L_273);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_273, (((uint8_t)L_274)));
		uint8_t L_275 = (((uint8_t)L_274));
		UInt32U5BU5D_t617* L_276 = ___ekey;
		NullCheck(L_276);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_276, ((int32_t)20));
		int32_t L_277 = ((int32_t)20);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_264, L_266))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_267, L_269))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_270, L_272))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_273, L_275))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_276, L_277))));
		UInt32U5BU5D_t617* L_278 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_279 = V_1;
		NullCheck(L_278);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_278, (((uintptr_t)((int32_t)((uint32_t)L_279>>((int32_t)24))))));
		uintptr_t L_280 = (((uintptr_t)((int32_t)((uint32_t)L_279>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_281 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_282 = V_0;
		NullCheck(L_281);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_281, (((uint8_t)((int32_t)((uint32_t)L_282>>((int32_t)16))))));
		uint8_t L_283 = (((uint8_t)((int32_t)((uint32_t)L_282>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_284 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_285 = V_3;
		NullCheck(L_284);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_284, (((uint8_t)((int32_t)((uint32_t)L_285>>8)))));
		uint8_t L_286 = (((uint8_t)((int32_t)((uint32_t)L_285>>8))));
		UInt32U5BU5D_t617* L_287 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_288 = V_2;
		NullCheck(L_287);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_287, (((uint8_t)L_288)));
		uint8_t L_289 = (((uint8_t)L_288));
		UInt32U5BU5D_t617* L_290 = ___ekey;
		NullCheck(L_290);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_290, ((int32_t)21));
		int32_t L_291 = ((int32_t)21);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_278, L_280))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_281, L_283))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_284, L_286))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_287, L_289))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_290, L_291))));
		UInt32U5BU5D_t617* L_292 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_293 = V_2;
		NullCheck(L_292);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_292, (((uintptr_t)((int32_t)((uint32_t)L_293>>((int32_t)24))))));
		uintptr_t L_294 = (((uintptr_t)((int32_t)((uint32_t)L_293>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_295 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_296 = V_1;
		NullCheck(L_295);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_295, (((uint8_t)((int32_t)((uint32_t)L_296>>((int32_t)16))))));
		uint8_t L_297 = (((uint8_t)((int32_t)((uint32_t)L_296>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_298 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_299 = V_0;
		NullCheck(L_298);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_298, (((uint8_t)((int32_t)((uint32_t)L_299>>8)))));
		uint8_t L_300 = (((uint8_t)((int32_t)((uint32_t)L_299>>8))));
		UInt32U5BU5D_t617* L_301 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_302 = V_3;
		NullCheck(L_301);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_301, (((uint8_t)L_302)));
		uint8_t L_303 = (((uint8_t)L_302));
		UInt32U5BU5D_t617* L_304 = ___ekey;
		NullCheck(L_304);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_304, ((int32_t)22));
		int32_t L_305 = ((int32_t)22);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_292, L_294))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_295, L_297))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_298, L_300))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_301, L_303))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_304, L_305))));
		UInt32U5BU5D_t617* L_306 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_307 = V_3;
		NullCheck(L_306);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_306, (((uintptr_t)((int32_t)((uint32_t)L_307>>((int32_t)24))))));
		uintptr_t L_308 = (((uintptr_t)((int32_t)((uint32_t)L_307>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_309 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_310 = V_2;
		NullCheck(L_309);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_309, (((uint8_t)((int32_t)((uint32_t)L_310>>((int32_t)16))))));
		uint8_t L_311 = (((uint8_t)((int32_t)((uint32_t)L_310>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_312 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_313 = V_1;
		NullCheck(L_312);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_312, (((uint8_t)((int32_t)((uint32_t)L_313>>8)))));
		uint8_t L_314 = (((uint8_t)((int32_t)((uint32_t)L_313>>8))));
		UInt32U5BU5D_t617* L_315 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_316 = V_0;
		NullCheck(L_315);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_315, (((uint8_t)L_316)));
		uint8_t L_317 = (((uint8_t)L_316));
		UInt32U5BU5D_t617* L_318 = ___ekey;
		NullCheck(L_318);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_318, ((int32_t)23));
		int32_t L_319 = ((int32_t)23);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_306, L_308))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_309, L_311))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_312, L_314))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_315, L_317))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_318, L_319))));
		UInt32U5BU5D_t617* L_320 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_321 = V_4;
		NullCheck(L_320);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_320, (((uintptr_t)((int32_t)((uint32_t)L_321>>((int32_t)24))))));
		uintptr_t L_322 = (((uintptr_t)((int32_t)((uint32_t)L_321>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_323 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_324 = V_7;
		NullCheck(L_323);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_323, (((uint8_t)((int32_t)((uint32_t)L_324>>((int32_t)16))))));
		uint8_t L_325 = (((uint8_t)((int32_t)((uint32_t)L_324>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_326 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_326, (((uint8_t)((int32_t)((uint32_t)L_327>>8)))));
		uint8_t L_328 = (((uint8_t)((int32_t)((uint32_t)L_327>>8))));
		UInt32U5BU5D_t617* L_329 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_330 = V_5;
		NullCheck(L_329);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_329, (((uint8_t)L_330)));
		uint8_t L_331 = (((uint8_t)L_330));
		UInt32U5BU5D_t617* L_332 = ___ekey;
		NullCheck(L_332);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_332, ((int32_t)24));
		int32_t L_333 = ((int32_t)24);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_320, L_322))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_323, L_325))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_326, L_328))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_329, L_331))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_332, L_333))));
		UInt32U5BU5D_t617* L_334 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_335 = V_5;
		NullCheck(L_334);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_334, (((uintptr_t)((int32_t)((uint32_t)L_335>>((int32_t)24))))));
		uintptr_t L_336 = (((uintptr_t)((int32_t)((uint32_t)L_335>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_337 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_338 = V_4;
		NullCheck(L_337);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_337, (((uint8_t)((int32_t)((uint32_t)L_338>>((int32_t)16))))));
		uint8_t L_339 = (((uint8_t)((int32_t)((uint32_t)L_338>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_340 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_341 = V_7;
		NullCheck(L_340);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_340, (((uint8_t)((int32_t)((uint32_t)L_341>>8)))));
		uint8_t L_342 = (((uint8_t)((int32_t)((uint32_t)L_341>>8))));
		UInt32U5BU5D_t617* L_343 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_344 = V_6;
		NullCheck(L_343);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_343, (((uint8_t)L_344)));
		uint8_t L_345 = (((uint8_t)L_344));
		UInt32U5BU5D_t617* L_346 = ___ekey;
		NullCheck(L_346);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_346, ((int32_t)25));
		int32_t L_347 = ((int32_t)25);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_334, L_336))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_337, L_339))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_340, L_342))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_343, L_345))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_346, L_347))));
		UInt32U5BU5D_t617* L_348 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_349 = V_6;
		NullCheck(L_348);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_348, (((uintptr_t)((int32_t)((uint32_t)L_349>>((int32_t)24))))));
		uintptr_t L_350 = (((uintptr_t)((int32_t)((uint32_t)L_349>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_351 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_352 = V_5;
		NullCheck(L_351);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_351, (((uint8_t)((int32_t)((uint32_t)L_352>>((int32_t)16))))));
		uint8_t L_353 = (((uint8_t)((int32_t)((uint32_t)L_352>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_354 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_355 = V_4;
		NullCheck(L_354);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_354, (((uint8_t)((int32_t)((uint32_t)L_355>>8)))));
		uint8_t L_356 = (((uint8_t)((int32_t)((uint32_t)L_355>>8))));
		UInt32U5BU5D_t617* L_357 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_358 = V_7;
		NullCheck(L_357);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_357, (((uint8_t)L_358)));
		uint8_t L_359 = (((uint8_t)L_358));
		UInt32U5BU5D_t617* L_360 = ___ekey;
		NullCheck(L_360);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_360, ((int32_t)26));
		int32_t L_361 = ((int32_t)26);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_348, L_350))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_351, L_353))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_354, L_356))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_357, L_359))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_360, L_361))));
		UInt32U5BU5D_t617* L_362 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_363 = V_7;
		NullCheck(L_362);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_362, (((uintptr_t)((int32_t)((uint32_t)L_363>>((int32_t)24))))));
		uintptr_t L_364 = (((uintptr_t)((int32_t)((uint32_t)L_363>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_365 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_366 = V_6;
		NullCheck(L_365);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_365, (((uint8_t)((int32_t)((uint32_t)L_366>>((int32_t)16))))));
		uint8_t L_367 = (((uint8_t)((int32_t)((uint32_t)L_366>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_368 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_369 = V_5;
		NullCheck(L_368);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_368, (((uint8_t)((int32_t)((uint32_t)L_369>>8)))));
		uint8_t L_370 = (((uint8_t)((int32_t)((uint32_t)L_369>>8))));
		UInt32U5BU5D_t617* L_371 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_372 = V_4;
		NullCheck(L_371);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_371, (((uint8_t)L_372)));
		uint8_t L_373 = (((uint8_t)L_372));
		UInt32U5BU5D_t617* L_374 = ___ekey;
		NullCheck(L_374);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_374, ((int32_t)27));
		int32_t L_375 = ((int32_t)27);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_362, L_364))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_365, L_367))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_368, L_370))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_371, L_373))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_374, L_375))));
		UInt32U5BU5D_t617* L_376 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_377 = V_0;
		NullCheck(L_376);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_376, (((uintptr_t)((int32_t)((uint32_t)L_377>>((int32_t)24))))));
		uintptr_t L_378 = (((uintptr_t)((int32_t)((uint32_t)L_377>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_379 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_380 = V_3;
		NullCheck(L_379);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_379, (((uint8_t)((int32_t)((uint32_t)L_380>>((int32_t)16))))));
		uint8_t L_381 = (((uint8_t)((int32_t)((uint32_t)L_380>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_382 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_383 = V_2;
		NullCheck(L_382);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_382, (((uint8_t)((int32_t)((uint32_t)L_383>>8)))));
		uint8_t L_384 = (((uint8_t)((int32_t)((uint32_t)L_383>>8))));
		UInt32U5BU5D_t617* L_385 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_386 = V_1;
		NullCheck(L_385);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_385, (((uint8_t)L_386)));
		uint8_t L_387 = (((uint8_t)L_386));
		UInt32U5BU5D_t617* L_388 = ___ekey;
		NullCheck(L_388);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_388, ((int32_t)28));
		int32_t L_389 = ((int32_t)28);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_376, L_378))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_379, L_381))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_382, L_384))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_385, L_387))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_388, L_389))));
		UInt32U5BU5D_t617* L_390 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_391 = V_1;
		NullCheck(L_390);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_390, (((uintptr_t)((int32_t)((uint32_t)L_391>>((int32_t)24))))));
		uintptr_t L_392 = (((uintptr_t)((int32_t)((uint32_t)L_391>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_393 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_394 = V_0;
		NullCheck(L_393);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_393, (((uint8_t)((int32_t)((uint32_t)L_394>>((int32_t)16))))));
		uint8_t L_395 = (((uint8_t)((int32_t)((uint32_t)L_394>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_396 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_397 = V_3;
		NullCheck(L_396);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_396, (((uint8_t)((int32_t)((uint32_t)L_397>>8)))));
		uint8_t L_398 = (((uint8_t)((int32_t)((uint32_t)L_397>>8))));
		UInt32U5BU5D_t617* L_399 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_400 = V_2;
		NullCheck(L_399);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_399, (((uint8_t)L_400)));
		uint8_t L_401 = (((uint8_t)L_400));
		UInt32U5BU5D_t617* L_402 = ___ekey;
		NullCheck(L_402);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_402, ((int32_t)29));
		int32_t L_403 = ((int32_t)29);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_390, L_392))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_393, L_395))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_396, L_398))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_399, L_401))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_402, L_403))));
		UInt32U5BU5D_t617* L_404 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_405 = V_2;
		NullCheck(L_404);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_404, (((uintptr_t)((int32_t)((uint32_t)L_405>>((int32_t)24))))));
		uintptr_t L_406 = (((uintptr_t)((int32_t)((uint32_t)L_405>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_407 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_408 = V_1;
		NullCheck(L_407);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_407, (((uint8_t)((int32_t)((uint32_t)L_408>>((int32_t)16))))));
		uint8_t L_409 = (((uint8_t)((int32_t)((uint32_t)L_408>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_410 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_410, (((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint8_t L_412 = (((uint8_t)((int32_t)((uint32_t)L_411>>8))));
		UInt32U5BU5D_t617* L_413 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_414 = V_3;
		NullCheck(L_413);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_413, (((uint8_t)L_414)));
		uint8_t L_415 = (((uint8_t)L_414));
		UInt32U5BU5D_t617* L_416 = ___ekey;
		NullCheck(L_416);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_416, ((int32_t)30));
		int32_t L_417 = ((int32_t)30);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_404, L_406))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_407, L_409))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_410, L_412))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_413, L_415))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_416, L_417))));
		UInt32U5BU5D_t617* L_418 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_419 = V_3;
		NullCheck(L_418);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_418, (((uintptr_t)((int32_t)((uint32_t)L_419>>((int32_t)24))))));
		uintptr_t L_420 = (((uintptr_t)((int32_t)((uint32_t)L_419>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_421 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_422 = V_2;
		NullCheck(L_421);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_421, (((uint8_t)((int32_t)((uint32_t)L_422>>((int32_t)16))))));
		uint8_t L_423 = (((uint8_t)((int32_t)((uint32_t)L_422>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_424 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_425 = V_1;
		NullCheck(L_424);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_424, (((uint8_t)((int32_t)((uint32_t)L_425>>8)))));
		uint8_t L_426 = (((uint8_t)((int32_t)((uint32_t)L_425>>8))));
		UInt32U5BU5D_t617* L_427 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_428 = V_0;
		NullCheck(L_427);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_427, (((uint8_t)L_428)));
		uint8_t L_429 = (((uint8_t)L_428));
		UInt32U5BU5D_t617* L_430 = ___ekey;
		NullCheck(L_430);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_430, ((int32_t)31));
		int32_t L_431 = ((int32_t)31);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_418, L_420))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_421, L_423))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_424, L_426))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_427, L_429))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_430, L_431))));
		UInt32U5BU5D_t617* L_432 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_433 = V_4;
		NullCheck(L_432);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_432, (((uintptr_t)((int32_t)((uint32_t)L_433>>((int32_t)24))))));
		uintptr_t L_434 = (((uintptr_t)((int32_t)((uint32_t)L_433>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_435 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_436 = V_7;
		NullCheck(L_435);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_435, (((uint8_t)((int32_t)((uint32_t)L_436>>((int32_t)16))))));
		uint8_t L_437 = (((uint8_t)((int32_t)((uint32_t)L_436>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_438 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_439 = V_6;
		NullCheck(L_438);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_438, (((uint8_t)((int32_t)((uint32_t)L_439>>8)))));
		uint8_t L_440 = (((uint8_t)((int32_t)((uint32_t)L_439>>8))));
		UInt32U5BU5D_t617* L_441 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_442 = V_5;
		NullCheck(L_441);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_441, (((uint8_t)L_442)));
		uint8_t L_443 = (((uint8_t)L_442));
		UInt32U5BU5D_t617* L_444 = ___ekey;
		NullCheck(L_444);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_444, ((int32_t)32));
		int32_t L_445 = ((int32_t)32);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_432, L_434))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_435, L_437))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_438, L_440))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_441, L_443))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_444, L_445))));
		UInt32U5BU5D_t617* L_446 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_447 = V_5;
		NullCheck(L_446);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_446, (((uintptr_t)((int32_t)((uint32_t)L_447>>((int32_t)24))))));
		uintptr_t L_448 = (((uintptr_t)((int32_t)((uint32_t)L_447>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_449 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_450 = V_4;
		NullCheck(L_449);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_449, (((uint8_t)((int32_t)((uint32_t)L_450>>((int32_t)16))))));
		uint8_t L_451 = (((uint8_t)((int32_t)((uint32_t)L_450>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_452 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_453 = V_7;
		NullCheck(L_452);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_452, (((uint8_t)((int32_t)((uint32_t)L_453>>8)))));
		uint8_t L_454 = (((uint8_t)((int32_t)((uint32_t)L_453>>8))));
		UInt32U5BU5D_t617* L_455 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_456 = V_6;
		NullCheck(L_455);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_455, (((uint8_t)L_456)));
		uint8_t L_457 = (((uint8_t)L_456));
		UInt32U5BU5D_t617* L_458 = ___ekey;
		NullCheck(L_458);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_458, ((int32_t)33));
		int32_t L_459 = ((int32_t)33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_446, L_448))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_449, L_451))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_452, L_454))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_455, L_457))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_458, L_459))));
		UInt32U5BU5D_t617* L_460 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_461 = V_6;
		NullCheck(L_460);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_460, (((uintptr_t)((int32_t)((uint32_t)L_461>>((int32_t)24))))));
		uintptr_t L_462 = (((uintptr_t)((int32_t)((uint32_t)L_461>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_463 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_464 = V_5;
		NullCheck(L_463);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_463, (((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint8_t L_465 = (((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_466 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_467 = V_4;
		NullCheck(L_466);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_466, (((uint8_t)((int32_t)((uint32_t)L_467>>8)))));
		uint8_t L_468 = (((uint8_t)((int32_t)((uint32_t)L_467>>8))));
		UInt32U5BU5D_t617* L_469 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_470 = V_7;
		NullCheck(L_469);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_469, (((uint8_t)L_470)));
		uint8_t L_471 = (((uint8_t)L_470));
		UInt32U5BU5D_t617* L_472 = ___ekey;
		NullCheck(L_472);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_472, ((int32_t)34));
		int32_t L_473 = ((int32_t)34);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_460, L_462))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_463, L_465))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_466, L_468))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_469, L_471))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_472, L_473))));
		UInt32U5BU5D_t617* L_474 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_475 = V_7;
		NullCheck(L_474);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_474, (((uintptr_t)((int32_t)((uint32_t)L_475>>((int32_t)24))))));
		uintptr_t L_476 = (((uintptr_t)((int32_t)((uint32_t)L_475>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_477 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_478 = V_6;
		NullCheck(L_477);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_477, (((uint8_t)((int32_t)((uint32_t)L_478>>((int32_t)16))))));
		uint8_t L_479 = (((uint8_t)((int32_t)((uint32_t)L_478>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_480 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_481 = V_5;
		NullCheck(L_480);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_480, (((uint8_t)((int32_t)((uint32_t)L_481>>8)))));
		uint8_t L_482 = (((uint8_t)((int32_t)((uint32_t)L_481>>8))));
		UInt32U5BU5D_t617* L_483 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_484 = V_4;
		NullCheck(L_483);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_483, (((uint8_t)L_484)));
		uint8_t L_485 = (((uint8_t)L_484));
		UInt32U5BU5D_t617* L_486 = ___ekey;
		NullCheck(L_486);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_486, ((int32_t)35));
		int32_t L_487 = ((int32_t)35);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_474, L_476))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_477, L_479))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_480, L_482))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_483, L_485))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_486, L_487))));
		UInt32U5BU5D_t617* L_488 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_489 = V_0;
		NullCheck(L_488);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_488, (((uintptr_t)((int32_t)((uint32_t)L_489>>((int32_t)24))))));
		uintptr_t L_490 = (((uintptr_t)((int32_t)((uint32_t)L_489>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_491 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_492 = V_3;
		NullCheck(L_491);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_491, (((uint8_t)((int32_t)((uint32_t)L_492>>((int32_t)16))))));
		uint8_t L_493 = (((uint8_t)((int32_t)((uint32_t)L_492>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_494 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_495 = V_2;
		NullCheck(L_494);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_494, (((uint8_t)((int32_t)((uint32_t)L_495>>8)))));
		uint8_t L_496 = (((uint8_t)((int32_t)((uint32_t)L_495>>8))));
		UInt32U5BU5D_t617* L_497 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_498 = V_1;
		NullCheck(L_497);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_497, (((uint8_t)L_498)));
		uint8_t L_499 = (((uint8_t)L_498));
		UInt32U5BU5D_t617* L_500 = ___ekey;
		NullCheck(L_500);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_500, ((int32_t)36));
		int32_t L_501 = ((int32_t)36);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_488, L_490))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_491, L_493))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_494, L_496))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_497, L_499))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_500, L_501))));
		UInt32U5BU5D_t617* L_502 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_503 = V_1;
		NullCheck(L_502);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_502, (((uintptr_t)((int32_t)((uint32_t)L_503>>((int32_t)24))))));
		uintptr_t L_504 = (((uintptr_t)((int32_t)((uint32_t)L_503>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_505 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_506 = V_0;
		NullCheck(L_505);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_505, (((uint8_t)((int32_t)((uint32_t)L_506>>((int32_t)16))))));
		uint8_t L_507 = (((uint8_t)((int32_t)((uint32_t)L_506>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_508 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_509 = V_3;
		NullCheck(L_508);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_508, (((uint8_t)((int32_t)((uint32_t)L_509>>8)))));
		uint8_t L_510 = (((uint8_t)((int32_t)((uint32_t)L_509>>8))));
		UInt32U5BU5D_t617* L_511 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_512 = V_2;
		NullCheck(L_511);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_511, (((uint8_t)L_512)));
		uint8_t L_513 = (((uint8_t)L_512));
		UInt32U5BU5D_t617* L_514 = ___ekey;
		NullCheck(L_514);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_514, ((int32_t)37));
		int32_t L_515 = ((int32_t)37);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_502, L_504))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_505, L_507))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_508, L_510))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_511, L_513))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_514, L_515))));
		UInt32U5BU5D_t617* L_516 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_517 = V_2;
		NullCheck(L_516);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_516, (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24))))));
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_519 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_520 = V_1;
		NullCheck(L_519);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_519, (((uint8_t)((int32_t)((uint32_t)L_520>>((int32_t)16))))));
		uint8_t L_521 = (((uint8_t)((int32_t)((uint32_t)L_520>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_522 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_523 = V_0;
		NullCheck(L_522);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_522, (((uint8_t)((int32_t)((uint32_t)L_523>>8)))));
		uint8_t L_524 = (((uint8_t)((int32_t)((uint32_t)L_523>>8))));
		UInt32U5BU5D_t617* L_525 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_526 = V_3;
		NullCheck(L_525);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_525, (((uint8_t)L_526)));
		uint8_t L_527 = (((uint8_t)L_526));
		UInt32U5BU5D_t617* L_528 = ___ekey;
		NullCheck(L_528);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_528, ((int32_t)38));
		int32_t L_529 = ((int32_t)38);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_516, L_518))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_519, L_521))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_522, L_524))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_525, L_527))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_528, L_529))));
		UInt32U5BU5D_t617* L_530 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_531 = V_3;
		NullCheck(L_530);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_530, (((uintptr_t)((int32_t)((uint32_t)L_531>>((int32_t)24))))));
		uintptr_t L_532 = (((uintptr_t)((int32_t)((uint32_t)L_531>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_533 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_534 = V_2;
		NullCheck(L_533);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_533, (((uint8_t)((int32_t)((uint32_t)L_534>>((int32_t)16))))));
		uint8_t L_535 = (((uint8_t)((int32_t)((uint32_t)L_534>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_536 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_537 = V_1;
		NullCheck(L_536);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_536, (((uint8_t)((int32_t)((uint32_t)L_537>>8)))));
		uint8_t L_538 = (((uint8_t)((int32_t)((uint32_t)L_537>>8))));
		UInt32U5BU5D_t617* L_539 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_540 = V_0;
		NullCheck(L_539);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_539, (((uint8_t)L_540)));
		uint8_t L_541 = (((uint8_t)L_540));
		UInt32U5BU5D_t617* L_542 = ___ekey;
		NullCheck(L_542);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_542, ((int32_t)39));
		int32_t L_543 = ((int32_t)39);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_530, L_532))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_533, L_535))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_536, L_538))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_539, L_541))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_542, L_543))));
		int32_t L_544 = (__this->___Nr_14);
		if ((((int32_t)L_544) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_545 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_546 = V_4;
		NullCheck(L_545);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_545, (((uintptr_t)((int32_t)((uint32_t)L_546>>((int32_t)24))))));
		uintptr_t L_547 = (((uintptr_t)((int32_t)((uint32_t)L_546>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_548 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_549 = V_7;
		NullCheck(L_548);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_548, (((uint8_t)((int32_t)((uint32_t)L_549>>((int32_t)16))))));
		uint8_t L_550 = (((uint8_t)((int32_t)((uint32_t)L_549>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_551 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_552 = V_6;
		NullCheck(L_551);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_551, (((uint8_t)((int32_t)((uint32_t)L_552>>8)))));
		uint8_t L_553 = (((uint8_t)((int32_t)((uint32_t)L_552>>8))));
		UInt32U5BU5D_t617* L_554 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_555 = V_5;
		NullCheck(L_554);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_554, (((uint8_t)L_555)));
		uint8_t L_556 = (((uint8_t)L_555));
		UInt32U5BU5D_t617* L_557 = ___ekey;
		NullCheck(L_557);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_557, ((int32_t)40));
		int32_t L_558 = ((int32_t)40);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_545, L_547))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_548, L_550))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_551, L_553))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_554, L_556))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_557, L_558))));
		UInt32U5BU5D_t617* L_559 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_560 = V_5;
		NullCheck(L_559);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_559, (((uintptr_t)((int32_t)((uint32_t)L_560>>((int32_t)24))))));
		uintptr_t L_561 = (((uintptr_t)((int32_t)((uint32_t)L_560>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_562 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_563 = V_4;
		NullCheck(L_562);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_562, (((uint8_t)((int32_t)((uint32_t)L_563>>((int32_t)16))))));
		uint8_t L_564 = (((uint8_t)((int32_t)((uint32_t)L_563>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_565 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_566 = V_7;
		NullCheck(L_565);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_565, (((uint8_t)((int32_t)((uint32_t)L_566>>8)))));
		uint8_t L_567 = (((uint8_t)((int32_t)((uint32_t)L_566>>8))));
		UInt32U5BU5D_t617* L_568 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_569 = V_6;
		NullCheck(L_568);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_568, (((uint8_t)L_569)));
		uint8_t L_570 = (((uint8_t)L_569));
		UInt32U5BU5D_t617* L_571 = ___ekey;
		NullCheck(L_571);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_571, ((int32_t)41));
		int32_t L_572 = ((int32_t)41);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_559, L_561))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_562, L_564))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_565, L_567))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_568, L_570))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_571, L_572))));
		UInt32U5BU5D_t617* L_573 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_574 = V_6;
		NullCheck(L_573);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_573, (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24))))));
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_576 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_577 = V_5;
		NullCheck(L_576);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_576, (((uint8_t)((int32_t)((uint32_t)L_577>>((int32_t)16))))));
		uint8_t L_578 = (((uint8_t)((int32_t)((uint32_t)L_577>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_579 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_580 = V_4;
		NullCheck(L_579);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_579, (((uint8_t)((int32_t)((uint32_t)L_580>>8)))));
		uint8_t L_581 = (((uint8_t)((int32_t)((uint32_t)L_580>>8))));
		UInt32U5BU5D_t617* L_582 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_583 = V_7;
		NullCheck(L_582);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_582, (((uint8_t)L_583)));
		uint8_t L_584 = (((uint8_t)L_583));
		UInt32U5BU5D_t617* L_585 = ___ekey;
		NullCheck(L_585);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_585, ((int32_t)42));
		int32_t L_586 = ((int32_t)42);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_573, L_575))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_576, L_578))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_579, L_581))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_582, L_584))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_585, L_586))));
		UInt32U5BU5D_t617* L_587 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_588 = V_7;
		NullCheck(L_587);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_587, (((uintptr_t)((int32_t)((uint32_t)L_588>>((int32_t)24))))));
		uintptr_t L_589 = (((uintptr_t)((int32_t)((uint32_t)L_588>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_590 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_591 = V_6;
		NullCheck(L_590);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_590, (((uint8_t)((int32_t)((uint32_t)L_591>>((int32_t)16))))));
		uint8_t L_592 = (((uint8_t)((int32_t)((uint32_t)L_591>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_593 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_594 = V_5;
		NullCheck(L_593);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_593, (((uint8_t)((int32_t)((uint32_t)L_594>>8)))));
		uint8_t L_595 = (((uint8_t)((int32_t)((uint32_t)L_594>>8))));
		UInt32U5BU5D_t617* L_596 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_597 = V_4;
		NullCheck(L_596);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_596, (((uint8_t)L_597)));
		uint8_t L_598 = (((uint8_t)L_597));
		UInt32U5BU5D_t617* L_599 = ___ekey;
		NullCheck(L_599);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_599, ((int32_t)43));
		int32_t L_600 = ((int32_t)43);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_587, L_589))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_590, L_592))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_593, L_595))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_596, L_598))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_599, L_600))));
		UInt32U5BU5D_t617* L_601 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_602 = V_0;
		NullCheck(L_601);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_601, (((uintptr_t)((int32_t)((uint32_t)L_602>>((int32_t)24))))));
		uintptr_t L_603 = (((uintptr_t)((int32_t)((uint32_t)L_602>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_604 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_605 = V_3;
		NullCheck(L_604);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_604, (((uint8_t)((int32_t)((uint32_t)L_605>>((int32_t)16))))));
		uint8_t L_606 = (((uint8_t)((int32_t)((uint32_t)L_605>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_607 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_608 = V_2;
		NullCheck(L_607);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_607, (((uint8_t)((int32_t)((uint32_t)L_608>>8)))));
		uint8_t L_609 = (((uint8_t)((int32_t)((uint32_t)L_608>>8))));
		UInt32U5BU5D_t617* L_610 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_611 = V_1;
		NullCheck(L_610);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_610, (((uint8_t)L_611)));
		uint8_t L_612 = (((uint8_t)L_611));
		UInt32U5BU5D_t617* L_613 = ___ekey;
		NullCheck(L_613);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_613, ((int32_t)44));
		int32_t L_614 = ((int32_t)44);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_601, L_603))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_604, L_606))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_607, L_609))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_610, L_612))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_613, L_614))));
		UInt32U5BU5D_t617* L_615 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_616 = V_1;
		NullCheck(L_615);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_615, (((uintptr_t)((int32_t)((uint32_t)L_616>>((int32_t)24))))));
		uintptr_t L_617 = (((uintptr_t)((int32_t)((uint32_t)L_616>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_618 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_619 = V_0;
		NullCheck(L_618);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_618, (((uint8_t)((int32_t)((uint32_t)L_619>>((int32_t)16))))));
		uint8_t L_620 = (((uint8_t)((int32_t)((uint32_t)L_619>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_621 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_622 = V_3;
		NullCheck(L_621);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_621, (((uint8_t)((int32_t)((uint32_t)L_622>>8)))));
		uint8_t L_623 = (((uint8_t)((int32_t)((uint32_t)L_622>>8))));
		UInt32U5BU5D_t617* L_624 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_625 = V_2;
		NullCheck(L_624);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_624, (((uint8_t)L_625)));
		uint8_t L_626 = (((uint8_t)L_625));
		UInt32U5BU5D_t617* L_627 = ___ekey;
		NullCheck(L_627);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_627, ((int32_t)45));
		int32_t L_628 = ((int32_t)45);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_615, L_617))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_618, L_620))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_621, L_623))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_624, L_626))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_627, L_628))));
		UInt32U5BU5D_t617* L_629 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_630 = V_2;
		NullCheck(L_629);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_629, (((uintptr_t)((int32_t)((uint32_t)L_630>>((int32_t)24))))));
		uintptr_t L_631 = (((uintptr_t)((int32_t)((uint32_t)L_630>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_632 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_633 = V_1;
		NullCheck(L_632);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_632, (((uint8_t)((int32_t)((uint32_t)L_633>>((int32_t)16))))));
		uint8_t L_634 = (((uint8_t)((int32_t)((uint32_t)L_633>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_635 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_636 = V_0;
		NullCheck(L_635);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_635, (((uint8_t)((int32_t)((uint32_t)L_636>>8)))));
		uint8_t L_637 = (((uint8_t)((int32_t)((uint32_t)L_636>>8))));
		UInt32U5BU5D_t617* L_638 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_639 = V_3;
		NullCheck(L_638);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_638, (((uint8_t)L_639)));
		uint8_t L_640 = (((uint8_t)L_639));
		UInt32U5BU5D_t617* L_641 = ___ekey;
		NullCheck(L_641);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_641, ((int32_t)46));
		int32_t L_642 = ((int32_t)46);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_629, L_631))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_632, L_634))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_635, L_637))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_638, L_640))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_641, L_642))));
		UInt32U5BU5D_t617* L_643 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_644 = V_3;
		NullCheck(L_643);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_643, (((uintptr_t)((int32_t)((uint32_t)L_644>>((int32_t)24))))));
		uintptr_t L_645 = (((uintptr_t)((int32_t)((uint32_t)L_644>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_646 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_647 = V_2;
		NullCheck(L_646);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_646, (((uint8_t)((int32_t)((uint32_t)L_647>>((int32_t)16))))));
		uint8_t L_648 = (((uint8_t)((int32_t)((uint32_t)L_647>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_649 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_650 = V_1;
		NullCheck(L_649);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_649, (((uint8_t)((int32_t)((uint32_t)L_650>>8)))));
		uint8_t L_651 = (((uint8_t)((int32_t)((uint32_t)L_650>>8))));
		UInt32U5BU5D_t617* L_652 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_653 = V_0;
		NullCheck(L_652);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_652, (((uint8_t)L_653)));
		uint8_t L_654 = (((uint8_t)L_653));
		UInt32U5BU5D_t617* L_655 = ___ekey;
		NullCheck(L_655);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_655, ((int32_t)47));
		int32_t L_656 = ((int32_t)47);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_643, L_645))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_646, L_648))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_649, L_651))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_652, L_654))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_655, L_656))));
		V_8 = ((int32_t)48);
		int32_t L_657 = (__this->___Nr_14);
		if ((((int32_t)L_657) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t617* L_658 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_659 = V_4;
		NullCheck(L_658);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_658, (((uintptr_t)((int32_t)((uint32_t)L_659>>((int32_t)24))))));
		uintptr_t L_660 = (((uintptr_t)((int32_t)((uint32_t)L_659>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_661 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_662 = V_7;
		NullCheck(L_661);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_661, (((uint8_t)((int32_t)((uint32_t)L_662>>((int32_t)16))))));
		uint8_t L_663 = (((uint8_t)((int32_t)((uint32_t)L_662>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_664 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_665 = V_6;
		NullCheck(L_664);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_664, (((uint8_t)((int32_t)((uint32_t)L_665>>8)))));
		uint8_t L_666 = (((uint8_t)((int32_t)((uint32_t)L_665>>8))));
		UInt32U5BU5D_t617* L_667 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_668 = V_5;
		NullCheck(L_667);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_667, (((uint8_t)L_668)));
		uint8_t L_669 = (((uint8_t)L_668));
		UInt32U5BU5D_t617* L_670 = ___ekey;
		NullCheck(L_670);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_670, ((int32_t)48));
		int32_t L_671 = ((int32_t)48);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_658, L_660))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_661, L_663))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_664, L_666))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_667, L_669))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_670, L_671))));
		UInt32U5BU5D_t617* L_672 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_673 = V_5;
		NullCheck(L_672);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_672, (((uintptr_t)((int32_t)((uint32_t)L_673>>((int32_t)24))))));
		uintptr_t L_674 = (((uintptr_t)((int32_t)((uint32_t)L_673>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_675 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_676 = V_4;
		NullCheck(L_675);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_675, (((uint8_t)((int32_t)((uint32_t)L_676>>((int32_t)16))))));
		uint8_t L_677 = (((uint8_t)((int32_t)((uint32_t)L_676>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_678 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_679 = V_7;
		NullCheck(L_678);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_678, (((uint8_t)((int32_t)((uint32_t)L_679>>8)))));
		uint8_t L_680 = (((uint8_t)((int32_t)((uint32_t)L_679>>8))));
		UInt32U5BU5D_t617* L_681 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_682 = V_6;
		NullCheck(L_681);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_681, (((uint8_t)L_682)));
		uint8_t L_683 = (((uint8_t)L_682));
		UInt32U5BU5D_t617* L_684 = ___ekey;
		NullCheck(L_684);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_684, ((int32_t)49));
		int32_t L_685 = ((int32_t)49);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_672, L_674))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_675, L_677))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_678, L_680))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_681, L_683))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_684, L_685))));
		UInt32U5BU5D_t617* L_686 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_687 = V_6;
		NullCheck(L_686);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_686, (((uintptr_t)((int32_t)((uint32_t)L_687>>((int32_t)24))))));
		uintptr_t L_688 = (((uintptr_t)((int32_t)((uint32_t)L_687>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_689 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_690 = V_5;
		NullCheck(L_689);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_689, (((uint8_t)((int32_t)((uint32_t)L_690>>((int32_t)16))))));
		uint8_t L_691 = (((uint8_t)((int32_t)((uint32_t)L_690>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_692 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_693 = V_4;
		NullCheck(L_692);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_692, (((uint8_t)((int32_t)((uint32_t)L_693>>8)))));
		uint8_t L_694 = (((uint8_t)((int32_t)((uint32_t)L_693>>8))));
		UInt32U5BU5D_t617* L_695 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_696 = V_7;
		NullCheck(L_695);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_695, (((uint8_t)L_696)));
		uint8_t L_697 = (((uint8_t)L_696));
		UInt32U5BU5D_t617* L_698 = ___ekey;
		NullCheck(L_698);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_698, ((int32_t)50));
		int32_t L_699 = ((int32_t)50);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_686, L_688))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_689, L_691))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_692, L_694))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_695, L_697))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_698, L_699))));
		UInt32U5BU5D_t617* L_700 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_701 = V_7;
		NullCheck(L_700);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_700, (((uintptr_t)((int32_t)((uint32_t)L_701>>((int32_t)24))))));
		uintptr_t L_702 = (((uintptr_t)((int32_t)((uint32_t)L_701>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_703 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_704 = V_6;
		NullCheck(L_703);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_703, (((uint8_t)((int32_t)((uint32_t)L_704>>((int32_t)16))))));
		uint8_t L_705 = (((uint8_t)((int32_t)((uint32_t)L_704>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_706 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_707 = V_5;
		NullCheck(L_706);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_706, (((uint8_t)((int32_t)((uint32_t)L_707>>8)))));
		uint8_t L_708 = (((uint8_t)((int32_t)((uint32_t)L_707>>8))));
		UInt32U5BU5D_t617* L_709 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_710 = V_4;
		NullCheck(L_709);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_709, (((uint8_t)L_710)));
		uint8_t L_711 = (((uint8_t)L_710));
		UInt32U5BU5D_t617* L_712 = ___ekey;
		NullCheck(L_712);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_712, ((int32_t)51));
		int32_t L_713 = ((int32_t)51);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_700, L_702))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_703, L_705))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_706, L_708))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_709, L_711))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_712, L_713))));
		UInt32U5BU5D_t617* L_714 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_714, (((uintptr_t)((int32_t)((uint32_t)L_715>>((int32_t)24))))));
		uintptr_t L_716 = (((uintptr_t)((int32_t)((uint32_t)L_715>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_717 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_718 = V_3;
		NullCheck(L_717);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_717, (((uint8_t)((int32_t)((uint32_t)L_718>>((int32_t)16))))));
		uint8_t L_719 = (((uint8_t)((int32_t)((uint32_t)L_718>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_720 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_721 = V_2;
		NullCheck(L_720);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_720, (((uint8_t)((int32_t)((uint32_t)L_721>>8)))));
		uint8_t L_722 = (((uint8_t)((int32_t)((uint32_t)L_721>>8))));
		UInt32U5BU5D_t617* L_723 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_724 = V_1;
		NullCheck(L_723);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_723, (((uint8_t)L_724)));
		uint8_t L_725 = (((uint8_t)L_724));
		UInt32U5BU5D_t617* L_726 = ___ekey;
		NullCheck(L_726);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_726, ((int32_t)52));
		int32_t L_727 = ((int32_t)52);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_714, L_716))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_717, L_719))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_720, L_722))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_723, L_725))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_726, L_727))));
		UInt32U5BU5D_t617* L_728 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_729 = V_1;
		NullCheck(L_728);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_728, (((uintptr_t)((int32_t)((uint32_t)L_729>>((int32_t)24))))));
		uintptr_t L_730 = (((uintptr_t)((int32_t)((uint32_t)L_729>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_731 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_732 = V_0;
		NullCheck(L_731);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_731, (((uint8_t)((int32_t)((uint32_t)L_732>>((int32_t)16))))));
		uint8_t L_733 = (((uint8_t)((int32_t)((uint32_t)L_732>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_734 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_735 = V_3;
		NullCheck(L_734);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_734, (((uint8_t)((int32_t)((uint32_t)L_735>>8)))));
		uint8_t L_736 = (((uint8_t)((int32_t)((uint32_t)L_735>>8))));
		UInt32U5BU5D_t617* L_737 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_738 = V_2;
		NullCheck(L_737);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_737, (((uint8_t)L_738)));
		uint8_t L_739 = (((uint8_t)L_738));
		UInt32U5BU5D_t617* L_740 = ___ekey;
		NullCheck(L_740);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_740, ((int32_t)53));
		int32_t L_741 = ((int32_t)53);
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_728, L_730))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_731, L_733))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_734, L_736))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_737, L_739))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_740, L_741))));
		UInt32U5BU5D_t617* L_742 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_743 = V_2;
		NullCheck(L_742);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_742, (((uintptr_t)((int32_t)((uint32_t)L_743>>((int32_t)24))))));
		uintptr_t L_744 = (((uintptr_t)((int32_t)((uint32_t)L_743>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_745 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_746 = V_1;
		NullCheck(L_745);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_745, (((uint8_t)((int32_t)((uint32_t)L_746>>((int32_t)16))))));
		uint8_t L_747 = (((uint8_t)((int32_t)((uint32_t)L_746>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_748 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_749 = V_0;
		NullCheck(L_748);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_748, (((uint8_t)((int32_t)((uint32_t)L_749>>8)))));
		uint8_t L_750 = (((uint8_t)((int32_t)((uint32_t)L_749>>8))));
		UInt32U5BU5D_t617* L_751 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_752 = V_3;
		NullCheck(L_751);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_751, (((uint8_t)L_752)));
		uint8_t L_753 = (((uint8_t)L_752));
		UInt32U5BU5D_t617* L_754 = ___ekey;
		NullCheck(L_754);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_754, ((int32_t)54));
		int32_t L_755 = ((int32_t)54);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_742, L_744))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_745, L_747))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_748, L_750))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_751, L_753))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_754, L_755))));
		UInt32U5BU5D_t617* L_756 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT0_22;
		uint32_t L_757 = V_3;
		NullCheck(L_756);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_756, (((uintptr_t)((int32_t)((uint32_t)L_757>>((int32_t)24))))));
		uintptr_t L_758 = (((uintptr_t)((int32_t)((uint32_t)L_757>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_759 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT1_23;
		uint32_t L_760 = V_2;
		NullCheck(L_759);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_759, (((uint8_t)((int32_t)((uint32_t)L_760>>((int32_t)16))))));
		uint8_t L_761 = (((uint8_t)((int32_t)((uint32_t)L_760>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_762 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT2_24;
		uint32_t L_763 = V_1;
		NullCheck(L_762);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_762, (((uint8_t)((int32_t)((uint32_t)L_763>>8)))));
		uint8_t L_764 = (((uint8_t)((int32_t)((uint32_t)L_763>>8))));
		UInt32U5BU5D_t617* L_765 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iT3_25;
		uint32_t L_766 = V_0;
		NullCheck(L_765);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_765, (((uint8_t)L_766)));
		uint8_t L_767 = (((uint8_t)L_766));
		UInt32U5BU5D_t617* L_768 = ___ekey;
		NullCheck(L_768);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_768, ((int32_t)55));
		int32_t L_769 = ((int32_t)55);
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_756, L_758))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_759, L_761))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_762, L_764))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_765, L_767))))^(int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_768, L_769))));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t112* L_770 = ___outdata;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t618_il2cpp_TypeInfo_var);
		ByteU5BU5D_t112* L_771 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_772 = V_4;
		NullCheck(L_771);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_771, (((uintptr_t)((int32_t)((uint32_t)L_772>>((int32_t)24))))));
		uintptr_t L_773 = (((uintptr_t)((int32_t)((uint32_t)L_772>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_774 = ___ekey;
		int32_t L_775 = V_8;
		NullCheck(L_774);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_774, L_775);
		int32_t L_776 = L_775;
		NullCheck(L_770);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_770, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_770, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_771, L_773))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_774, L_776))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_777 = ___outdata;
		ByteU5BU5D_t112* L_778 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_779 = V_7;
		NullCheck(L_778);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_778, (((uint8_t)((int32_t)((uint32_t)L_779>>((int32_t)16))))));
		uint8_t L_780 = (((uint8_t)((int32_t)((uint32_t)L_779>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_781 = ___ekey;
		int32_t L_782 = V_8;
		NullCheck(L_781);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_781, L_782);
		int32_t L_783 = L_782;
		NullCheck(L_777);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_777, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_777, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_778, L_780))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_781, L_783))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_784 = ___outdata;
		ByteU5BU5D_t112* L_785 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_786 = V_6;
		NullCheck(L_785);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_785, (((uint8_t)((int32_t)((uint32_t)L_786>>8)))));
		uint8_t L_787 = (((uint8_t)((int32_t)((uint32_t)L_786>>8))));
		UInt32U5BU5D_t617* L_788 = ___ekey;
		int32_t L_789 = V_8;
		NullCheck(L_788);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_788, L_789);
		int32_t L_790 = L_789;
		NullCheck(L_784);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_784, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_784, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_785, L_787))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_788, L_790))>>8))))))));
		ByteU5BU5D_t112* L_791 = ___outdata;
		ByteU5BU5D_t112* L_792 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_793 = V_5;
		NullCheck(L_792);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_792, (((uint8_t)L_793)));
		uint8_t L_794 = (((uint8_t)L_793));
		UInt32U5BU5D_t617* L_795 = ___ekey;
		int32_t L_796 = V_8;
		int32_t L_797 = L_796;
		V_8 = ((int32_t)((int32_t)L_797+(int32_t)1));
		NullCheck(L_795);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_795, L_797);
		int32_t L_798 = L_797;
		NullCheck(L_791);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_791, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_791, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_792, L_794))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_795, L_798))))))));
		ByteU5BU5D_t112* L_799 = ___outdata;
		ByteU5BU5D_t112* L_800 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_801 = V_5;
		NullCheck(L_800);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_800, (((uintptr_t)((int32_t)((uint32_t)L_801>>((int32_t)24))))));
		uintptr_t L_802 = (((uintptr_t)((int32_t)((uint32_t)L_801>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_803 = ___ekey;
		int32_t L_804 = V_8;
		NullCheck(L_803);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_803, L_804);
		int32_t L_805 = L_804;
		NullCheck(L_799);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_799, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_799, 4)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_800, L_802))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_803, L_805))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_806 = ___outdata;
		ByteU5BU5D_t112* L_807 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_808 = V_4;
		NullCheck(L_807);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_807, (((uint8_t)((int32_t)((uint32_t)L_808>>((int32_t)16))))));
		uint8_t L_809 = (((uint8_t)((int32_t)((uint32_t)L_808>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_810 = ___ekey;
		int32_t L_811 = V_8;
		NullCheck(L_810);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_810, L_811);
		int32_t L_812 = L_811;
		NullCheck(L_806);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_806, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_806, 5)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_807, L_809))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_810, L_812))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_813 = ___outdata;
		ByteU5BU5D_t112* L_814 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_815 = V_7;
		NullCheck(L_814);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_814, (((uint8_t)((int32_t)((uint32_t)L_815>>8)))));
		uint8_t L_816 = (((uint8_t)((int32_t)((uint32_t)L_815>>8))));
		UInt32U5BU5D_t617* L_817 = ___ekey;
		int32_t L_818 = V_8;
		NullCheck(L_817);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_817, L_818);
		int32_t L_819 = L_818;
		NullCheck(L_813);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_813, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_813, 6)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_814, L_816))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_817, L_819))>>8))))))));
		ByteU5BU5D_t112* L_820 = ___outdata;
		ByteU5BU5D_t112* L_821 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_822 = V_6;
		NullCheck(L_821);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_821, (((uint8_t)L_822)));
		uint8_t L_823 = (((uint8_t)L_822));
		UInt32U5BU5D_t617* L_824 = ___ekey;
		int32_t L_825 = V_8;
		int32_t L_826 = L_825;
		V_8 = ((int32_t)((int32_t)L_826+(int32_t)1));
		NullCheck(L_824);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_824, L_826);
		int32_t L_827 = L_826;
		NullCheck(L_820);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_820, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_820, 7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_821, L_823))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_824, L_827))))))));
		ByteU5BU5D_t112* L_828 = ___outdata;
		ByteU5BU5D_t112* L_829 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_830 = V_6;
		NullCheck(L_829);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_829, (((uintptr_t)((int32_t)((uint32_t)L_830>>((int32_t)24))))));
		uintptr_t L_831 = (((uintptr_t)((int32_t)((uint32_t)L_830>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_832 = ___ekey;
		int32_t L_833 = V_8;
		NullCheck(L_832);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_832, L_833);
		int32_t L_834 = L_833;
		NullCheck(L_828);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_828, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_828, 8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_829, L_831))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_832, L_834))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_835 = ___outdata;
		ByteU5BU5D_t112* L_836 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_837 = V_5;
		NullCheck(L_836);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_836, (((uint8_t)((int32_t)((uint32_t)L_837>>((int32_t)16))))));
		uint8_t L_838 = (((uint8_t)((int32_t)((uint32_t)L_837>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_839 = ___ekey;
		int32_t L_840 = V_8;
		NullCheck(L_839);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_839, L_840);
		int32_t L_841 = L_840;
		NullCheck(L_835);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_835, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_835, ((int32_t)9))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_836, L_838))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_839, L_841))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_842 = ___outdata;
		ByteU5BU5D_t112* L_843 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_844 = V_4;
		NullCheck(L_843);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_843, (((uint8_t)((int32_t)((uint32_t)L_844>>8)))));
		uint8_t L_845 = (((uint8_t)((int32_t)((uint32_t)L_844>>8))));
		UInt32U5BU5D_t617* L_846 = ___ekey;
		int32_t L_847 = V_8;
		NullCheck(L_846);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_846, L_847);
		int32_t L_848 = L_847;
		NullCheck(L_842);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_842, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_842, ((int32_t)10))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_843, L_845))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_846, L_848))>>8))))))));
		ByteU5BU5D_t112* L_849 = ___outdata;
		ByteU5BU5D_t112* L_850 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_851 = V_7;
		NullCheck(L_850);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_850, (((uint8_t)L_851)));
		uint8_t L_852 = (((uint8_t)L_851));
		UInt32U5BU5D_t617* L_853 = ___ekey;
		int32_t L_854 = V_8;
		int32_t L_855 = L_854;
		V_8 = ((int32_t)((int32_t)L_855+(int32_t)1));
		NullCheck(L_853);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_853, L_855);
		int32_t L_856 = L_855;
		NullCheck(L_849);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_849, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_849, ((int32_t)11))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_850, L_852))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_853, L_856))))))));
		ByteU5BU5D_t112* L_857 = ___outdata;
		ByteU5BU5D_t112* L_858 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_859 = V_7;
		NullCheck(L_858);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_858, (((uintptr_t)((int32_t)((uint32_t)L_859>>((int32_t)24))))));
		uintptr_t L_860 = (((uintptr_t)((int32_t)((uint32_t)L_859>>((int32_t)24)))));
		UInt32U5BU5D_t617* L_861 = ___ekey;
		int32_t L_862 = V_8;
		NullCheck(L_861);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_861, L_862);
		int32_t L_863 = L_862;
		NullCheck(L_857);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_857, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_857, ((int32_t)12))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_858, L_860))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_861, L_863))>>((int32_t)24)))))))));
		ByteU5BU5D_t112* L_864 = ___outdata;
		ByteU5BU5D_t112* L_865 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_866 = V_6;
		NullCheck(L_865);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_865, (((uint8_t)((int32_t)((uint32_t)L_866>>((int32_t)16))))));
		uint8_t L_867 = (((uint8_t)((int32_t)((uint32_t)L_866>>((int32_t)16)))));
		UInt32U5BU5D_t617* L_868 = ___ekey;
		int32_t L_869 = V_8;
		NullCheck(L_868);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_868, L_869);
		int32_t L_870 = L_869;
		NullCheck(L_864);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_864, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_864, ((int32_t)13))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_865, L_867))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_868, L_870))>>((int32_t)16)))))))));
		ByteU5BU5D_t112* L_871 = ___outdata;
		ByteU5BU5D_t112* L_872 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_873 = V_5;
		NullCheck(L_872);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_872, (((uint8_t)((int32_t)((uint32_t)L_873>>8)))));
		uint8_t L_874 = (((uint8_t)((int32_t)((uint32_t)L_873>>8))));
		UInt32U5BU5D_t617* L_875 = ___ekey;
		int32_t L_876 = V_8;
		NullCheck(L_875);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_875, L_876);
		int32_t L_877 = L_876;
		NullCheck(L_871);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_871, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_871, ((int32_t)14))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_872, L_874))^(int32_t)(((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_875, L_877))>>8))))))));
		ByteU5BU5D_t112* L_878 = ___outdata;
		ByteU5BU5D_t112* L_879 = ((AesTransform_t618_StaticFields*)AesTransform_t618_il2cpp_TypeInfo_var->static_fields)->___iSBox_17;
		uint32_t L_880 = V_4;
		NullCheck(L_879);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_879, (((uint8_t)L_880)));
		uint8_t L_881 = (((uint8_t)L_880));
		UInt32U5BU5D_t617* L_882 = ___ekey;
		int32_t L_883 = V_8;
		int32_t L_884 = L_883;
		V_8 = ((int32_t)((int32_t)L_884+(int32_t)1));
		NullCheck(L_882);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_882, L_884);
		int32_t L_885 = L_884;
		NullCheck(L_878);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_878, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_878, ((int32_t)15))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_879, L_881))^(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_882, L_885))))))));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$120
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeUMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t619_marshal(const U24ArrayTypeU24120_t619& unmarshaled, U24ArrayTypeU24120_t619_marshaled& marshaled)
{
}
void U24ArrayTypeU24120_t619_marshal_back(const U24ArrayTypeU24120_t619_marshaled& marshaled, U24ArrayTypeU24120_t619& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t619_marshal_cleanup(U24ArrayTypeU24120_t619_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t620_marshal(const U24ArrayTypeU24256_t620& unmarshaled, U24ArrayTypeU24256_t620_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t620_marshal_back(const U24ArrayTypeU24256_t620_marshaled& marshaled, U24ArrayTypeU24256_t620& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t620_marshal_cleanup(U24ArrayTypeU24256_t620_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1024
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t621_marshal(const U24ArrayTypeU241024_t621& unmarshaled, U24ArrayTypeU241024_t621_marshaled& marshaled)
{
}
void U24ArrayTypeU241024_t621_marshal_back(const U24ArrayTypeU241024_t621_marshaled& marshaled, U24ArrayTypeU241024_t621& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t621_marshal_cleanup(U24ArrayTypeU241024_t621_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
