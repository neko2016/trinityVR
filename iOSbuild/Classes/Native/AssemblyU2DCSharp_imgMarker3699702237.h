#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// imgMarker
struct  imgMarker_t3699702237  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource imgMarker::myAudio
	AudioSource_t3628549054 * ___myAudio_2;
	// UnityEngine.GameObject[] imgMarker::allAudioNAR
	GameObjectU5BU5D_t3499186955* ___allAudioNAR_3;
	// UnityEngine.GameObject imgMarker::imagePanel
	GameObject_t4012695102 * ___imagePanel_4;
	// UnityEngine.UI.Image imgMarker::image
	Image_t3354615620 * ___image_5;
	// System.Single imgMarker::delayImage
	float ___delayImage_6;
	// System.Single imgMarker::fadeTime
	float ___fadeTime_7;
	// System.Boolean imgMarker::imageState
	bool ___imageState_8;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___myAudio_2)); }
	inline AudioSource_t3628549054 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3628549054 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_allAudioNAR_3() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___allAudioNAR_3)); }
	inline GameObjectU5BU5D_t3499186955* get_allAudioNAR_3() const { return ___allAudioNAR_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_allAudioNAR_3() { return &___allAudioNAR_3; }
	inline void set_allAudioNAR_3(GameObjectU5BU5D_t3499186955* value)
	{
		___allAudioNAR_3 = value;
		Il2CppCodeGenWriteBarrier(&___allAudioNAR_3, value);
	}

	inline static int32_t get_offset_of_imagePanel_4() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___imagePanel_4)); }
	inline GameObject_t4012695102 * get_imagePanel_4() const { return ___imagePanel_4; }
	inline GameObject_t4012695102 ** get_address_of_imagePanel_4() { return &___imagePanel_4; }
	inline void set_imagePanel_4(GameObject_t4012695102 * value)
	{
		___imagePanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___imagePanel_4, value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___image_5)); }
	inline Image_t3354615620 * get_image_5() const { return ___image_5; }
	inline Image_t3354615620 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Image_t3354615620 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}

	inline static int32_t get_offset_of_delayImage_6() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___delayImage_6)); }
	inline float get_delayImage_6() const { return ___delayImage_6; }
	inline float* get_address_of_delayImage_6() { return &___delayImage_6; }
	inline void set_delayImage_6(float value)
	{
		___delayImage_6 = value;
	}

	inline static int32_t get_offset_of_fadeTime_7() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___fadeTime_7)); }
	inline float get_fadeTime_7() const { return ___fadeTime_7; }
	inline float* get_address_of_fadeTime_7() { return &___fadeTime_7; }
	inline void set_fadeTime_7(float value)
	{
		___fadeTime_7 = value;
	}

	inline static int32_t get_offset_of_imageState_8() { return static_cast<int32_t>(offsetof(imgMarker_t3699702237, ___imageState_8)); }
	inline bool get_imageState_8() const { return ___imageState_8; }
	inline bool* get_address_of_imageState_8() { return &___imageState_8; }
	inline void set_imageState_8(bool value)
	{
		___imageState_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
