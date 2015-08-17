#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t420;
// System.Net.WebRequest
struct WebRequest_t418;
// System.Uri
struct Uri_t191;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1458 (FtpRequestCreator_t420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t418 * FtpRequestCreator_Create_m1459 (FtpRequestCreator_t420 * __this, Uri_t191 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
