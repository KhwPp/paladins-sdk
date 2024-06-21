#include "local.hpp"
namespace local {
	BOOL self(DWORD64 address)
	{
		if (!IsBadReadPtr((const void*)address, (UINT_PTR)8)) return TRUE;
		else return FALSE;
	}

}
