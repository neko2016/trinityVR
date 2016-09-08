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
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t3354615620;
// musicControl
struct musicControl_t2822556536;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoTriggerToScene
struct  videoTriggerToScene_t1861271380  : public MonoBehaviour_t3012272455
{
public:
	// MediaPlayerCtrl videoTriggerToScene::mediaScript
	MediaPlayerCtrl_t3572035536 * ___mediaScript_2;
	// System.String videoTriggerToScene::newScene
	String_t* ___newScene_3;
	// UnityEngine.UI.Image videoTriggerToScene::overlay
	Image_t3354615620 * ___overlay_4;
	// System.Single videoTriggerToScene::fadeTime
	float ___fadeTime_5;
	// musicControl videoTriggerToScene::musicControl
	musicControl_t2822556536 * ___musicControl_6;
	// UnityEngine.GameObject videoTriggerToScene::loading
	GameObject_t4012695102 * ___loading_7;
	// UnityEngine.GameObject videoTriggerToScene::circle
	GameObject_t4012695102 * ___circle_8;
	// UnityEngine.GameObject videoTriggerToScene::logo
	GameObject_t4012695102 * ___logo_9;
	// UnityEngine.GameObject[] videoTriggerToScene::allAudioAMB
	GameObjectU5BU5D_t3499186955* ___allAudioAMB_10;
	// UnityEngine.GameObject[] videoTriggerToScene::allAudioSFX
	GameObjectU5BU5D_t3499186955* ___allAudioSFX_11;
	// UnityEngine.GameObject[] videoTriggerToScene::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_12;
	// UnityEngine.GameObject[] videoTriggerToScene::allAudioMUS
	GameObjectU5BU5D_t3499186955* ___allAudioMUS_13;

public:
	inline static int32_t get_offset_of_mediaScript_2() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___mediaScript_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_mediaScript_2() const { return ___mediaScript_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_mediaScript_2() { return &___mediaScript_2; }
	inline void set_mediaScript_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___mediaScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediaScript_2, value);
	}

	inline static int32_t get_offset_of_newScene_3() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___newScene_3)); }
	inline String_t* get_newScene_3() const { return ___newScene_3; }
	inline String_t** get_address_of_newScene_3() { return &___newScene_3; }
	inline void set_newScene_3(String_t* value)
	{
		___newScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___newScene_3, value);
	}

	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___overlay_4)); }
	inline Image_t3354615620 * get_overlay_4() const { return ___overlay_4; }
	inline Image_t3354615620 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(Image_t3354615620 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_4, value);
	}

	inline static int32_t get_offset_of_fadeTime_5() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___fadeTime_5)); }
	inline float get_fadeTime_5() const { return ___fadeTime_5; }
	inline float* get_address_of_fadeTime_5() { return &___fadeTime_5; }
	inline void set_fadeTime_5(float value)
	{
		___fadeTime_5 = value;
	}

	inline static int32_t get_offset_of_musicControl_6() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___musicControl_6)); }
	inline musicControl_t2822556536 * get_musicControl_6() const { return ___musicControl_6; }
	inline musicControl_t2822556536 ** get_address_of_musicControl_6() { return &___musicControl_6; }
	inline void set_musicControl_6(musicControl_t2822556536 * value)
	{
		___musicControl_6 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_6, value);
	}

	inline static int32_t get_offset_of_loading_7() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___loading_7)); }
	inline GameObject_t4012695102 * get_loading_7() const { return ___loading_7; }
	inline GameObject_t4012695102 ** get_address_of_loading_7() { return &___loading_7; }
	inline void set_loading_7(GameObject_t4012695102 * value)
	{
		___loading_7 = value;
		Il2CppCodeGenWriteBarrier(&___loading_7, value);
	}

	inline static int32_t get_offset_of_circle_8() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___circle_8)); }
	inline GameObject_t4012695102 * get_circle_8() const { return ___circle_8; }
	inline GameObject_t4012695102 ** get_address_of_circle_8() { return &___circle_8; }
	inline void set_circle_8(GameObject_t4012695102 * value)
	{
		___circle_8 = value;
		Il2CppCodeGenWriteBarrier(&___circle_8, value);
	}

	inline static int32_t get_offset_of_logo_9() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___logo_9)); }
	inline GameObject_t4012695102 * get_logo_9() const { return ___logo_9; }
	inline GameObject_t4012695102 ** get_address_of_logo_9() { return &___logo_9; }
	inline void set_logo_9(GameObject_t4012695102 * value)
	{
		___logo_9 = value;
		Il2CppCodeGenWriteBarrier(&___logo_9, value);
	}

	inline static int32_t get_offset_of_allAudioAMB_10() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___allAudioAMB_10)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioAMB_10() const { return ___allAudioAMB_10; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioAMB_10() { return &___allAudioAMB_10; }
	inline void set_allAudioAMB_10(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioAMB_10 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioAMB_10, value);
	}

	inline static int32_t get_offset_of_allAudioSFX_11() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___allAudioSFX_11)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioSFX_11() const { return ___allAudioSFX_11; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioSFX_11() { return &___allAudioSFX_11; }
	inline void set_allAudioSFX_11(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioSFX_11 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioSFX_11, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_12() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___allAudioNAR_12)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_12() const { return ___allAudioNAR_12; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_12() { return &___allAudioNAR_12; }
	inline void set_allAudioNAR_12(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_12 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_12, value);
	}

	inline static int32_t get_offset_of_allAudioMUS_13() { return static_cast<int32_t>(offsetof(videoTriggerToScene_t1861271380, ___allAudioMUS_13)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioMUS_13() const { return ___allAudioMUS_13; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioMUS_13() { return &___allAudioMUS_13; }
	inline void set_allAudioMUS_13(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioMUS_13 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioMUS_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
