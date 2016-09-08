#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Func`2<UnityEngine.GameObject,System.String>
struct Func_2_t1459861720;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// chapelMusic
struct  chapelMusic_t239962090  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] chapelMusic::allMus
	GameObjectU5BU5D_t3499186955* ___allMus_2;
	// UnityEngine.AudioSource chapelMusic::currMus
	AudioSource_t3628549054 * ___currMus_3;
	// System.Int32 chapelMusic::songNumber
	int32_t ___songNumber_4;

public:
	inline static int32_t get_offset_of_allMus_2() { return static_cast<int32_t>(offsetof(chapelMusic_t239962090, ___allMus_2)); }
	inline GameObjectU5BU5D_t3499186955* get_allMus_2() const { return ___allMus_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allMus_2() { return &___allMus_2; }
	inline void set_allMus_2(GameObjectU5BU5D_t3499186955* value)
	{
		___allMus_2 = value;
		Il2CppCodeGenWriteBarrier(&___allMus_2, value);
	}

	inline static int32_t get_offset_of_currMus_3() { return static_cast<int32_t>(offsetof(chapelMusic_t239962090, ___currMus_3)); }
	inline AudioSource_t3628549054 * get_currMus_3() const { return ___currMus_3; }
	inline AudioSource_t3628549054 ** get_address_of_currMus_3() { return &___currMus_3; }
	inline void set_currMus_3(AudioSource_t3628549054 * value)
	{
		___currMus_3 = value;
		Il2CppCodeGenWriteBarrier(&___currMus_3, value);
	}

	inline static int32_t get_offset_of_songNumber_4() { return static_cast<int32_t>(offsetof(chapelMusic_t239962090, ___songNumber_4)); }
	inline int32_t get_songNumber_4() const { return ___songNumber_4; }
	inline int32_t* get_address_of_songNumber_4() { return &___songNumber_4; }
	inline void set_songNumber_4(int32_t value)
	{
		___songNumber_4 = value;
	}
};

struct chapelMusic_t239962090_StaticFields
{
public:
	// System.Func`2<UnityEngine.GameObject,System.String> chapelMusic::<>f__am$cache3
	Func_2_t1459861720 * ___U3CU3Ef__amU24cache3_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_5() { return static_cast<int32_t>(offsetof(chapelMusic_t239962090_StaticFields, ___U3CU3Ef__amU24cache3_5)); }
	inline Func_2_t1459861720 * get_U3CU3Ef__amU24cache3_5() const { return ___U3CU3Ef__amU24cache3_5; }
	inline Func_2_t1459861720 ** get_address_of_U3CU3Ef__amU24cache3_5() { return &___U3CU3Ef__amU24cache3_5; }
	inline void set_U3CU3Ef__amU24cache3_5(Func_2_t1459861720 * value)
	{
		___U3CU3Ef__amU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
