#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoMarker
struct  videoMarker_t853609621  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform videoMarker::videoPanel
	Transform_t284553113 * ___videoPanel_2;
	// System.Boolean videoMarker::isPlaying
	bool ___isPlaying_3;

public:
	inline static int32_t get_offset_of_videoPanel_2() { return static_cast<int32_t>(offsetof(videoMarker_t853609621, ___videoPanel_2)); }
	inline Transform_t284553113 * get_videoPanel_2() const { return ___videoPanel_2; }
	inline Transform_t284553113 ** get_address_of_videoPanel_2() { return &___videoPanel_2; }
	inline void set_videoPanel_2(Transform_t284553113 * value)
	{
		___videoPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___videoPanel_2, value);
	}

	inline static int32_t get_offset_of_isPlaying_3() { return static_cast<int32_t>(offsetof(videoMarker_t853609621, ___isPlaying_3)); }
	inline bool get_isPlaying_3() const { return ___isPlaying_3; }
	inline bool* get_address_of_isPlaying_3() { return &___isPlaying_3; }
	inline void set_isPlaying_3(bool value)
	{
		___isPlaying_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
