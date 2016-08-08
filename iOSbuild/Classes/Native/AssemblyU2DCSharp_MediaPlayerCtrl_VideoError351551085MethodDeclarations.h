#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MediaPlayerCtrl/VideoError
struct VideoError_t351551085;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERRO2861322446.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void MediaPlayerCtrl/VideoError::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoError__ctor_m490812083 (VideoError_t351551085 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoError::Invoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C"  void VideoError_Invoke_m1533335827 (VideoError_t351551085 * __this, int32_t ___errorCode, int32_t ___errorCodeExtra, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoError_t351551085(Il2CppObject* delegate, int32_t ___errorCode, int32_t ___errorCodeExtra);
// System.IAsyncResult MediaPlayerCtrl/VideoError::BeginInvoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoError_BeginInvoke_m3506343324 (VideoError_t351551085 * __this, int32_t ___errorCode, int32_t ___errorCodeExtra, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoError::EndInvoke(System.IAsyncResult)
extern "C"  void VideoError_EndInvoke_m145225283 (VideoError_t351551085 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
