#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// navTrigger
struct  navTrigger_t726877973  : public MonoBehaviour_t3012272455
{
public:
	// System.Single navTrigger::moveXto
	float ___moveXto_2;
	// System.Single navTrigger::moveYto
	float ___moveYto_3;
	// System.Single navTrigger::moveZto
	float ___moveZto_4;
	// UnityEngine.Vector3 navTrigger::newPos
	Vector3_t3525329789  ___newPos_5;

public:
	inline static int32_t get_offset_of_moveXto_2() { return static_cast<int32_t>(offsetof(navTrigger_t726877973, ___moveXto_2)); }
	inline float get_moveXto_2() const { return ___moveXto_2; }
	inline float* get_address_of_moveXto_2() { return &___moveXto_2; }
	inline void set_moveXto_2(float value)
	{
		___moveXto_2 = value;
	}

	inline static int32_t get_offset_of_moveYto_3() { return static_cast<int32_t>(offsetof(navTrigger_t726877973, ___moveYto_3)); }
	inline float get_moveYto_3() const { return ___moveYto_3; }
	inline float* get_address_of_moveYto_3() { return &___moveYto_3; }
	inline void set_moveYto_3(float value)
	{
		___moveYto_3 = value;
	}

	inline static int32_t get_offset_of_moveZto_4() { return static_cast<int32_t>(offsetof(navTrigger_t726877973, ___moveZto_4)); }
	inline float get_moveZto_4() const { return ___moveZto_4; }
	inline float* get_address_of_moveZto_4() { return &___moveZto_4; }
	inline void set_moveZto_4(float value)
	{
		___moveZto_4 = value;
	}

	inline static int32_t get_offset_of_newPos_5() { return static_cast<int32_t>(offsetof(navTrigger_t726877973, ___newPos_5)); }
	inline Vector3_t3525329789  get_newPos_5() const { return ___newPos_5; }
	inline Vector3_t3525329789 * get_address_of_newPos_5() { return &___newPos_5; }
	inline void set_newPos_5(Vector3_t3525329789  value)
	{
		___newPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
