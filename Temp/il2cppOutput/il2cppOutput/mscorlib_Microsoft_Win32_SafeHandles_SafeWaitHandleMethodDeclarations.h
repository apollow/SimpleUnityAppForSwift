#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t803;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeWaitHandle__ctor_m4247 (SafeWaitHandle_t803 * __this, IntPtr_t ___existingHandle, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
extern "C" bool SafeWaitHandle_ReleaseHandle_m4248 (SafeWaitHandle_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
