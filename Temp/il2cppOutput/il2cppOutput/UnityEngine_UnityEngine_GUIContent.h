﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t40;
// UnityEngine.GUIContent
struct GUIContent_t81;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUIContent
struct  GUIContent_t81  : public Object_t
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t40 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
struct GUIContent_t81_StaticFields{
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t81 * ___none_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t81 * ___s_Text_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t81 * ___s_Image_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t81 * ___s_TextImage_6;
};
