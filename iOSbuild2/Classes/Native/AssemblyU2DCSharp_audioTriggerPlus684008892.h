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
// GvrAudioSource
struct GvrAudioSource_t2139450958;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioTriggerPlus
struct  audioTriggerPlus_t684008892  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource audioTriggerPlus::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// GvrAudioSource audioTriggerPlus::myGvrAudio
	GvrAudioSource_t2139450958 * ___myGvrAudio_3;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(audioTriggerPlus_t684008892, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_myGvrAudio_3() { return static_cast<int32_t>(offsetof(audioTriggerPlus_t684008892, ___myGvrAudio_3)); }
	inline GvrAudioSource_t2139450958 * get_myGvrAudio_3() const { return ___myGvrAudio_3; }
	inline GvrAudioSource_t2139450958 ** get_address_of_myGvrAudio_3() { return &___myGvrAudio_3; }
	inline void set_myGvrAudio_3(GvrAudioSource_t2139450958 * value)
	{
		___myGvrAudio_3 = value;
		Il2CppCodeGenWriteBarrier(&___myGvrAudio_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
