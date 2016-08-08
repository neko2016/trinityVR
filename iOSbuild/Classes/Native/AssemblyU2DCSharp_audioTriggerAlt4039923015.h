#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioTriggerAlt
struct  audioTriggerAlt_t4039923015  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] audioTriggerAlt::allAudioAMB
	GameObjectU5BU5D_t3499186955* ___allAudioAMB_2;
	// UnityEngine.GameObject[] audioTriggerAlt::allAudioSFX
	GameObjectU5BU5D_t3499186955* ___allAudioSFX_3;
	// UnityEngine.GameObject[] audioTriggerAlt::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_4;

public:
	inline static int32_t get_offset_of_allAudioAMB_2() { return static_cast<int32_t>(offsetof(audioTriggerAlt_t4039923015, ___allAudioAMB_2)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioAMB_2() const { return ___allAudioAMB_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioAMB_2() { return &___allAudioAMB_2; }
	inline void set_allAudioAMB_2(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioAMB_2 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioAMB_2, value);
	}

	inline static int32_t get_offset_of_allAudioSFX_3() { return static_cast<int32_t>(offsetof(audioTriggerAlt_t4039923015, ___allAudioSFX_3)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioSFX_3() const { return ___allAudioSFX_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioSFX_3() { return &___allAudioSFX_3; }
	inline void set_allAudioSFX_3(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioSFX_3 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioSFX_3, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_4() { return static_cast<int32_t>(offsetof(audioTriggerAlt_t4039923015, ___allAudioNAR_4)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_4() const { return ___allAudioNAR_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_4() { return &___allAudioNAR_4; }
	inline void set_allAudioNAR_4(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_4 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
