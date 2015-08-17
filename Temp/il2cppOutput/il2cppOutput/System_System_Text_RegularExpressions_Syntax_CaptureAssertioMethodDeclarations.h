#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t544;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t537;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t542;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t543;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t577;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m2114 (CaptureAssertion_t544 * __this, Literal_t543 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m2115 (CaptureAssertion_t544 * __this, CapturingGroup_t537 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m2116 (CaptureAssertion_t544 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m2117 (CaptureAssertion_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t542 * CaptureAssertion_get_Alternate_m2118 (CaptureAssertion_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
