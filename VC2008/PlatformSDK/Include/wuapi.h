

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for wuapi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wuapi_h__
#define __wuapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUpdateLockdown_FWD_DEFINED__
#define __IUpdateLockdown_FWD_DEFINED__
typedef interface IUpdateLockdown IUpdateLockdown;
#endif 	/* __IUpdateLockdown_FWD_DEFINED__ */


#ifndef __IStringCollection_FWD_DEFINED__
#define __IStringCollection_FWD_DEFINED__
typedef interface IStringCollection IStringCollection;
#endif 	/* __IStringCollection_FWD_DEFINED__ */


#ifndef __IWebProxy_FWD_DEFINED__
#define __IWebProxy_FWD_DEFINED__
typedef interface IWebProxy IWebProxy;
#endif 	/* __IWebProxy_FWD_DEFINED__ */


#ifndef __ISystemInformation_FWD_DEFINED__
#define __ISystemInformation_FWD_DEFINED__
typedef interface ISystemInformation ISystemInformation;
#endif 	/* __ISystemInformation_FWD_DEFINED__ */


#ifndef __IWindowsUpdateAgentInfo_FWD_DEFINED__
#define __IWindowsUpdateAgentInfo_FWD_DEFINED__
typedef interface IWindowsUpdateAgentInfo IWindowsUpdateAgentInfo;
#endif 	/* __IWindowsUpdateAgentInfo_FWD_DEFINED__ */


#ifndef __IAutomaticUpdatesResults_FWD_DEFINED__
#define __IAutomaticUpdatesResults_FWD_DEFINED__
typedef interface IAutomaticUpdatesResults IAutomaticUpdatesResults;
#endif 	/* __IAutomaticUpdatesResults_FWD_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings_FWD_DEFINED__
#define __IAutomaticUpdatesSettings_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings IAutomaticUpdatesSettings;
#endif 	/* __IAutomaticUpdatesSettings_FWD_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings2_FWD_DEFINED__
#define __IAutomaticUpdatesSettings2_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings2 IAutomaticUpdatesSettings2;
#endif 	/* __IAutomaticUpdatesSettings2_FWD_DEFINED__ */


#ifndef __IAutomaticUpdates_FWD_DEFINED__
#define __IAutomaticUpdates_FWD_DEFINED__
typedef interface IAutomaticUpdates IAutomaticUpdates;
#endif 	/* __IAutomaticUpdates_FWD_DEFINED__ */


#ifndef __IAutomaticUpdates2_FWD_DEFINED__
#define __IAutomaticUpdates2_FWD_DEFINED__
typedef interface IAutomaticUpdates2 IAutomaticUpdates2;
#endif 	/* __IAutomaticUpdates2_FWD_DEFINED__ */


#ifndef __IUpdateIdentity_FWD_DEFINED__
#define __IUpdateIdentity_FWD_DEFINED__
typedef interface IUpdateIdentity IUpdateIdentity;
#endif 	/* __IUpdateIdentity_FWD_DEFINED__ */


#ifndef __IImageInformation_FWD_DEFINED__
#define __IImageInformation_FWD_DEFINED__
typedef interface IImageInformation IImageInformation;
#endif 	/* __IImageInformation_FWD_DEFINED__ */


#ifndef __ICategory_FWD_DEFINED__
#define __ICategory_FWD_DEFINED__
typedef interface ICategory ICategory;
#endif 	/* __ICategory_FWD_DEFINED__ */


#ifndef __ICategoryCollection_FWD_DEFINED__
#define __ICategoryCollection_FWD_DEFINED__
typedef interface ICategoryCollection ICategoryCollection;
#endif 	/* __ICategoryCollection_FWD_DEFINED__ */


#ifndef __IInstallationBehavior_FWD_DEFINED__
#define __IInstallationBehavior_FWD_DEFINED__
typedef interface IInstallationBehavior IInstallationBehavior;
#endif 	/* __IInstallationBehavior_FWD_DEFINED__ */


#ifndef __IUpdateDownloadContent_FWD_DEFINED__
#define __IUpdateDownloadContent_FWD_DEFINED__
typedef interface IUpdateDownloadContent IUpdateDownloadContent;
#endif 	/* __IUpdateDownloadContent_FWD_DEFINED__ */


#ifndef __IUpdateDownloadContent2_FWD_DEFINED__
#define __IUpdateDownloadContent2_FWD_DEFINED__
typedef interface IUpdateDownloadContent2 IUpdateDownloadContent2;
#endif 	/* __IUpdateDownloadContent2_FWD_DEFINED__ */


#ifndef __IUpdateDownloadContentCollection_FWD_DEFINED__
#define __IUpdateDownloadContentCollection_FWD_DEFINED__
typedef interface IUpdateDownloadContentCollection IUpdateDownloadContentCollection;
#endif 	/* __IUpdateDownloadContentCollection_FWD_DEFINED__ */


#ifndef __IUpdate_FWD_DEFINED__
#define __IUpdate_FWD_DEFINED__
typedef interface IUpdate IUpdate;
#endif 	/* __IUpdate_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate_FWD_DEFINED__
#define __IWindowsDriverUpdate_FWD_DEFINED__
typedef interface IWindowsDriverUpdate IWindowsDriverUpdate;
#endif 	/* __IWindowsDriverUpdate_FWD_DEFINED__ */


#ifndef __IUpdate2_FWD_DEFINED__
#define __IUpdate2_FWD_DEFINED__
typedef interface IUpdate2 IUpdate2;
#endif 	/* __IUpdate2_FWD_DEFINED__ */


#ifndef __IUpdate3_FWD_DEFINED__
#define __IUpdate3_FWD_DEFINED__
typedef interface IUpdate3 IUpdate3;
#endif 	/* __IUpdate3_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate2_FWD_DEFINED__
#define __IWindowsDriverUpdate2_FWD_DEFINED__
typedef interface IWindowsDriverUpdate2 IWindowsDriverUpdate2;
#endif 	/* __IWindowsDriverUpdate2_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate3_FWD_DEFINED__
#define __IWindowsDriverUpdate3_FWD_DEFINED__
typedef interface IWindowsDriverUpdate3 IWindowsDriverUpdate3;
#endif 	/* __IWindowsDriverUpdate3_FWD_DEFINED__ */


#ifndef __IUpdateCollection_FWD_DEFINED__
#define __IUpdateCollection_FWD_DEFINED__
typedef interface IUpdateCollection IUpdateCollection;
#endif 	/* __IUpdateCollection_FWD_DEFINED__ */


#ifndef __IUpdateException_FWD_DEFINED__
#define __IUpdateException_FWD_DEFINED__
typedef interface IUpdateException IUpdateException;
#endif 	/* __IUpdateException_FWD_DEFINED__ */


#ifndef __IInvalidProductLicenseException_FWD_DEFINED__
#define __IInvalidProductLicenseException_FWD_DEFINED__
typedef interface IInvalidProductLicenseException IInvalidProductLicenseException;
#endif 	/* __IInvalidProductLicenseException_FWD_DEFINED__ */


#ifndef __IUpdateExceptionCollection_FWD_DEFINED__
#define __IUpdateExceptionCollection_FWD_DEFINED__
typedef interface IUpdateExceptionCollection IUpdateExceptionCollection;
#endif 	/* __IUpdateExceptionCollection_FWD_DEFINED__ */


#ifndef __ISearchResult_FWD_DEFINED__
#define __ISearchResult_FWD_DEFINED__
typedef interface ISearchResult ISearchResult;
#endif 	/* __ISearchResult_FWD_DEFINED__ */


#ifndef __ISearchJob_FWD_DEFINED__
#define __ISearchJob_FWD_DEFINED__
typedef interface ISearchJob ISearchJob;
#endif 	/* __ISearchJob_FWD_DEFINED__ */


#ifndef __ISearchCompletedCallbackArgs_FWD_DEFINED__
#define __ISearchCompletedCallbackArgs_FWD_DEFINED__
typedef interface ISearchCompletedCallbackArgs ISearchCompletedCallbackArgs;
#endif 	/* __ISearchCompletedCallbackArgs_FWD_DEFINED__ */


#ifndef __ISearchCompletedCallback_FWD_DEFINED__
#define __ISearchCompletedCallback_FWD_DEFINED__
typedef interface ISearchCompletedCallback ISearchCompletedCallback;
#endif 	/* __ISearchCompletedCallback_FWD_DEFINED__ */


#ifndef __IUpdateHistoryEntry_FWD_DEFINED__
#define __IUpdateHistoryEntry_FWD_DEFINED__
typedef interface IUpdateHistoryEntry IUpdateHistoryEntry;
#endif 	/* __IUpdateHistoryEntry_FWD_DEFINED__ */


#ifndef __IUpdateHistoryEntry2_FWD_DEFINED__
#define __IUpdateHistoryEntry2_FWD_DEFINED__
typedef interface IUpdateHistoryEntry2 IUpdateHistoryEntry2;
#endif 	/* __IUpdateHistoryEntry2_FWD_DEFINED__ */


#ifndef __IUpdateHistoryEntryCollection_FWD_DEFINED__
#define __IUpdateHistoryEntryCollection_FWD_DEFINED__
typedef interface IUpdateHistoryEntryCollection IUpdateHistoryEntryCollection;
#endif 	/* __IUpdateHistoryEntryCollection_FWD_DEFINED__ */


#ifndef __IUpdateSearcher_FWD_DEFINED__
#define __IUpdateSearcher_FWD_DEFINED__
typedef interface IUpdateSearcher IUpdateSearcher;
#endif 	/* __IUpdateSearcher_FWD_DEFINED__ */


#ifndef __IUpdateSearcher2_FWD_DEFINED__
#define __IUpdateSearcher2_FWD_DEFINED__
typedef interface IUpdateSearcher2 IUpdateSearcher2;
#endif 	/* __IUpdateSearcher2_FWD_DEFINED__ */


#ifndef __IUpdateDownloadResult_FWD_DEFINED__
#define __IUpdateDownloadResult_FWD_DEFINED__
typedef interface IUpdateDownloadResult IUpdateDownloadResult;
#endif 	/* __IUpdateDownloadResult_FWD_DEFINED__ */


#ifndef __IDownloadResult_FWD_DEFINED__
#define __IDownloadResult_FWD_DEFINED__
typedef interface IDownloadResult IDownloadResult;
#endif 	/* __IDownloadResult_FWD_DEFINED__ */


#ifndef __IDownloadProgress_FWD_DEFINED__
#define __IDownloadProgress_FWD_DEFINED__
typedef interface IDownloadProgress IDownloadProgress;
#endif 	/* __IDownloadProgress_FWD_DEFINED__ */


#ifndef __IDownloadJob_FWD_DEFINED__
#define __IDownloadJob_FWD_DEFINED__
typedef interface IDownloadJob IDownloadJob;
#endif 	/* __IDownloadJob_FWD_DEFINED__ */


#ifndef __IDownloadCompletedCallbackArgs_FWD_DEFINED__
#define __IDownloadCompletedCallbackArgs_FWD_DEFINED__
typedef interface IDownloadCompletedCallbackArgs IDownloadCompletedCallbackArgs;
#endif 	/* __IDownloadCompletedCallbackArgs_FWD_DEFINED__ */


#ifndef __IDownloadCompletedCallback_FWD_DEFINED__
#define __IDownloadCompletedCallback_FWD_DEFINED__
typedef interface IDownloadCompletedCallback IDownloadCompletedCallback;
#endif 	/* __IDownloadCompletedCallback_FWD_DEFINED__ */


#ifndef __IDownloadProgressChangedCallbackArgs_FWD_DEFINED__
#define __IDownloadProgressChangedCallbackArgs_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallbackArgs IDownloadProgressChangedCallbackArgs;
#endif 	/* __IDownloadProgressChangedCallbackArgs_FWD_DEFINED__ */


#ifndef __IDownloadProgressChangedCallback_FWD_DEFINED__
#define __IDownloadProgressChangedCallback_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallback IDownloadProgressChangedCallback;
#endif 	/* __IDownloadProgressChangedCallback_FWD_DEFINED__ */


#ifndef __IUpdateDownloader_FWD_DEFINED__
#define __IUpdateDownloader_FWD_DEFINED__
typedef interface IUpdateDownloader IUpdateDownloader;
#endif 	/* __IUpdateDownloader_FWD_DEFINED__ */


#ifndef __IUpdateInstallationResult_FWD_DEFINED__
#define __IUpdateInstallationResult_FWD_DEFINED__
typedef interface IUpdateInstallationResult IUpdateInstallationResult;
#endif 	/* __IUpdateInstallationResult_FWD_DEFINED__ */


#ifndef __IInstallationResult_FWD_DEFINED__
#define __IInstallationResult_FWD_DEFINED__
typedef interface IInstallationResult IInstallationResult;
#endif 	/* __IInstallationResult_FWD_DEFINED__ */


#ifndef __IInstallationProgress_FWD_DEFINED__
#define __IInstallationProgress_FWD_DEFINED__
typedef interface IInstallationProgress IInstallationProgress;
#endif 	/* __IInstallationProgress_FWD_DEFINED__ */


#ifndef __IInstallationJob_FWD_DEFINED__
#define __IInstallationJob_FWD_DEFINED__
typedef interface IInstallationJob IInstallationJob;
#endif 	/* __IInstallationJob_FWD_DEFINED__ */


#ifndef __IInstallationCompletedCallbackArgs_FWD_DEFINED__
#define __IInstallationCompletedCallbackArgs_FWD_DEFINED__
typedef interface IInstallationCompletedCallbackArgs IInstallationCompletedCallbackArgs;
#endif 	/* __IInstallationCompletedCallbackArgs_FWD_DEFINED__ */


#ifndef __IInstallationCompletedCallback_FWD_DEFINED__
#define __IInstallationCompletedCallback_FWD_DEFINED__
typedef interface IInstallationCompletedCallback IInstallationCompletedCallback;
#endif 	/* __IInstallationCompletedCallback_FWD_DEFINED__ */


#ifndef __IInstallationProgressChangedCallbackArgs_FWD_DEFINED__
#define __IInstallationProgressChangedCallbackArgs_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallbackArgs IInstallationProgressChangedCallbackArgs;
#endif 	/* __IInstallationProgressChangedCallbackArgs_FWD_DEFINED__ */


#ifndef __IInstallationProgressChangedCallback_FWD_DEFINED__
#define __IInstallationProgressChangedCallback_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallback IInstallationProgressChangedCallback;
#endif 	/* __IInstallationProgressChangedCallback_FWD_DEFINED__ */


#ifndef __IUpdateInstaller_FWD_DEFINED__
#define __IUpdateInstaller_FWD_DEFINED__
typedef interface IUpdateInstaller IUpdateInstaller;
#endif 	/* __IUpdateInstaller_FWD_DEFINED__ */


#ifndef __IUpdateInstaller2_FWD_DEFINED__
#define __IUpdateInstaller2_FWD_DEFINED__
typedef interface IUpdateInstaller2 IUpdateInstaller2;
#endif 	/* __IUpdateInstaller2_FWD_DEFINED__ */


#ifndef __IUpdateSession_FWD_DEFINED__
#define __IUpdateSession_FWD_DEFINED__
typedef interface IUpdateSession IUpdateSession;
#endif 	/* __IUpdateSession_FWD_DEFINED__ */


#ifndef __IUpdateSession2_FWD_DEFINED__
#define __IUpdateSession2_FWD_DEFINED__
typedef interface IUpdateSession2 IUpdateSession2;
#endif 	/* __IUpdateSession2_FWD_DEFINED__ */


#ifndef __IUpdateService_FWD_DEFINED__
#define __IUpdateService_FWD_DEFINED__
typedef interface IUpdateService IUpdateService;
#endif 	/* __IUpdateService_FWD_DEFINED__ */


#ifndef __IUpdateServiceCollection_FWD_DEFINED__
#define __IUpdateServiceCollection_FWD_DEFINED__
typedef interface IUpdateServiceCollection IUpdateServiceCollection;
#endif 	/* __IUpdateServiceCollection_FWD_DEFINED__ */


#ifndef __IUpdateServiceManager_FWD_DEFINED__
#define __IUpdateServiceManager_FWD_DEFINED__
typedef interface IUpdateServiceManager IUpdateServiceManager;
#endif 	/* __IUpdateServiceManager_FWD_DEFINED__ */


#ifndef __IUpdateLockdown_FWD_DEFINED__
#define __IUpdateLockdown_FWD_DEFINED__
typedef interface IUpdateLockdown IUpdateLockdown;
#endif 	/* __IUpdateLockdown_FWD_DEFINED__ */


#ifndef __IUpdateException_FWD_DEFINED__
#define __IUpdateException_FWD_DEFINED__
typedef interface IUpdateException IUpdateException;
#endif 	/* __IUpdateException_FWD_DEFINED__ */


#ifndef __IInvalidProductLicenseException_FWD_DEFINED__
#define __IInvalidProductLicenseException_FWD_DEFINED__
typedef interface IInvalidProductLicenseException IInvalidProductLicenseException;
#endif 	/* __IInvalidProductLicenseException_FWD_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings_FWD_DEFINED__
#define __IAutomaticUpdatesSettings_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings IAutomaticUpdatesSettings;
#endif 	/* __IAutomaticUpdatesSettings_FWD_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings2_FWD_DEFINED__
#define __IAutomaticUpdatesSettings2_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings2 IAutomaticUpdatesSettings2;
#endif 	/* __IAutomaticUpdatesSettings2_FWD_DEFINED__ */


#ifndef __IUpdate_FWD_DEFINED__
#define __IUpdate_FWD_DEFINED__
typedef interface IUpdate IUpdate;
#endif 	/* __IUpdate_FWD_DEFINED__ */


#ifndef __IUpdate2_FWD_DEFINED__
#define __IUpdate2_FWD_DEFINED__
typedef interface IUpdate2 IUpdate2;
#endif 	/* __IUpdate2_FWD_DEFINED__ */


#ifndef __IUpdate3_FWD_DEFINED__
#define __IUpdate3_FWD_DEFINED__
typedef interface IUpdate3 IUpdate3;
#endif 	/* __IUpdate3_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate_FWD_DEFINED__
#define __IWindowsDriverUpdate_FWD_DEFINED__
typedef interface IWindowsDriverUpdate IWindowsDriverUpdate;
#endif 	/* __IWindowsDriverUpdate_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate2_FWD_DEFINED__
#define __IWindowsDriverUpdate2_FWD_DEFINED__
typedef interface IWindowsDriverUpdate2 IWindowsDriverUpdate2;
#endif 	/* __IWindowsDriverUpdate2_FWD_DEFINED__ */


#ifndef __IWindowsDriverUpdate3_FWD_DEFINED__
#define __IWindowsDriverUpdate3_FWD_DEFINED__
typedef interface IWindowsDriverUpdate3 IWindowsDriverUpdate3;
#endif 	/* __IWindowsDriverUpdate3_FWD_DEFINED__ */


#ifndef __ISearchCompletedCallback_FWD_DEFINED__
#define __ISearchCompletedCallback_FWD_DEFINED__
typedef interface ISearchCompletedCallback ISearchCompletedCallback;
#endif 	/* __ISearchCompletedCallback_FWD_DEFINED__ */


#ifndef __IDownloadCompletedCallback_FWD_DEFINED__
#define __IDownloadCompletedCallback_FWD_DEFINED__
typedef interface IDownloadCompletedCallback IDownloadCompletedCallback;
#endif 	/* __IDownloadCompletedCallback_FWD_DEFINED__ */


#ifndef __IDownloadProgressChangedCallback_FWD_DEFINED__
#define __IDownloadProgressChangedCallback_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallback IDownloadProgressChangedCallback;
#endif 	/* __IDownloadProgressChangedCallback_FWD_DEFINED__ */


#ifndef __IInstallationCompletedCallback_FWD_DEFINED__
#define __IInstallationCompletedCallback_FWD_DEFINED__
typedef interface IInstallationCompletedCallback IInstallationCompletedCallback;
#endif 	/* __IInstallationCompletedCallback_FWD_DEFINED__ */


#ifndef __IInstallationProgressChangedCallback_FWD_DEFINED__
#define __IInstallationProgressChangedCallback_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallback IInstallationProgressChangedCallback;
#endif 	/* __IInstallationProgressChangedCallback_FWD_DEFINED__ */


#ifndef __IUpdateHistoryEntry_FWD_DEFINED__
#define __IUpdateHistoryEntry_FWD_DEFINED__
typedef interface IUpdateHistoryEntry IUpdateHistoryEntry;
#endif 	/* __IUpdateHistoryEntry_FWD_DEFINED__ */


#ifndef __IUpdateHistoryEntry2_FWD_DEFINED__
#define __IUpdateHistoryEntry2_FWD_DEFINED__
typedef interface IUpdateHistoryEntry2 IUpdateHistoryEntry2;
#endif 	/* __IUpdateHistoryEntry2_FWD_DEFINED__ */


#ifndef __IUpdateDownloadContent_FWD_DEFINED__
#define __IUpdateDownloadContent_FWD_DEFINED__
typedef interface IUpdateDownloadContent IUpdateDownloadContent;
#endif 	/* __IUpdateDownloadContent_FWD_DEFINED__ */


#ifndef __IUpdateDownloadContent2_FWD_DEFINED__
#define __IUpdateDownloadContent2_FWD_DEFINED__
typedef interface IUpdateDownloadContent2 IUpdateDownloadContent2;
#endif 	/* __IUpdateDownloadContent2_FWD_DEFINED__ */


#ifndef __StringCollection_FWD_DEFINED__
#define __StringCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class StringCollection StringCollection;
#else
typedef struct StringCollection StringCollection;
#endif /* __cplusplus */

#endif 	/* __StringCollection_FWD_DEFINED__ */


#ifndef __UpdateSearcher_FWD_DEFINED__
#define __UpdateSearcher_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateSearcher UpdateSearcher;
#else
typedef struct UpdateSearcher UpdateSearcher;
#endif /* __cplusplus */

#endif 	/* __UpdateSearcher_FWD_DEFINED__ */


#ifndef __WebProxy_FWD_DEFINED__
#define __WebProxy_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebProxy WebProxy;
#else
typedef struct WebProxy WebProxy;
#endif /* __cplusplus */

#endif 	/* __WebProxy_FWD_DEFINED__ */


#ifndef __SystemInformation_FWD_DEFINED__
#define __SystemInformation_FWD_DEFINED__

#ifdef __cplusplus
typedef class SystemInformation SystemInformation;
#else
typedef struct SystemInformation SystemInformation;
#endif /* __cplusplus */

#endif 	/* __SystemInformation_FWD_DEFINED__ */


#ifndef __WindowsUpdateAgentInfo_FWD_DEFINED__
#define __WindowsUpdateAgentInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class WindowsUpdateAgentInfo WindowsUpdateAgentInfo;
#else
typedef struct WindowsUpdateAgentInfo WindowsUpdateAgentInfo;
#endif /* __cplusplus */

#endif 	/* __WindowsUpdateAgentInfo_FWD_DEFINED__ */


#ifndef __AutomaticUpdates_FWD_DEFINED__
#define __AutomaticUpdates_FWD_DEFINED__

#ifdef __cplusplus
typedef class AutomaticUpdates AutomaticUpdates;
#else
typedef struct AutomaticUpdates AutomaticUpdates;
#endif /* __cplusplus */

#endif 	/* __AutomaticUpdates_FWD_DEFINED__ */


#ifndef __UpdateCollection_FWD_DEFINED__
#define __UpdateCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateCollection UpdateCollection;
#else
typedef struct UpdateCollection UpdateCollection;
#endif /* __cplusplus */

#endif 	/* __UpdateCollection_FWD_DEFINED__ */


#ifndef __UpdateDownloader_FWD_DEFINED__
#define __UpdateDownloader_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateDownloader UpdateDownloader;
#else
typedef struct UpdateDownloader UpdateDownloader;
#endif /* __cplusplus */

#endif 	/* __UpdateDownloader_FWD_DEFINED__ */


#ifndef __UpdateInstaller_FWD_DEFINED__
#define __UpdateInstaller_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateInstaller UpdateInstaller;
#else
typedef struct UpdateInstaller UpdateInstaller;
#endif /* __cplusplus */

#endif 	/* __UpdateInstaller_FWD_DEFINED__ */


#ifndef __UpdateSession_FWD_DEFINED__
#define __UpdateSession_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateSession UpdateSession;
#else
typedef struct UpdateSession UpdateSession;
#endif /* __cplusplus */

#endif 	/* __UpdateSession_FWD_DEFINED__ */


#ifndef __UpdateServiceManager_FWD_DEFINED__
#define __UpdateServiceManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateServiceManager UpdateServiceManager;
#else
typedef struct UpdateServiceManager UpdateServiceManager;
#endif /* __cplusplus */

#endif 	/* __UpdateServiceManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wuapi_0000_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// wuapi.h
//=--------------------------------------------------------------------------=
// (C) Copyright 2003-2004 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#pragma comment(lib, "wuguid.lib")

//--------------------------------------------------------------------------
// Windows Update Services Client Interfaces.
// --------------------------------------------------------------------------------
// GUIDS
// --------------------------------------------------------------------------------
// {B596CC9F-56E5-419E-A622-E01BB457431E}
DEFINE_GUID(LIBID_WUApiLib,0xB596CC9F,0x56E5,0x419E,0xA6,0x22,0xE0,0x1B,0xB4,0x57,0x43,0x1E);

// {A976C28D-75A1-42AA-94AE-8AF8B872089A}
DEFINE_GUID(IID_IUpdateLockdown,0xa976c28d,0x75a1,0x42aa,0x94,0xae,0x8a,0xf8,0xb8,0x72,0x08,0x9a);

// {EFF90582-2DDC-480F-A06D-60F3FBC362C3}
DEFINE_GUID(IID_IStringCollection,0xeff90582,0x2ddc,0x480f,0xa0,0x6d,0x60,0xf3,0xfb,0xc3,0x62,0xc3);

// {174C81FE-AECD-4DAE-B8A0-2C6318DD86A8}
DEFINE_GUID(IID_IWebProxy,0x174c81fe,0xaecd,0x4dae,0xb8,0xa0,0x2c,0x63,0x18,0xdd,0x86,0xa8);

// {ADE87BF7-7B56-4275-8FAB-B9B0E591844B}
DEFINE_GUID(IID_ISystemInformation,0xade87bf7,0x7b56,0x4275,0x8f,0xab,0xb9,0xb0,0xe5,0x91,0x84,0x4b);

// {85713FA1-7796-4FA2-BE3B-E2D6124DD373}
DEFINE_GUID(IID_IWindowsUpdateAgentInfo,0x85713FA1,0x7796,0x4FA2,0xBE,0x3B,0xE2,0xD6,0x12,0x4D,0xD3,0x73);

// {E7A4D634-7942-4DD9-A111-82228BA33901}
DEFINE_GUID(IID_IAutomaticUpdatesResults,0xe7a4d634,0x7942,0x4DD9,0xA1,0x11,0x82,0x22,0x8b,0xa3,0x39,0x1);

// {2EE48F22-AF3C-405F-8970-F71BE12EE9A2}
DEFINE_GUID(IID_IAutomaticUpdatesSettings,0x2ee48f22,0xaf3c,0x405f,0x89,0x70,0xf7,0x1b,0xe1,0x2e,0xe9,0xa2);

// {6ABC136A-C3CA-4384-8171-CB2B1E59B8DC}
DEFINE_GUID(IID_IAutomaticUpdatesSettings2,0x6abc136a,0xc3ca,0x4384,0x81,0x71,0xcb,0x2b,0x1e,0x59,0xb8,0xdc);

// {673425BF-C082-4C7C-BDFD-569464B8E0CE}
DEFINE_GUID(IID_IAutomaticUpdates,0x673425bf,0xc082,0x4c7c,0xbd,0xfd,0x56,0x94,0x64,0xb8,0xe0,0xce);

// {4A2F5C31-CFD9-410E-B7FB-29A653973A0F}
DEFINE_GUID(IID_IAutomaticUpdates2,0x4A2f5C31,0xCFD9,0x410E,0xB7,0xFB,0x29,0xA6,0x53,0x97,0x3A,0xF);

// {46297823-9940-4C09-AED9-CD3EA6D05968}
DEFINE_GUID(IID_IUpdateIdentity,0x46297823,0x9940,0x4c09,0xae,0xd9,0xcd,0x3e,0xa6,0xd0,0x59,0x68);

// {7C907864-346C-4AEB-8F3F-57DA289F969F}
DEFINE_GUID(IID_IImageInformation,0x7c907864,0x346c,0x4aeb,0x8f,0x3f,0x57,0xda,0x28,0x9f,0x96,0x9f);

// {81DDC1B8-9D35-47A6-B471-5B80F519223B}
DEFINE_GUID(IID_ICategory,0x81ddc1b8,0x9d35,0x47a6,0xb4,0x71,0x5b,0x80,0xf5,0x19,0x22,0x3b);

// {3A56BFB8-576C-43F7-9335-FE4838FD7E37}
DEFINE_GUID(IID_ICategoryCollection,0x3a56bfb8,0x576c,0x43f7,0x93,0x35,0xfe,0x48,0x38,0xfd,0x7e,0x37);

// {D9A59339-E245-4DBD-9686-4D5763E39624}
DEFINE_GUID(IID_IInstallationBehavior,0xd9a59339,0xe245,0x4dbd,0x96,0x86,0x4d,0x57,0x63,0xe3,0x96,0x24);

// {54A2CB2D-9A0C-48B6-8A50-9ABB69EE2D02}
DEFINE_GUID(IID_IUpdateDownloadContent,0x54a2cb2d,0x9a0c,0x48b6,0x8a,0x50,0x9a,0xbb,0x69,0xee,0x2d,0x02);

// {C97AD11B-F257-420B-9D9F-377F733F6F68}
DEFINE_GUID(IID_IUpdateDownloadContent2,0xc97ad11b,0xf257,0x420b,0x9d,0x9f,0x37,0x7f,0x73,0x3f,0x6f,0x68);

// {BC5513C8-B3B8-4BF7-A4D4-361C0D8C88BA}
DEFINE_GUID(IID_IUpdateDownloadContentCollection,0xbc5513c8,0xb3b8,0x4bf7,0xa4,0xd4,0x36,0x1c,0x0d,0x8c,0x88,0xba);

// {6A92B07A-D821-4682-B423-5C805022CC4D}
DEFINE_GUID(IID_IUpdate,0x6a92b07a,0xd821,0x4682,0xb4,0x23,0x5c,0x80,0x50,0x22,0xcc,0x4d);

// {144fe9b0-d23d-4a8b-8634-fb4457533b7a}
DEFINE_GUID(IID_IUpdate2,0x144fe9b0,0xd23d,0x4a8b,0x86,0x34,0xfb,0x44,0x57,0x53,0x3b,0x7a);

// {112EDA6B-95B3-476F-9D90-AEE82C6B8181}
DEFINE_GUID(IID_IUpdate3,0x112EDA6B,0x95B3,0x476F,0x9D,0x90,0xAE,0xE8,0x2C,0x6B,0x81,0x81);

// {B383CD1A-5CE9-4504-9F63-764B1236F191}
DEFINE_GUID(IID_IWindowsDriverUpdate,0xb383cd1a,0x5ce9,0x4504,0x9f,0x63,0x76,0x4b,0x12,0x36,0xf1,0x91);

// {615c4269-7a48-43bd-96b7-bf6ca27d6c3e}
DEFINE_GUID(IID_IWindowsDriverUpdate2,0x615c4269,0x7a48,0x43bd,0x96,0xb7,0xbf,0x6c,0xa2,0x7d,0x6c,0x3e);

// {49EBD502-4A96-41BD-9E3E-4C5057F4250C}
DEFINE_GUID(IID_IWindowsDriverUpdate3,0x49EBD502,0x4A96,0x41BD,0x9E,0x3E,0x4C,0x50,0x57,0xF4,0x25,0x0C);

// {07F7438C-7709-4CA5-B518-91279288134E}
DEFINE_GUID(IID_IUpdateCollection,0x07f7438c,0x7709,0x4ca5,0xb5,0x18,0x91,0x27,0x92,0x88,0x13,0x4e);

// {A376DD5E-09D4-427F-AF7C-FED5B6E1C1D6}
DEFINE_GUID(IID_IUpdateException,0xa376dd5e,0x09d4,0x427f,0xaf,0x7c,0xfe,0xd5,0xb6,0xe1,0xc1,0xd6);

// {A37D00F5-7BB0-4953-B414-F9E98326F2E8}
DEFINE_GUID(IID_IInvalidProductLicenseException,0xa37d00f5,0x7bb0,0x4953,0xb4,0x14,0xf9,0xe9,0x83,0x26,0xf2,0xe8);

// {A37D00F5-7BB0-4953-B414-F9E98326F2E8}
DEFINE_GUID(IID_IUpdateExceptionCollection,0x503626a3,0x8e14,0x4729,0x93,0x55,0x0f,0xe6,0x64,0xbd,0x23,0x21);

// {D40CFF62-E08C-4498-941A-01E25F0FD33C}
DEFINE_GUID(IID_ISearchResult,0xd40cff62,0xe08c,0x4498,0x94,0x1a,0x01,0xe2,0x5f,0x0f,0xd3,0x3c);

// {7366EA16-7A1A-4EA2-B042-973D3E9CD99B}
DEFINE_GUID(IID_ISearchJob,0x7366ea16,0x7a1a,0x4ea2,0xb0,0x42,0x97,0x3d,0x3e,0x9c,0xd9,0x9b);

// {A700A634-2850-4C47-938A-9E4B6E5AF9A6}
DEFINE_GUID(IID_ISearchCompletedCallbackArgs,0xa700a634,0x2850,0x4c47,0x93,0x8a,0x9e,0x4b,0x6e,0x5a,0xf9,0xa6);

// {88AEE058-D4B0-4725-A2F1-814A67AE964C}
DEFINE_GUID(IID_ISearchCompletedCallback,0x88aee058,0xd4b0,0x4725,0xa2,0xf1,0x81,0x4a,0x67,0xae,0x96,0x4c);

// {BE56A644-AF0E-4E0E-A311-C1D8E695CBFF}
DEFINE_GUID(IID_IUpdateHistoryEntry,0xbe56a644,0xaf0e,0x4e0e,0xa3,0x11,0xc1,0xd8,0xe6,0x95,0xcb,0xff);

// {C2BFB780-4539-4132-AB8C-0A8772013AB6}
DEFINE_GUID(IID_IUpdateHistoryEntry2,0xc2bfb780,0x4539,0x4132,0xab,0x8c,0x0a,0x87,0x72,0x01,0x3a,0xb6);

// {A7F04F3C-A290-435B-AADF-A116C3357A5C}
DEFINE_GUID(IID_IUpdateHistoryEntryCollection,0xa7f04f3c,0xa290,0x435b,0xaa,0xdf,0xa1,0x16,0xc3,0x35,0x7a,0x5c);

// {8F45ABF1-F9AE-4B95-A933-F0F66E5056EA}
DEFINE_GUID(IID_IUpdateSearcher,0x8f45abf1,0xf9ae,0x4b95,0xa9,0x33,0xf0,0xf6,0x6e,0x50,0x56,0xea);

// {4CBDCB2D-1589-4BEB-BD1C-3E582FF0ADD0}
DEFINE_GUID(IID_IUpdateSearcher2,0x4cbdcb2d,0x1589,0x4beb,0xbd,0x1c,0x3e,0x58,0x2f,0xf0,0xad,0xd0);

// {BF99AF76-B575-42AD-8AA4-33CBB5477AF1}
DEFINE_GUID(IID_IUpdateDownloadResult,0xbf99af76,0xb575,0x42ad,0x8a,0xa4,0x33,0xcb,0xb5,0x47,0x7a,0xf1);

// {DAA4FDD0-4727-4DBE-A1E7-745DCA317144}
DEFINE_GUID(IID_IDownloadResult,0xdaa4fdd0,0x4727,0x4dbe,0xa1,0xe7,0x74,0x5d,0xca,0x31,0x71,0x44);

// {D31A5BAC-F719-4178-9DBB-5E2CB47FD18A}
DEFINE_GUID(IID_IDownloadProgress,0xd31a5bac,0xf719,0x4178,0x9d,0xbb,0x5e,0x2c,0xb4,0x7f,0xd1,0x8a);

// {C574DE85-7358-43F6-AAE8-8697E62D8BA7}
DEFINE_GUID(IID_IDownloadJob,0xc574de85,0x7358,0x43f6,0xaa,0xe8,0x86,0x97,0xe6,0x2d,0x8b,0xa7);

// {FA565B23-498C-47A0-979D-E7D5B1813360}
DEFINE_GUID(IID_IDownloadCompletedCallbackArgs,0xfa565b23,0x498c,0x47a0,0x97,0x9d,0xe7,0xd5,0xb1,0x81,0x33,0x60);

// {77254866-9F5B-4C8E-B9E2-C77A8530D64B}
DEFINE_GUID(IID_IDownloadCompletedCallback,0x77254866,0x9f5b,0x4c8e,0xb9,0xe2,0xc7,0x7a,0x85,0x30,0xd6,0x4b);

// {324FF2C6-4981-4B04-9412-57481745AB24}
DEFINE_GUID(IID_IDownloadProgressChangedCallbackArgs,0x324ff2c6,0x4981,0x4b04,0x94,0x12,0x57,0x48,0x17,0x45,0xab,0x24);

// {8C3F1CDD-6173-4591-AEBD-A56A53CA77C1}
DEFINE_GUID(IID_IDownloadProgressChangedCallback,0x8c3f1cdd,0x6173,0x4591,0xae,0xbd,0xa5,0x6a,0x53,0xca,0x77,0xc1);

// {68F1C6F9-7ECC-4666-A464-247FE12496C3}
DEFINE_GUID(IID_IUpdateDownloader,0x68f1c6f9,0x7ecc,0x4666,0xa4,0x64,0x24,0x7f,0xe1,0x24,0x96,0xc3);

// {D940F0F8-3CBB-4FD0-993F-471E7F2328AD}
DEFINE_GUID(IID_IUpdateInstallationResult,0xd940f0f8,0x3cbb,0x4fd0,0x99,0x3f,0x47,0x1e,0x7f,0x23,0x28,0xad);

// {A43C56D6-7451-48D4-AF96-B6CD2D0D9B7A}
DEFINE_GUID(IID_IInstallationResult,0xa43c56d6,0x7451,0x48d4,0xaf,0x96,0xb6,0xcd,0x2d,0x0d,0x9b,0x7a);

// {345C8244-43A3-4E32-A368-65F073B76F36}
DEFINE_GUID(IID_IInstallationProgress,0x345c8244,0x43a3,0x4e32,0xa3,0x68,0x65,0xf0,0x73,0xb7,0x6f,0x36);

// {5C209F0B-BAD5-432A-9556-4699BED2638A}
DEFINE_GUID(IID_IInstallationJob,0x5c209f0b,0xbad5,0x432a,0x95,0x56,0x46,0x99,0xbe,0xd2,0x63,0x8a);

// {250E2106-8EFB-4705-9653-EF13C581B6A1}
DEFINE_GUID(IID_IInstallationCompletedCallbackArgs,0x250e2106,0x8efb,0x4705,0x96,0x53,0xef,0x13,0xc5,0x81,0xb6,0xa1);

// {45F4F6F3-D602-4F98-9A8A-3EFA152AD2D3}
DEFINE_GUID(IID_IInstallationCompletedCallback,0x45f4f6f3,0xd602,0x4f98,0x9a,0x8a,0x3e,0xfa,0x15,0x2a,0xd2,0xd3);

// {E4F14E1E-689D-4218-A0B9-BC189C484A01}
DEFINE_GUID(IID_IInstallationProgressChangedCallbackArgs,0xe4f14e1e,0x689d,0x4218,0xa0,0xb9,0xbc,0x18,0x9c,0x48,0x4a,0x01);

// {E01402D5-F8DA-43BA-A012-38894BD048F1}
DEFINE_GUID(IID_IInstallationProgressChangedCallback,0xe01402d5,0xf8da,0x43ba,0xa0,0x12,0x38,0x89,0x4b,0xd0,0x48,0xf1);

// {7B929C68-CCDC-4226-96B1-8724600B54C2}
DEFINE_GUID(IID_IUpdateInstaller,0x7b929c68,0xccdc,0x4226,0x96,0xb1,0x87,0x24,0x60,0x0b,0x54,0xc2);

// {3442d4fe-224d-4cee-98cf-30e0c4d229e6}
DEFINE_GUID(IID_IUpdateInstaller2,0x3442d4fe,0x224d,0x4cee,0x98,0xcf,0x30,0xe0,0xc4,0xd2,0x29,0xe6);

// {816858A4-260D-4260-933A-2585F1ABC76B}
DEFINE_GUID(IID_IUpdateSession,0x816858a4,0x260d,0x4260,0x93,0x3a,0x25,0x85,0xf1,0xab,0xc7,0x6b);

// {91CAF7B0-EB23-49ED-9937-C52D817F46F7}
DEFINE_GUID(IID_IUpdateSession2,0x91caf7b0,0xeb23,0x49ed,0x99,0x37,0xc5,0x2d,0x81,0x7f,0x46,0xf7);

// {76B3B17E-AED6-4DA5-85F0-83587F81ABE3}
DEFINE_GUID(IID_IUpdateService,0x76b3b17e,0xaed6,0x4da5,0x85,0xf0,0x83,0x58,0x7f,0x81,0xab,0xe3);

// {9B0353AA-0E52-44FF-B8B0-1F7FA0437F88}
DEFINE_GUID(IID_IUpdateServiceCollection,0x9b0353aa,0x0e52,0x44ff,0xb8,0xb0,0x1f,0x7f,0xa0,0x43,0x7f,0x88);

// {23857E3C-02BA-44A3-9423-B1C900805F37}
DEFINE_GUID(IID_IUpdateServiceManager,0x23857E3C,0x02BA,0x44A3,0x94,0x23,0xB1,0xC9,0x00,0x80,0x5F,0x37);

// {72C97D74-7C3B-40AE-B77D-ABDB22EBA6FB}
DEFINE_GUID(CLSID_StringCollection,0x72C97D74,0x7C3B,0x40AE,0xB7,0x7D,0xAB,0xDB,0x22,0xEB,0xA6,0xFB);

// {B699E5E8-67FF-4177-88B0-3684A3388BFB}
DEFINE_GUID(CLSID_UpdateSearcher,0xB699E5E8,0x67FF,0x4177,0x88,0xB0,0x36,0x84,0xA3,0x38,0x8B,0xFB);

// {650503cf-9108-4ddc-a2ce-6c2341e1c582}
DEFINE_GUID(CLSID_WebProxy,0x650503cf,0x9108,0x4ddc,0xa2,0xce,0x6c,0x23,0x41,0xe1,0xc5,0x82);

// {C01B9BA0-BEA7-41BA-B604-D0A36F469133}
DEFINE_GUID(CLSID_SystemInformation,0xC01B9BA0,0xBEA7,0x41BA,0xB6,0x04,0xD0,0xA3,0x6F,0x46,0x91,0x33);

// {C2E88C2F-6F5B-4AAA-894B-55C847AD3A2D}
DEFINE_GUID(CLSID_WindowsUpdateAgentInfo,0xC2E88C2F,0x6F5B,0x4AAA,0x89,0x4B,0x55,0xC8,0x47,0xAD,0x3A,0x2D);

// {BFE18E9C-6D87-4450-B37C-E02F0B373803}
DEFINE_GUID(CLSID_AutomaticUpdates,0xBFE18E9C,0x6D87,0x4450,0xB3,0x7C,0xE0,0x2F,0x0B,0x37,0x38,0x03);

// {13639463-00DB-4646-803D-528026140D88}
DEFINE_GUID(CLSID_UpdateCollection,0x13639463,0x00DB,0x4646,0x80,0x3D,0x52,0x80,0x26,0x14,0x0D,0x88);

// {5BAF654A-5A07-4264-A255-9FF54C7151E7}
DEFINE_GUID(CLSID_UpdateDownloader,0x5BAF654A,0x5A07,0x4264,0xA2,0x55,0x9F,0xF5,0x4C,0x71,0x51,0xE7);

// {D2E0FE7F-D23E-48E1-93C0-6FA8CC346474}
DEFINE_GUID(CLSID_UpdateInstaller,0xD2E0FE7F,0xD23E,0x48E1,0x93,0xC0,0x6F,0xA8,0xCC,0x34,0x64,0x74);

// {4CB43D7F-7EEE-4906-8698-60DA1C38F2FE}
DEFINE_GUID(CLSID_UpdateSession,0x4CB43D7F,0x7EEE,0x4906,0x86,0x98,0x60,0xDA,0x1C,0x38,0xF2,0xFE);

// {F8D253D9-89A4-4DAA-87B6-1168369F0B21}
DEFINE_GUID(CLSID_UpdateServiceManager,0xF8D253D9,0x89A4,0x4DAA,0x87,0xB6,0x11,0x68,0x36,0x9F,0x0B,0x21);

typedef /* [v1_enum][helpstring][public] */ 
enum tagAutomaticUpdatesNotificationLevel
    {	aunlNotConfigured	= 0,
	aunlDisabled	= 1,
	aunlNotifyBeforeDownload	= 2,
	aunlNotifyBeforeInstallation	= 3,
	aunlScheduledInstallation	= 4
    } 	AutomaticUpdatesNotificationLevel;

typedef /* [v1_enum][helpstring][public] */ 
enum tagAutomaticUpdatesScheduledInstallationDay
    {	ausidEveryDay	= 0,
	ausidEverySunday	= 1,
	ausidEveryMonday	= 2,
	ausidEveryTuesday	= 3,
	ausidEveryWednesday	= 4,
	ausidEveryThursday	= 5,
	ausidEveryFriday	= 6,
	ausidEverySaturday	= 7
    } 	AutomaticUpdatesScheduledInstallationDay;

typedef /* [v1_enum][helpstring][public] */ 
enum tagDownloadPhase
    {	dphInitializing	= 1,
	dphDownloading	= 2,
	dphVerifying	= 3
    } 	DownloadPhase;

typedef /* [v1_enum][helpstring][public] */ 
enum tagDownloadPriority
    {	dpLow	= 1,
	dpNormal	= 2,
	dpHigh	= 3
    } 	DownloadPriority;

typedef /* [v1_enum][helpstring][public] */ 
enum tagInstallationImpact
    {	iiNormal	= 0,
	iiMinor	= 1,
	iiRequiresExclusiveHandling	= 2
    } 	InstallationImpact;

typedef /* [v1_enum][helpstring][public] */ 
enum tagInstallationRebootBehavior
    {	irbNeverReboots	= 0,
	irbAlwaysRequiresReboot	= 1,
	irbCanRequestReboot	= 2
    } 	InstallationRebootBehavior;

typedef /* [v1_enum][helpstring][public] */ 
enum tagOperationResultCode
    {	orcNotStarted	= 0,
	orcInProgress	= 1,
	orcSucceeded	= 2,
	orcSucceededWithErrors	= 3,
	orcFailed	= 4,
	orcAborted	= 5
    } 	OperationResultCode;

typedef /* [v1_enum][helpstring][public] */ 
enum tagServerSelection
    {	ssDefault	= 0,
	ssManagedServer	= 1,
	ssWindowsUpdate	= 2,
	ssOthers	= 3
    } 	ServerSelection;

typedef /* [v1_enum][helpstring][public] */ 
enum tagUpdateType
    {	utSoftware	= 1,
	utDriver	= 2
    } 	UpdateType;

typedef /* [v1_enum][helpstring][public] */ 
enum tagUpdateOperation
    {	uoInstallation	= 1,
	uoUninstallation	= 2
    } 	UpdateOperation;

typedef /* [v1_enum][helpstring][public] */ 
enum tagDeploymentAction
    {	daNone	= 0,
	daInstallation	= 1,
	daUninstallation	= 2
    } 	DeploymentAction;

typedef /* [v1_enum][helpstring][public] */ 
enum tagUpdateExceptionContext
    {	uecGeneral	= 1,
	uecWindowsDriver	= 2,
	uecWindowsInstaller	= 3
    } 	UpdateExceptionContext;

typedef /* [v1_enum][helpstring][public] */ 
enum tagAutomaticUpdatesUserType
    {	auutCurrentUser	= 1,
	auutLocalAdministrator	= 2
    } 	AutomaticUpdatesUserType;

typedef /* [v1_enum][helpstring][public] */ 
enum tagAutomaticUpdatesPermissionType
    {	auptSetNotificationLevel	= 1,
	auptDisableAutomaticUpdates	= 2,
	auptSetIncludeRecommendedUpdates	= 3
    } 	AutomaticUpdatesPermissionType;

#define	UPDATE_LOCKDOWN_WEBSITE_ACCESS	( 0x1 )






extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_s_ifspec;

#ifndef __IUpdateLockdown_INTERFACE_DEFINED__
#define __IUpdateLockdown_INTERFACE_DEFINED__

/* interface IUpdateLockdown */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateLockdown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a976c28d-75a1-42aa-94ae-8af8b872089a")
    IUpdateLockdown : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LockDown( 
            /* [in] */ LONG flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateLockdownVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateLockdown * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateLockdown * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateLockdown * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LockDown )( 
            IUpdateLockdown * This,
            /* [in] */ LONG flags);
        
        END_INTERFACE
    } IUpdateLockdownVtbl;

    interface IUpdateLockdown
    {
        CONST_VTBL struct IUpdateLockdownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateLockdown_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateLockdown_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateLockdown_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateLockdown_LockDown(This,flags)	\
    ( (This)->lpVtbl -> LockDown(This,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateLockdown_INTERFACE_DEFINED__ */


#ifndef __IStringCollection_INTERFACE_DEFINED__
#define __IStringCollection_INTERFACE_DEFINED__

/* interface IStringCollection */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IStringCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eff90582-2ddc-480f-a06d-60f3fbc362c3")
    IStringCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [in] */ LONG index,
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in BSTR value,
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ LONG index,
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStringCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStringCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStringCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStringCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStringCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStringCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStringCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStringCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IStringCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IStringCollection * This,
            /* [in] */ LONG index,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IStringCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IStringCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IStringCollection * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStringCollection * This,
            /* [in] */ __RPC__in BSTR value,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IStringCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IStringCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IStringCollection * This,
            /* [in] */ LONG index,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IStringCollection * This,
            /* [in] */ LONG index);
        
        END_INTERFACE
    } IStringCollectionVtbl;

    interface IStringCollection
    {
        CONST_VTBL struct IStringCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStringCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStringCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStringCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStringCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStringCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStringCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStringCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStringCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IStringCollection_put_Item(This,index,value)	\
    ( (This)->lpVtbl -> put_Item(This,index,value) ) 

#define IStringCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IStringCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IStringCollection_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IStringCollection_Add(This,value,retval)	\
    ( (This)->lpVtbl -> Add(This,value,retval) ) 

#define IStringCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IStringCollection_Copy(This,retval)	\
    ( (This)->lpVtbl -> Copy(This,retval) ) 

#define IStringCollection_Insert(This,index,value)	\
    ( (This)->lpVtbl -> Insert(This,index,value) ) 

#define IStringCollection_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStringCollection_INTERFACE_DEFINED__ */


#ifndef __IWebProxy_INTERFACE_DEFINED__
#define __IWebProxy_INTERFACE_DEFINED__

/* interface IWebProxy */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IWebProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("174c81fe-aecd-4dae-b8a0-2c6318dd86a8")
    IWebProxy : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Address( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BypassList( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_BypassList( 
            /* [in] */ __RPC__in_opt IStringCollection *value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BypassProxyOnLocal( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_BypassProxyOnLocal( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPassword( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PromptForCredentials( 
            /* [unique][in] */ __RPC__in_opt IUnknown *parentWindow,
            /* [in] */ __RPC__in BSTR title) = 0;
        
        virtual /* [helpstring][restricted][id] */ HRESULT STDMETHODCALLTYPE PromptForCredentialsFromHwnd( 
            /* [unique][in] */ __RPC__in_opt HWND parentWindow,
            /* [in] */ __RPC__in BSTR title) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoDetect( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoDetect( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebProxy * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebProxy * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebProxy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebProxy * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebProxy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IWebProxy * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BypassList )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BypassList )( 
            IWebProxy * This,
            /* [in] */ __RPC__in_opt IStringCollection *value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BypassProxyOnLocal )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BypassProxyOnLocal )( 
            IWebProxy * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IWebProxy * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPassword )( 
            IWebProxy * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PromptForCredentials )( 
            IWebProxy * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *parentWindow,
            /* [in] */ __RPC__in BSTR title);
        
        /* [helpstring][restricted][id] */ HRESULT ( STDMETHODCALLTYPE *PromptForCredentialsFromHwnd )( 
            IWebProxy * This,
            /* [unique][in] */ __RPC__in_opt HWND parentWindow,
            /* [in] */ __RPC__in BSTR title);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoDetect )( 
            IWebProxy * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoDetect )( 
            IWebProxy * This,
            /* [in] */ VARIANT_BOOL value);
        
        END_INTERFACE
    } IWebProxyVtbl;

    interface IWebProxy
    {
        CONST_VTBL struct IWebProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebProxy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebProxy_get_Address(This,retval)	\
    ( (This)->lpVtbl -> get_Address(This,retval) ) 

#define IWebProxy_put_Address(This,value)	\
    ( (This)->lpVtbl -> put_Address(This,value) ) 

#define IWebProxy_get_BypassList(This,retval)	\
    ( (This)->lpVtbl -> get_BypassList(This,retval) ) 

#define IWebProxy_put_BypassList(This,value)	\
    ( (This)->lpVtbl -> put_BypassList(This,value) ) 

#define IWebProxy_get_BypassProxyOnLocal(This,retval)	\
    ( (This)->lpVtbl -> get_BypassProxyOnLocal(This,retval) ) 

#define IWebProxy_put_BypassProxyOnLocal(This,value)	\
    ( (This)->lpVtbl -> put_BypassProxyOnLocal(This,value) ) 

#define IWebProxy_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IWebProxy_get_UserName(This,retval)	\
    ( (This)->lpVtbl -> get_UserName(This,retval) ) 

#define IWebProxy_put_UserName(This,value)	\
    ( (This)->lpVtbl -> put_UserName(This,value) ) 

#define IWebProxy_SetPassword(This,value)	\
    ( (This)->lpVtbl -> SetPassword(This,value) ) 

#define IWebProxy_PromptForCredentials(This,parentWindow,title)	\
    ( (This)->lpVtbl -> PromptForCredentials(This,parentWindow,title) ) 

#define IWebProxy_PromptForCredentialsFromHwnd(This,parentWindow,title)	\
    ( (This)->lpVtbl -> PromptForCredentialsFromHwnd(This,parentWindow,title) ) 

#define IWebProxy_get_AutoDetect(This,retval)	\
    ( (This)->lpVtbl -> get_AutoDetect(This,retval) ) 

#define IWebProxy_put_AutoDetect(This,value)	\
    ( (This)->lpVtbl -> put_AutoDetect(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebProxy_INTERFACE_DEFINED__ */


#ifndef __ISystemInformation_INTERFACE_DEFINED__
#define __ISystemInformation_INTERFACE_DEFINED__

/* interface ISystemInformation */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ISystemInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ade87bf7-7b56-4275-8fab-b9b0e591844b")
    ISystemInformation : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OemHardwareSupportLink( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequired( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISystemInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISystemInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISystemInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISystemInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISystemInformation * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISystemInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISystemInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISystemInformation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OemHardwareSupportLink )( 
            ISystemInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            ISystemInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } ISystemInformationVtbl;

    interface ISystemInformation
    {
        CONST_VTBL struct ISystemInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISystemInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISystemInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISystemInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISystemInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISystemInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISystemInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISystemInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISystemInformation_get_OemHardwareSupportLink(This,retval)	\
    ( (This)->lpVtbl -> get_OemHardwareSupportLink(This,retval) ) 

#define ISystemInformation_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISystemInformation_INTERFACE_DEFINED__ */


#ifndef __IWindowsUpdateAgentInfo_INTERFACE_DEFINED__
#define __IWindowsUpdateAgentInfo_INTERFACE_DEFINED__

/* interface IWindowsUpdateAgentInfo */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IWindowsUpdateAgentInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85713fa1-7796-4fa2-be3b-e2d6124dd373")
    IWindowsUpdateAgentInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ VARIANT varInfoIdentifier,
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWindowsUpdateAgentInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsUpdateAgentInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsUpdateAgentInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsUpdateAgentInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowsUpdateAgentInfo * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowsUpdateAgentInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowsUpdateAgentInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowsUpdateAgentInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IWindowsUpdateAgentInfo * This,
            /* [in] */ VARIANT varInfoIdentifier,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        END_INTERFACE
    } IWindowsUpdateAgentInfoVtbl;

    interface IWindowsUpdateAgentInfo
    {
        CONST_VTBL struct IWindowsUpdateAgentInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsUpdateAgentInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsUpdateAgentInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsUpdateAgentInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsUpdateAgentInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowsUpdateAgentInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowsUpdateAgentInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowsUpdateAgentInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowsUpdateAgentInfo_GetInfo(This,varInfoIdentifier,retval)	\
    ( (This)->lpVtbl -> GetInfo(This,varInfoIdentifier,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsUpdateAgentInfo_INTERFACE_DEFINED__ */


#ifndef __IAutomaticUpdatesResults_INTERFACE_DEFINED__
#define __IAutomaticUpdatesResults_INTERFACE_DEFINED__

/* interface IAutomaticUpdatesResults */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IAutomaticUpdatesResults;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7A4D634-7942-4DD9-A111-82228BA33901")
    IAutomaticUpdatesResults : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastSearchSuccessDate( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastInstallationSuccessDate( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutomaticUpdatesResultsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomaticUpdatesResults * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomaticUpdatesResults * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomaticUpdatesResults * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomaticUpdatesResults * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomaticUpdatesResults * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomaticUpdatesResults * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomaticUpdatesResults * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastSearchSuccessDate )( 
            IAutomaticUpdatesResults * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastInstallationSuccessDate )( 
            IAutomaticUpdatesResults * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        END_INTERFACE
    } IAutomaticUpdatesResultsVtbl;

    interface IAutomaticUpdatesResults
    {
        CONST_VTBL struct IAutomaticUpdatesResultsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomaticUpdatesResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomaticUpdatesResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomaticUpdatesResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomaticUpdatesResults_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomaticUpdatesResults_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomaticUpdatesResults_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomaticUpdatesResults_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomaticUpdatesResults_get_LastSearchSuccessDate(This,retval)	\
    ( (This)->lpVtbl -> get_LastSearchSuccessDate(This,retval) ) 

#define IAutomaticUpdatesResults_get_LastInstallationSuccessDate(This,retval)	\
    ( (This)->lpVtbl -> get_LastInstallationSuccessDate(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomaticUpdatesResults_INTERFACE_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings_INTERFACE_DEFINED__
#define __IAutomaticUpdatesSettings_INTERFACE_DEFINED__

/* interface IAutomaticUpdatesSettings */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IAutomaticUpdatesSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2ee48f22-af3c-405f-8970-f71be12ee9a2")
    IAutomaticUpdatesSettings : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NotificationLevel( 
            /* [retval][out] */ __RPC__out AutomaticUpdatesNotificationLevel *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_NotificationLevel( 
            /* [in] */ AutomaticUpdatesNotificationLevel value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Required( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScheduledInstallationDay( 
            /* [retval][out] */ __RPC__out AutomaticUpdatesScheduledInstallationDay *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScheduledInstallationDay( 
            /* [in] */ AutomaticUpdatesScheduledInstallationDay value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScheduledInstallationTime( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScheduledInstallationTime( 
            /* [in] */ LONG value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutomaticUpdatesSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomaticUpdatesSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomaticUpdatesSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomaticUpdatesSettings * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotificationLevel )( 
            IAutomaticUpdatesSettings * This,
            /* [retval][out] */ __RPC__out AutomaticUpdatesNotificationLevel *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotificationLevel )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ AutomaticUpdatesNotificationLevel value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IAutomaticUpdatesSettings * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Required )( 
            IAutomaticUpdatesSettings * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationDay )( 
            IAutomaticUpdatesSettings * This,
            /* [retval][out] */ __RPC__out AutomaticUpdatesScheduledInstallationDay *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationDay )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ AutomaticUpdatesScheduledInstallationDay value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationTime )( 
            IAutomaticUpdatesSettings * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationTime )( 
            IAutomaticUpdatesSettings * This,
            /* [in] */ LONG value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IAutomaticUpdatesSettings * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAutomaticUpdatesSettings * This);
        
        END_INTERFACE
    } IAutomaticUpdatesSettingsVtbl;

    interface IAutomaticUpdatesSettings
    {
        CONST_VTBL struct IAutomaticUpdatesSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomaticUpdatesSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomaticUpdatesSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomaticUpdatesSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomaticUpdatesSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomaticUpdatesSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomaticUpdatesSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomaticUpdatesSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomaticUpdatesSettings_get_NotificationLevel(This,retval)	\
    ( (This)->lpVtbl -> get_NotificationLevel(This,retval) ) 

#define IAutomaticUpdatesSettings_put_NotificationLevel(This,value)	\
    ( (This)->lpVtbl -> put_NotificationLevel(This,value) ) 

#define IAutomaticUpdatesSettings_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IAutomaticUpdatesSettings_get_Required(This,retval)	\
    ( (This)->lpVtbl -> get_Required(This,retval) ) 

#define IAutomaticUpdatesSettings_get_ScheduledInstallationDay(This,retval)	\
    ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) ) 

#define IAutomaticUpdatesSettings_put_ScheduledInstallationDay(This,value)	\
    ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) ) 

#define IAutomaticUpdatesSettings_get_ScheduledInstallationTime(This,retval)	\
    ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) ) 

#define IAutomaticUpdatesSettings_put_ScheduledInstallationTime(This,value)	\
    ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) ) 

#define IAutomaticUpdatesSettings_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IAutomaticUpdatesSettings_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomaticUpdatesSettings_INTERFACE_DEFINED__ */


#ifndef __IAutomaticUpdatesSettings2_INTERFACE_DEFINED__
#define __IAutomaticUpdatesSettings2_INTERFACE_DEFINED__

/* interface IAutomaticUpdatesSettings2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IAutomaticUpdatesSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6abc136a-c3ca-4384-8171-cb2b1e59b8dc")
    IAutomaticUpdatesSettings2 : public IAutomaticUpdatesSettings
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IncludeRecommendedUpdates( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IncludeRecommendedUpdates( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckPermission( 
            /* [in] */ AutomaticUpdatesUserType userType,
            /* [in] */ AutomaticUpdatesPermissionType permissionType,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *userHasPermission) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutomaticUpdatesSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomaticUpdatesSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomaticUpdatesSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomaticUpdatesSettings2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotificationLevel )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out AutomaticUpdatesNotificationLevel *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotificationLevel )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ AutomaticUpdatesNotificationLevel value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Required )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationDay )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out AutomaticUpdatesScheduledInstallationDay *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationDay )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ AutomaticUpdatesScheduledInstallationDay value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScheduledInstallationTime )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScheduledInstallationTime )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ LONG value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IAutomaticUpdatesSettings2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAutomaticUpdatesSettings2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeRecommendedUpdates )( 
            IAutomaticUpdatesSettings2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeRecommendedUpdates )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckPermission )( 
            IAutomaticUpdatesSettings2 * This,
            /* [in] */ AutomaticUpdatesUserType userType,
            /* [in] */ AutomaticUpdatesPermissionType permissionType,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *userHasPermission);
        
        END_INTERFACE
    } IAutomaticUpdatesSettings2Vtbl;

    interface IAutomaticUpdatesSettings2
    {
        CONST_VTBL struct IAutomaticUpdatesSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomaticUpdatesSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomaticUpdatesSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomaticUpdatesSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomaticUpdatesSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomaticUpdatesSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomaticUpdatesSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomaticUpdatesSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomaticUpdatesSettings2_get_NotificationLevel(This,retval)	\
    ( (This)->lpVtbl -> get_NotificationLevel(This,retval) ) 

#define IAutomaticUpdatesSettings2_put_NotificationLevel(This,value)	\
    ( (This)->lpVtbl -> put_NotificationLevel(This,value) ) 

#define IAutomaticUpdatesSettings2_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IAutomaticUpdatesSettings2_get_Required(This,retval)	\
    ( (This)->lpVtbl -> get_Required(This,retval) ) 

#define IAutomaticUpdatesSettings2_get_ScheduledInstallationDay(This,retval)	\
    ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) ) 

#define IAutomaticUpdatesSettings2_put_ScheduledInstallationDay(This,value)	\
    ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) ) 

#define IAutomaticUpdatesSettings2_get_ScheduledInstallationTime(This,retval)	\
    ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) ) 

#define IAutomaticUpdatesSettings2_put_ScheduledInstallationTime(This,value)	\
    ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) ) 

#define IAutomaticUpdatesSettings2_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IAutomaticUpdatesSettings2_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 


#define IAutomaticUpdatesSettings2_get_IncludeRecommendedUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_IncludeRecommendedUpdates(This,retval) ) 

#define IAutomaticUpdatesSettings2_put_IncludeRecommendedUpdates(This,value)	\
    ( (This)->lpVtbl -> put_IncludeRecommendedUpdates(This,value) ) 

#define IAutomaticUpdatesSettings2_CheckPermission(This,userType,permissionType,userHasPermission)	\
    ( (This)->lpVtbl -> CheckPermission(This,userType,permissionType,userHasPermission) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomaticUpdatesSettings2_INTERFACE_DEFINED__ */


#ifndef __IAutomaticUpdates_INTERFACE_DEFINED__
#define __IAutomaticUpdates_INTERFACE_DEFINED__

/* interface IAutomaticUpdates */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IAutomaticUpdates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("673425bf-c082-4c7c-bdfd-569464b8e0ce")
    IAutomaticUpdates : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DetectNow( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowSettingsDialog( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Settings( 
            /* [retval][out] */ __RPC__deref_out_opt IAutomaticUpdatesSettings **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceEnabled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableService( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutomaticUpdatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomaticUpdates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomaticUpdates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomaticUpdates * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomaticUpdates * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomaticUpdates * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomaticUpdates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomaticUpdates * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DetectNow )( 
            IAutomaticUpdates * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IAutomaticUpdates * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IAutomaticUpdates * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowSettingsDialog )( 
            IAutomaticUpdates * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IAutomaticUpdates * This,
            /* [retval][out] */ __RPC__deref_out_opt IAutomaticUpdatesSettings **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceEnabled )( 
            IAutomaticUpdates * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableService )( 
            IAutomaticUpdates * This);
        
        END_INTERFACE
    } IAutomaticUpdatesVtbl;

    interface IAutomaticUpdates
    {
        CONST_VTBL struct IAutomaticUpdatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomaticUpdates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomaticUpdates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomaticUpdates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomaticUpdates_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomaticUpdates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomaticUpdates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomaticUpdates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomaticUpdates_DetectNow(This)	\
    ( (This)->lpVtbl -> DetectNow(This) ) 

#define IAutomaticUpdates_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define IAutomaticUpdates_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IAutomaticUpdates_ShowSettingsDialog(This)	\
    ( (This)->lpVtbl -> ShowSettingsDialog(This) ) 

#define IAutomaticUpdates_get_Settings(This,retval)	\
    ( (This)->lpVtbl -> get_Settings(This,retval) ) 

#define IAutomaticUpdates_get_ServiceEnabled(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) ) 

#define IAutomaticUpdates_EnableService(This)	\
    ( (This)->lpVtbl -> EnableService(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomaticUpdates_INTERFACE_DEFINED__ */


#ifndef __IAutomaticUpdates2_INTERFACE_DEFINED__
#define __IAutomaticUpdates2_INTERFACE_DEFINED__

/* interface IAutomaticUpdates2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IAutomaticUpdates2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A2F5C31-CFD9-410E-B7FB-29A653973A0F")
    IAutomaticUpdates2 : public IAutomaticUpdates
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Results( 
            /* [retval][out] */ __RPC__deref_out_opt IAutomaticUpdatesResults **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutomaticUpdates2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomaticUpdates2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomaticUpdates2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomaticUpdates2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomaticUpdates2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomaticUpdates2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomaticUpdates2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomaticUpdates2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DetectNow )( 
            IAutomaticUpdates2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IAutomaticUpdates2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IAutomaticUpdates2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowSettingsDialog )( 
            IAutomaticUpdates2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IAutomaticUpdates2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAutomaticUpdatesSettings **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceEnabled )( 
            IAutomaticUpdates2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableService )( 
            IAutomaticUpdates2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Results )( 
            IAutomaticUpdates2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAutomaticUpdatesResults **retval);
        
        END_INTERFACE
    } IAutomaticUpdates2Vtbl;

    interface IAutomaticUpdates2
    {
        CONST_VTBL struct IAutomaticUpdates2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomaticUpdates2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomaticUpdates2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomaticUpdates2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomaticUpdates2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomaticUpdates2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomaticUpdates2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomaticUpdates2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomaticUpdates2_DetectNow(This)	\
    ( (This)->lpVtbl -> DetectNow(This) ) 

#define IAutomaticUpdates2_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define IAutomaticUpdates2_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IAutomaticUpdates2_ShowSettingsDialog(This)	\
    ( (This)->lpVtbl -> ShowSettingsDialog(This) ) 

#define IAutomaticUpdates2_get_Settings(This,retval)	\
    ( (This)->lpVtbl -> get_Settings(This,retval) ) 

#define IAutomaticUpdates2_get_ServiceEnabled(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) ) 

#define IAutomaticUpdates2_EnableService(This)	\
    ( (This)->lpVtbl -> EnableService(This) ) 


#define IAutomaticUpdates2_get_Results(This,retval)	\
    ( (This)->lpVtbl -> get_Results(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomaticUpdates2_INTERFACE_DEFINED__ */


#ifndef __IUpdateIdentity_INTERFACE_DEFINED__
#define __IUpdateIdentity_INTERFACE_DEFINED__

/* interface IUpdateIdentity */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46297823-9940-4c09-aed9-cd3ea6d05968")
    IUpdateIdentity : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RevisionNumber( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UpdateID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateIdentity * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateIdentity * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateIdentity * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateIdentity * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateIdentity * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RevisionNumber )( 
            IUpdateIdentity * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UpdateID )( 
            IUpdateIdentity * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        END_INTERFACE
    } IUpdateIdentityVtbl;

    interface IUpdateIdentity
    {
        CONST_VTBL struct IUpdateIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateIdentity_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateIdentity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateIdentity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateIdentity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateIdentity_get_RevisionNumber(This,retval)	\
    ( (This)->lpVtbl -> get_RevisionNumber(This,retval) ) 

#define IUpdateIdentity_get_UpdateID(This,retval)	\
    ( (This)->lpVtbl -> get_UpdateID(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateIdentity_INTERFACE_DEFINED__ */


#ifndef __IImageInformation_INTERFACE_DEFINED__
#define __IImageInformation_INTERFACE_DEFINED__

/* interface IImageInformation */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IImageInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7c907864-346c-4aeb-8f3f-57da289f969f")
    IImageInformation : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AltText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImageInformation * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImageInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImageInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImageInformation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AltText )( 
            IImageInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IImageInformation * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IImageInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IImageInformation * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IImageInformationVtbl;

    interface IImageInformation
    {
        CONST_VTBL struct IImageInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IImageInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IImageInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IImageInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IImageInformation_get_AltText(This,retval)	\
    ( (This)->lpVtbl -> get_AltText(This,retval) ) 

#define IImageInformation_get_Height(This,retval)	\
    ( (This)->lpVtbl -> get_Height(This,retval) ) 

#define IImageInformation_get_Source(This,retval)	\
    ( (This)->lpVtbl -> get_Source(This,retval) ) 

#define IImageInformation_get_Width(This,retval)	\
    ( (This)->lpVtbl -> get_Width(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageInformation_INTERFACE_DEFINED__ */


#ifndef __ICategory_INTERFACE_DEFINED__
#define __ICategory_INTERFACE_DEFINED__

/* interface ICategory */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ICategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81ddc1b8-9d35-47a6-b471-5b80f519223b")
    ICategory : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CategoryID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Children( 
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Order( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ __RPC__deref_out_opt ICategory **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICategory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICategory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICategory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICategory * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICategory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICategory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICategory * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CategoryID )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Children )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Order )( 
            ICategory * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategory **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            ICategory * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        END_INTERFACE
    } ICategoryVtbl;

    interface ICategory
    {
        CONST_VTBL struct ICategoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICategory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICategory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICategory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICategory_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define ICategory_get_CategoryID(This,retval)	\
    ( (This)->lpVtbl -> get_CategoryID(This,retval) ) 

#define ICategory_get_Children(This,retval)	\
    ( (This)->lpVtbl -> get_Children(This,retval) ) 

#define ICategory_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define ICategory_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define ICategory_get_Order(This,retval)	\
    ( (This)->lpVtbl -> get_Order(This,retval) ) 

#define ICategory_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define ICategory_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define ICategory_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategory_INTERFACE_DEFINED__ */


#ifndef __ICategoryCollection_INTERFACE_DEFINED__
#define __ICategoryCollection_INTERFACE_DEFINED__

/* interface ICategoryCollection */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ICategoryCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3a56bfb8-576c-43f7-9335-fe4838fd7e37")
    ICategoryCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt ICategory **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICategoryCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICategoryCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICategoryCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICategoryCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICategoryCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICategoryCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICategoryCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICategoryCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt ICategory **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICategoryCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICategoryCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } ICategoryCollectionVtbl;

    interface ICategoryCollection
    {
        CONST_VTBL struct ICategoryCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategoryCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategoryCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategoryCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategoryCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICategoryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICategoryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICategoryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICategoryCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define ICategoryCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define ICategoryCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategoryCollection_INTERFACE_DEFINED__ */


#ifndef __IInstallationBehavior_INTERFACE_DEFINED__
#define __IInstallationBehavior_INTERFACE_DEFINED__

/* interface IInstallationBehavior */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationBehavior;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d9a59339-e245-4dbd-9686-4d5763e39624")
    IInstallationBehavior : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CanRequestUserInput( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Impact( 
            /* [retval][out] */ __RPC__out InstallationImpact *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootBehavior( 
            /* [retval][out] */ __RPC__out InstallationRebootBehavior *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RequiresNetworkConnectivity( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationBehaviorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationBehavior * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationBehavior * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationBehavior * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationBehavior * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationBehavior * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationBehavior * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationBehavior * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequestUserInput )( 
            IInstallationBehavior * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Impact )( 
            IInstallationBehavior * This,
            /* [retval][out] */ __RPC__out InstallationImpact *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootBehavior )( 
            IInstallationBehavior * This,
            /* [retval][out] */ __RPC__out InstallationRebootBehavior *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RequiresNetworkConnectivity )( 
            IInstallationBehavior * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IInstallationBehaviorVtbl;

    interface IInstallationBehavior
    {
        CONST_VTBL struct IInstallationBehaviorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationBehavior_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationBehavior_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationBehavior_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationBehavior_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationBehavior_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationBehavior_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationBehavior_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInstallationBehavior_get_CanRequestUserInput(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequestUserInput(This,retval) ) 

#define IInstallationBehavior_get_Impact(This,retval)	\
    ( (This)->lpVtbl -> get_Impact(This,retval) ) 

#define IInstallationBehavior_get_RebootBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_RebootBehavior(This,retval) ) 

#define IInstallationBehavior_get_RequiresNetworkConnectivity(This,retval)	\
    ( (This)->lpVtbl -> get_RequiresNetworkConnectivity(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationBehavior_INTERFACE_DEFINED__ */


#ifndef __IUpdateDownloadContent_INTERFACE_DEFINED__
#define __IUpdateDownloadContent_INTERFACE_DEFINED__

/* interface IUpdateDownloadContent */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateDownloadContent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54a2cb2d-9a0c-48b6-8a50-9abb69ee2d02")
    IUpdateDownloadContent : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateDownloadContentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateDownloadContent * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateDownloadContent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateDownloadContent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateDownloadContent * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateDownloadContent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateDownloadContent * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateDownloadContent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )( 
            IUpdateDownloadContent * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        END_INTERFACE
    } IUpdateDownloadContentVtbl;

    interface IUpdateDownloadContent
    {
        CONST_VTBL struct IUpdateDownloadContentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateDownloadContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateDownloadContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateDownloadContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateDownloadContent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateDownloadContent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateDownloadContent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateDownloadContent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateDownloadContent_get_DownloadUrl(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadUrl(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateDownloadContent_INTERFACE_DEFINED__ */


#ifndef __IUpdateDownloadContent2_INTERFACE_DEFINED__
#define __IUpdateDownloadContent2_INTERFACE_DEFINED__

/* interface IUpdateDownloadContent2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateDownloadContent2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c97ad11b-f257-420b-9d9f-377f733f6f68")
    IUpdateDownloadContent2 : public IUpdateDownloadContent
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDeltaCompressedContent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateDownloadContent2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateDownloadContent2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateDownloadContent2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateDownloadContent2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateDownloadContent2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateDownloadContent2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateDownloadContent2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateDownloadContent2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadUrl )( 
            IUpdateDownloadContent2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDeltaCompressedContent )( 
            IUpdateDownloadContent2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IUpdateDownloadContent2Vtbl;

    interface IUpdateDownloadContent2
    {
        CONST_VTBL struct IUpdateDownloadContent2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateDownloadContent2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateDownloadContent2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateDownloadContent2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateDownloadContent2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateDownloadContent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateDownloadContent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateDownloadContent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateDownloadContent2_get_DownloadUrl(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadUrl(This,retval) ) 


#define IUpdateDownloadContent2_get_IsDeltaCompressedContent(This,retval)	\
    ( (This)->lpVtbl -> get_IsDeltaCompressedContent(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateDownloadContent2_INTERFACE_DEFINED__ */


#ifndef __IUpdateDownloadContentCollection_INTERFACE_DEFINED__
#define __IUpdateDownloadContentCollection_INTERFACE_DEFINED__

/* interface IUpdateDownloadContentCollection */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateDownloadContentCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bc5513c8-b3b8-4bf7-a4d4-361c0d8c88ba")
    IUpdateDownloadContentCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContent **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateDownloadContentCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateDownloadContentCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateDownloadContentCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateDownloadContentCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateDownloadContentCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateDownloadContentCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateDownloadContentCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateDownloadContentCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IUpdateDownloadContentCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContent **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IUpdateDownloadContentCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUpdateDownloadContentCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IUpdateDownloadContentCollectionVtbl;

    interface IUpdateDownloadContentCollection
    {
        CONST_VTBL struct IUpdateDownloadContentCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateDownloadContentCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateDownloadContentCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateDownloadContentCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateDownloadContentCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateDownloadContentCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateDownloadContentCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateDownloadContentCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateDownloadContentCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IUpdateDownloadContentCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IUpdateDownloadContentCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateDownloadContentCollection_INTERFACE_DEFINED__ */


#ifndef __IUpdate_INTERFACE_DEFINED__
#define __IUpdate_INTERFACE_DEFINED__

/* interface IUpdate */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6a92b07a-d821-4682-b423-5c805022cc4d")
    IUpdate : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSelectOnWebSites( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BundledUpdates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CanRequireSource( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Deadline( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeltaCompressedContentAvailable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeltaCompressedContentPreferred( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EulaAccepted( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EulaText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HandlerID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Identity( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallationBehavior( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsBeta( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDownloaded( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsHidden( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsHidden( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsInstalled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsMandatory( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsUninstallable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Languages( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastDeploymentChangeTime( 
            /* [retval][out] */ __RPC__out DATE *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxDownloadSize( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MinDownloadSize( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MoreInfoUrls( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MsrcSeverity( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RecommendedCpuSpeed( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RecommendedHardDiskSpace( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RecommendedMemory( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReleaseNotes( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SecurityBulletinIDs( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupersededUpdateIDs( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupportUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out UpdateType *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UninstallationNotes( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UninstallationBehavior( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UninstallationSteps( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KBArticleIDs( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcceptEula( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeploymentAction( 
            /* [retval][out] */ __RPC__out DeploymentAction *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFromCache( 
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadPriority( 
            /* [retval][out] */ __RPC__out DownloadPriority *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadContents( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdate * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IUpdate * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IUpdate * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IUpdate * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        END_INTERFACE
    } IUpdateVtbl;

    interface IUpdate
    {
        CONST_VTBL struct IUpdateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdate_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IUpdate_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IUpdate_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IUpdate_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IUpdate_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IUpdate_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IUpdate_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IUpdate_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IUpdate_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IUpdate_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IUpdate_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IUpdate_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IUpdate_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IUpdate_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IUpdate_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IUpdate_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IUpdate_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IUpdate_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IUpdate_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IUpdate_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IUpdate_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IUpdate_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IUpdate_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IUpdate_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IUpdate_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IUpdate_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IUpdate_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IUpdate_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IUpdate_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IUpdate_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IUpdate_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IUpdate_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IUpdate_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IUpdate_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IUpdate_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IUpdate_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IUpdate_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IUpdate_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IUpdate_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IUpdate_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IUpdate_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IUpdate_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IUpdate_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IUpdate_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IUpdate_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdate_INTERFACE_DEFINED__ */


#ifndef __IWindowsDriverUpdate_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate_INTERFACE_DEFINED__

/* interface IWindowsDriverUpdate */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IWindowsDriverUpdate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b383cd1a-5ce9-4504-9f63-764b1236f191")
    IWindowsDriverUpdate : public IUpdate
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverClass( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverHardwareID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverManufacturer( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverModel( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverProvider( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriverVerDate( 
            /* [retval][out] */ __RPC__out DATE *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeviceProblemNumber( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DeviceStatus( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWindowsDriverUpdateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsDriverUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsDriverUpdate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsDriverUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowsDriverUpdate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowsDriverUpdate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowsDriverUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowsDriverUpdate * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IWindowsDriverUpdate * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IWindowsDriverUpdate * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IWindowsDriverUpdate * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverClass )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverModel )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )( 
            IWindowsDriverUpdate * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IWindowsDriverUpdateVtbl;

    interface IWindowsDriverUpdate
    {
        CONST_VTBL struct IWindowsDriverUpdateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsDriverUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsDriverUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsDriverUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsDriverUpdate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowsDriverUpdate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowsDriverUpdate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowsDriverUpdate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowsDriverUpdate_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IWindowsDriverUpdate_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IWindowsDriverUpdate_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IWindowsDriverUpdate_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IWindowsDriverUpdate_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IWindowsDriverUpdate_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IWindowsDriverUpdate_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IWindowsDriverUpdate_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IWindowsDriverUpdate_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IWindowsDriverUpdate_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IWindowsDriverUpdate_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IWindowsDriverUpdate_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IWindowsDriverUpdate_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IWindowsDriverUpdate_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IWindowsDriverUpdate_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IWindowsDriverUpdate_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IWindowsDriverUpdate_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IWindowsDriverUpdate_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IWindowsDriverUpdate_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IWindowsDriverUpdate_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IWindowsDriverUpdate_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IWindowsDriverUpdate_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IWindowsDriverUpdate_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IWindowsDriverUpdate_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IWindowsDriverUpdate_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IWindowsDriverUpdate_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IWindowsDriverUpdate_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IWindowsDriverUpdate_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IWindowsDriverUpdate_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IWindowsDriverUpdate_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IWindowsDriverUpdate_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IWindowsDriverUpdate_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IWindowsDriverUpdate_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IWindowsDriverUpdate_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IWindowsDriverUpdate_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IWindowsDriverUpdate_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IWindowsDriverUpdate_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IWindowsDriverUpdate_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IWindowsDriverUpdate_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IWindowsDriverUpdate_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IWindowsDriverUpdate_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 


#define IWindowsDriverUpdate_get_DriverClass(This,retval)	\
    ( (This)->lpVtbl -> get_DriverClass(This,retval) ) 

#define IWindowsDriverUpdate_get_DriverHardwareID(This,retval)	\
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) ) 

#define IWindowsDriverUpdate_get_DriverManufacturer(This,retval)	\
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) ) 

#define IWindowsDriverUpdate_get_DriverModel(This,retval)	\
    ( (This)->lpVtbl -> get_DriverModel(This,retval) ) 

#define IWindowsDriverUpdate_get_DriverProvider(This,retval)	\
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) ) 

#define IWindowsDriverUpdate_get_DriverVerDate(This,retval)	\
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) ) 

#define IWindowsDriverUpdate_get_DeviceProblemNumber(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) ) 

#define IWindowsDriverUpdate_get_DeviceStatus(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsDriverUpdate_INTERFACE_DEFINED__ */


#ifndef __IUpdate2_INTERFACE_DEFINED__
#define __IUpdate2_INTERFACE_DEFINED__

/* interface IUpdate2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("144fe9b0-d23d-4a8b-8634-fb4457533b7a")
    IUpdate2 : public IUpdate
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequired( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CveIDs( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToCache( 
            /* [in] */ __RPC__in_opt IStringCollection *pFiles) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdate2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdate2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdate2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdate2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdate2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IUpdate2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IUpdate2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IUpdate2 * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CveIDs )( 
            IUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToCache )( 
            IUpdate2 * This,
            /* [in] */ __RPC__in_opt IStringCollection *pFiles);
        
        END_INTERFACE
    } IUpdate2Vtbl;

    interface IUpdate2
    {
        CONST_VTBL struct IUpdate2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdate2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdate2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdate2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdate2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdate2_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IUpdate2_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IUpdate2_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IUpdate2_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IUpdate2_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IUpdate2_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IUpdate2_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IUpdate2_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IUpdate2_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IUpdate2_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IUpdate2_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IUpdate2_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IUpdate2_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IUpdate2_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IUpdate2_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IUpdate2_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IUpdate2_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IUpdate2_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IUpdate2_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IUpdate2_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IUpdate2_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IUpdate2_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IUpdate2_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IUpdate2_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IUpdate2_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IUpdate2_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IUpdate2_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IUpdate2_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IUpdate2_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IUpdate2_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IUpdate2_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IUpdate2_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IUpdate2_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IUpdate2_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IUpdate2_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IUpdate2_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IUpdate2_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IUpdate2_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IUpdate2_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IUpdate2_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IUpdate2_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IUpdate2_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IUpdate2_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IUpdate2_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IUpdate2_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 


#define IUpdate2_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IUpdate2_get_IsPresent(This,retval)	\
    ( (This)->lpVtbl -> get_IsPresent(This,retval) ) 

#define IUpdate2_get_CveIDs(This,retval)	\
    ( (This)->lpVtbl -> get_CveIDs(This,retval) ) 

#define IUpdate2_CopyToCache(This,pFiles)	\
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdate2_INTERFACE_DEFINED__ */


#ifndef __IUpdate3_INTERFACE_DEFINED__
#define __IUpdate3_INTERFACE_DEFINED__

/* interface IUpdate3 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdate3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112EDA6B-95B3-476F-9D90-AEE82C6B8181")
    IUpdate3 : public IUpdate2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BrowseOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdate3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdate3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdate3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdate3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdate3 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdate3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdate3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdate3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IUpdate3 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IUpdate3 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IUpdate3 * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CveIDs )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToCache )( 
            IUpdate3 * This,
            /* [in] */ __RPC__in_opt IStringCollection *pFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )( 
            IUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IUpdate3Vtbl;

    interface IUpdate3
    {
        CONST_VTBL struct IUpdate3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdate3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdate3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdate3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdate3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdate3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdate3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdate3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdate3_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IUpdate3_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IUpdate3_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IUpdate3_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IUpdate3_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IUpdate3_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IUpdate3_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IUpdate3_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IUpdate3_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IUpdate3_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IUpdate3_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IUpdate3_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IUpdate3_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IUpdate3_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IUpdate3_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IUpdate3_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IUpdate3_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IUpdate3_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IUpdate3_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IUpdate3_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IUpdate3_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IUpdate3_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IUpdate3_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IUpdate3_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IUpdate3_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IUpdate3_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IUpdate3_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IUpdate3_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IUpdate3_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IUpdate3_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IUpdate3_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IUpdate3_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IUpdate3_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IUpdate3_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IUpdate3_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IUpdate3_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IUpdate3_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IUpdate3_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IUpdate3_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IUpdate3_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IUpdate3_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IUpdate3_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IUpdate3_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IUpdate3_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IUpdate3_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 


#define IUpdate3_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IUpdate3_get_IsPresent(This,retval)	\
    ( (This)->lpVtbl -> get_IsPresent(This,retval) ) 

#define IUpdate3_get_CveIDs(This,retval)	\
    ( (This)->lpVtbl -> get_CveIDs(This,retval) ) 

#define IUpdate3_CopyToCache(This,pFiles)	\
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) ) 


#define IUpdate3_get_BrowseOnly(This,retval)	\
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdate3_INTERFACE_DEFINED__ */


#ifndef __IWindowsDriverUpdate2_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate2_INTERFACE_DEFINED__

/* interface IWindowsDriverUpdate2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IWindowsDriverUpdate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("615c4269-7a48-43bd-96b7-bf6ca27d6c3e")
    IWindowsDriverUpdate2 : public IWindowsDriverUpdate
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequired( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CveIDs( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToCache( 
            /* [in] */ __RPC__in_opt IStringCollection *pFiles) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWindowsDriverUpdate2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsDriverUpdate2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsDriverUpdate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowsDriverUpdate2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IWindowsDriverUpdate2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IWindowsDriverUpdate2 * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverClass )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverModel )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CveIDs )( 
            IWindowsDriverUpdate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToCache )( 
            IWindowsDriverUpdate2 * This,
            /* [in] */ __RPC__in_opt IStringCollection *pFiles);
        
        END_INTERFACE
    } IWindowsDriverUpdate2Vtbl;

    interface IWindowsDriverUpdate2
    {
        CONST_VTBL struct IWindowsDriverUpdate2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsDriverUpdate2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsDriverUpdate2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsDriverUpdate2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsDriverUpdate2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowsDriverUpdate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowsDriverUpdate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowsDriverUpdate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowsDriverUpdate2_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IWindowsDriverUpdate2_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IWindowsDriverUpdate2_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IWindowsDriverUpdate2_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IWindowsDriverUpdate2_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IWindowsDriverUpdate2_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IWindowsDriverUpdate2_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IWindowsDriverUpdate2_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IWindowsDriverUpdate2_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IWindowsDriverUpdate2_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IWindowsDriverUpdate2_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IWindowsDriverUpdate2_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IWindowsDriverUpdate2_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IWindowsDriverUpdate2_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IWindowsDriverUpdate2_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IWindowsDriverUpdate2_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IWindowsDriverUpdate2_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IWindowsDriverUpdate2_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IWindowsDriverUpdate2_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IWindowsDriverUpdate2_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate2_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate2_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IWindowsDriverUpdate2_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IWindowsDriverUpdate2_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IWindowsDriverUpdate2_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IWindowsDriverUpdate2_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IWindowsDriverUpdate2_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IWindowsDriverUpdate2_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IWindowsDriverUpdate2_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IWindowsDriverUpdate2_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IWindowsDriverUpdate2_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IWindowsDriverUpdate2_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IWindowsDriverUpdate2_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate2_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IWindowsDriverUpdate2_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IWindowsDriverUpdate2_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IWindowsDriverUpdate2_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IWindowsDriverUpdate2_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IWindowsDriverUpdate2_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IWindowsDriverUpdate2_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 


#define IWindowsDriverUpdate2_get_DriverClass(This,retval)	\
    ( (This)->lpVtbl -> get_DriverClass(This,retval) ) 

#define IWindowsDriverUpdate2_get_DriverHardwareID(This,retval)	\
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) ) 

#define IWindowsDriverUpdate2_get_DriverManufacturer(This,retval)	\
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) ) 

#define IWindowsDriverUpdate2_get_DriverModel(This,retval)	\
    ( (This)->lpVtbl -> get_DriverModel(This,retval) ) 

#define IWindowsDriverUpdate2_get_DriverProvider(This,retval)	\
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) ) 

#define IWindowsDriverUpdate2_get_DriverVerDate(This,retval)	\
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) ) 

#define IWindowsDriverUpdate2_get_DeviceProblemNumber(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) ) 

#define IWindowsDriverUpdate2_get_DeviceStatus(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) ) 


#define IWindowsDriverUpdate2_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IWindowsDriverUpdate2_get_IsPresent(This,retval)	\
    ( (This)->lpVtbl -> get_IsPresent(This,retval) ) 

#define IWindowsDriverUpdate2_get_CveIDs(This,retval)	\
    ( (This)->lpVtbl -> get_CveIDs(This,retval) ) 

#define IWindowsDriverUpdate2_CopyToCache(This,pFiles)	\
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsDriverUpdate2_INTERFACE_DEFINED__ */


#ifndef __IWindowsDriverUpdate3_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate3_INTERFACE_DEFINED__

/* interface IWindowsDriverUpdate3 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IWindowsDriverUpdate3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49EBD502-4A96-41BD-9E3E-4C5057F4250C")
    IWindowsDriverUpdate3 : public IWindowsDriverUpdate2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BrowseOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWindowsDriverUpdate3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsDriverUpdate3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsDriverUpdate3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowsDriverUpdate3 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSelectOnWebSites )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BundledUpdates )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRequireSource )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Deadline )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentAvailable )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaCompressedContentPreferred )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaAccepted )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EulaText )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HandlerID )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IImageInformation **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallationBehavior )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBeta )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDownloaded )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsHidden )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsHidden )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstalled )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsMandatory )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUninstallable )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastDeploymentChangeTime )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxDownloadSize )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinDownloadSize )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUrls )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsrcSeverity )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedCpuSpeed )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedHardDiskSpace )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecommendedMemory )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseNotes )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityBulletinIDs )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededUpdateIDs )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out UpdateType *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationBehavior )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationBehavior **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KBArticleIDs )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptEula )( 
            IWindowsDriverUpdate3 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentAction )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DeploymentAction *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFromCache )( 
            IWindowsDriverUpdate3 * This,
            /* [ref][in] */ __RPC__in BSTR path,
            /* [in] */ VARIANT_BOOL toExtractCabFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadPriority )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadContents )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadContentCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverClass )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverHardwareID )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverManufacturer )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverModel )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverProvider )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriverVerDate )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceProblemNumber )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CveIDs )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToCache )( 
            IWindowsDriverUpdate3 * This,
            /* [in] */ __RPC__in_opt IStringCollection *pFiles);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BrowseOnly )( 
            IWindowsDriverUpdate3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IWindowsDriverUpdate3Vtbl;

    interface IWindowsDriverUpdate3
    {
        CONST_VTBL struct IWindowsDriverUpdate3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsDriverUpdate3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsDriverUpdate3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsDriverUpdate3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsDriverUpdate3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowsDriverUpdate3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowsDriverUpdate3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowsDriverUpdate3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowsDriverUpdate3_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IWindowsDriverUpdate3_get_AutoSelectOnWebSites(This,retval)	\
    ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) ) 

#define IWindowsDriverUpdate3_get_BundledUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_BundledUpdates(This,retval) ) 

#define IWindowsDriverUpdate3_get_CanRequireSource(This,retval)	\
    ( (This)->lpVtbl -> get_CanRequireSource(This,retval) ) 

#define IWindowsDriverUpdate3_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#define IWindowsDriverUpdate3_get_Deadline(This,retval)	\
    ( (This)->lpVtbl -> get_Deadline(This,retval) ) 

#define IWindowsDriverUpdate3_get_DeltaCompressedContentAvailable(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) ) 

#define IWindowsDriverUpdate3_get_DeltaCompressedContentPreferred(This,retval)	\
    ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) ) 

#define IWindowsDriverUpdate3_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IWindowsDriverUpdate3_get_EulaAccepted(This,retval)	\
    ( (This)->lpVtbl -> get_EulaAccepted(This,retval) ) 

#define IWindowsDriverUpdate3_get_EulaText(This,retval)	\
    ( (This)->lpVtbl -> get_EulaText(This,retval) ) 

#define IWindowsDriverUpdate3_get_HandlerID(This,retval)	\
    ( (This)->lpVtbl -> get_HandlerID(This,retval) ) 

#define IWindowsDriverUpdate3_get_Identity(This,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,retval) ) 

#define IWindowsDriverUpdate3_get_Image(This,retval)	\
    ( (This)->lpVtbl -> get_Image(This,retval) ) 

#define IWindowsDriverUpdate3_get_InstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsBeta(This,retval)	\
    ( (This)->lpVtbl -> get_IsBeta(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_IsDownloaded(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsHidden(This,retval)	\
    ( (This)->lpVtbl -> get_IsHidden(This,retval) ) 

#define IWindowsDriverUpdate3_put_IsHidden(This,value)	\
    ( (This)->lpVtbl -> put_IsHidden(This,value) ) 

#define IWindowsDriverUpdate3_get_IsInstalled(This,retval)	\
    ( (This)->lpVtbl -> get_IsInstalled(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsMandatory(This,retval)	\
    ( (This)->lpVtbl -> get_IsMandatory(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsUninstallable(This,retval)	\
    ( (This)->lpVtbl -> get_IsUninstallable(This,retval) ) 

#define IWindowsDriverUpdate3_get_Languages(This,retval)	\
    ( (This)->lpVtbl -> get_Languages(This,retval) ) 

#define IWindowsDriverUpdate3_get_LastDeploymentChangeTime(This,retval)	\
    ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) ) 

#define IWindowsDriverUpdate3_get_MaxDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate3_get_MinDownloadSize(This,retval)	\
    ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) ) 

#define IWindowsDriverUpdate3_get_MoreInfoUrls(This,retval)	\
    ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) ) 

#define IWindowsDriverUpdate3_get_MsrcSeverity(This,retval)	\
    ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) ) 

#define IWindowsDriverUpdate3_get_RecommendedCpuSpeed(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) ) 

#define IWindowsDriverUpdate3_get_RecommendedHardDiskSpace(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) ) 

#define IWindowsDriverUpdate3_get_RecommendedMemory(This,retval)	\
    ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) ) 

#define IWindowsDriverUpdate3_get_ReleaseNotes(This,retval)	\
    ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) ) 

#define IWindowsDriverUpdate3_get_SecurityBulletinIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) ) 

#define IWindowsDriverUpdate3_get_SupersededUpdateIDs(This,retval)	\
    ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) ) 

#define IWindowsDriverUpdate3_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#define IWindowsDriverUpdate3_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define IWindowsDriverUpdate3_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IWindowsDriverUpdate3_get_UninstallationBehavior(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) ) 

#define IWindowsDriverUpdate3_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IWindowsDriverUpdate3_get_KBArticleIDs(This,retval)	\
    ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) ) 

#define IWindowsDriverUpdate3_AcceptEula(This)	\
    ( (This)->lpVtbl -> AcceptEula(This) ) 

#define IWindowsDriverUpdate3_get_DeploymentAction(This,retval)	\
    ( (This)->lpVtbl -> get_DeploymentAction(This,retval) ) 

#define IWindowsDriverUpdate3_CopyFromCache(This,path,toExtractCabFiles)	\
    ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) ) 

#define IWindowsDriverUpdate3_get_DownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadPriority(This,retval) ) 

#define IWindowsDriverUpdate3_get_DownloadContents(This,retval)	\
    ( (This)->lpVtbl -> get_DownloadContents(This,retval) ) 


#define IWindowsDriverUpdate3_get_DriverClass(This,retval)	\
    ( (This)->lpVtbl -> get_DriverClass(This,retval) ) 

#define IWindowsDriverUpdate3_get_DriverHardwareID(This,retval)	\
    ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) ) 

#define IWindowsDriverUpdate3_get_DriverManufacturer(This,retval)	\
    ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) ) 

#define IWindowsDriverUpdate3_get_DriverModel(This,retval)	\
    ( (This)->lpVtbl -> get_DriverModel(This,retval) ) 

#define IWindowsDriverUpdate3_get_DriverProvider(This,retval)	\
    ( (This)->lpVtbl -> get_DriverProvider(This,retval) ) 

#define IWindowsDriverUpdate3_get_DriverVerDate(This,retval)	\
    ( (This)->lpVtbl -> get_DriverVerDate(This,retval) ) 

#define IWindowsDriverUpdate3_get_DeviceProblemNumber(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) ) 

#define IWindowsDriverUpdate3_get_DeviceStatus(This,retval)	\
    ( (This)->lpVtbl -> get_DeviceStatus(This,retval) ) 


#define IWindowsDriverUpdate3_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IWindowsDriverUpdate3_get_IsPresent(This,retval)	\
    ( (This)->lpVtbl -> get_IsPresent(This,retval) ) 

#define IWindowsDriverUpdate3_get_CveIDs(This,retval)	\
    ( (This)->lpVtbl -> get_CveIDs(This,retval) ) 

#define IWindowsDriverUpdate3_CopyToCache(This,pFiles)	\
    ( (This)->lpVtbl -> CopyToCache(This,pFiles) ) 


#define IWindowsDriverUpdate3_get_BrowseOnly(This,retval)	\
    ( (This)->lpVtbl -> get_BrowseOnly(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsDriverUpdate3_INTERFACE_DEFINED__ */


#ifndef __IUpdateCollection_INTERFACE_DEFINED__
#define __IUpdateCollection_INTERFACE_DEFINED__

/* interface IUpdateCollection */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07f7438c-7709-4ca5-b518-91279288134e")
    IUpdateCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdate **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [in] */ LONG index,
            /* [in] */ __RPC__in_opt IUpdate *value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IUpdate *value,
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ LONG index,
            /* [in] */ __RPC__in_opt IUpdate *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IUpdateCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdate **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IUpdateCollection * This,
            /* [in] */ LONG index,
            /* [in] */ __RPC__in_opt IUpdate *value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IUpdateCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUpdateCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IUpdateCollection * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IUpdateCollection * This,
            /* [in] */ __RPC__in_opt IUpdate *value,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IUpdateCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IUpdateCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IUpdateCollection * This,
            /* [in] */ LONG index,
            /* [in] */ __RPC__in_opt IUpdate *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IUpdateCollection * This,
            /* [in] */ LONG index);
        
        END_INTERFACE
    } IUpdateCollectionVtbl;

    interface IUpdateCollection
    {
        CONST_VTBL struct IUpdateCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IUpdateCollection_put_Item(This,index,value)	\
    ( (This)->lpVtbl -> put_Item(This,index,value) ) 

#define IUpdateCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IUpdateCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IUpdateCollection_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IUpdateCollection_Add(This,value,retval)	\
    ( (This)->lpVtbl -> Add(This,value,retval) ) 

#define IUpdateCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IUpdateCollection_Copy(This,retval)	\
    ( (This)->lpVtbl -> Copy(This,retval) ) 

#define IUpdateCollection_Insert(This,index,value)	\
    ( (This)->lpVtbl -> Insert(This,index,value) ) 

#define IUpdateCollection_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateCollection_INTERFACE_DEFINED__ */


#ifndef __IUpdateException_INTERFACE_DEFINED__
#define __IUpdateException_INTERFACE_DEFINED__

/* interface IUpdateException */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateException;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a376dd5e-09d4-427f-af7c-fed5b6e1c1d6")
    IUpdateException : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Message( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Context( 
            /* [retval][out] */ __RPC__out UpdateExceptionContext *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateExceptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateException * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateException * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateException * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateException * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateException * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            IUpdateException * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IUpdateException * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IUpdateException * This,
            /* [retval][out] */ __RPC__out UpdateExceptionContext *retval);
        
        END_INTERFACE
    } IUpdateExceptionVtbl;

    interface IUpdateException
    {
        CONST_VTBL struct IUpdateExceptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateException_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateException_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateException_get_Message(This,retval)	\
    ( (This)->lpVtbl -> get_Message(This,retval) ) 

#define IUpdateException_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IUpdateException_get_Context(This,retval)	\
    ( (This)->lpVtbl -> get_Context(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateException_INTERFACE_DEFINED__ */


#ifndef __IInvalidProductLicenseException_INTERFACE_DEFINED__
#define __IInvalidProductLicenseException_INTERFACE_DEFINED__

/* interface IInvalidProductLicenseException */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInvalidProductLicenseException;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a37d00f5-7bb0-4953-b414-f9e98326f2e8")
    IInvalidProductLicenseException : public IUpdateException
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Product( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInvalidProductLicenseExceptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInvalidProductLicenseException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInvalidProductLicenseException * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInvalidProductLicenseException * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInvalidProductLicenseException * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInvalidProductLicenseException * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInvalidProductLicenseException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInvalidProductLicenseException * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            IInvalidProductLicenseException * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IInvalidProductLicenseException * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IInvalidProductLicenseException * This,
            /* [retval][out] */ __RPC__out UpdateExceptionContext *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Product )( 
            IInvalidProductLicenseException * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        END_INTERFACE
    } IInvalidProductLicenseExceptionVtbl;

    interface IInvalidProductLicenseException
    {
        CONST_VTBL struct IInvalidProductLicenseExceptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInvalidProductLicenseException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInvalidProductLicenseException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInvalidProductLicenseException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInvalidProductLicenseException_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInvalidProductLicenseException_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInvalidProductLicenseException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInvalidProductLicenseException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInvalidProductLicenseException_get_Message(This,retval)	\
    ( (This)->lpVtbl -> get_Message(This,retval) ) 

#define IInvalidProductLicenseException_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IInvalidProductLicenseException_get_Context(This,retval)	\
    ( (This)->lpVtbl -> get_Context(This,retval) ) 


#define IInvalidProductLicenseException_get_Product(This,retval)	\
    ( (This)->lpVtbl -> get_Product(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInvalidProductLicenseException_INTERFACE_DEFINED__ */


#ifndef __IUpdateExceptionCollection_INTERFACE_DEFINED__
#define __IUpdateExceptionCollection_INTERFACE_DEFINED__

/* interface IUpdateExceptionCollection */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateExceptionCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("503626a3-8e14-4729-9355-0fe664bd2321")
    IUpdateExceptionCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateException **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateExceptionCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateExceptionCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateExceptionCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateExceptionCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateExceptionCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateExceptionCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateExceptionCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateExceptionCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IUpdateExceptionCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateException **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IUpdateExceptionCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUpdateExceptionCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IUpdateExceptionCollectionVtbl;

    interface IUpdateExceptionCollection
    {
        CONST_VTBL struct IUpdateExceptionCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateExceptionCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateExceptionCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateExceptionCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateExceptionCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateExceptionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateExceptionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateExceptionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateExceptionCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IUpdateExceptionCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IUpdateExceptionCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateExceptionCollection_INTERFACE_DEFINED__ */


#ifndef __ISearchResult_INTERFACE_DEFINED__
#define __ISearchResult_INTERFACE_DEFINED__

/* interface ISearchResult */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ISearchResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d40cff62-e08c-4498-941a-01e25f0fd33c")
    ISearchResult : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RootCategories( 
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Warnings( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateExceptionCollection **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISearchResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearchResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearchResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearchResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISearchResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISearchResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISearchResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISearchResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            ISearchResult * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RootCategories )( 
            ISearchResult * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            ISearchResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Warnings )( 
            ISearchResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateExceptionCollection **retval);
        
        END_INTERFACE
    } ISearchResultVtbl;

    interface ISearchResult
    {
        CONST_VTBL struct ISearchResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISearchResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISearchResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISearchResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISearchResult_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#define ISearchResult_get_RootCategories(This,retval)	\
    ( (This)->lpVtbl -> get_RootCategories(This,retval) ) 

#define ISearchResult_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define ISearchResult_get_Warnings(This,retval)	\
    ( (This)->lpVtbl -> get_Warnings(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchResult_INTERFACE_DEFINED__ */


#ifndef __ISearchJob_INTERFACE_DEFINED__
#define __ISearchJob_INTERFACE_DEFINED__

/* interface ISearchJob */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ISearchJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7366ea16-7a1a-4ea2-b042-973d3e9cd99b")
    ISearchJob : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AsyncState( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCompleted( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CleanUp( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RequestAbort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISearchJobVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearchJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearchJob * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearchJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISearchJob * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISearchJob * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISearchJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISearchJob * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncState )( 
            ISearchJob * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )( 
            ISearchJob * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CleanUp )( 
            ISearchJob * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RequestAbort )( 
            ISearchJob * This);
        
        END_INTERFACE
    } ISearchJobVtbl;

    interface ISearchJob
    {
        CONST_VTBL struct ISearchJobVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchJob_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchJob_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchJob_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchJob_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISearchJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISearchJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISearchJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISearchJob_get_AsyncState(This,retval)	\
    ( (This)->lpVtbl -> get_AsyncState(This,retval) ) 

#define ISearchJob_get_IsCompleted(This,retval)	\
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) ) 

#define ISearchJob_CleanUp(This)	\
    ( (This)->lpVtbl -> CleanUp(This) ) 

#define ISearchJob_RequestAbort(This)	\
    ( (This)->lpVtbl -> RequestAbort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchJob_INTERFACE_DEFINED__ */


#ifndef __ISearchCompletedCallbackArgs_INTERFACE_DEFINED__
#define __ISearchCompletedCallbackArgs_INTERFACE_DEFINED__

/* interface ISearchCompletedCallbackArgs */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ISearchCompletedCallbackArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a700a634-2850-4c47-938a-9e4b6e5af9a6")
    ISearchCompletedCallbackArgs : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISearchCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearchCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearchCompletedCallbackArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearchCompletedCallbackArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISearchCompletedCallbackArgs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISearchCompletedCallbackArgs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISearchCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISearchCompletedCallbackArgs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISearchCompletedCallbackArgsVtbl;

    interface ISearchCompletedCallbackArgs
    {
        CONST_VTBL struct ISearchCompletedCallbackArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchCompletedCallbackArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchCompletedCallbackArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchCompletedCallbackArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISearchCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISearchCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISearchCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchCompletedCallbackArgs_INTERFACE_DEFINED__ */


#ifndef __ISearchCompletedCallback_INTERFACE_DEFINED__
#define __ISearchCompletedCallback_INTERFACE_DEFINED__

/* interface ISearchCompletedCallback */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_ISearchCompletedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88aee058-d4b0-4725-a2f1-814a67ae964c")
    ISearchCompletedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ISearchJob *searchJob,
            /* [in] */ __RPC__in_opt ISearchCompletedCallbackArgs *callbackArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISearchCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearchCompletedCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearchCompletedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearchCompletedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISearchCompletedCallback * This,
            /* [in] */ __RPC__in_opt ISearchJob *searchJob,
            /* [in] */ __RPC__in_opt ISearchCompletedCallbackArgs *callbackArgs);
        
        END_INTERFACE
    } ISearchCompletedCallbackVtbl;

    interface ISearchCompletedCallback
    {
        CONST_VTBL struct ISearchCompletedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchCompletedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchCompletedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchCompletedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchCompletedCallback_Invoke(This,searchJob,callbackArgs)	\
    ( (This)->lpVtbl -> Invoke(This,searchJob,callbackArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchCompletedCallback_INTERFACE_DEFINED__ */


#ifndef __IUpdateHistoryEntry_INTERFACE_DEFINED__
#define __IUpdateHistoryEntry_INTERFACE_DEFINED__

/* interface IUpdateHistoryEntry */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateHistoryEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("be56a644-af0e-4e0e-a311-c1d8e695cbff")
    IUpdateHistoryEntry : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Operation( 
            /* [retval][out] */ __RPC__out UpdateOperation *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Date( 
            /* [retval][out] */ __RPC__out DATE *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UpdateIdentity( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UnmappedResultCode( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientApplicationID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServerSelection( 
            /* [retval][out] */ __RPC__out ServerSelection *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UninstallationSteps( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UninstallationNotes( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupportUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateHistoryEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateHistoryEntry * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateHistoryEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateHistoryEntry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateHistoryEntry * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateHistoryEntry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateHistoryEntry * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateHistoryEntry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Operation )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out UpdateOperation *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Date )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UpdateIdentity )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnmappedResultCode )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__out ServerSelection *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceID )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IUpdateHistoryEntry * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        END_INTERFACE
    } IUpdateHistoryEntryVtbl;

    interface IUpdateHistoryEntry
    {
        CONST_VTBL struct IUpdateHistoryEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateHistoryEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateHistoryEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateHistoryEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateHistoryEntry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateHistoryEntry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateHistoryEntry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateHistoryEntry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateHistoryEntry_get_Operation(This,retval)	\
    ( (This)->lpVtbl -> get_Operation(This,retval) ) 

#define IUpdateHistoryEntry_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#define IUpdateHistoryEntry_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IUpdateHistoryEntry_get_Date(This,retval)	\
    ( (This)->lpVtbl -> get_Date(This,retval) ) 

#define IUpdateHistoryEntry_get_UpdateIdentity(This,retval)	\
    ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) ) 

#define IUpdateHistoryEntry_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IUpdateHistoryEntry_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IUpdateHistoryEntry_get_UnmappedResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) ) 

#define IUpdateHistoryEntry_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateHistoryEntry_get_ServerSelection(This,retval)	\
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) ) 

#define IUpdateHistoryEntry_get_ServiceID(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceID(This,retval) ) 

#define IUpdateHistoryEntry_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IUpdateHistoryEntry_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IUpdateHistoryEntry_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateHistoryEntry_INTERFACE_DEFINED__ */


#ifndef __IUpdateHistoryEntry2_INTERFACE_DEFINED__
#define __IUpdateHistoryEntry2_INTERFACE_DEFINED__

/* interface IUpdateHistoryEntry2 */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateHistoryEntry2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c2bfb780-4539-4132-ab8c-0a8772013ab6")
    IUpdateHistoryEntry2 : public IUpdateHistoryEntry
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateHistoryEntry2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateHistoryEntry2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateHistoryEntry2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateHistoryEntry2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateHistoryEntry2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateHistoryEntry2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateHistoryEntry2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateHistoryEntry2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Operation )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out UpdateOperation *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Date )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UpdateIdentity )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateIdentity **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnmappedResultCode )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__out ServerSelection *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceID )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationSteps )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UninstallationNotes )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IUpdateHistoryEntry2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICategoryCollection **retval);
        
        END_INTERFACE
    } IUpdateHistoryEntry2Vtbl;

    interface IUpdateHistoryEntry2
    {
        CONST_VTBL struct IUpdateHistoryEntry2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateHistoryEntry2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateHistoryEntry2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateHistoryEntry2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateHistoryEntry2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateHistoryEntry2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateHistoryEntry2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateHistoryEntry2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateHistoryEntry2_get_Operation(This,retval)	\
    ( (This)->lpVtbl -> get_Operation(This,retval) ) 

#define IUpdateHistoryEntry2_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#define IUpdateHistoryEntry2_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IUpdateHistoryEntry2_get_Date(This,retval)	\
    ( (This)->lpVtbl -> get_Date(This,retval) ) 

#define IUpdateHistoryEntry2_get_UpdateIdentity(This,retval)	\
    ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) ) 

#define IUpdateHistoryEntry2_get_Title(This,retval)	\
    ( (This)->lpVtbl -> get_Title(This,retval) ) 

#define IUpdateHistoryEntry2_get_Description(This,retval)	\
    ( (This)->lpVtbl -> get_Description(This,retval) ) 

#define IUpdateHistoryEntry2_get_UnmappedResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) ) 

#define IUpdateHistoryEntry2_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateHistoryEntry2_get_ServerSelection(This,retval)	\
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) ) 

#define IUpdateHistoryEntry2_get_ServiceID(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceID(This,retval) ) 

#define IUpdateHistoryEntry2_get_UninstallationSteps(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) ) 

#define IUpdateHistoryEntry2_get_UninstallationNotes(This,retval)	\
    ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) ) 

#define IUpdateHistoryEntry2_get_SupportUrl(This,retval)	\
    ( (This)->lpVtbl -> get_SupportUrl(This,retval) ) 


#define IUpdateHistoryEntry2_get_Categories(This,retval)	\
    ( (This)->lpVtbl -> get_Categories(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateHistoryEntry2_INTERFACE_DEFINED__ */


#ifndef __IUpdateHistoryEntryCollection_INTERFACE_DEFINED__
#define __IUpdateHistoryEntryCollection_INTERFACE_DEFINED__

/* interface IUpdateHistoryEntryCollection */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateHistoryEntryCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7f04f3c-a290-435b-aadf-a116c3357a5c")
    IUpdateHistoryEntryCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateHistoryEntry **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateHistoryEntryCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateHistoryEntryCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateHistoryEntryCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateHistoryEntryCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateHistoryEntryCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateHistoryEntryCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateHistoryEntryCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateHistoryEntryCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IUpdateHistoryEntryCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateHistoryEntry **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IUpdateHistoryEntryCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUpdateHistoryEntryCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IUpdateHistoryEntryCollectionVtbl;

    interface IUpdateHistoryEntryCollection
    {
        CONST_VTBL struct IUpdateHistoryEntryCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateHistoryEntryCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateHistoryEntryCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateHistoryEntryCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateHistoryEntryCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateHistoryEntryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateHistoryEntryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateHistoryEntryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateHistoryEntryCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IUpdateHistoryEntryCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IUpdateHistoryEntryCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateHistoryEntryCollection_INTERFACE_DEFINED__ */


#ifndef __IUpdateSearcher_INTERFACE_DEFINED__
#define __IUpdateSearcher_INTERFACE_DEFINED__

/* interface IUpdateSearcher */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateSearcher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8f45abf1-f9ae-4b95-a933-f0f66e5056ea")
    IUpdateSearcher : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CanAutomaticallyUpgradeService( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CanAutomaticallyUpgradeService( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientApplicationID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientApplicationID( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IncludePotentiallySupersededUpdates( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IncludePotentiallySupersededUpdates( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServerSelection( 
            /* [retval][out] */ __RPC__out ServerSelection *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ServerSelection( 
            /* [in] */ ServerSelection value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginSearch( 
            /* [in] */ __RPC__in BSTR criteria,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt ISearchJob **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndSearch( 
            /* [in] */ __RPC__in_opt ISearchJob *searchJob,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EscapeString( 
            /* [in] */ __RPC__in BSTR unescaped,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryHistory( 
            /* [in] */ LONG startIndex,
            /* [in] */ LONG count,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [in] */ __RPC__in BSTR criteria,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Online( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Online( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTotalHistoryCount( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ServiceID( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateSearcherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateSearcher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateSearcher * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateSearcher * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateSearcher * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateSearcher * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutomaticallyUpgradeService )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CanAutomaticallyUpgradeService )( 
            IUpdateSearcher * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IncludePotentiallySupersededUpdates )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IncludePotentiallySupersededUpdates )( 
            IUpdateSearcher * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__out ServerSelection *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ServerSelection )( 
            IUpdateSearcher * This,
            /* [in] */ ServerSelection value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginSearch )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in BSTR criteria,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt ISearchJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndSearch )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in_opt ISearchJob *searchJob,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EscapeString )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in BSTR unescaped,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QueryHistory )( 
            IUpdateSearcher * This,
            /* [in] */ LONG startIndex,
            /* [in] */ LONG count,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in BSTR criteria,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Online )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Online )( 
            IUpdateSearcher * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTotalHistoryCount )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceID )( 
            IUpdateSearcher * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ServiceID )( 
            IUpdateSearcher * This,
            /* [in] */ __RPC__in BSTR value);
        
        END_INTERFACE
    } IUpdateSearcherVtbl;

    interface IUpdateSearcher
    {
        CONST_VTBL struct IUpdateSearcherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateSearcher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateSearcher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateSearcher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateSearcher_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateSearcher_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateSearcher_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateSearcher_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateSearcher_get_CanAutomaticallyUpgradeService(This,retval)	\
    ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) ) 

#define IUpdateSearcher_put_CanAutomaticallyUpgradeService(This,value)	\
    ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) ) 

#define IUpdateSearcher_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateSearcher_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateSearcher_get_IncludePotentiallySupersededUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) ) 

#define IUpdateSearcher_put_IncludePotentiallySupersededUpdates(This,value)	\
    ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) ) 

#define IUpdateSearcher_get_ServerSelection(This,retval)	\
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) ) 

#define IUpdateSearcher_put_ServerSelection(This,value)	\
    ( (This)->lpVtbl -> put_ServerSelection(This,value) ) 

#define IUpdateSearcher_BeginSearch(This,criteria,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) ) 

#define IUpdateSearcher_EndSearch(This,searchJob,retval)	\
    ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) ) 

#define IUpdateSearcher_EscapeString(This,unescaped,retval)	\
    ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) ) 

#define IUpdateSearcher_QueryHistory(This,startIndex,count,retval)	\
    ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) ) 

#define IUpdateSearcher_Search(This,criteria,retval)	\
    ( (This)->lpVtbl -> Search(This,criteria,retval) ) 

#define IUpdateSearcher_get_Online(This,retval)	\
    ( (This)->lpVtbl -> get_Online(This,retval) ) 

#define IUpdateSearcher_put_Online(This,value)	\
    ( (This)->lpVtbl -> put_Online(This,value) ) 

#define IUpdateSearcher_GetTotalHistoryCount(This,retval)	\
    ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) ) 

#define IUpdateSearcher_get_ServiceID(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceID(This,retval) ) 

#define IUpdateSearcher_put_ServiceID(This,value)	\
    ( (This)->lpVtbl -> put_ServiceID(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateSearcher_INTERFACE_DEFINED__ */


#ifndef __IUpdateSearcher2_INTERFACE_DEFINED__
#define __IUpdateSearcher2_INTERFACE_DEFINED__

/* interface IUpdateSearcher2 */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateSearcher2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cbdcb2d-1589-4beb-bd1c-3e582ff0add0")
    IUpdateSearcher2 : public IUpdateSearcher
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IgnoreDownloadPriority( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IgnoreDownloadPriority( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateSearcher2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateSearcher2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateSearcher2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateSearcher2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateSearcher2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateSearcher2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutomaticallyUpgradeService )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CanAutomaticallyUpgradeService )( 
            IUpdateSearcher2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IncludePotentiallySupersededUpdates )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IncludePotentiallySupersededUpdates )( 
            IUpdateSearcher2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServerSelection )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out ServerSelection *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ServerSelection )( 
            IUpdateSearcher2 * This,
            /* [in] */ ServerSelection value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginSearch )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in BSTR criteria,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt ISearchJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndSearch )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in_opt ISearchJob *searchJob,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EscapeString )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in BSTR unescaped,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QueryHistory )( 
            IUpdateSearcher2 * This,
            /* [in] */ LONG startIndex,
            /* [in] */ LONG count,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateHistoryEntryCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in BSTR criteria,
            /* [retval][out] */ __RPC__deref_out_opt ISearchResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Online )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Online )( 
            IUpdateSearcher2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTotalHistoryCount )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceID )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ServiceID )( 
            IUpdateSearcher2 * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IgnoreDownloadPriority )( 
            IUpdateSearcher2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IgnoreDownloadPriority )( 
            IUpdateSearcher2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        END_INTERFACE
    } IUpdateSearcher2Vtbl;

    interface IUpdateSearcher2
    {
        CONST_VTBL struct IUpdateSearcher2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateSearcher2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateSearcher2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateSearcher2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateSearcher2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateSearcher2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateSearcher2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateSearcher2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateSearcher2_get_CanAutomaticallyUpgradeService(This,retval)	\
    ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) ) 

#define IUpdateSearcher2_put_CanAutomaticallyUpgradeService(This,value)	\
    ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) ) 

#define IUpdateSearcher2_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateSearcher2_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateSearcher2_get_IncludePotentiallySupersededUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) ) 

#define IUpdateSearcher2_put_IncludePotentiallySupersededUpdates(This,value)	\
    ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) ) 

#define IUpdateSearcher2_get_ServerSelection(This,retval)	\
    ( (This)->lpVtbl -> get_ServerSelection(This,retval) ) 

#define IUpdateSearcher2_put_ServerSelection(This,value)	\
    ( (This)->lpVtbl -> put_ServerSelection(This,value) ) 

#define IUpdateSearcher2_BeginSearch(This,criteria,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) ) 

#define IUpdateSearcher2_EndSearch(This,searchJob,retval)	\
    ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) ) 

#define IUpdateSearcher2_EscapeString(This,unescaped,retval)	\
    ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) ) 

#define IUpdateSearcher2_QueryHistory(This,startIndex,count,retval)	\
    ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) ) 

#define IUpdateSearcher2_Search(This,criteria,retval)	\
    ( (This)->lpVtbl -> Search(This,criteria,retval) ) 

#define IUpdateSearcher2_get_Online(This,retval)	\
    ( (This)->lpVtbl -> get_Online(This,retval) ) 

#define IUpdateSearcher2_put_Online(This,value)	\
    ( (This)->lpVtbl -> put_Online(This,value) ) 

#define IUpdateSearcher2_GetTotalHistoryCount(This,retval)	\
    ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) ) 

#define IUpdateSearcher2_get_ServiceID(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceID(This,retval) ) 

#define IUpdateSearcher2_put_ServiceID(This,value)	\
    ( (This)->lpVtbl -> put_ServiceID(This,value) ) 


#define IUpdateSearcher2_get_IgnoreDownloadPriority(This,retval)	\
    ( (This)->lpVtbl -> get_IgnoreDownloadPriority(This,retval) ) 

#define IUpdateSearcher2_put_IgnoreDownloadPriority(This,value)	\
    ( (This)->lpVtbl -> put_IgnoreDownloadPriority(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateSearcher2_INTERFACE_DEFINED__ */


#ifndef __IUpdateDownloadResult_INTERFACE_DEFINED__
#define __IUpdateDownloadResult_INTERFACE_DEFINED__

/* interface IUpdateDownloadResult */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateDownloadResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf99af76-b575-42ad-8aa4-33cbb5477af1")
    IUpdateDownloadResult : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateDownloadResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateDownloadResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateDownloadResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateDownloadResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateDownloadResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateDownloadResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateDownloadResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateDownloadResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IUpdateDownloadResult * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IUpdateDownloadResult * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        END_INTERFACE
    } IUpdateDownloadResultVtbl;

    interface IUpdateDownloadResult
    {
        CONST_VTBL struct IUpdateDownloadResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateDownloadResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateDownloadResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateDownloadResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateDownloadResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateDownloadResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateDownloadResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateDownloadResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateDownloadResult_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IUpdateDownloadResult_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateDownloadResult_INTERFACE_DEFINED__ */


#ifndef __IDownloadResult_INTERFACE_DEFINED__
#define __IDownloadResult_INTERFACE_DEFINED__

/* interface IDownloadResult */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("daa4fdd0-4727-4dbe-a1e7-745dca317144")
    IDownloadResult : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUpdateResult( 
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadResult **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IDownloadResult * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IDownloadResult * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )( 
            IDownloadResult * This,
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadResult **retval);
        
        END_INTERFACE
    } IDownloadResultVtbl;

    interface IDownloadResult
    {
        CONST_VTBL struct IDownloadResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDownloadResult_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IDownloadResult_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#define IDownloadResult_GetUpdateResult(This,updateIndex,retval)	\
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadResult_INTERFACE_DEFINED__ */


#ifndef __IDownloadProgress_INTERFACE_DEFINED__
#define __IDownloadProgress_INTERFACE_DEFINED__

/* interface IDownloadProgress */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d31a5bac-f719-4178-9dbb-5e2cb47fd18a")
    IDownloadProgress : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdateBytesDownloaded( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdateBytesToDownload( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdateIndex( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PercentComplete( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalBytesDownloaded( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalBytesToDownload( 
            /* [retval][out] */ __RPC__out DECIMAL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUpdateResult( 
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadResult **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdateDownloadPhase( 
            /* [retval][out] */ __RPC__out DownloadPhase *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdatePercentComplete( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadProgress * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadProgress * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadProgress * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateBytesDownloaded )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateBytesToDownload )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateIndex )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TotalBytesDownloaded )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TotalBytesToDownload )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out DECIMAL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )( 
            IDownloadProgress * This,
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloadResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateDownloadPhase )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out DownloadPhase *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdatePercentComplete )( 
            IDownloadProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IDownloadProgressVtbl;

    interface IDownloadProgress
    {
        CONST_VTBL struct IDownloadProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadProgress_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDownloadProgress_get_CurrentUpdateBytesDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdateBytesDownloaded(This,retval) ) 

#define IDownloadProgress_get_CurrentUpdateBytesToDownload(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdateBytesToDownload(This,retval) ) 

#define IDownloadProgress_get_CurrentUpdateIndex(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) ) 

#define IDownloadProgress_get_PercentComplete(This,retval)	\
    ( (This)->lpVtbl -> get_PercentComplete(This,retval) ) 

#define IDownloadProgress_get_TotalBytesDownloaded(This,retval)	\
    ( (This)->lpVtbl -> get_TotalBytesDownloaded(This,retval) ) 

#define IDownloadProgress_get_TotalBytesToDownload(This,retval)	\
    ( (This)->lpVtbl -> get_TotalBytesToDownload(This,retval) ) 

#define IDownloadProgress_GetUpdateResult(This,updateIndex,retval)	\
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) ) 

#define IDownloadProgress_get_CurrentUpdateDownloadPhase(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdateDownloadPhase(This,retval) ) 

#define IDownloadProgress_get_CurrentUpdatePercentComplete(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadProgress_INTERFACE_DEFINED__ */


#ifndef __IDownloadJob_INTERFACE_DEFINED__
#define __IDownloadJob_INTERFACE_DEFINED__

/* interface IDownloadJob */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c574de85-7358-43f6-aae8-8697e62d8ba7")
    IDownloadJob : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AsyncState( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCompleted( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CleanUp( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [retval][out] */ __RPC__deref_out_opt IDownloadProgress **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RequestAbort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadJobVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadJob * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadJob * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadJob * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadJob * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncState )( 
            IDownloadJob * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )( 
            IDownloadJob * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            IDownloadJob * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CleanUp )( 
            IDownloadJob * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IDownloadJob * This,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadProgress **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RequestAbort )( 
            IDownloadJob * This);
        
        END_INTERFACE
    } IDownloadJobVtbl;

    interface IDownloadJob
    {
        CONST_VTBL struct IDownloadJobVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadJob_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadJob_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadJob_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadJob_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDownloadJob_get_AsyncState(This,retval)	\
    ( (This)->lpVtbl -> get_AsyncState(This,retval) ) 

#define IDownloadJob_get_IsCompleted(This,retval)	\
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) ) 

#define IDownloadJob_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define IDownloadJob_CleanUp(This)	\
    ( (This)->lpVtbl -> CleanUp(This) ) 

#define IDownloadJob_GetProgress(This,retval)	\
    ( (This)->lpVtbl -> GetProgress(This,retval) ) 

#define IDownloadJob_RequestAbort(This)	\
    ( (This)->lpVtbl -> RequestAbort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadJob_INTERFACE_DEFINED__ */


#ifndef __IDownloadCompletedCallbackArgs_INTERFACE_DEFINED__
#define __IDownloadCompletedCallbackArgs_INTERFACE_DEFINED__

/* interface IDownloadCompletedCallbackArgs */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadCompletedCallbackArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa565b23-498c-47a0-979d-e7d5b1813360")
    IDownloadCompletedCallbackArgs : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDownloadCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadCompletedCallbackArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadCompletedCallbackArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadCompletedCallbackArgs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadCompletedCallbackArgs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadCompletedCallbackArgs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IDownloadCompletedCallbackArgsVtbl;

    interface IDownloadCompletedCallbackArgs
    {
        CONST_VTBL struct IDownloadCompletedCallbackArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadCompletedCallbackArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadCompletedCallbackArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadCompletedCallbackArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadCompletedCallbackArgs_INTERFACE_DEFINED__ */


#ifndef __IDownloadCompletedCallback_INTERFACE_DEFINED__
#define __IDownloadCompletedCallback_INTERFACE_DEFINED__

/* interface IDownloadCompletedCallback */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadCompletedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77254866-9f5b-4c8e-b9e2-c77a8530d64b")
    IDownloadCompletedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IDownloadJob *downloadJob,
            /* [in] */ __RPC__in_opt IDownloadCompletedCallbackArgs *callbackArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadCompletedCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadCompletedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadCompletedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadCompletedCallback * This,
            /* [in] */ __RPC__in_opt IDownloadJob *downloadJob,
            /* [in] */ __RPC__in_opt IDownloadCompletedCallbackArgs *callbackArgs);
        
        END_INTERFACE
    } IDownloadCompletedCallbackVtbl;

    interface IDownloadCompletedCallback
    {
        CONST_VTBL struct IDownloadCompletedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadCompletedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadCompletedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadCompletedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadCompletedCallback_Invoke(This,downloadJob,callbackArgs)	\
    ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadCompletedCallback_INTERFACE_DEFINED__ */


#ifndef __IDownloadProgressChangedCallbackArgs_INTERFACE_DEFINED__
#define __IDownloadProgressChangedCallbackArgs_INTERFACE_DEFINED__

/* interface IDownloadProgressChangedCallbackArgs */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadProgressChangedCallbackArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("324ff2c6-4981-4b04-9412-57481745ab24")
    IDownloadProgressChangedCallbackArgs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Progress( 
            /* [retval][out] */ __RPC__deref_out_opt IDownloadProgress **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadProgressChangedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadProgressChangedCallbackArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadProgressChangedCallbackArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )( 
            IDownloadProgressChangedCallbackArgs * This,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadProgress **retval);
        
        END_INTERFACE
    } IDownloadProgressChangedCallbackArgsVtbl;

    interface IDownloadProgressChangedCallbackArgs
    {
        CONST_VTBL struct IDownloadProgressChangedCallbackArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadProgressChangedCallbackArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadProgressChangedCallbackArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadProgressChangedCallbackArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadProgressChangedCallbackArgs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadProgressChangedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadProgressChangedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadProgressChangedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDownloadProgressChangedCallbackArgs_get_Progress(This,retval)	\
    ( (This)->lpVtbl -> get_Progress(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadProgressChangedCallbackArgs_INTERFACE_DEFINED__ */


#ifndef __IDownloadProgressChangedCallback_INTERFACE_DEFINED__
#define __IDownloadProgressChangedCallback_INTERFACE_DEFINED__

/* interface IDownloadProgressChangedCallback */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadProgressChangedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8c3f1cdd-6173-4591-aebd-a56a53ca77c1")
    IDownloadProgressChangedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IDownloadJob *downloadJob,
            /* [in] */ __RPC__in_opt IDownloadProgressChangedCallbackArgs *callbackArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadProgressChangedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadProgressChangedCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadProgressChangedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadProgressChangedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadProgressChangedCallback * This,
            /* [in] */ __RPC__in_opt IDownloadJob *downloadJob,
            /* [in] */ __RPC__in_opt IDownloadProgressChangedCallbackArgs *callbackArgs);
        
        END_INTERFACE
    } IDownloadProgressChangedCallbackVtbl;

    interface IDownloadProgressChangedCallback
    {
        CONST_VTBL struct IDownloadProgressChangedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadProgressChangedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadProgressChangedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadProgressChangedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadProgressChangedCallback_Invoke(This,downloadJob,callbackArgs)	\
    ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadProgressChangedCallback_INTERFACE_DEFINED__ */


#ifndef __IUpdateDownloader_INTERFACE_DEFINED__
#define __IUpdateDownloader_INTERFACE_DEFINED__

/* interface IUpdateDownloader */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateDownloader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68f1c6f9-7ecc-4666-a464-247fe12496c3")
    IUpdateDownloader : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientApplicationID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientApplicationID( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsForced( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsForced( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ __RPC__out DownloadPriority *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ DownloadPriority value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Updates( 
            /* [in] */ __RPC__in_opt IUpdateCollection *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginDownload( 
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadJob **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Download( 
            /* [retval][out] */ __RPC__deref_out_opt IDownloadResult **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndDownload( 
            /* [in] */ __RPC__in_opt IDownloadJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadResult **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateDownloaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateDownloader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateDownloader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateDownloader * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateDownloader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateDownloader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateDownloader * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsForced )( 
            IUpdateDownloader * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsForced )( 
            IUpdateDownloader * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IUpdateDownloader * This,
            /* [retval][out] */ __RPC__out DownloadPriority *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IUpdateDownloader * This,
            /* [in] */ DownloadPriority value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            IUpdateDownloader * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Updates )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in_opt IUpdateCollection *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginDownload )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Download )( 
            IUpdateDownloader * This,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndDownload )( 
            IUpdateDownloader * This,
            /* [in] */ __RPC__in_opt IDownloadJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IDownloadResult **retval);
        
        END_INTERFACE
    } IUpdateDownloaderVtbl;

    interface IUpdateDownloader
    {
        CONST_VTBL struct IUpdateDownloaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateDownloader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateDownloader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateDownloader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateDownloader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateDownloader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateDownloader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateDownloader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateDownloader_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateDownloader_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateDownloader_get_IsForced(This,retval)	\
    ( (This)->lpVtbl -> get_IsForced(This,retval) ) 

#define IUpdateDownloader_put_IsForced(This,value)	\
    ( (This)->lpVtbl -> put_IsForced(This,value) ) 

#define IUpdateDownloader_get_Priority(This,retval)	\
    ( (This)->lpVtbl -> get_Priority(This,retval) ) 

#define IUpdateDownloader_put_Priority(This,value)	\
    ( (This)->lpVtbl -> put_Priority(This,value) ) 

#define IUpdateDownloader_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define IUpdateDownloader_put_Updates(This,value)	\
    ( (This)->lpVtbl -> put_Updates(This,value) ) 

#define IUpdateDownloader_BeginDownload(This,onProgressChanged,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginDownload(This,onProgressChanged,onCompleted,state,retval) ) 

#define IUpdateDownloader_Download(This,retval)	\
    ( (This)->lpVtbl -> Download(This,retval) ) 

#define IUpdateDownloader_EndDownload(This,value,retval)	\
    ( (This)->lpVtbl -> EndDownload(This,value,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateDownloader_INTERFACE_DEFINED__ */


#ifndef __IUpdateInstallationResult_INTERFACE_DEFINED__
#define __IUpdateInstallationResult_INTERFACE_DEFINED__

/* interface IUpdateInstallationResult */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateInstallationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d940f0f8-3cbb-4fd0-993f-471e7f2328ad")
    IUpdateInstallationResult : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequired( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateInstallationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateInstallationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateInstallationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateInstallationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateInstallationResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateInstallationResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateInstallationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateInstallationResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IUpdateInstallationResult * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IUpdateInstallationResult * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IUpdateInstallationResult * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        END_INTERFACE
    } IUpdateInstallationResultVtbl;

    interface IUpdateInstallationResult
    {
        CONST_VTBL struct IUpdateInstallationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateInstallationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateInstallationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateInstallationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateInstallationResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateInstallationResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateInstallationResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateInstallationResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateInstallationResult_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IUpdateInstallationResult_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IUpdateInstallationResult_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateInstallationResult_INTERFACE_DEFINED__ */


#ifndef __IInstallationResult_INTERFACE_DEFINED__
#define __IInstallationResult_INTERFACE_DEFINED__

/* interface IInstallationResult */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a43c56d6-7451-48d4-af96-b6cd2d0d9b7a")
    IInstallationResult : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HResult( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequired( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResultCode( 
            /* [retval][out] */ __RPC__out OperationResultCode *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUpdateResult( 
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstallationResult **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HResult )( 
            IInstallationResult * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )( 
            IInstallationResult * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResultCode )( 
            IInstallationResult * This,
            /* [retval][out] */ __RPC__out OperationResultCode *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )( 
            IInstallationResult * This,
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstallationResult **retval);
        
        END_INTERFACE
    } IInstallationResultVtbl;

    interface IInstallationResult
    {
        CONST_VTBL struct IInstallationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInstallationResult_get_HResult(This,retval)	\
    ( (This)->lpVtbl -> get_HResult(This,retval) ) 

#define IInstallationResult_get_RebootRequired(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequired(This,retval) ) 

#define IInstallationResult_get_ResultCode(This,retval)	\
    ( (This)->lpVtbl -> get_ResultCode(This,retval) ) 

#define IInstallationResult_GetUpdateResult(This,updateIndex,retval)	\
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationResult_INTERFACE_DEFINED__ */


#ifndef __IInstallationProgress_INTERFACE_DEFINED__
#define __IInstallationProgress_INTERFACE_DEFINED__

/* interface IInstallationProgress */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("345c8244-43a3-4e32-a368-65f073b76f36")
    IInstallationProgress : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdateIndex( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUpdatePercentComplete( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PercentComplete( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUpdateResult( 
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstallationResult **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationProgress * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationProgress * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationProgress * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdateIndex )( 
            IInstallationProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUpdatePercentComplete )( 
            IInstallationProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )( 
            IInstallationProgress * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUpdateResult )( 
            IInstallationProgress * This,
            /* [in] */ LONG updateIndex,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstallationResult **retval);
        
        END_INTERFACE
    } IInstallationProgressVtbl;

    interface IInstallationProgress
    {
        CONST_VTBL struct IInstallationProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationProgress_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInstallationProgress_get_CurrentUpdateIndex(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) ) 

#define IInstallationProgress_get_CurrentUpdatePercentComplete(This,retval)	\
    ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) ) 

#define IInstallationProgress_get_PercentComplete(This,retval)	\
    ( (This)->lpVtbl -> get_PercentComplete(This,retval) ) 

#define IInstallationProgress_GetUpdateResult(This,updateIndex,retval)	\
    ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationProgress_INTERFACE_DEFINED__ */


#ifndef __IInstallationJob_INTERFACE_DEFINED__
#define __IInstallationJob_INTERFACE_DEFINED__

/* interface IInstallationJob */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5c209f0b-bad5-432a-9556-4699bed2638a")
    IInstallationJob : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AsyncState( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCompleted( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CleanUp( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationProgress **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RequestAbort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationJobVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationJob * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationJob * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationJob * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationJob * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncState )( 
            IInstallationJob * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )( 
            IInstallationJob * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            IInstallationJob * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CleanUp )( 
            IInstallationJob * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IInstallationJob * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationProgress **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RequestAbort )( 
            IInstallationJob * This);
        
        END_INTERFACE
    } IInstallationJobVtbl;

    interface IInstallationJob
    {
        CONST_VTBL struct IInstallationJobVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationJob_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationJob_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationJob_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationJob_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInstallationJob_get_AsyncState(This,retval)	\
    ( (This)->lpVtbl -> get_AsyncState(This,retval) ) 

#define IInstallationJob_get_IsCompleted(This,retval)	\
    ( (This)->lpVtbl -> get_IsCompleted(This,retval) ) 

#define IInstallationJob_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define IInstallationJob_CleanUp(This)	\
    ( (This)->lpVtbl -> CleanUp(This) ) 

#define IInstallationJob_GetProgress(This,retval)	\
    ( (This)->lpVtbl -> GetProgress(This,retval) ) 

#define IInstallationJob_RequestAbort(This)	\
    ( (This)->lpVtbl -> RequestAbort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationJob_INTERFACE_DEFINED__ */


#ifndef __IInstallationCompletedCallbackArgs_INTERFACE_DEFINED__
#define __IInstallationCompletedCallbackArgs_INTERFACE_DEFINED__

/* interface IInstallationCompletedCallbackArgs */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationCompletedCallbackArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("250e2106-8efb-4705-9653-ef13c581b6a1")
    IInstallationCompletedCallbackArgs : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IInstallationCompletedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationCompletedCallbackArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationCompletedCallbackArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationCompletedCallbackArgs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationCompletedCallbackArgs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationCompletedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationCompletedCallbackArgs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IInstallationCompletedCallbackArgsVtbl;

    interface IInstallationCompletedCallbackArgs
    {
        CONST_VTBL struct IInstallationCompletedCallbackArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationCompletedCallbackArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationCompletedCallbackArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationCompletedCallbackArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationCompletedCallbackArgs_INTERFACE_DEFINED__ */


#ifndef __IInstallationCompletedCallback_INTERFACE_DEFINED__
#define __IInstallationCompletedCallback_INTERFACE_DEFINED__

/* interface IInstallationCompletedCallback */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationCompletedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45f4f6f3-d602-4f98-9a8a-3efa152ad2d3")
    IInstallationCompletedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IInstallationJob *installationJob,
            /* [in] */ __RPC__in_opt IInstallationCompletedCallbackArgs *callbackArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationCompletedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationCompletedCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationCompletedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationCompletedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationCompletedCallback * This,
            /* [in] */ __RPC__in_opt IInstallationJob *installationJob,
            /* [in] */ __RPC__in_opt IInstallationCompletedCallbackArgs *callbackArgs);
        
        END_INTERFACE
    } IInstallationCompletedCallbackVtbl;

    interface IInstallationCompletedCallback
    {
        CONST_VTBL struct IInstallationCompletedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationCompletedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationCompletedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationCompletedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationCompletedCallback_Invoke(This,installationJob,callbackArgs)	\
    ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationCompletedCallback_INTERFACE_DEFINED__ */


#ifndef __IInstallationProgressChangedCallbackArgs_INTERFACE_DEFINED__
#define __IInstallationProgressChangedCallbackArgs_INTERFACE_DEFINED__

/* interface IInstallationProgressChangedCallbackArgs */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationProgressChangedCallbackArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e4f14e1e-689d-4218-a0b9-bc189c484a01")
    IInstallationProgressChangedCallbackArgs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Progress( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationProgress **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationProgressChangedCallbackArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationProgressChangedCallbackArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationProgressChangedCallbackArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )( 
            IInstallationProgressChangedCallbackArgs * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationProgress **retval);
        
        END_INTERFACE
    } IInstallationProgressChangedCallbackArgsVtbl;

    interface IInstallationProgressChangedCallbackArgs
    {
        CONST_VTBL struct IInstallationProgressChangedCallbackArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationProgressChangedCallbackArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationProgressChangedCallbackArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationProgressChangedCallbackArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationProgressChangedCallbackArgs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInstallationProgressChangedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInstallationProgressChangedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInstallationProgressChangedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInstallationProgressChangedCallbackArgs_get_Progress(This,retval)	\
    ( (This)->lpVtbl -> get_Progress(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationProgressChangedCallbackArgs_INTERFACE_DEFINED__ */


#ifndef __IInstallationProgressChangedCallback_INTERFACE_DEFINED__
#define __IInstallationProgressChangedCallback_INTERFACE_DEFINED__

/* interface IInstallationProgressChangedCallback */
/* [unique][uuid][nonextensible][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IInstallationProgressChangedCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e01402d5-f8da-43ba-a012-38894bd048f1")
    IInstallationProgressChangedCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IInstallationJob *installationJob,
            /* [in] */ __RPC__in_opt IInstallationProgressChangedCallbackArgs *callbackArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInstallationProgressChangedCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInstallationProgressChangedCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInstallationProgressChangedCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInstallationProgressChangedCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInstallationProgressChangedCallback * This,
            /* [in] */ __RPC__in_opt IInstallationJob *installationJob,
            /* [in] */ __RPC__in_opt IInstallationProgressChangedCallbackArgs *callbackArgs);
        
        END_INTERFACE
    } IInstallationProgressChangedCallbackVtbl;

    interface IInstallationProgressChangedCallback
    {
        CONST_VTBL struct IInstallationProgressChangedCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInstallationProgressChangedCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInstallationProgressChangedCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInstallationProgressChangedCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInstallationProgressChangedCallback_Invoke(This,installationJob,callbackArgs)	\
    ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInstallationProgressChangedCallback_INTERFACE_DEFINED__ */


#ifndef __IUpdateInstaller_INTERFACE_DEFINED__
#define __IUpdateInstaller_INTERFACE_DEFINED__

/* interface IUpdateInstaller */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateInstaller;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7b929c68-ccdc-4226-96b1-8724600b54c2")
    IUpdateInstaller : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientApplicationID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientApplicationID( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsForced( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsForced( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get_ParentHwnd( 
            /* [retval][out] */ __RPC__deref_out_opt HWND *retval) = 0;
        
        virtual /* [helpstring][restricted][propput][id] */ HRESULT STDMETHODCALLTYPE put_ParentHwnd( 
            /* [unique][in] */ __RPC__in_opt HWND value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [unique][in] */ __RPC__in_opt IUnknown *value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Updates( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Updates( 
            /* [in] */ __RPC__in_opt IUpdateCollection *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginInstall( 
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginUninstall( 
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndInstall( 
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndUninstall( 
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Install( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunWizard( 
            /* [defaultvalue][in] */ __RPC__in BSTR dialogTitle,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsBusy( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uninstall( 
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowSourcePrompts( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowSourcePrompts( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RebootRequiredBeforeInstallation( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateInstallerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateInstaller * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateInstaller * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateInstaller * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateInstaller * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateInstaller * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsForced )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsForced )( 
            IUpdateInstaller * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt HWND *retval);
        
        /* [helpstring][restricted][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )( 
            IUpdateInstaller * This,
            /* [unique][in] */ __RPC__in_opt HWND value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            IUpdateInstaller * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Updates )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in_opt IUpdateCollection *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginInstall )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginUninstall )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndInstall )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndUninstall )( 
            IUpdateInstaller * This,
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunWizard )( 
            IUpdateInstaller * This,
            /* [defaultvalue][in] */ __RPC__in BSTR dialogTitle,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBusy )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Uninstall )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )( 
            IUpdateInstaller * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )( 
            IUpdateInstaller * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IUpdateInstallerVtbl;

    interface IUpdateInstaller
    {
        CONST_VTBL struct IUpdateInstallerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateInstaller_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateInstaller_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateInstaller_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateInstaller_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateInstaller_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateInstaller_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateInstaller_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateInstaller_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateInstaller_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateInstaller_get_IsForced(This,retval)	\
    ( (This)->lpVtbl -> get_IsForced(This,retval) ) 

#define IUpdateInstaller_put_IsForced(This,value)	\
    ( (This)->lpVtbl -> put_IsForced(This,value) ) 

#define IUpdateInstaller_get_ParentHwnd(This,retval)	\
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) ) 

#define IUpdateInstaller_put_ParentHwnd(This,value)	\
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) ) 

#define IUpdateInstaller_put_ParentWindow(This,value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,value) ) 

#define IUpdateInstaller_get_ParentWindow(This,retval)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) ) 

#define IUpdateInstaller_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define IUpdateInstaller_put_Updates(This,value)	\
    ( (This)->lpVtbl -> put_Updates(This,value) ) 

#define IUpdateInstaller_BeginInstall(This,onProgressChanged,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) ) 

#define IUpdateInstaller_BeginUninstall(This,onProgressChanged,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) ) 

#define IUpdateInstaller_EndInstall(This,value,retval)	\
    ( (This)->lpVtbl -> EndInstall(This,value,retval) ) 

#define IUpdateInstaller_EndUninstall(This,value,retval)	\
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) ) 

#define IUpdateInstaller_Install(This,retval)	\
    ( (This)->lpVtbl -> Install(This,retval) ) 

#define IUpdateInstaller_RunWizard(This,dialogTitle,retval)	\
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) ) 

#define IUpdateInstaller_get_IsBusy(This,retval)	\
    ( (This)->lpVtbl -> get_IsBusy(This,retval) ) 

#define IUpdateInstaller_Uninstall(This,retval)	\
    ( (This)->lpVtbl -> Uninstall(This,retval) ) 

#define IUpdateInstaller_get_AllowSourcePrompts(This,retval)	\
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) ) 

#define IUpdateInstaller_put_AllowSourcePrompts(This,value)	\
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) ) 

#define IUpdateInstaller_get_RebootRequiredBeforeInstallation(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateInstaller_INTERFACE_DEFINED__ */


#ifndef __IUpdateInstaller2_INTERFACE_DEFINED__
#define __IUpdateInstaller2_INTERFACE_DEFINED__

/* interface IUpdateInstaller2 */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateInstaller2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3442d4fe-224d-4cee-98cf-30e0c4d229e6")
    IUpdateInstaller2 : public IUpdateInstaller
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ForceQuiet( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ForceQuiet( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateInstaller2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateInstaller2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateInstaller2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateInstaller2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateInstaller2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateInstaller2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsForced )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsForced )( 
            IUpdateInstaller2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentHwnd )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt HWND *retval);
        
        /* [helpstring][restricted][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentHwnd )( 
            IUpdateInstaller2 * This,
            /* [unique][in] */ __RPC__in_opt HWND value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            IUpdateInstaller2 * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Updates )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateCollection **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Updates )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in_opt IUpdateCollection *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginInstall )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginUninstall )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in_opt IUnknown *onProgressChanged,
            /* [in] */ __RPC__in_opt IUnknown *onCompleted,
            /* [in] */ VARIANT state,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationJob **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndInstall )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndUninstall )( 
            IUpdateInstaller2 * This,
            /* [in] */ __RPC__in_opt IInstallationJob *value,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunWizard )( 
            IUpdateInstaller2 * This,
            /* [defaultvalue][in] */ __RPC__in BSTR dialogTitle,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBusy )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Uninstall )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IInstallationResult **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSourcePrompts )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSourcePrompts )( 
            IUpdateInstaller2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RebootRequiredBeforeInstallation )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ForceQuiet )( 
            IUpdateInstaller2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ForceQuiet )( 
            IUpdateInstaller2 * This,
            /* [in] */ VARIANT_BOOL value);
        
        END_INTERFACE
    } IUpdateInstaller2Vtbl;

    interface IUpdateInstaller2
    {
        CONST_VTBL struct IUpdateInstaller2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateInstaller2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateInstaller2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateInstaller2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateInstaller2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateInstaller2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateInstaller2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateInstaller2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateInstaller2_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateInstaller2_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateInstaller2_get_IsForced(This,retval)	\
    ( (This)->lpVtbl -> get_IsForced(This,retval) ) 

#define IUpdateInstaller2_put_IsForced(This,value)	\
    ( (This)->lpVtbl -> put_IsForced(This,value) ) 

#define IUpdateInstaller2_get_ParentHwnd(This,retval)	\
    ( (This)->lpVtbl -> get_ParentHwnd(This,retval) ) 

#define IUpdateInstaller2_put_ParentHwnd(This,value)	\
    ( (This)->lpVtbl -> put_ParentHwnd(This,value) ) 

#define IUpdateInstaller2_put_ParentWindow(This,value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,value) ) 

#define IUpdateInstaller2_get_ParentWindow(This,retval)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) ) 

#define IUpdateInstaller2_get_Updates(This,retval)	\
    ( (This)->lpVtbl -> get_Updates(This,retval) ) 

#define IUpdateInstaller2_put_Updates(This,value)	\
    ( (This)->lpVtbl -> put_Updates(This,value) ) 

#define IUpdateInstaller2_BeginInstall(This,onProgressChanged,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) ) 

#define IUpdateInstaller2_BeginUninstall(This,onProgressChanged,onCompleted,state,retval)	\
    ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) ) 

#define IUpdateInstaller2_EndInstall(This,value,retval)	\
    ( (This)->lpVtbl -> EndInstall(This,value,retval) ) 

#define IUpdateInstaller2_EndUninstall(This,value,retval)	\
    ( (This)->lpVtbl -> EndUninstall(This,value,retval) ) 

#define IUpdateInstaller2_Install(This,retval)	\
    ( (This)->lpVtbl -> Install(This,retval) ) 

#define IUpdateInstaller2_RunWizard(This,dialogTitle,retval)	\
    ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) ) 

#define IUpdateInstaller2_get_IsBusy(This,retval)	\
    ( (This)->lpVtbl -> get_IsBusy(This,retval) ) 

#define IUpdateInstaller2_Uninstall(This,retval)	\
    ( (This)->lpVtbl -> Uninstall(This,retval) ) 

#define IUpdateInstaller2_get_AllowSourcePrompts(This,retval)	\
    ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) ) 

#define IUpdateInstaller2_put_AllowSourcePrompts(This,value)	\
    ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) ) 

#define IUpdateInstaller2_get_RebootRequiredBeforeInstallation(This,retval)	\
    ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) ) 


#define IUpdateInstaller2_get_ForceQuiet(This,retval)	\
    ( (This)->lpVtbl -> get_ForceQuiet(This,retval) ) 

#define IUpdateInstaller2_put_ForceQuiet(This,value)	\
    ( (This)->lpVtbl -> put_ForceQuiet(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateInstaller2_INTERFACE_DEFINED__ */


#ifndef __IUpdateSession_INTERFACE_DEFINED__
#define __IUpdateSession_INTERFACE_DEFINED__

/* interface IUpdateSession */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("816858a4-260d-4260-933a-2585f1abc76b")
    IUpdateSession : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientApplicationID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientApplicationID( 
            /* [in] */ __RPC__in BSTR value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WebProxy( 
            /* [retval][out] */ __RPC__deref_out_opt IWebProxy **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WebProxy( 
            /* [unique][in] */ __RPC__in_opt IWebProxy *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUpdateSearcher( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateSearcher **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUpdateDownloader( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloader **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUpdateInstaller( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstaller **retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateSession * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateSession * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateSession * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateSession * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateSession * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateSession * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WebProxy )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__deref_out_opt IWebProxy **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WebProxy )( 
            IUpdateSession * This,
            /* [unique][in] */ __RPC__in_opt IWebProxy *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateSearcher )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateSearcher **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateDownloader )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloader **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateInstaller )( 
            IUpdateSession * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstaller **retval);
        
        END_INTERFACE
    } IUpdateSessionVtbl;

    interface IUpdateSession
    {
        CONST_VTBL struct IUpdateSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateSession_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateSession_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateSession_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateSession_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IUpdateSession_get_WebProxy(This,retval)	\
    ( (This)->lpVtbl -> get_WebProxy(This,retval) ) 

#define IUpdateSession_put_WebProxy(This,value)	\
    ( (This)->lpVtbl -> put_WebProxy(This,value) ) 

#define IUpdateSession_CreateUpdateSearcher(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) ) 

#define IUpdateSession_CreateUpdateDownloader(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) ) 

#define IUpdateSession_CreateUpdateInstaller(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateSession_INTERFACE_DEFINED__ */


#ifndef __IUpdateSession2_INTERFACE_DEFINED__
#define __IUpdateSession2_INTERFACE_DEFINED__

/* interface IUpdateSession2 */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateSession2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91caf7b0-eb23-49ed-9937-c52d817f46f7")
    IUpdateSession2 : public IUpdateSession
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UserLocale( 
            /* [retval][out] */ __RPC__out LCID *retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UserLocale( 
            /* [in] */ LCID lcid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateSession2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateSession2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateSession2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateSession2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateSession2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateSession2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateSession2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateSession2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientApplicationID )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientApplicationID )( 
            IUpdateSession2 * This,
            /* [in] */ __RPC__in BSTR value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WebProxy )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IWebProxy **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WebProxy )( 
            IUpdateSession2 * This,
            /* [unique][in] */ __RPC__in_opt IWebProxy *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateSearcher )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateSearcher **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateDownloader )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateDownloader **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUpdateInstaller )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateInstaller **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserLocale )( 
            IUpdateSession2 * This,
            /* [retval][out] */ __RPC__out LCID *retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserLocale )( 
            IUpdateSession2 * This,
            /* [in] */ LCID lcid);
        
        END_INTERFACE
    } IUpdateSession2Vtbl;

    interface IUpdateSession2
    {
        CONST_VTBL struct IUpdateSession2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateSession2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateSession2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateSession2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateSession2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateSession2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateSession2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateSession2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateSession2_get_ClientApplicationID(This,retval)	\
    ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) ) 

#define IUpdateSession2_put_ClientApplicationID(This,value)	\
    ( (This)->lpVtbl -> put_ClientApplicationID(This,value) ) 

#define IUpdateSession2_get_ReadOnly(This,retval)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,retval) ) 

#define IUpdateSession2_get_WebProxy(This,retval)	\
    ( (This)->lpVtbl -> get_WebProxy(This,retval) ) 

#define IUpdateSession2_put_WebProxy(This,value)	\
    ( (This)->lpVtbl -> put_WebProxy(This,value) ) 

#define IUpdateSession2_CreateUpdateSearcher(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) ) 

#define IUpdateSession2_CreateUpdateDownloader(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) ) 

#define IUpdateSession2_CreateUpdateInstaller(This,retval)	\
    ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) ) 


#define IUpdateSession2_get_UserLocale(This,retval)	\
    ( (This)->lpVtbl -> get_UserLocale(This,retval) ) 

#define IUpdateSession2_put_UserLocale(This,lcid)	\
    ( (This)->lpVtbl -> put_UserLocale(This,lcid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateSession2_INTERFACE_DEFINED__ */


#ifndef __IUpdateService_INTERFACE_DEFINED__
#define __IUpdateService_INTERFACE_DEFINED__

/* interface IUpdateService */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76b3b17e-aed6-4da5-85f0-83587f81abe3")
    IUpdateService : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContentValidationCert( 
            /* [retval][out] */ __RPC__out VARIANT *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ __RPC__out DATE *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsManaged( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsRegisteredWithAU( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IssueDate( 
            /* [retval][out] */ __RPC__out DATE *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OffersWindowsUpdates( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectUrls( 
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsScanPackageService( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CanRegisterWithAU( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SetupPrefix( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateService * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateService * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateService * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentValidationCert )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsManaged )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsRegisteredWithAU )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IssueDate )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out DATE *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OffersWindowsUpdates )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectUrls )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__deref_out_opt IStringCollection **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceID )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsScanPackageService )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanRegisterWithAU )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceUrl )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SetupPrefix )( 
            IUpdateService * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        END_INTERFACE
    } IUpdateServiceVtbl;

    interface IUpdateService
    {
        CONST_VTBL struct IUpdateServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateService_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateService_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define IUpdateService_get_ContentValidationCert(This,retval)	\
    ( (This)->lpVtbl -> get_ContentValidationCert(This,retval) ) 

#define IUpdateService_get_ExpirationDate(This,retval)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,retval) ) 

#define IUpdateService_get_IsManaged(This,retval)	\
    ( (This)->lpVtbl -> get_IsManaged(This,retval) ) 

#define IUpdateService_get_IsRegisteredWithAU(This,retval)	\
    ( (This)->lpVtbl -> get_IsRegisteredWithAU(This,retval) ) 

#define IUpdateService_get_IssueDate(This,retval)	\
    ( (This)->lpVtbl -> get_IssueDate(This,retval) ) 

#define IUpdateService_get_OffersWindowsUpdates(This,retval)	\
    ( (This)->lpVtbl -> get_OffersWindowsUpdates(This,retval) ) 

#define IUpdateService_get_RedirectUrls(This,retval)	\
    ( (This)->lpVtbl -> get_RedirectUrls(This,retval) ) 

#define IUpdateService_get_ServiceID(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceID(This,retval) ) 

#define IUpdateService_get_IsScanPackageService(This,retval)	\
    ( (This)->lpVtbl -> get_IsScanPackageService(This,retval) ) 

#define IUpdateService_get_CanRegisterWithAU(This,retval)	\
    ( (This)->lpVtbl -> get_CanRegisterWithAU(This,retval) ) 

#define IUpdateService_get_ServiceUrl(This,retval)	\
    ( (This)->lpVtbl -> get_ServiceUrl(This,retval) ) 

#define IUpdateService_get_SetupPrefix(This,retval)	\
    ( (This)->lpVtbl -> get_SetupPrefix(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateService_INTERFACE_DEFINED__ */


#ifndef __IUpdateServiceCollection_INTERFACE_DEFINED__
#define __IUpdateServiceCollection_INTERFACE_DEFINED__

/* interface IUpdateServiceCollection */
/* [unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateServiceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9b0353aa-0e52-44ff-b8b0-1f7fa0437f88")
    IUpdateServiceCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateServiceCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateServiceCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateServiceCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateServiceCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateServiceCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateServiceCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateServiceCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateServiceCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IUpdateServiceCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IUpdateServiceCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUpdateServiceCollection * This,
            /* [retval][out] */ __RPC__out LONG *retval);
        
        END_INTERFACE
    } IUpdateServiceCollectionVtbl;

    interface IUpdateServiceCollection
    {
        CONST_VTBL struct IUpdateServiceCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateServiceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateServiceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateServiceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateServiceCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateServiceCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateServiceCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateServiceCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateServiceCollection_get_Item(This,index,retval)	\
    ( (This)->lpVtbl -> get_Item(This,index,retval) ) 

#define IUpdateServiceCollection_get__NewEnum(This,retval)	\
    ( (This)->lpVtbl -> get__NewEnum(This,retval) ) 

#define IUpdateServiceCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateServiceCollection_INTERFACE_DEFINED__ */


#ifndef __IUpdateServiceManager_INTERFACE_DEFINED__
#define __IUpdateServiceManager_INTERFACE_DEFINED__

/* interface IUpdateServiceManager */
/* [hidden][unique][uuid][nonextensible][dual][oleautomation][object][helpstring] */ 


EXTERN_C const IID IID_IUpdateServiceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23857e3c-02ba-44a3-9423-b1c900805f37")
    IUpdateServiceManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ __RPC__deref_out_opt IUpdateServiceCollection **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddService( 
            /* [in] */ __RPC__in BSTR serviceID,
            /* [in] */ __RPC__in BSTR authorizationCabPath,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterServiceWithAU( 
            /* [in] */ __RPC__in BSTR serviceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveService( 
            /* [in] */ __RPC__in BSTR serviceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregisterServiceWithAU( 
            /* [in] */ __RPC__in BSTR serviceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddScanPackageService( 
            /* [in] */ __RPC__in BSTR serviceName,
            /* [in] */ __RPC__in BSTR scanFileLocation,
            /* [defaultvalue][in] */ LONG flags,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **ppService) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOption( 
            /* [in] */ __RPC__in BSTR optionName,
            /* [in] */ VARIANT optionValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateServiceManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateServiceManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateServiceManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateServiceManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateServiceManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateServiceManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Services )( 
            IUpdateServiceManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateServiceCollection **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddService )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR serviceID,
            /* [in] */ __RPC__in BSTR authorizationCabPath,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterServiceWithAU )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR serviceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveService )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR serviceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterServiceWithAU )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR serviceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddScanPackageService )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR serviceName,
            /* [in] */ __RPC__in BSTR scanFileLocation,
            /* [defaultvalue][in] */ LONG flags,
            /* [retval][out] */ __RPC__deref_out_opt IUpdateService **ppService);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOption )( 
            IUpdateServiceManager * This,
            /* [in] */ __RPC__in BSTR optionName,
            /* [in] */ VARIANT optionValue);
        
        END_INTERFACE
    } IUpdateServiceManagerVtbl;

    interface IUpdateServiceManager
    {
        CONST_VTBL struct IUpdateServiceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateServiceManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateServiceManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateServiceManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateServiceManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateServiceManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateServiceManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateServiceManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateServiceManager_get_Services(This,retval)	\
    ( (This)->lpVtbl -> get_Services(This,retval) ) 

#define IUpdateServiceManager_AddService(This,serviceID,authorizationCabPath,retval)	\
    ( (This)->lpVtbl -> AddService(This,serviceID,authorizationCabPath,retval) ) 

#define IUpdateServiceManager_RegisterServiceWithAU(This,serviceID)	\
    ( (This)->lpVtbl -> RegisterServiceWithAU(This,serviceID) ) 

#define IUpdateServiceManager_RemoveService(This,serviceID)	\
    ( (This)->lpVtbl -> RemoveService(This,serviceID) ) 

#define IUpdateServiceManager_UnregisterServiceWithAU(This,serviceID)	\
    ( (This)->lpVtbl -> UnregisterServiceWithAU(This,serviceID) ) 

#define IUpdateServiceManager_AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService)	\
    ( (This)->lpVtbl -> AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) ) 

#define IUpdateServiceManager_SetOption(This,optionName,optionValue)	\
    ( (This)->lpVtbl -> SetOption(This,optionName,optionValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateServiceManager_INTERFACE_DEFINED__ */



#ifndef __WUApiLib_LIBRARY_DEFINED__
#define __WUApiLib_LIBRARY_DEFINED__

/* library WUApiLib */
/* [helpstring][version][uuid] */ 

typedef /* [v1_enum][helpstring][public] */ 
enum tagUpdateLockdownOption
    {	uloForWebsiteAccess	= 0x1
    } 	UpdateLockdownOption;

typedef /* [v1_enum][helpstring][public] */ 
enum tagUpdateServiceOption
    {	usoNonVolatileService	= 0x1
    } 	UpdateServiceOption;

















EXTERN_C const IID LIBID_WUApiLib;

EXTERN_C const CLSID CLSID_StringCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("72C97D74-7C3B-40AE-B77D-ABDB22EBA6FB")
StringCollection;
#endif

EXTERN_C const CLSID CLSID_UpdateSearcher;

#ifdef __cplusplus

class DECLSPEC_UUID("B699E5E8-67FF-4177-88B0-3684A3388BFB")
UpdateSearcher;
#endif

EXTERN_C const CLSID CLSID_WebProxy;

#ifdef __cplusplus

class DECLSPEC_UUID("650503cf-9108-4ddc-a2ce-6c2341e1c582")
WebProxy;
#endif

EXTERN_C const CLSID CLSID_SystemInformation;

#ifdef __cplusplus

class DECLSPEC_UUID("C01B9BA0-BEA7-41BA-B604-D0A36F469133")
SystemInformation;
#endif

EXTERN_C const CLSID CLSID_WindowsUpdateAgentInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("C2E88C2F-6F5B-4AAA-894B-55C847AD3A2D")
WindowsUpdateAgentInfo;
#endif

EXTERN_C const CLSID CLSID_AutomaticUpdates;

#ifdef __cplusplus

class DECLSPEC_UUID("BFE18E9C-6D87-4450-B37C-E02F0B373803")
AutomaticUpdates;
#endif

EXTERN_C const CLSID CLSID_UpdateCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("13639463-00DB-4646-803D-528026140D88")
UpdateCollection;
#endif

EXTERN_C const CLSID CLSID_UpdateDownloader;

#ifdef __cplusplus

class DECLSPEC_UUID("5BAF654A-5A07-4264-A255-9FF54C7151E7")
UpdateDownloader;
#endif

EXTERN_C const CLSID CLSID_UpdateInstaller;

#ifdef __cplusplus

class DECLSPEC_UUID("D2E0FE7F-D23E-48E1-93C0-6FA8CC346474")
UpdateInstaller;
#endif

EXTERN_C const CLSID CLSID_UpdateSession;

#ifdef __cplusplus

class DECLSPEC_UUID("4CB43D7F-7EEE-4906-8698-60DA1C38F2FE")
UpdateSession;
#endif

EXTERN_C const CLSID CLSID_UpdateServiceManager;

#ifdef __cplusplus

class DECLSPEC_UUID("F8D253D9-89A4-4DAA-87B6-1168369F0B21")
UpdateServiceManager;
#endif
#endif /* __WUApiLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



