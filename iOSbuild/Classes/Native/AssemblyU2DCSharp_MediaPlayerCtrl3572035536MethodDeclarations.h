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

// MediaPlayerCtrl
struct MediaPlayerCtrl_t3572035536;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERRO2861322446.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STAT2874295127.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "System_Core_System_Action437523947.h"

// System.Void MediaPlayerCtrl::.ctor()
extern "C"  void MediaPlayerCtrl__ctor_m243769755 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::.cctor()
extern "C"  void MediaPlayerCtrl__cctor_m2779798898 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Awake()
extern "C"  void MediaPlayerCtrl_Awake_m481374974 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Start()
extern "C"  void MediaPlayerCtrl_Start_m3485874843 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnApplicationQuit()
extern "C"  void MediaPlayerCtrl_OnApplicationQuit_m964394649 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnDisable()
extern "C"  void MediaPlayerCtrl_OnDisable_m1717481602 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnEnable()
extern "C"  void MediaPlayerCtrl_OnEnable_m1426652171 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Update()
extern "C"  void MediaPlayerCtrl_Update_m693789906 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::ResizeTexture()
extern "C"  void MediaPlayerCtrl_ResizeTexture_m154031808 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Resize()
extern "C"  void MediaPlayerCtrl_Resize_m3319691773 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnError(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C"  void MediaPlayerCtrl_OnError_m491477982 (MediaPlayerCtrl_t3572035536 * __this, int32_t ___iCode, int32_t ___iCodeExtra, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnDestroy()
extern "C"  void MediaPlayerCtrl_OnDestroy_m3895013652 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnApplicationPause(System.Boolean)
extern "C"  void MediaPlayerCtrl_OnApplicationPause_m1411783813 (MediaPlayerCtrl_t3572035536 * __this, bool ___bPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::GetCurrentState()
extern "C"  int32_t MediaPlayerCtrl_GetCurrentState_m372257026 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MediaPlayerCtrl::GetVideoTexture()
extern "C"  Texture2D_t2509538522 * MediaPlayerCtrl_GetVideoTexture_m3882756556 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Play()
extern "C"  void MediaPlayerCtrl_Play_m4037048957 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Stop()
extern "C"  void MediaPlayerCtrl_Stop_m4130733003 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Pause()
extern "C"  void MediaPlayerCtrl_Pause_m297895727 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Load(System.String)
extern "C"  void MediaPlayerCtrl_Load_m2067252147 (MediaPlayerCtrl_t3572035536 * __this, String_t* ___strFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SetVolume(System.Single)
extern "C"  void MediaPlayerCtrl_SetVolume_m273404406 (MediaPlayerCtrl_t3572035536 * __this, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetSeekPosition()
extern "C"  int32_t MediaPlayerCtrl_GetSeekPosition_m2843612094 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SeekTo(System.Int32)
extern "C"  void MediaPlayerCtrl_SeekTo_m1961002989 (MediaPlayerCtrl_t3572035536 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SetSpeed(System.Single)
extern "C"  void MediaPlayerCtrl_SetSpeed_m1995172957 (MediaPlayerCtrl_t3572035536 * __this, float ___fSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetDuration()
extern "C"  int32_t MediaPlayerCtrl_GetDuration_m3691995857 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::GetSeekBarValue()
extern "C"  float MediaPlayerCtrl_GetSeekBarValue_m112776625 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SetSeekBarValue(System.Single)
extern "C"  void MediaPlayerCtrl_SetSeekBarValue_m3613810010 (MediaPlayerCtrl_t3572035536 * __this, float ___fValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetCurrentSeekPercent()
extern "C"  int32_t MediaPlayerCtrl_GetCurrentSeekPercent_m325856689 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetVideoWidth()
extern "C"  int32_t MediaPlayerCtrl_GetVideoWidth_m3495441032 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetVideoHeight()
extern "C"  int32_t MediaPlayerCtrl_GetVideoHeight_m1488303943 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::UnLoad()
extern "C"  void MediaPlayerCtrl_UnLoad_m2539012520 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::VideoPlayerPluginCreateInstance()
extern "C"  int32_t MediaPlayerCtrl_VideoPlayerPluginCreateInstance_m4153778279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginDestroyInstance(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginDestroyInstance_m3959504186 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginCanOutputToTexture(System.String)
extern "C"  bool MediaPlayerCtrl_VideoPlayerPluginCanOutputToTexture_m576346071 (Il2CppObject * __this /* static, unused */, String_t* ___videoURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetLoop(System.Int32,System.Boolean)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginSetLoop_m2803548652 (Il2CppObject * __this /* static, unused */, int32_t ___iID, bool ___bLoop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetVolume(System.Int32,System.Single)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginSetVolume_m1814430540 (Il2CppObject * __this /* static, unused */, int32_t ___iID, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginPlayerReady(System.Int32)
extern "C"  bool MediaPlayerCtrl_VideoPlayerPluginPlayerReady_m735341017 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::VideoPlayerPluginDurationSeconds(System.Int32)
extern "C"  float MediaPlayerCtrl_VideoPlayerPluginDurationSeconds_m3768524170 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginExtents(System.Int32,System.Int32&,System.Int32&)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginExtents_m605447550 (Il2CppObject * __this /* static, unused */, int32_t ___iID, int32_t* ___width, int32_t* ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr MediaPlayerCtrl::VideoPlayerPluginCurFrameTexture(System.Int32)
extern "C"  IntPtr_t MediaPlayerCtrl_VideoPlayerPluginCurFrameTexture_m1596364676 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginLoadVideo(System.Int32,System.String)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginLoadVideo_m2270081596 (Il2CppObject * __this /* static, unused */, int32_t ___iID, String_t* ___videoURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginPlayVideo(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginPlayVideo_m3362444530 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginPauseVideo(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginPauseVideo_m3915100318 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginResumeVideo(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginResumeVideo_m3047280921 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginRewindVideo(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginRewindVideo_m3038418379 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSeekToVideo(System.Int32,System.Single)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m821435928 (Il2CppObject * __this /* static, unused */, int32_t ___iID, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::VideoPlayerPluginCurTimeSeconds(System.Int32)
extern "C"  float MediaPlayerCtrl_VideoPlayerPluginCurTimeSeconds_m2190349975 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginIsPlaying(System.Int32)
extern "C"  bool MediaPlayerCtrl_VideoPlayerPluginIsPlaying_m4211132411 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginStopVideo(System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginStopVideo_m1725585764 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginFinish(System.Int32)
extern "C"  bool MediaPlayerCtrl_VideoPlayerPluginFinish_m438650816 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginError(System.Int32)
extern "C"  bool MediaPlayerCtrl_VideoPlayerPluginError_m1021152735 (Il2CppObject * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetTexture(System.Int32,System.Int32)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginSetTexture_m707757637 (Il2CppObject * __this /* static, unused */, int32_t ___iID, int32_t ___iTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetSpeed(System.Int32,System.Single)
extern "C"  void MediaPlayerCtrl_VideoPlayerPluginSetSpeed_m1934431651 (Il2CppObject * __this /* static, unused */, int32_t ___iID, float ___fSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::get_ready()
extern "C"  bool MediaPlayerCtrl_get_ready_m2951534727 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::get_duration()
extern "C"  float MediaPlayerCtrl_get_duration_m2112737018 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::get_currentTime()
extern "C"  float MediaPlayerCtrl_get_currentTime_m4271864802 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::get_isPlaying()
extern "C"  bool MediaPlayerCtrl_get_isPlaying_m3825438920 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MediaPlayerCtrl::get_videoSize()
extern "C"  Vector2_t3525329788  MediaPlayerCtrl_get_videoSize_m1647237351 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MediaPlayerCtrl::get_videoTexture()
extern "C"  Texture2D_t2509538522 * MediaPlayerCtrl_get_videoTexture_m286142453 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Destroy()
extern "C"  void MediaPlayerCtrl_Call_Destroy_m180380930 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_UnLoad()
extern "C"  void MediaPlayerCtrl_Call_UnLoad_m2832451833 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::Call_Load(System.String,System.Int32)
extern "C"  bool MediaPlayerCtrl_Call_Load_m768899081 (MediaPlayerCtrl_t3572035536 * __this, String_t* ___strFileName, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_UpdateVideoTexture()
extern "C"  void MediaPlayerCtrl_Call_UpdateVideoTexture_m857863523 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetVolume(System.Single)
extern "C"  void MediaPlayerCtrl_Call_SetVolume_m2711263047 (MediaPlayerCtrl_t3572035536 * __this, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetSeekPosition(System.Int32)
extern "C"  void MediaPlayerCtrl_Call_SetSeekPosition_m1834745308 (MediaPlayerCtrl_t3572035536 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetSeekPosition()
extern "C"  int32_t MediaPlayerCtrl_Call_GetSeekPosition_m573432625 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Play(System.Int32)
extern "C"  void MediaPlayerCtrl_Call_Play_m3458118239 (MediaPlayerCtrl_t3572035536 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Reset()
extern "C"  void MediaPlayerCtrl_Call_Reset_m809162455 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Stop()
extern "C"  void MediaPlayerCtrl_Call_Stop_m761209692 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_RePlay()
extern "C"  void MediaPlayerCtrl_Call_RePlay_m2613155809 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Pause()
extern "C"  void MediaPlayerCtrl_Call_Pause_m3216855486 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetVideoWidth()
extern "C"  int32_t MediaPlayerCtrl_Call_GetVideoWidth_m3381347003 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetVideoHeight()
extern "C"  int32_t MediaPlayerCtrl_Call_GetVideoHeight_m2246356340 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetUnityTexture(System.Int32)
extern "C"  void MediaPlayerCtrl_Call_SetUnityTexture_m2145795393 (MediaPlayerCtrl_t3572035536 * __this, int32_t ___iTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetWindowSize()
extern "C"  void MediaPlayerCtrl_Call_SetWindowSize_m3027705755 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetLooping(System.Boolean)
extern "C"  void MediaPlayerCtrl_Call_SetLooping_m4187503885 (MediaPlayerCtrl_t3572035536 * __this, bool ___bLoop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetUnityActivity()
extern "C"  void MediaPlayerCtrl_Call_SetUnityActivity_m478515772 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetError()
extern "C"  int32_t MediaPlayerCtrl_Call_GetError_m4172485946 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetErrorExtra()
extern "C"  int32_t MediaPlayerCtrl_Call_GetErrorExtra_m1130797144 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetDuration()
extern "C"  int32_t MediaPlayerCtrl_Call_GetDuration_m1528751044 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetCurrentSeekPercent()
extern "C"  int32_t MediaPlayerCtrl_Call_GetCurrentSeekPercent_m4197538532 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetSpeed(System.Single)
extern "C"  void MediaPlayerCtrl_Call_SetSpeed_m3874928876 (MediaPlayerCtrl_t3572035536 * __this, float ___fSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::Call_GetStatus()
extern "C"  int32_t MediaPlayerCtrl_Call_GetStatus_m1093213333 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediaPlayerCtrl::DownloadStreamingVideoAndLoad(System.String)
extern "C"  Il2CppObject * MediaPlayerCtrl_DownloadStreamingVideoAndLoad_m3753001957 (MediaPlayerCtrl_t3572035536 * __this, String_t* ___strURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediaPlayerCtrl::DownloadStreamingVideoAndLoad2(System.String)
extern "C"  Il2CppObject * MediaPlayerCtrl_DownloadStreamingVideoAndLoad2_m2575442283 (MediaPlayerCtrl_t3572035536 * __this, String_t* ___strURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediaPlayerCtrl::CopyStreamingAssetVideoAndLoad(System.String)
extern "C"  Il2CppObject * MediaPlayerCtrl_CopyStreamingAssetVideoAndLoad_m2139597948 (MediaPlayerCtrl_t3572035536 * __this, String_t* ___strURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::CheckThreading()
extern "C"  void MediaPlayerCtrl_CheckThreading_m2277806009 (MediaPlayerCtrl_t3572035536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::AddActionForUnityMainThread(System.Action)
extern "C"  void MediaPlayerCtrl_AddActionForUnityMainThread_m3296503710 (MediaPlayerCtrl_t3572035536 * __this, Action_t437523947 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
