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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TypedReference1193563574.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2626069127 (TypedReference_t1193563574 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m1538911 (TypedReference_t1193563574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypedReference_t1193563574;
struct TypedReference_t1193563574_marshaled;

extern "C" void TypedReference_t1193563574_marshal(const TypedReference_t1193563574& unmarshaled, TypedReference_t1193563574_marshaled& marshaled);
extern "C" void TypedReference_t1193563574_marshal_back(const TypedReference_t1193563574_marshaled& marshaled, TypedReference_t1193563574& unmarshaled);
extern "C" void TypedReference_t1193563574_marshal_cleanup(TypedReference_t1193563574_marshaled& marshaled);
