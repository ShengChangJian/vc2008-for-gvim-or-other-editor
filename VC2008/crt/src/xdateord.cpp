// xdateord -- look up date ordering for Microsoft
#include <cruntime.h>
#include <locale>
#include <tchar.h>
#include <mtdll.h>
#include <setlocal.h>

_C_STD_BEGIN
#ifndef MRTDLL
extern "C"
#endif
int __CLRCALL_PURE_OR_CDECL _Getdateorder()
	{	// return date order for current locale
	_TCHAR buf[2] = {0};
	GetLocaleInfo(___lc_handle_func()[LC_TIME], LOCALE_ILDATE,
		buf, sizeof (buf) / sizeof (buf[0]));
	return (buf[0] == _T('0') ? std::time_base::mdy
		: buf[0] == _T('1') ? std::time_base::dmy
		: buf[0] == _T('2') ? std::time_base::ymd
		: std::time_base::no_order);
	}
_C_STD_END

/*
 * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
 V5.03:0009 */
