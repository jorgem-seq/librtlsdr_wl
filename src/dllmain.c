// SPDX-License-Identifier: GPL-2.0-or-later

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "winnt.h"

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason,
		    void *reserved __attribute__((unused)))
{
	switch (reason) {
	case DLL_WINE_PREATTACH:
		return FALSE;    /* prefer native version */
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(instance);
		break;
	}
	return TRUE;
}
