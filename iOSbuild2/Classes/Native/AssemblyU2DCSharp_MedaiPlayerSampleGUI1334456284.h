#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MediaPlayerCtrl
struct MediaPlayerCtrl_t3572035536;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MedaiPlayerSampleGUI
struct  MedaiPlayerSampleGUI_t1334456284  : public MonoBehaviour_t3012272455
{
public:
	// MediaPlayerCtrl MedaiPlayerSampleGUI::scrMedia
	MediaPlayerCtrl_t3572035536 * ___scrMedia_2;
	// System.Boolean MedaiPlayerSampleGUI::m_bFinish
	bool ___m_bFinish_3;

public:
	inline static int32_t get_offset_of_scrMedia_2() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1334456284, ___scrMedia_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_scrMedia_2() const { return ___scrMedia_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_scrMedia_2() { return &___scrMedia_2; }
	inline void set_scrMedia_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___scrMedia_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrMedia_2, value);
	}

	inline static int32_t get_offset_of_m_bFinish_3() { return static_cast<int32_t>(offsetof(MedaiPlayerSampleGUI_t1334456284, ___m_bFinish_3)); }
	inline bool get_m_bFinish_3() const { return ___m_bFinish_3; }
	inline bool* get_address_of_m_bFinish_3() { return &___m_bFinish_3; }
	inline void set_m_bFinish_3(bool value)
	{
		___m_bFinish_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
