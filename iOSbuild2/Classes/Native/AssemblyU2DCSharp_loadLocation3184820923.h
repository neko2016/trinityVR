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
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadLocation
struct  loadLocation_t3184820923  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 loadLocation::newPos
	Vector3_t3525329789  ___newPos_2;
	// UnityEngine.SceneManagement.Scene loadLocation::currScene
	Scene_t2772977204  ___currScene_3;

public:
	inline static int32_t get_offset_of_newPos_2() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923, ___newPos_2)); }
	inline Vector3_t3525329789  get_newPos_2() const { return ___newPos_2; }
	inline Vector3_t3525329789 * get_address_of_newPos_2() { return &___newPos_2; }
	inline void set_newPos_2(Vector3_t3525329789  value)
	{
		___newPos_2 = value;
	}

	inline static int32_t get_offset_of_currScene_3() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923, ___currScene_3)); }
	inline Scene_t2772977204  get_currScene_3() const { return ___currScene_3; }
	inline Scene_t2772977204 * get_address_of_currScene_3() { return &___currScene_3; }
	inline void set_currScene_3(Scene_t2772977204  value)
	{
		___currScene_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
