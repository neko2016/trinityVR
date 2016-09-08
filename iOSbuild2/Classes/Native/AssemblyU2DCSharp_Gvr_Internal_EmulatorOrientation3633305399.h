﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorOrientationEvent
struct  EmulatorOrientationEvent_t3633305399 
{
public:
	// System.Int64 Gvr.Internal.EmulatorOrientationEvent::timestamp
	int64_t ___timestamp_0;
	// UnityEngine.Quaternion Gvr.Internal.EmulatorOrientationEvent::orientation
	Quaternion_t1891715979  ___orientation_1;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t3633305399, ___timestamp_0)); }
	inline int64_t get_timestamp_0() const { return ___timestamp_0; }
	inline int64_t* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(int64_t value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(EmulatorOrientationEvent_t3633305399, ___orientation_1)); }
	inline Quaternion_t1891715979  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t1891715979 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t1891715979  value)
	{
		___orientation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Gvr.Internal.EmulatorOrientationEvent
struct EmulatorOrientationEvent_t3633305399_marshaled
{
	int64_t ___timestamp_0;
	Quaternion_t1891715979_marshaled ___orientation_1;
};
