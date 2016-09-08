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
struct _iobuf_t1322407382;
struct _iobuf_t1322407382_marshaled;

extern "C" void _iobuf_t1322407382_marshal(const _iobuf_t1322407382& unmarshaled, _iobuf_t1322407382_marshaled& marshaled);
extern "C" void _iobuf_t1322407382_marshal_back(const _iobuf_t1322407382_marshaled& marshaled, _iobuf_t1322407382& unmarshaled);
extern "C" void _iobuf_t1322407382_marshal_cleanup(_iobuf_t1322407382_marshaled& marshaled);
