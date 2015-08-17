#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t419;
// System.Net.WebRequest
struct WebRequest_t418;
// System.Uri
struct Uri_t191;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1456 (FileWebRequestCreator_t419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t418 * FileWebRequestCreator_Create_m1457 (FileWebRequestCreator_t419 * __this, Uri_t191 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
