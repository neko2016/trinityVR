#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioImgMarker
struct  audioImgMarker_t3924586151  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform audioImgMarker::imagePanel
	Transform_t284553113 * ___imagePanel_2;
	// UnityEngine.AudioSource audioImgMarker::audioSource
	AudioSource_t3628549054 * ___audioSource_3;
	// System.Boolean audioImgMarker::isPlaying
	bool ___isPlaying_4;
	// UnityEngine.GameObject[] audioImgMarker::allOtherAudio
	GameObjectU5BU5D_t3499186955* ___allOtherAudio_5;

public:
	inline static int32_t get_offset_of_imagePanel_2() { return static_cast<int32_t>(offsetof(audioImgMarker_t3924586151, ___imagePanel_2)); }
	inline Transform_t284553113 * get_imagePanel_2() const { return ___imagePanel_2; }
	inline Transform_t284553113 ** get_address_of_imagePanel_2() { return &___imagePanel_2; }
	inline void set_imagePanel_2(Transform_t284553113 * value)
	{
		___imagePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___imagePanel_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(audioImgMarker_t3924586151, ___audioSource_3)); }
	inline AudioSource_t3628549054 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t3628549054 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_isPlaying_4() { return static_cast<int32_t>(offsetof(audioImgMarker_t3924586151, ___isPlaying_4)); }
	inline bool get_isPlaying_4() const { return ___isPlaying_4; }
	inline bool* get_address_of_isPlaying_4() { return &___isPlaying_4; }
	inline void set_isPlaying_4(bool value)
	{
		___isPlaying_4 = value;
	}

	inline static int32_t get_offset_of_allOtherAudio_5() { return static_cast<int32_t>(offsetof(audioImgMarker_t3924586151, ___allOtherAudio_5)); }
	inline GameObjectU5BU5D_t3499186955* get_allOtherAudio_5() const { return ___allOtherAudio_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allOtherAudio_5() { return &___allOtherAudio_5; }
	inline void set_allOtherAudio_5(GameObjectU5BU5D_t3499186955* value)
	{
		___allOtherAudio_5 = value;
		Il2CppCodeGenWriteBarrier(&___allOtherAudio_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
