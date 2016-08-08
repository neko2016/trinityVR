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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct ProcInfo_t3353625924;
struct ProcInfo_t3353625924_marshaled;

extern "C" void ProcInfo_t3353625924_marshal(const ProcInfo_t3353625924& unmarshaled, ProcInfo_t3353625924_marshaled& marshaled);
extern "C" void ProcInfo_t3353625924_marshal_back(const ProcInfo_t3353625924_marshaled& marshaled, ProcInfo_t3353625924& unmarshaled);
extern "C" void ProcInfo_t3353625924_marshal_cleanup(ProcInfo_t3353625924_marshaled& marshaled);
