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

// VideoCopyTexture
struct  VideoCopyTexture_t908209291  : public MonoBehaviour_t3012272455
{
public:
	// MediaPlayerCtrl VideoCopyTexture::m_srcVideo
	MediaPlayerCtrl_t3572035536 * ___m_srcVideo_2;

public:
	inline static int32_t get_offset_of_m_srcVideo_2() { return static_cast<int32_t>(offsetof(VideoCopyTexture_t908209291, ___m_srcVideo_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_m_srcVideo_2() const { return ___m_srcVideo_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_m_srcVideo_2() { return &___m_srcVideo_2; }
	inline void set_m_srcVideo_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___m_srcVideo_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_srcVideo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
