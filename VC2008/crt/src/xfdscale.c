/* _FDscale function -- IEEE 754 version */
#include "xmath.h"
_C_STD_BEGIN

_CRTIMP2_PURE short __CLRCALL_PURE_OR_CDECL _FDscale(float *px, long lexp)
	{	/* scale *px by 2^xexp with checking */
	unsigned short *ps = (unsigned short *)(char *)px;
	short xchar = (short)((ps[_F0] & _FMASK) >> _FOFF);

	if (xchar == _FMAX)
		return ((short)((ps[_F0] & _FFRAC) != 0 || ps[_F1] != 0
			? _NANCODE : _INFCODE));
	else if (xchar == 0 && 0 < (xchar = _FDnorm(ps)))
		return (0);

	if (0 < lexp && _FMAX - xchar <= lexp)
		{	/* overflow, return +/-INF */
		*px = ps[_F0] & _FSIGN ? -_FInf._Float : _FInf._Float;
		return (_INFCODE);
		}
	else if (-xchar < lexp)
		{	/* finite result, repack */
		ps[_F0] = (unsigned short)(ps[_F0] & ~_FMASK
			| (lexp + xchar) << _FOFF);
		return (_FINITE);
		}
	else
		{	/* denormalized, scale */
		unsigned short sign = (unsigned short)(ps[_F0] & _FSIGN);

		ps[_F0] = (unsigned short)(1 << _FOFF | ps[_F0] & _FFRAC);
		lexp += xchar - 1;
		if (lexp < -(16 + 1 + _FOFF) || 0 <= lexp)
			{	/* underflow, return +/-0 */
			ps[_F0] = sign;
			ps[_F1] = 0;
			return (0);
			}
		else
			{	/* nonzero, align fraction */
			short xexp = (short)lexp;
			unsigned short psx = 0;

			if (xexp <= -16)
				{	/* scale by words */
				psx = ps[_F1] | (psx != 0 ? 1 : 0);
				ps[_F1] = ps[_F0];
				ps[_F0] = 0;
				xexp += 16;
				}
			if ((xexp = (short)-xexp) != 0)
				{	/* scale by bits */
				psx = (ps[_F1] << (16 - xexp)) | (psx != 0 ? 1 : 0);
				ps[_F1] = (unsigned short)(ps[_F1] >> xexp
					| ps[_F0] << (16 - xexp));
				ps[_F0] >>= xexp;
				}

			ps[_F0] |= sign;
			if ((0x8000 < psx || 0x8000 == psx && (ps[_F1] & 0x0001) != 0)
				&& (++ps[_F1] & 0xffff) == 0)
				++ps[_F0];	/* round up */
			else if (ps[_F0] == sign && ps[_F1] == 0)
				return (0);
			return (_FINITE);
			}
		}
	}
_C_STD_END

/*
 * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
 V5.03:0009 */
