#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Action
struct Action_t437523947;

#include "mscorlib_System_Array2840145358.h"
#include "System_Core_System_Action437523947.h"

#pragma once
// System.Action[]
struct ActionU5BU5D_t546010634  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Action_t437523947 * m_Items[1];

public:
	inline Action_t437523947 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Action_t437523947 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Action_t437523947 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
