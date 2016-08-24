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

// audioTrigger
struct  audioTrigger_t1648719106  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource audioTrigger::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// UnityEngine.GameObject[] audioTrigger::allAudioAMB
	GameObjectU5BU5D_t3499186955* ___allAudioAMB_3;
	// UnityEngine.GameObject[] audioTrigger::allAudioSFX
	GameObjectU5BU5D_t3499186955* ___allAudioSFX_4;
	// UnityEngine.GameObject[] audioTrigger::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_5;
	// System.Single audioTrigger::delayTime
	float ___delayTime_6;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_allAudioAMB_3() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___allAudioAMB_3)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioAMB_3() const { return ___allAudioAMB_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioAMB_3() { return &___allAudioAMB_3; }
	inline void set_allAudioAMB_3(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioAMB_3 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioAMB_3, value);
	}

	inline static int32_t get_offset_of_allAudioSFX_4() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___allAudioSFX_4)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioSFX_4() const { return ___allAudioSFX_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioSFX_4() { return &___allAudioSFX_4; }
	inline void set_allAudioSFX_4(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioSFX_4 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioSFX_4, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_5() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___allAudioNAR_5)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_5() const { return ___allAudioNAR_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_5() { return &___allAudioNAR_5; }
	inline void set_allAudioNAR_5(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_5 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_5, value);
	}

	inline static int32_t get_offset_of_delayTime_6() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___delayTime_6)); }
	inline float get_delayTime_6() const { return ___delayTime_6; }
	inline float* get_address_of_delayTime_6() { return &___delayTime_6; }
	inline void set_delayTime_6(float value)
	{
		___delayTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
