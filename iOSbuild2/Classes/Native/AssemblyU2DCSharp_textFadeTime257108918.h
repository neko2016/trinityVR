#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// textFadeTime
struct  textFadeTime_t257108918  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text textFadeTime::text
	Text_t3286458198 * ___text_2;
	// System.Single textFadeTime::fadeTime
	float ___fadeTime_3;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(textFadeTime_t257108918, ___text_2)); }
	inline Text_t3286458198 * get_text_2() const { return ___text_2; }
	inline Text_t3286458198 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t3286458198 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(textFadeTime_t257108918, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
