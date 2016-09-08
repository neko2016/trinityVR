#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// musicControl
struct musicControl_t2822556536;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// musicTrigger
struct  musicTrigger_t811121619  : public MonoBehaviour_t3012272455
{
public:
	// musicControl musicTrigger::musicControl
	musicControl_t2822556536 * ___musicControl_2;

public:
	inline static int32_t get_offset_of_musicControl_2() { return static_cast<int32_t>(offsetof(musicTrigger_t811121619, ___musicControl_2)); }
	inline musicControl_t2822556536 * get_musicControl_2() const { return ___musicControl_2; }
	inline musicControl_t2822556536 ** get_address_of_musicControl_2() { return &___musicControl_2; }
	inline void set_musicControl_2(musicControl_t2822556536 * value)
	{
		___musicControl_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
