﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrAudioSource
struct GvrAudioSource_t2139450958;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioRandomPlayGvr
struct  audioRandomPlayGvr_t3248665366  : public MonoBehaviour_t3012272455
{
public:
	// GvrAudioSource audioRandomPlayGvr::myAudio
	GvrAudioSource_t2139450958 * ___myAudio_2;
	// System.Single audioRandomPlayGvr::startTime
	float ___startTime_3;
	// System.Single audioRandomPlayGvr::repeatTime
	float ___repeatTime_4;
	// System.Single audioRandomPlayGvr::startTimeA
	float ___startTimeA_5;
	// System.Single audioRandomPlayGvr::startTimeB
	float ___startTimeB_6;
	// System.Single audioRandomPlayGvr::repeatTimeA
	float ___repeatTimeA_7;
	// System.Single audioRandomPlayGvr::repeatTimeB
	float ___repeatTimeB_8;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___myAudio_2)); }
	inline GvrAudioSource_t2139450958 * get_myAudio_2() const { return ___myAudio_2; }
	inline GvrAudioSource_t2139450958 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(GvrAudioSource_t2139450958 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_repeatTime_4() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___repeatTime_4)); }
	inline float get_repeatTime_4() const { return ___repeatTime_4; }
	inline float* get_address_of_repeatTime_4() { return &___repeatTime_4; }
	inline void set_repeatTime_4(float value)
	{
		___repeatTime_4 = value;
	}

	inline static int32_t get_offset_of_startTimeA_5() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___startTimeA_5)); }
	inline float get_startTimeA_5() const { return ___startTimeA_5; }
	inline float* get_address_of_startTimeA_5() { return &___startTimeA_5; }
	inline void set_startTimeA_5(float value)
	{
		___startTimeA_5 = value;
	}

	inline static int32_t get_offset_of_startTimeB_6() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___startTimeB_6)); }
	inline float get_startTimeB_6() const { return ___startTimeB_6; }
	inline float* get_address_of_startTimeB_6() { return &___startTimeB_6; }
	inline void set_startTimeB_6(float value)
	{
		___startTimeB_6 = value;
	}

	inline static int32_t get_offset_of_repeatTimeA_7() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___repeatTimeA_7)); }
	inline float get_repeatTimeA_7() const { return ___repeatTimeA_7; }
	inline float* get_address_of_repeatTimeA_7() { return &___repeatTimeA_7; }
	inline void set_repeatTimeA_7(float value)
	{
		___repeatTimeA_7 = value;
	}

	inline static int32_t get_offset_of_repeatTimeB_8() { return static_cast<int32_t>(offsetof(audioRandomPlayGvr_t3248665366, ___repeatTimeB_8)); }
	inline float get_repeatTimeB_8() const { return ___repeatTimeB_8; }
	inline float* get_address_of_repeatTimeB_8() { return &___repeatTimeB_8; }
	inline void set_repeatTimeB_8(float value)
	{
		___repeatTimeB_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
