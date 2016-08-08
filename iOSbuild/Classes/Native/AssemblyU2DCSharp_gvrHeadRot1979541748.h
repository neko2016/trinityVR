#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gvrHeadRot
struct  gvrHeadRot_t1979541748  : public MonoBehaviour_t3012272455
{
public:
	// System.Single gvrHeadRot::camXRot
	float ___camXRot_2;
	// System.Single gvrHeadRot::camYRot
	float ___camYRot_3;

public:
	inline static int32_t get_offset_of_camXRot_2() { return static_cast<int32_t>(offsetof(gvrHeadRot_t1979541748, ___camXRot_2)); }
	inline float get_camXRot_2() const { return ___camXRot_2; }
	inline float* get_address_of_camXRot_2() { return &___camXRot_2; }
	inline void set_camXRot_2(float value)
	{
		___camXRot_2 = value;
	}

	inline static int32_t get_offset_of_camYRot_3() { return static_cast<int32_t>(offsetof(gvrHeadRot_t1979541748, ___camYRot_3)); }
	inline float get_camYRot_3() const { return ___camYRot_3; }
	inline float* get_address_of_camYRot_3() { return &___camYRot_3; }
	inline void set_camYRot_3(float value)
	{
		___camYRot_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
