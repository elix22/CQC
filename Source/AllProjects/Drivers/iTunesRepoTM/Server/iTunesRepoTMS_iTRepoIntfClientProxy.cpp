// ----------------------------------------------------------------------------
//  FILE: iTunesRepoTMS_iTRepoIntfClientProxy.cpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//    ID: 5A2C99C79FD12115-189DB6E5BAA86FBF
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "iTunesRepoTMS_.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TiTRepoIntfClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TiTRepoIntfClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TiTRepoIntfClientProxy::strInterfaceId(L"5A2C99C79FD12115-189DB6E5BAA86FBF");
const TString TiTRepoIntfClientProxy::strImplScope(L"/CQC/CQCTrayMon/");
const TString TiTRepoIntfClientProxy::strImplBinding(L"/CQC/CQCTrayMon/iTunesRepo/%(b)");



// ----------------------------------------------------------------------------
// TiTRepoIntfClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TiTRepoIntfClientProxy::TiTRepoIntfClientProxy()
{
}

TiTRepoIntfClientProxy::
TiTRepoIntfClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
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

TiTRepoIntfClientProxy::~TiTRepoIntfClientProxy()
{
}

// ----------------------------------------------------------------------------
// TiTRepoIntfClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TBoolean TiTRepoIntfClientProxy::bQueryData
(
    const TString& strQueryType
    , const TString& strDataName
    , tCIDLib::TCard4& c4BufSz_mbufToFill
    , THeapBuf& mbufToFill)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryData");
        ocmdToUse.strmOut() << strQueryType;
        ocmdToUse.strmOut() << strDataName;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4BufSz_mbufToFill;
        ocmdToUse.strmIn().c4ReadBuffer(mbufToFill, c4BufSz_mbufToFill);
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

tCIDLib::TBoolean TiTRepoIntfClientProxy::bQueryData2
(
    const TString& strQueryType
    , tCIDLib::TCard4& c4BufSz_mbufIO
    , THeapBuf& mbufIO)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryData2");
        ocmdToUse.strmOut() << strQueryType;
        ocmdToUse.strmOut() << c4BufSz_mbufIO;
        ocmdToUse.strmOut().c4WriteBuffer(mbufIO, c4BufSz_mbufIO);
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4BufSz_mbufIO;
        ocmdToUse.strmIn().c4ReadBuffer(mbufIO, c4BufSz_mbufIO);
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

tCIDLib::TBoolean TiTRepoIntfClientProxy::bQueryTextVal
(
    const TString& strQueryType
    , const TString& strDataName
    , TString& strToFill)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryTextVal");
        ocmdToUse.strmOut() << strQueryType;
        ocmdToUse.strmOut() << strDataName;
        Dispatch(45000, pcqiToUse);
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

tCIDLib::TBoolean TiTRepoIntfClientProxy::bSendData
(
    const TString& strSendType
    , TString& strDataName
    , tCIDLib::TCard4& c4BufSz_mbufToSend
    , THeapBuf& mbufToSend)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bSendData");
        ocmdToUse.strmOut() << strSendType;
        ocmdToUse.strmOut() << strDataName;
        ocmdToUse.strmOut() << c4BufSz_mbufToSend;
        ocmdToUse.strmOut().c4WriteBuffer(mbufToSend, c4BufSz_mbufToSend);
        Dispatch(60000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> strDataName;
        ocmdToUse.strmIn() >> c4BufSz_mbufToSend;
        ocmdToUse.strmIn().c4ReadBuffer(mbufToSend, c4BufSz_mbufToSend);
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

tCIDLib::TCard4 TiTRepoIntfClientProxy::c4QueryVal
(
    const TString& strValId)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryVal");
        ocmdToUse.strmOut() << strValId;
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

tCIDLib::TCard4 TiTRepoIntfClientProxy::c4SendCmd
(
    const TString& strCmdId
    , const TString& strParms)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4SendCmd");
        ocmdToUse.strmOut() << strCmdId;
        ocmdToUse.strmOut() << strParms;
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

tCIDLib::TVoid TiTRepoIntfClientProxy::QueryStatus
(
    tCQCMedia::ELoadStatus& eCurStatus
    , tCQCMedia::ELoadStatus& eLoadStatus
    , TString& strDBSerialNum
    , tCIDLib::TCard4& c4TitleCnt)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"QueryStatus");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> eCurStatus;
        ocmdToUse.strmIn() >> eLoadStatus;
        ocmdToUse.strmIn() >> strDBSerialNum;
        ocmdToUse.strmIn() >> c4TitleCnt;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TBoolean TiTRepoIntfClientProxy::bReloadDB()
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bReloadDB");
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
