﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GvrCameraUtils
struct GvrCameraUtils_t3751592777;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void GvrCameraUtils::.ctor()
extern "C"  void GvrCameraUtils__ctor_m4027951986 (GvrCameraUtils_t3751592777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::FixProjection(UnityEngine.Rect,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_FixProjection_m551508757 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___camRect, float ___nearClipPlane, float ___farClipPlane, Matrix4x4_t277289660 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixViewport(UnityEngine.Rect,UnityEngine.Rect,System.Boolean)
extern "C"  Rect_t1525428817  GvrCameraUtils_FixViewport_m1705395136 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, Rect_t1525428817  ___viewport, bool ___isRightEye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixEditorViewport(UnityEngine.Rect,System.Single,System.Single)
extern "C"  Rect_t1525428817  GvrCameraUtils_FixEditorViewport_m3390222917 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, float ___profileAspect, float ___windowAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::ZoomStereoCameras(System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_ZoomStereoCameras_m289020374 (Il2CppObject * __this /* static, unused */, float ___matchByZoom, float ___matchMonoFOV, float ___monoProj11, Matrix4x4_t277289660 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
