#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t700;
// System.IO.Stream
struct Stream_t699;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t74;
// System.Threading.WaitHandle
struct WaitHandle_t745;
// System.AsyncCallback
struct AsyncCallback_t54;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m2979 (ReceiveRecordAsyncResult_t700 * __this, AsyncCallback_t54 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t112* ___initialBuffer, Stream_t699 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t699 * ReceiveRecordAsyncResult_get_Record_m2980 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t112* ReceiveRecordAsyncResult_get_ResultingBuffer_m2981 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t112* ReceiveRecordAsyncResult_get_InitialBuffer_m2982 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2983 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t74 * ReceiveRecordAsyncResult_get_AsyncException_m2984 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m2985 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t745 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m2986 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m2987 (ReceiveRecordAsyncResult_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2988 (ReceiveRecordAsyncResult_t700 * __this, Exception_t74 * ___ex, ByteU5BU5D_t112* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2989 (ReceiveRecordAsyncResult_t700 * __this, Exception_t74 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2990 (ReceiveRecordAsyncResult_t700 * __this, ByteU5BU5D_t112* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
