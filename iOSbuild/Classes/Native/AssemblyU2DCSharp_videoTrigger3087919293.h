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
// UnityEngine.Collider
struct Collider_t955670625;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoTrigger
struct  videoTrigger_t3087919293  : public MonoBehaviour_t3012272455
{
public:
	// MediaPlayerCtrl videoTrigger::mediaScript
	MediaPlayerCtrl_t3572035536 * ___mediaScript_2;
	// UnityEngine.Collider videoTrigger::col
	Collider_t955670625 * ___col_3;
	// System.Single videoTrigger::moveXto
	float ___moveXto_4;
	// System.Single videoTrigger::moveYto
	float ___moveYto_5;
	// System.Single videoTrigger::moveZto
	float ___moveZto_6;
	// UnityEngine.Vector3 videoTrigger::newPos
	Vector3_t3525329789  ___newPos_7;

public:
	inline static int32_t get_offset_of_mediaScript_2() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___mediaScript_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_mediaScript_2() const { return ___mediaScript_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_mediaScript_2() { return &___mediaScript_2; }
	inline void set_mediaScript_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___mediaScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediaScript_2, value);
	}

	inline static int32_t get_offset_of_col_3() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___col_3)); }
	inline Collider_t955670625 * get_col_3() const { return ___col_3; }
	inline Collider_t955670625 ** get_address_of_col_3() { return &___col_3; }
	inline void set_col_3(Collider_t955670625 * value)
	{
		___col_3 = value;
		Il2CppCodeGenWriteBarrier(&___col_3, value);
	}

	inline static int32_t get_offset_of_moveXto_4() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___moveXto_4)); }
	inline float get_moveXto_4() const { return ___moveXto_4; }
	inline float* get_address_of_moveXto_4() { return &___moveXto_4; }
	inline void set_moveXto_4(float value)
	{
		___moveXto_4 = value;
	}

	inline static int32_t get_offset_of_moveYto_5() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___moveYto_5)); }
	inline float get_moveYto_5() const { return ___moveYto_5; }
	inline float* get_address_of_moveYto_5() { return &___moveYto_5; }
	inline void set_moveYto_5(float value)
	{
		___moveYto_5 = value;
	}

	inline static int32_t get_offset_of_moveZto_6() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___moveZto_6)); }
	inline float get_moveZto_6() const { return ___moveZto_6; }
	inline float* get_address_of_moveZto_6() { return &___moveZto_6; }
	inline void set_moveZto_6(float value)
	{
		___moveZto_6 = value;
	}

	inline static int32_t get_offset_of_newPos_7() { return static_cast<int32_t>(offsetof(videoTrigger_t3087919293, ___newPos_7)); }
	inline Vector3_t3525329789  get_newPos_7() const { return ___newPos_7; }
	inline Vector3_t3525329789 * get_address_of_newPos_7() { return &___newPos_7; }
	inline void set_newPos_7(Vector3_t3525329789  value)
	{
		___newPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
