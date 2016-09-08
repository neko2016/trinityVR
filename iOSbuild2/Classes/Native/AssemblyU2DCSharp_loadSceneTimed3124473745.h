#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadSceneTimed
struct  loadSceneTimed_t3124473745  : public MonoBehaviour_t3012272455
{
public:
	// System.String loadSceneTimed::newScene
	String_t* ___newScene_2;
	// UnityEngine.UI.Image loadSceneTimed::overlay
	Image_t3354615620 * ___overlay_3;
	// System.Single loadSceneTimed::fadeTime
	float ___fadeTime_4;
	// System.Single loadSceneTimed::waitTime
	float ___waitTime_5;

public:
	inline static int32_t get_offset_of_newScene_2() { return static_cast<int32_t>(offsetof(loadSceneTimed_t3124473745, ___newScene_2)); }
	inline String_t* get_newScene_2() const { return ___newScene_2; }
	inline String_t** get_address_of_newScene_2() { return &___newScene_2; }
	inline void set_newScene_2(String_t* value)
	{
		___newScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___newScene_2, value);
	}

	inline static int32_t get_offset_of_overlay_3() { return static_cast<int32_t>(offsetof(loadSceneTimed_t3124473745, ___overlay_3)); }
	inline Image_t3354615620 * get_overlay_3() const { return ___overlay_3; }
	inline Image_t3354615620 ** get_address_of_overlay_3() { return &___overlay_3; }
	inline void set_overlay_3(Image_t3354615620 * value)
	{
		___overlay_3 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_3, value);
	}

	inline static int32_t get_offset_of_fadeTime_4() { return static_cast<int32_t>(offsetof(loadSceneTimed_t3124473745, ___fadeTime_4)); }
	inline float get_fadeTime_4() const { return ___fadeTime_4; }
	inline float* get_address_of_fadeTime_4() { return &___fadeTime_4; }
	inline void set_fadeTime_4(float value)
	{
		___fadeTime_4 = value;
	}

	inline static int32_t get_offset_of_waitTime_5() { return static_cast<int32_t>(offsetof(loadSceneTimed_t3124473745, ___waitTime_5)); }
	inline float get_waitTime_5() const { return ___waitTime_5; }
	inline float* get_address_of_waitTime_5() { return &___waitTime_5; }
	inline void set_waitTime_5(float value)
	{
		___waitTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
