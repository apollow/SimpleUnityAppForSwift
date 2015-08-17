#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.FactoryCache/Key
struct Key_t507;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Key__ctor_m1875 (Key_t507 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
extern "C" int32_t Key_GetHashCode_m1876 (Key_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
extern "C" bool Key_Equals_m1877 (Key_t507 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
extern "C" String_t* Key_ToString_m1878 (Key_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
