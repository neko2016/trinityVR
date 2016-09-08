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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

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
	// UnityEngine.GameObject[] videoMarker::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_4;
	// UnityEngine.GameObject[] videoMarker::allVideo
	GameObjectU5BU5D_t3499186955* ___allVideo_5;

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

	inline static int32_t get_offset_of_allAudioNAR_4() { return static_cast<int32_t>(offsetof(videoMarker_t853609621, ___allAudioNAR_4)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_4() const { return ___allAudioNAR_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_4() { return &___allAudioNAR_4; }
	inline void set_allAudioNAR_4(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_4 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_4, value);
	}

	inline static int32_t get_offset_of_allVideo_5() { return static_cast<int32_t>(offsetof(videoMarker_t853609621, ___allVideo_5)); }
	inline GameObjectU5BU5D_t3499186955* get_allVideo_5() const { return ___allVideo_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allVideo_5() { return &___allVideo_5; }
	inline void set_allVideo_5(GameObjectU5BU5D_t3499186955* value)
	{
		___allVideo_5 = value;
		Il2CppCodeGenWriteBarrier(&___allVideo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
