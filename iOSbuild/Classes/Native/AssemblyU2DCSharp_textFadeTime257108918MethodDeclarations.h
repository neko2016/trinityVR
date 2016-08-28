#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// textFadeTime
struct textFadeTime_t257108918;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void textFadeTime::.ctor()
extern "C"  void textFadeTime__ctor_m134976421 (textFadeTime_t257108918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void textFadeTime::Start()
extern "C"  void textFadeTime_Start_m3377081509 (textFadeTime_t257108918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator textFadeTime::FadeIn()
extern "C"  Il2CppObject * textFadeTime_FadeIn_m1966581320 (textFadeTime_t257108918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void textFadeTime::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void textFadeTime_OnTriggerEnter_m323474931 (textFadeTime_t257108918 * __this, Collider_t955670625 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator textFadeTime::FadeOut(System.Int32)
extern "C"  Il2CppObject * textFadeTime_FadeOut_m1997444478 (textFadeTime_t257108918 * __this, int32_t ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
