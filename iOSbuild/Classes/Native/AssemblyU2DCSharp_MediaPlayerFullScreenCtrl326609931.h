#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerFullScreenCtrl
struct  MediaPlayerFullScreenCtrl_t326609931  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MediaPlayerFullScreenCtrl::m_objVideo
	GameObject_t4012695102 * ___m_objVideo_2;
	// System.Int32 MediaPlayerFullScreenCtrl::m_iOrgWidth
	int32_t ___m_iOrgWidth_3;
	// System.Int32 MediaPlayerFullScreenCtrl::m_iOrgHeight
	int32_t ___m_iOrgHeight_4;

public:
	inline static int32_t get_offset_of_m_objVideo_2() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_t326609931, ___m_objVideo_2)); }
	inline GameObject_t4012695102 * get_m_objVideo_2() const { return ___m_objVideo_2; }
	inline GameObject_t4012695102 ** get_address_of_m_objVideo_2() { return &___m_objVideo_2; }
	inline void set_m_objVideo_2(GameObject_t4012695102 * value)
	{
		___m_objVideo_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_objVideo_2, value);
	}

	inline static int32_t get_offset_of_m_iOrgWidth_3() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_t326609931, ___m_iOrgWidth_3)); }
	inline int32_t get_m_iOrgWidth_3() const { return ___m_iOrgWidth_3; }
	inline int32_t* get_address_of_m_iOrgWidth_3() { return &___m_iOrgWidth_3; }
	inline void set_m_iOrgWidth_3(int32_t value)
	{
		___m_iOrgWidth_3 = value;
	}

	inline static int32_t get_offset_of_m_iOrgHeight_4() { return static_cast<int32_t>(offsetof(MediaPlayerFullScreenCtrl_t326609931, ___m_iOrgHeight_4)); }
	inline int32_t get_m_iOrgHeight_4() const { return ___m_iOrgHeight_4; }
	inline int32_t* get_address_of_m_iOrgHeight_4() { return &___m_iOrgHeight_4; }
	inline void set_m_iOrgHeight_4(int32_t value)
	{
		___m_iOrgHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
