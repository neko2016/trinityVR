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

// MediaPlayerCtrl/VideoReady
struct VideoReady_t363152904;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void MediaPlayerCtrl/VideoReady::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoReady__ctor_m3604465870 (VideoReady_t363152904 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoReady::Invoke()
extern "C"  void VideoReady_Invoke_m3338328744 (VideoReady_t363152904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoReady_t363152904(Il2CppObject* delegate);
// System.IAsyncResult MediaPlayerCtrl/VideoReady::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoReady_BeginInvoke_m1017391707 (VideoReady_t363152904 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoReady::EndInvoke(System.IAsyncResult)
extern "C"  void VideoReady_EndInvoke_m488362462 (VideoReady_t363152904 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
