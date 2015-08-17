#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t424;
// System.Net.WebRequest
struct WebRequest_t418;
// System.Uri
struct Uri_t191;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1464 (HttpRequestCreator_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t418 * HttpRequestCreator_Create_m1465 (HttpRequestCreator_t424 * __this, Uri_t191 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
