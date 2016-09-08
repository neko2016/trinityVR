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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>
struct Transform_1_t1327604462;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24276931675.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type2622298.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2602390290_gshared (Transform_1_t1327604462 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2602390290(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1327604462 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2602390290_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4276931675  Transform_1_Invoke_m4292663590_gshared (Transform_1_t1327604462 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4292663590(__this, ___key, ___value, method) ((  KeyValuePair_2_t4276931675  (*) (Transform_1_t1327604462 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m4292663590_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m485996881_gshared (Transform_1_t1327604462 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m485996881(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1327604462 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m485996881_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,proto.PhoneEvent/Types/Type,System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4276931675  Transform_1_EndInvoke_m2195370916_gshared (Transform_1_t1327604462 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2195370916(__this, ___result, method) ((  KeyValuePair_2_t4276931675  (*) (Transform_1_t1327604462 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2195370916_gshared)(__this, ___result, method)
