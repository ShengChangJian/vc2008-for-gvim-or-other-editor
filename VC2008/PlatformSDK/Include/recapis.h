//--------------------------------------------------------------------------
//  This is part of the Microsoft Tablet PC Platform SDK
//  Copyright (C) 2002 Microsoft Corporation
//  All rights reserved.
//
//
// Module:       
//      RecApis.h
//
//--------------------------------------------------------------------------

#ifndef __HRECOALT__
#define __HRECOALT__
DECLARE_HANDLE(HRECOALT); // definition of a handle for the alternate
#endif

#ifndef __HRECOCONTEXT__
#define __HRECOCONTEXT__
DECLARE_HANDLE(HRECOCONTEXT); // definition of a handle for the reco context
#endif

#ifndef __HRECOGNIZER__
#define __HRECOGNIZER__
DECLARE_HANDLE(HRECOGNIZER); // definition of a handle for the recognizer
#endif

#ifndef __HRECOLATTICE__
#define __HRECOLATTICE__
DECLARE_HANDLE(HRECOLATTICE); // definition of a handle for the lattice
#endif

#ifndef __HRECOWORDLIST__
#define __HRECOWORDLIST__
DECLARE_HANDLE(HRECOWORDLIST); // definition of a handle for the lattice
#endif

typedef HRESULT (*PfnRecoCallback)(DWORD, LPBYTE, HRECOCONTEXT);


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED
#include "tpcshrd.h"
#include "RecTypes.h"

////////////////////////
// IRecognizer
////////////////////////
HRESULT WINAPI CreateRecognizer(CLSID *pCLSID, HRECOGNIZER *phrec);
HRESULT WINAPI DestroyRecognizer(HRECOGNIZER hrec);
HRESULT WINAPI GetRecoAttributes(HRECOGNIZER hrec, RECO_ATTRS* pRecoAttrs);
HRESULT WINAPI CreateContext(HRECOGNIZER hrec, HRECOCONTEXT *phrc);
HRESULT WINAPI DestroyContext(HRECOCONTEXT hrc);
HRESULT WINAPI GetResultPropertyList(HRECOGNIZER hrec, ULONG* pPropertyCount, GUID*pPropertyGuid);
HRESULT WINAPI GetPreferredPacketDescription(HRECOGNIZER hrec, PACKET_DESCRIPTION* pPacketDescription);
HRESULT WINAPI GetUnicodeRanges(HRECOGNIZER hrec, ULONG *pcRanges, CHARACTER_RANGE *pcr);

////////////////////////
// IRecoContext
////////////////////////
HRESULT WINAPI AddStroke(HRECOCONTEXT hrc, const PACKET_DESCRIPTION* pPacketDesc, ULONG cbPacket, const BYTE *pPacket, const XFORM *pXForm);
HRESULT WINAPI GetBestResultString(HRECOCONTEXT hrc, __inout ULONG *pcSize, __out_ecount_opt (*pcSize) WCHAR* pwcBestResult);
HRESULT WINAPI DestroyAlternate(HRECOALT hrcalt);
HRESULT WINAPI SetGuide(HRECOCONTEXT hrc, const RECO_GUIDE* pGuide, ULONG iIndex);
HRESULT WINAPI GetGuide(HRECOCONTEXT hrc, RECO_GUIDE* pGuide, ULONG *piIndex);
HRESULT WINAPI AdviseInkChange(HRECOCONTEXT hrc, BOOL bNewStroke);
HRESULT WINAPI SetCACMode(HRECOCONTEXT hrc, int iMode);
HRESULT WINAPI EndInkInput(HRECOCONTEXT hrc);
HRESULT WINAPI CloneContext(HRECOCONTEXT hrc, HRECOCONTEXT* pCloneHrc);
HRESULT WINAPI ResetContext(HRECOCONTEXT hrc);
HRESULT WINAPI Process(HRECOCONTEXT hrc, BOOL *pbPartialProcessing);
HRESULT WINAPI SetFactoid(HRECOCONTEXT hrc, ULONG cwcFactoid, const WCHAR *pwcFactoid);
HRESULT WINAPI SetFlags(HRECOCONTEXT hrc, DWORD dwFlags);
HRESULT WINAPI GetLatticePtr(HRECOCONTEXT hrc, RECO_LATTICE **ppLattice);
HRESULT WINAPI SetTextContext(HRECOCONTEXT hrc, ULONG cwcBefore, __ecount(cwcBefore) const WCHAR *pwcBefore, ULONG cwcAfter, __ecount(cwcAfter) const WCHAR *pwcAfter);
HRESULT WINAPI GetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI SetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG cRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI GetContextPropertyList(HRECOCONTEXT hrc, ULONG *pcProperties, GUID *pPropertyGUIDS);
HRESULT WINAPI GetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG *pcbSize, BYTE *pProperty);
HRESULT WINAPI SetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG cbSize, BYTE *pProperty);
HRESULT WINAPI IsStringSupported(HRECOCONTEXT hrc, ULONG wcString, const WCHAR *pwcString);
HRESULT WINAPI SetWordList(HRECOCONTEXT hrc, HRECOWORDLIST hwl);
HRESULT WINAPI GetContextPreferenceFlags(HRECOCONTEXT hrc, DWORD *pdwContextPreferenceFlags);
HRESULT WINAPI GetRightSeparator(HRECOCONTEXT hrc, __inout ULONG *pcSize, __out_ecount(*pcSize) OPTIONAL WCHAR* pwcRightSeparator);
HRESULT WINAPI GetLeftSeparator(HRECOCONTEXT hrc, __inout ULONG *pcSize, __out_ecount(*pcSize) OPTIONAL WCHAR* pwcLeftSeparator);

////////////////////////
// IRecoWordList
////////////////////////
HRESULT WINAPI DestroyWordList(HRECOWORDLIST hwl);
HRESULT WINAPI AddWordsToWordList(HRECOWORDLIST hwl, __in WCHAR *pwcWords);
HRESULT WINAPI MakeWordList(HRECOGNIZER hrec, __in WCHAR *pBuffer, HRECOWORDLIST *phwl);

