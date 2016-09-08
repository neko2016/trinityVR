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

// loadSceneSimple
struct  loadSceneSimple_t2340787352  : public MonoBehaviour_t3012272455
{
public:
	// System.String loadSceneSimple::newScene
	String_t* ___newScene_2;
	// UnityEngine.UI.Image loadSceneSimple::overlay
	Image_t3354615620 * ___overlay_3;
	// System.Single loadSceneSimple::fadeTime
	float ___fadeTime_4;

public:
	inline static int32_t get_offset_of_newScene_2() { return static_cast<int32_t>(offsetof(loadSceneSimple_t2340787352, ___newScene_2)); }
	inline String_t* get_newScene_2() const { return ___newScene_2; }
	inline String_t** get_address_of_newScene_2() { return &___newScene_2; }
	inline void set_newScene_2(String_t* value)
	{
		___newScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___newScene_2, value);
	}

	inline static int32_t get_offset_of_overlay_3() { return static_cast<int32_t>(offsetof(loadSceneSimple_t2340787352, ___overlay_3)); }
	inline Image_t3354615620 * get_overlay_3() const { return ___overlay_3; }
	inline Image_t3354615620 ** get_address_of_overlay_3() { return &___overlay_3; }
	inline void set_overlay_3(Image_t3354615620 * value)
	{
		___overlay_3 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_3, value);
	}

	inline static int32_t get_offset_of_fadeTime_4() { return static_cast<int32_t>(offsetof(loadSceneSimple_t2340787352, ___fadeTime_4)); }
	inline float get_fadeTime_4() const { return ___fadeTime_4; }
	inline float* get_address_of_fadeTime_4() { return &___fadeTime_4; }
	inline void set_fadeTime_4(float value)
	{
		___fadeTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
