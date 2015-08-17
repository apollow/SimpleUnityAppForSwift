#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Locale
struct Locale_t798;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t207;

// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m4240 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C" String_t* Locale_GetText_m4241 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t207* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
