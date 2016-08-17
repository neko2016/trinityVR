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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

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
	// UnityEngine.GameObject[] audioTriggerPlus::allAudioAMB
	GameObjectU5BU5D_t3499186955* ___allAudioAMB_4;
	// UnityEngine.GameObject[] audioTriggerPlus::allAudioSFX
	GameObjectU5BU5D_t3499186955* ___allAudioSFX_5;
	// UnityEngine.GameObject[] audioTriggerPlus::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_6;

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

	inline static int32_t get_offset_of_allAudioAMB_4() { return static_cast<int32_t>(offsetof(audioTriggerPlus_t684008892, ___allAudioAMB_4)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioAMB_4() const { return ___allAudioAMB_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioAMB_4() { return &___allAudioAMB_4; }
	inline void set_allAudioAMB_4(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioAMB_4 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioAMB_4, value);
	}

	inline static int32_t get_offset_of_allAudioSFX_5() { return static_cast<int32_t>(offsetof(audioTriggerPlus_t684008892, ___allAudioSFX_5)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioSFX_5() const { return ___allAudioSFX_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioSFX_5() { return &___allAudioSFX_5; }
	inline void set_allAudioSFX_5(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioSFX_5 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioSFX_5, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_6() { return static_cast<int32_t>(offsetof(audioTriggerPlus_t684008892, ___allAudioNAR_6)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_6() const { return ___allAudioNAR_6; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_6() { return &___allAudioNAR_6; }
	inline void set_allAudioNAR_6(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_6 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
