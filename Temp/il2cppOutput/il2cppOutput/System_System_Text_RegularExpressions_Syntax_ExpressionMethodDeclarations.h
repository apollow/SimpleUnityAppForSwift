#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t533;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t577;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t551;

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m2071 (Expression_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m2072 (Expression_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t551 * Expression_GetAnchorInfo_m2073 (Expression_t533 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
