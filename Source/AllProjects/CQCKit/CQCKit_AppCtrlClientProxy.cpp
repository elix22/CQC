// ----------------------------------------------------------------------------
//  FILE: CQCKit_AppCtrlClientProxy.cpp
//  DATE: Fri, Feb 14 18:49:45 2020 -0500
//    ID: C62872FCFFA4BFF1-D3D869839AA78EEE
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQCKit_.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TAppCtrlClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TAppCtrlClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TAppCtrlClientProxy::strInterfaceId(L"C62872FCFFA4BFF1-D3D869839AA78EEE");
const TString TAppCtrlClientProxy::strImplScope(L"/CQC/CQCTrayMon/AppCtrl/");
const TString TAppCtrlClientProxy::strImplBinding(L"/CQC/CQCTrayMon/AppCtrl/%(b)");



// ----------------------------------------------------------------------------
// TAppCtrlClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TAppCtrlClientProxy::TAppCtrlClientProxy()
{
}

TAppCtrlClientProxy::
TAppCtrlClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
{
    #if CID_DEBUG_ON
    if (!ooidSrc.oidKey().bIsInterfaceId(strInterfaceId))
    {
        facCIDOrb().ThrowErr
        (
            CID_FILE
            , CID_LINE
            , kOrbErrs::errcClient_BadIntfId
            , tCIDLib::ESeverities::Failed
            , tCIDLib::EErrClasses::BadParms
            , ooidSrc.oidKey().mhashInterface()
            , strInterfaceId
        );
    }
    #endif
    SetObjId(ooidSrc, strNSBinding, kCIDLib::False);
}

TAppCtrlClientProxy::~TAppCtrlClientProxy()
{
}

// ----------------------------------------------------------------------------
// TAppCtrlClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TAppCtrlClientProxy::AddRecord
(
    const TString& strMoniker
    , const TString& strAppTitle
    , const TString& strAppName
    , const TString& strParams
    , const TString& strWorkingDir)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"AddRecord");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strAppTitle;
        ocmdToUse.strmOut() << strAppName;
        ocmdToUse.strmOut() << strParams;
        ocmdToUse.strmOut() << strWorkingDir;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TBoolean TAppCtrlClientProxy::bAppRegistered
(
    const TString& strMoniker
    , const TString& strAppTitle)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bAppRegistered");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strAppTitle;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bIsRunning
(
    const TString& strMoniker)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bIsRunning");
        ocmdToUse.strmOut() << strMoniker;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bIsVisible
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bIsVisible");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bInvokeFile
(
    const TString& strPath
    , const TString& strShow)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bInvokeFile");
        ocmdToUse.strmOut() << strPath;
        ocmdToUse.strmOut() << strShow;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bStartApp
(
    const TString& strAppPath
    , const TString& strParams
    , const TString& strInitPath)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStartApp");
        ocmdToUse.strmOut() << strAppPath;
        ocmdToUse.strmOut() << strParams;
        ocmdToUse.strmOut() << strInitPath;
        Dispatch(40000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bStart
(
    const TString& strMoniker)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStart");
        ocmdToUse.strmOut() << strMoniker;
        Dispatch(40000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bStartWithParams
(
    const TString& strMoniker
    , const TString& strParams)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStartWithParams");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strParams;
        Dispatch(40000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bStartAppViaOpen
(
    const TString& strMoniker
    , const TString& strDocPath
    , const TString& strInitPath
    , const TString& strShow)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStartAppViaOpen");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strDocPath;
        ocmdToUse.strmOut() << strInitPath;
        ocmdToUse.strmOut() << strShow;
        Dispatch(40000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TAppCtrlClientProxy::bStop
(
    const TString& strMoniker)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStop");
        ocmdToUse.strmOut() << strMoniker;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TAppCtrlClientProxy::c4AddWindow
(
    const TString& strMoniker
    , const TString& strPath)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4AddWindow");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strPath;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TAppCtrlClientProxy::c4AddWindowByClass
(
    const TString& strMoniker
    , const TString& strClass)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4AddWindowByClass");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << strClass;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TAppCtrlClientProxy::c4QueryListSel
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryListSel");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TAppCtrlClientProxy::c4QueryText
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , TString& strToFill)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryText");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> strToFill;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TInt4 TAppCtrlClientProxy::i4QueryTrackBar
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TInt4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"i4QueryTrackBar");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TAppCtrlClientProxy::c4QueryWndStyles
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryWndStyles");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TInt4 TAppCtrlClientProxy::i4SendMsg
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TCard4 MsgId
    , const tCIDLib::TCard4 c4Param
    , const tCIDLib::TInt4 i4Param
    , const tCIDLib::TBoolean bAsync)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TInt4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"i4SendMsg");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << MsgId;
        ocmdToUse.strmOut() << c4Param;
        ocmdToUse.strmOut() << i4Param;
        ocmdToUse.strmOut() << bAsync;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TVoid TAppCtrlClientProxy::Ping()
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"Ping");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::RemoveRecord
(
    const TString& strMoniker)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"RemoveRecord");
        ocmdToUse.strmOut() << strMoniker;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetListSel
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TCard4 c4Index)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetListSel");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << c4Index;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SendExtKey
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDCtrls::EExtKeys eExtKey
    , const tCIDLib::TBoolean bAltShifted
    , const tCIDLib::TBoolean bCtrlShifted
    , const tCIDLib::TBoolean bShifted)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SendExtKey");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << eExtKey;
        ocmdToUse.strmOut() << bAltShifted;
        ocmdToUse.strmOut() << bCtrlShifted;
        ocmdToUse.strmOut() << bShifted;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SendKey
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TCh chKey
    , const tCIDLib::TBoolean bAltShifted
    , const tCIDLib::TBoolean bCtrlShifted
    , const tCIDLib::TBoolean bShifted)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SendKey");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << chKey;
        ocmdToUse.strmOut() << bAltShifted;
        ocmdToUse.strmOut() << bCtrlShifted;
        ocmdToUse.strmOut() << bShifted;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetFocus
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetFocus");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetTrackBar
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TInt4 i4ToSet)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetTrackBar");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << i4ToSet;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetWindowPos
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TInt4 i4X
    , const tCIDLib::TInt4 i4Y)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetWindowPos");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << i4X;
        ocmdToUse.strmOut() << i4Y;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetWindowSize
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TCard4 c4Width
    , const tCIDLib::TCard4 c4Height)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetWindowSize");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << c4Width;
        ocmdToUse.strmOut() << c4Height;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::SetWindowText
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const TString& strText)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetWindowText");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << strText;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::ShowWindow
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCIDLib::TBoolean bState)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"ShowWindow");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << bState;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TAppCtrlClientProxy::StandardOp
(
    const TString& strMoniker
    , const tCIDLib::TCard4 c4Id
    , const tCIDLib::TCard4 c4ChildId
    , const tCQCKit::EStdACOps eOp)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"StandardOp");
        ocmdToUse.strmOut() << strMoniker;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << c4ChildId;
        ocmdToUse.strmOut() << eOp;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}
