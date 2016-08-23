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
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoAudioGroup
struct  videoAudioGroup_t2757833508  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource videoAudioGroup::audioSource
	AudioSource_t3628549054 * ___audioSource_2;
	// UnityEngine.Audio.AudioMixerGroup videoAudioGroup::narration
	AudioMixerGroup_t1736867953 * ___narration_3;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(videoAudioGroup_t2757833508, ___audioSource_2)); }
	inline AudioSource_t3628549054 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3628549054 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_narration_3() { return static_cast<int32_t>(offsetof(videoAudioGroup_t2757833508, ___narration_3)); }
	inline AudioMixerGroup_t1736867953 * get_narration_3() const { return ___narration_3; }
	inline AudioMixerGroup_t1736867953 ** get_address_of_narration_3() { return &___narration_3; }
	inline void set_narration_3(AudioMixerGroup_t1736867953 * value)
	{
		___narration_3 = value;
		Il2CppCodeGenWriteBarrier(&___narration_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
