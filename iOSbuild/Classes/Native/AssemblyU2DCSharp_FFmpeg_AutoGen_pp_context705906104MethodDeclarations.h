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
struct pp_context_t705906104;
struct pp_context_t705906104_marshaled;

extern "C" void pp_context_t705906104_marshal(const pp_context_t705906104& unmarshaled, pp_context_t705906104_marshaled& marshaled);
extern "C" void pp_context_t705906104_marshal_back(const pp_context_t705906104_marshaled& marshaled, pp_context_t705906104& unmarshaled);
extern "C" void pp_context_t705906104_marshal_cleanup(pp_context_t705906104_marshaled& marshaled);
