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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadingScreenMusic
struct  loadingScreenMusic_t298224189  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource loadingScreenMusic::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// System.String loadingScreenMusic::myScene
	String_t* ___myScene_3;
	// System.Boolean loadingScreenMusic::trigger
	bool ___trigger_4;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(loadingScreenMusic_t298224189, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_myScene_3() { return static_cast<int32_t>(offsetof(loadingScreenMusic_t298224189, ___myScene_3)); }
	inline String_t* get_myScene_3() const { return ___myScene_3; }
	inline String_t** get_address_of_myScene_3() { return &___myScene_3; }
	inline void set_myScene_3(String_t* value)
	{
		___myScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___myScene_3, value);
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(loadingScreenMusic_t298224189, ___trigger_4)); }
	inline bool get_trigger_4() const { return ___trigger_4; }
	inline bool* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(bool value)
	{
		___trigger_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
