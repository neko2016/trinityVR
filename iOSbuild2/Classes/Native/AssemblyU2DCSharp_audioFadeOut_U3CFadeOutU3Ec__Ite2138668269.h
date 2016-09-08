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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioFadeOut/<FadeOut>c__Iterator6
struct  U3CFadeOutU3Ec__Iterator6_t2138668269  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource audioFadeOut/<FadeOut>c__Iterator6::audioSource
	AudioSource_t3628549054 * ___audioSource_0;
	// System.Single audioFadeOut/<FadeOut>c__Iterator6::<startVolume>__0
	float ___U3CstartVolumeU3E__0_1;
	// System.Single audioFadeOut/<FadeOut>c__Iterator6::FadeTime
	float ___FadeTime_2;
	// System.Int32 audioFadeOut/<FadeOut>c__Iterator6::$PC
	int32_t ___U24PC_3;
	// System.Object audioFadeOut/<FadeOut>c__Iterator6::$current
	Il2CppObject * ___U24current_4;
	// UnityEngine.AudioSource audioFadeOut/<FadeOut>c__Iterator6::<$>audioSource
	AudioSource_t3628549054 * ___U3CU24U3EaudioSource_5;
	// System.Single audioFadeOut/<FadeOut>c__Iterator6::<$>FadeTime
	float ___U3CU24U3EFadeTime_6;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___audioSource_0)); }
	inline AudioSource_t3628549054 * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_t3628549054 * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_0, value);
	}

	inline static int32_t get_offset_of_U3CstartVolumeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___U3CstartVolumeU3E__0_1)); }
	inline float get_U3CstartVolumeU3E__0_1() const { return ___U3CstartVolumeU3E__0_1; }
	inline float* get_address_of_U3CstartVolumeU3E__0_1() { return &___U3CstartVolumeU3E__0_1; }
	inline void set_U3CstartVolumeU3E__0_1(float value)
	{
		___U3CstartVolumeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_FadeTime_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___FadeTime_2)); }
	inline float get_FadeTime_2() const { return ___FadeTime_2; }
	inline float* get_address_of_FadeTime_2() { return &___FadeTime_2; }
	inline void set_FadeTime_2(float value)
	{
		___FadeTime_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EaudioSource_5() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___U3CU24U3EaudioSource_5)); }
	inline AudioSource_t3628549054 * get_U3CU24U3EaudioSource_5() const { return ___U3CU24U3EaudioSource_5; }
	inline AudioSource_t3628549054 ** get_address_of_U3CU24U3EaudioSource_5() { return &___U3CU24U3EaudioSource_5; }
	inline void set_U3CU24U3EaudioSource_5(AudioSource_t3628549054 * value)
	{
		___U3CU24U3EaudioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EaudioSource_5, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EFadeTime_6() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ec__Iterator6_t2138668269, ___U3CU24U3EFadeTime_6)); }
	inline float get_U3CU24U3EFadeTime_6() const { return ___U3CU24U3EFadeTime_6; }
	inline float* get_address_of_U3CU24U3EFadeTime_6() { return &___U3CU24U3EFadeTime_6; }
	inline void set_U3CU24U3EFadeTime_6(float value)
	{
		___U3CU24U3EFadeTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
