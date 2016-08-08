#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t955670625;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoTriggerStart
struct  videoTriggerStart_t1940838821  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Collider videoTriggerStart::col
	Collider_t955670625 * ___col_2;

public:
	inline static int32_t get_offset_of_col_2() { return static_cast<int32_t>(offsetof(videoTriggerStart_t1940838821, ___col_2)); }
	inline Collider_t955670625 * get_col_2() const { return ___col_2; }
	inline Collider_t955670625 ** get_address_of_col_2() { return &___col_2; }
	inline void set_col_2(Collider_t955670625 * value)
	{
		___col_2 = value;
		Il2CppCodeGenWriteBarrier(&___col_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
