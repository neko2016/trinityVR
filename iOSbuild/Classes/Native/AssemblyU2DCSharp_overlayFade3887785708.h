#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// overlayFade
struct  overlayFade_t3887785708  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image overlayFade::overlay
	Image_t3354615620 * ___overlay_2;
	// System.Single overlayFade::fadeTime
	float ___fadeTime_3;

public:
	inline static int32_t get_offset_of_overlay_2() { return static_cast<int32_t>(offsetof(overlayFade_t3887785708, ___overlay_2)); }
	inline Image_t3354615620 * get_overlay_2() const { return ___overlay_2; }
	inline Image_t3354615620 ** get_address_of_overlay_2() { return &___overlay_2; }
	inline void set_overlay_2(Image_t3354615620 * value)
	{
		___overlay_2 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_2, value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(overlayFade_t3887785708, ___fadeTime_3)); }
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
