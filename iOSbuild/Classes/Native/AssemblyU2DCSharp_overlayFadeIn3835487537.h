#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUITexture
struct GUITexture_t63494093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// overlayFadeIn
struct  overlayFadeIn_t3835487537  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUITexture overlayFadeIn::overlay
	GUITexture_t63494093 * ___overlay_2;
	// System.Single overlayFadeIn::fadeTime
	float ___fadeTime_3;

public:
	inline static int32_t get_offset_of_overlay_2() { return static_cast<int32_t>(offsetof(overlayFadeIn_t3835487537, ___overlay_2)); }
	inline GUITexture_t63494093 * get_overlay_2() const { return ___overlay_2; }
	inline GUITexture_t63494093 ** get_address_of_overlay_2() { return &___overlay_2; }
	inline void set_overlay_2(GUITexture_t63494093 * value)
	{
		___overlay_2 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_2, value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(overlayFadeIn_t3835487537, ___fadeTime_3)); }
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
