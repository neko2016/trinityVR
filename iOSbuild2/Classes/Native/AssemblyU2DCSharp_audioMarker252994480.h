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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioMarker
struct  audioMarker_t252994480  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource audioMarker::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// UnityEngine.GameObject[] audioMarker::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_3;
	// UnityEngine.GameObject[] audioMarker::allVideo
	GameObjectU5BU5D_t3499186955* ___allVideo_4;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(audioMarker_t252994480, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_3() { return static_cast<int32_t>(offsetof(audioMarker_t252994480, ___allAudioNAR_3)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_3() const { return ___allAudioNAR_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_3() { return &___allAudioNAR_3; }
	inline void set_allAudioNAR_3(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_3 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_3, value);
	}

	inline static int32_t get_offset_of_allVideo_4() { return static_cast<int32_t>(offsetof(audioMarker_t252994480, ___allVideo_4)); }
	inline GameObjectU5BU5D_t3499186955* get_allVideo_4() const { return ___allVideo_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allVideo_4() { return &___allVideo_4; }
	inline void set_allVideo_4(GameObjectU5BU5D_t3499186955* value)
	{
		___allVideo_4 = value;
		Il2CppCodeGenWriteBarrier(&___allVideo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
