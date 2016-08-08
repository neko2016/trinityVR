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
	Vector3_t3525329789  ___newPos_5;
	// UnityEngine.SceneManagement.Scene loadLocation::currScene
	Scene_t2772977204  ___currScene_6;

public:
	inline static int32_t get_offset_of_newPos_5() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923, ___newPos_5)); }
	inline Vector3_t3525329789  get_newPos_5() const { return ___newPos_5; }
	inline Vector3_t3525329789 * get_address_of_newPos_5() { return &___newPos_5; }
	inline void set_newPos_5(Vector3_t3525329789  value)
	{
		___newPos_5 = value;
	}

	inline static int32_t get_offset_of_currScene_6() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923, ___currScene_6)); }
	inline Scene_t2772977204  get_currScene_6() const { return ___currScene_6; }
	inline Scene_t2772977204 * get_address_of_currScene_6() { return &___currScene_6; }
	inline void set_currScene_6(Scene_t2772977204  value)
	{
		___currScene_6 = value;
	}
};

struct loadLocation_t3184820923_StaticFields
{
public:
	// System.Boolean loadLocation::toHome
	bool ___toHome_2;
	// System.Boolean loadLocation::fromMB
	bool ___fromMB_3;
	// System.Boolean loadLocation::fromLR
	bool ___fromLR_4;

public:
	inline static int32_t get_offset_of_toHome_2() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923_StaticFields, ___toHome_2)); }
	inline bool get_toHome_2() const { return ___toHome_2; }
	inline bool* get_address_of_toHome_2() { return &___toHome_2; }
	inline void set_toHome_2(bool value)
	{
		___toHome_2 = value;
	}

	inline static int32_t get_offset_of_fromMB_3() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923_StaticFields, ___fromMB_3)); }
	inline bool get_fromMB_3() const { return ___fromMB_3; }
	inline bool* get_address_of_fromMB_3() { return &___fromMB_3; }
	inline void set_fromMB_3(bool value)
	{
		___fromMB_3 = value;
	}

	inline static int32_t get_offset_of_fromLR_4() { return static_cast<int32_t>(offsetof(loadLocation_t3184820923_StaticFields, ___fromLR_4)); }
	inline bool get_fromLR_4() const { return ___fromLR_4; }
	inline bool* get_address_of_fromLR_4() { return &___fromLR_4; }
	inline void set_fromLR_4(bool value)
	{
		___fromLR_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
