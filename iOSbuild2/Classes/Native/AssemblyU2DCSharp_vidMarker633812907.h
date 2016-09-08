#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// MediaPlayerCtrl
struct MediaPlayerCtrl_t3572035536;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1217738301;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vidMarker
struct  vidMarker_t633812907  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource vidMarker::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// UnityEngine.GameObject[] vidMarker::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_3;
	// UnityEngine.GameObject vidMarker::vidPanel
	GameObject_t4012695102 * ___vidPanel_4;
	// MediaPlayerCtrl vidMarker::vidPlayer
	MediaPlayerCtrl_t3572035536 * ___vidPlayer_5;
	// UnityEngine.MeshRenderer vidMarker::vidMesh
	MeshRenderer_t1217738301 * ___vidMesh_6;
	// System.Single vidMarker::delayVid
	float ___delayVid_7;
	// System.Boolean vidMarker::vidState
	bool ___vidState_8;
	// UnityEngine.GameObject[] vidMarker::allVideo
	GameObjectU5BU5D_t3499186955* ___allVideo_9;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_3() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___allAudioNAR_3)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_3() const { return ___allAudioNAR_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_3() { return &___allAudioNAR_3; }
	inline void set_allAudioNAR_3(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_3 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_3, value);
	}

	inline static int32_t get_offset_of_vidPanel_4() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___vidPanel_4)); }
	inline GameObject_t4012695102 * get_vidPanel_4() const { return ___vidPanel_4; }
	inline GameObject_t4012695102 ** get_address_of_vidPanel_4() { return &___vidPanel_4; }
	inline void set_vidPanel_4(GameObject_t4012695102 * value)
	{
		___vidPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___vidPanel_4, value);
	}

	inline static int32_t get_offset_of_vidPlayer_5() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___vidPlayer_5)); }
	inline MediaPlayerCtrl_t3572035536 * get_vidPlayer_5() const { return ___vidPlayer_5; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_vidPlayer_5() { return &___vidPlayer_5; }
	inline void set_vidPlayer_5(MediaPlayerCtrl_t3572035536 * value)
	{
		___vidPlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&___vidPlayer_5, value);
	}

	inline static int32_t get_offset_of_vidMesh_6() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___vidMesh_6)); }
	inline MeshRenderer_t1217738301 * get_vidMesh_6() const { return ___vidMesh_6; }
	inline MeshRenderer_t1217738301 ** get_address_of_vidMesh_6() { return &___vidMesh_6; }
	inline void set_vidMesh_6(MeshRenderer_t1217738301 * value)
	{
		___vidMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___vidMesh_6, value);
	}

	inline static int32_t get_offset_of_delayVid_7() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___delayVid_7)); }
	inline float get_delayVid_7() const { return ___delayVid_7; }
	inline float* get_address_of_delayVid_7() { return &___delayVid_7; }
	inline void set_delayVid_7(float value)
	{
		___delayVid_7 = value;
	}

	inline static int32_t get_offset_of_vidState_8() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___vidState_8)); }
	inline bool get_vidState_8() const { return ___vidState_8; }
	inline bool* get_address_of_vidState_8() { return &___vidState_8; }
	inline void set_vidState_8(bool value)
	{
		___vidState_8 = value;
	}

	inline static int32_t get_offset_of_allVideo_9() { return static_cast<int32_t>(offsetof(vidMarker_t633812907, ___allVideo_9)); }
	inline GameObjectU5BU5D_t3499186955* get_allVideo_9() const { return ___allVideo_9; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allVideo_9() { return &___allVideo_9; }
	inline void set_allVideo_9(GameObjectU5BU5D_t3499186955* value)
	{
		___allVideo_9 = value;
		Il2CppCodeGenWriteBarrier(&___allVideo_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
