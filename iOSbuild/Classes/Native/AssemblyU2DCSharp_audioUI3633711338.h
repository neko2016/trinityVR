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

// audioUI
struct  audioUI_t3633711338  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] audioUI::allUI
	GameObjectU5BU5D_t3499186955* ___allUI_2;
	// UnityEngine.AudioSource audioUI::click
	AudioSource_t3628549054 * ___click_3;
	// UnityEngine.AudioSource audioUI::highlight
	AudioSource_t3628549054 * ___highlight_4;
	// UnityEngine.AudioSource audioUI::tone
	AudioSource_t3628549054 * ___tone_5;

public:
	inline static int32_t get_offset_of_allUI_2() { return static_cast<int32_t>(offsetof(audioUI_t3633711338, ___allUI_2)); }
	inline GameObjectU5BU5D_t3499186955* get_allUI_2() const { return ___allUI_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allUI_2() { return &___allUI_2; }
	inline void set_allUI_2(GameObjectU5BU5D_t3499186955* value)
	{
		___allUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___allUI_2, value);
	}

	inline static int32_t get_offset_of_click_3() { return static_cast<int32_t>(offsetof(audioUI_t3633711338, ___click_3)); }
	inline AudioSource_t3628549054 * get_click_3() const { return ___click_3; }
	inline AudioSource_t3628549054 ** get_address_of_click_3() { return &___click_3; }
	inline void set_click_3(AudioSource_t3628549054 * value)
	{
		___click_3 = value;
		Il2CppCodeGenWriteBarrier(&___click_3, value);
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(audioUI_t3633711338, ___highlight_4)); }
	inline AudioSource_t3628549054 * get_highlight_4() const { return ___highlight_4; }
	inline AudioSource_t3628549054 ** get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(AudioSource_t3628549054 * value)
	{
		___highlight_4 = value;
		Il2CppCodeGenWriteBarrier(&___highlight_4, value);
	}

	inline static int32_t get_offset_of_tone_5() { return static_cast<int32_t>(offsetof(audioUI_t3633711338, ___tone_5)); }
	inline AudioSource_t3628549054 * get_tone_5() const { return ___tone_5; }
	inline AudioSource_t3628549054 ** get_address_of_tone_5() { return &___tone_5; }
	inline void set_tone_5(AudioSource_t3628549054 * value)
	{
		___tone_5 = value;
		Il2CppCodeGenWriteBarrier(&___tone_5, value);
	}
};

struct audioUI_t3633711338_StaticFields
{
public:
	// System.Func`2<UnityEngine.GameObject,System.String> audioUI::<>f__am$cache4
	Func_2_t1459861720 * ___U3CU3Ef__amU24cache4_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_6() { return static_cast<int32_t>(offsetof(audioUI_t3633711338_StaticFields, ___U3CU3Ef__amU24cache4_6)); }
	inline Func_2_t1459861720 * get_U3CU3Ef__amU24cache4_6() const { return ___U3CU3Ef__amU24cache4_6; }
	inline Func_2_t1459861720 ** get_address_of_U3CU3Ef__amU24cache4_6() { return &___U3CU3Ef__amU24cache4_6; }
	inline void set_U3CU3Ef__amU24cache4_6(Func_2_t1459861720 * value)
	{
		___U3CU3Ef__amU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
