// ----------------------------------------------------------------------------
//  FILE: CQCDataSrv_FileAccServerBase.cpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//    ID: EE2558A6FCEB5778-42F61F03A90E99D3
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQCDataSrv.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
RTTIDecls(TDataSrvAccServerBase,TOrbServerBase)


// ----------------------------------------------------------------------------
// Public, static data
// ----------------------------------------------------------------------------
const TString TDataSrvAccServerBase::strInterfaceId(L"EE2558A6FCEB5778-42F61F03A90E99D3");
const TString TDataSrvAccServerBase::strBinding(L"/CQC/CQCDataServer/FileAcc");


// ----------------------------------------------------------------------------
// TDataSrvAccServerBase: Destructor
// ----------------------------------------------------------------------------
TDataSrvAccServerBase::~TDataSrvAccServerBase()
{
}

// ----------------------------------------------------------------------------
// TDataSrvAccServerBase: Protected Constructors
// ----------------------------------------------------------------------------
TDataSrvAccServerBase::TDataSrvAccServerBase() :
    TOrbServerBase(strInterfaceId, L"TDataSrvAccClientProxy" )
{
}

TDataSrvAccServerBase::TDataSrvAccServerBase(const TOrbObjId& ooidThis) :
    TOrbServerBase(ooidThis)
{
}

// ----------------------------------------------------------------------------
// TDataSrvAccServerBase: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TDataSrvAccServerBase::Dispatch(const TString& strMethodName, TOrbCmd& orbcToDispatch)
{
    if (strMethodName == L"bFind")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        TFindBuf fndbToFill;
        tCIDLib::TBoolean bIsScope;
        orbcToDispatch.strmIn() >> bIsScope;
        tCIDLib::TBoolean retVal = bFind
        (
            strHPath
          , fndbToFill
          , bIsScope
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << fndbToFill;
    }
     else if (strMethodName == L"bExists")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TBoolean bIsScope;
        orbcToDispatch.strmIn() >> bIsScope;
        tCIDLib::TBoolean retVal = bExists
        (
            strHPath
          , bIsScope
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
    }
     else if (strMethodName == L"bIsScope")
    {
        TString strHToCheck;
        orbcToDispatch.strmIn() >> strHToCheck;
        tCIDLib::TBoolean retVal = bIsScope
        (
            strHToCheck
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
    }
     else if (strMethodName == L"bQueryExtChunk")
    {
        tCIDLib::TCard4 c4SerialNum = {};
        orbcToDispatch.strmIn() >> c4SerialNum;
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        TString strExtChunkId;
        orbcToDispatch.strmIn() >> strExtChunkId;
        tCIDLib::TCard4 c4BufSz_mbufExtChunk = 0;
        THeapBuf mbufExtChunk;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        tCIDLib::TBoolean bNoCache;
        orbcToDispatch.strmIn() >> bNoCache;
        tCIDLib::TBoolean retVal = bQueryExtChunk
        (
            c4SerialNum
          , strHPath
          , strExtChunkId
          , c4BufSz_mbufExtChunk
          , mbufExtChunk
          , sectUser
          , bNoCache
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        if (retVal)
        {
            orbcToDispatch.strmOut() << c4SerialNum;
            orbcToDispatch.strmOut() << c4BufSz_mbufExtChunk;
            orbcToDispatch.strmOut().c4WriteBuffer(mbufExtChunk, c4BufSz_mbufExtChunk);
        }
    }
     else if (strMethodName == L"bQueryFileFirst")
    {
        tCIDLib::TCard4 c4SerialNum = {};
        orbcToDispatch.strmIn() >> c4SerialNum;
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4Cookie = {};
        tCIDLib::TCard4 c4FullDataSz = {};
        TVector<TKeyValFPair> colMeta;
        tCIDLib::TCard4 c4BufSz_mbufFirstBlock = 0;
        THeapBuf mbufFirstBlock;
        TString strExtChunkId;
        tCIDLib::TCard4 c4BufSz_mbufExtChunk = 0;
        THeapBuf mbufExtChunk;
        tCIDLib::TCard4 c4Flags = {};
        orbcToDispatch.strmIn() >> c4Flags;
        tCIDLib::TCard8 lastChange = {};
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        tCIDLib::TBoolean retVal = bQueryFileFirst
        (
            c4SerialNum
          , strHPath
          , c4Cookie
          , c4FullDataSz
          , colMeta
          , c4BufSz_mbufFirstBlock
          , mbufFirstBlock
          , strExtChunkId
          , c4BufSz_mbufExtChunk
          , mbufExtChunk
          , c4Flags
          , lastChange
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        if (retVal)
        {
            orbcToDispatch.strmOut() << c4SerialNum;
            orbcToDispatch.strmOut() << c4Cookie;
            orbcToDispatch.strmOut() << c4FullDataSz;
            orbcToDispatch.strmOut() << colMeta;
            orbcToDispatch.strmOut() << c4BufSz_mbufFirstBlock;
            orbcToDispatch.strmOut().c4WriteBuffer(mbufFirstBlock, c4BufSz_mbufFirstBlock);
            orbcToDispatch.strmOut() << strExtChunkId;
            orbcToDispatch.strmOut() << c4BufSz_mbufExtChunk;
            orbcToDispatch.strmOut().c4WriteBuffer(mbufExtChunk, c4BufSz_mbufExtChunk);
            orbcToDispatch.strmOut() << c4Flags;
            orbcToDispatch.strmOut() << lastChange;
        }
    }
     else if (strMethodName == L"bQueryFileNext")
    {
        tCIDLib::TCard4 c4Cookie;
        orbcToDispatch.strmIn() >> c4Cookie;
        tCIDLib::TCard4 c4BufSz_mbufData = 0;
        THeapBuf mbufData;
        tCIDLib::TBoolean retVal = bQueryFileNext
        (
            c4Cookie
          , c4BufSz_mbufData
          , mbufData
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << c4BufSz_mbufData;
        orbcToDispatch.strmOut().c4WriteBuffer(mbufData, c4BufSz_mbufData);
    }
     else if (strMethodName == L"bQueryItemMeta")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        TVector<TKeyValFPair> colMetaVals;
        TVector<TString> colChunkIds;
        TFundVector<tCIDLib::TCard4> fcolChunkSizes;
        tCIDLib::TCard4 c4SerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        tCIDLib::TBoolean bThrowIfNot;
        orbcToDispatch.strmIn() >> bThrowIfNot;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        tCIDLib::TBoolean retVal = bQueryItemMeta
        (
            strPath
          , colMetaVals
          , colChunkIds
          , fcolChunkSizes
          , c4SerialNum
          , enctLastChange
          , bThrowIfNot
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << colMetaVals;
        orbcToDispatch.strmOut() << colChunkIds;
        orbcToDispatch.strmOut() << fcolChunkSizes;
        orbcToDispatch.strmOut() << c4SerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"bQueryScopeNames")
    {
        tCIDLib::TCard4 c4ScopeId = {};
        orbcToDispatch.strmIn() >> c4ScopeId;
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        TVector<TString> colNames;
        tCQCRemBrws::EQSFlags eQSFlags;
        orbcToDispatch.strmIn() >> eQSFlags;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        tCIDLib::TBoolean retVal = bQueryScopeNames
        (
            c4ScopeId
          , strPath
          , colNames
          , eQSFlags
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        if (retVal)
        {
            orbcToDispatch.strmOut() << c4ScopeId;
            orbcToDispatch.strmOut() << colNames;
        }
    }
     else if (strMethodName == L"DeletePath")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        tCIDLib::TBoolean bIsScope;
        orbcToDispatch.strmIn() >> bIsScope;
        tCIDLib::TBoolean bMustExist;
        orbcToDispatch.strmIn() >> bMustExist;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        DeletePath
        (
            strPath
          , bIsScope
          , bMustExist
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"eRenameItem")
    {
        TString strParPath;
        orbcToDispatch.strmIn() >> strParPath;
        TString strOldName;
        orbcToDispatch.strmIn() >> strOldName;
        TString strNewName;
        orbcToDispatch.strmIn() >> strNewName;
        tCIDLib::TBoolean bIsScope;
        orbcToDispatch.strmIn() >> bIsScope;
        tCIDLib::TCard4 c4ParScopeId = {};
        tCIDLib::TCard4 c4TarItemId = {};
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        tCIDLib::ERenameRes retVal = eRenameItem
        (
            strParPath
          , strOldName
          , strNewName
          , bIsScope
          , c4ParScopeId
          , c4TarItemId
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << c4ParScopeId;
        orbcToDispatch.strmOut() << c4TarItemId;
    }
     else if (strMethodName == L"GenerateReport")
    {
        TString strDescription;
        orbcToDispatch.strmIn() >> strDescription;
        TFundVector<tCQCRemBrws::EDTypes> fcolTypes;
        orbcToDispatch.strmIn() >> fcolTypes;
        tCIDLib::TCard4 c4BufSz_mbufReportData = 0;
        THeapBuf mbufReportData;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        GenerateReport
        (
            strDescription
          , fcolTypes
          , c4BufSz_mbufReportData
          , mbufReportData
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4BufSz_mbufReportData;
        orbcToDispatch.strmOut().c4WriteBuffer(mbufReportData, c4BufSz_mbufReportData);
    }
     else if (strMethodName == L"GenerateTypeReport")
    {
        TString strDescription;
        orbcToDispatch.strmIn() >> strDescription;
        TString strHPathScope;
        orbcToDispatch.strmIn() >> strHPathScope;
        tCIDLib::TBoolean bRecurse;
        orbcToDispatch.strmIn() >> bRecurse;
        tCIDLib::TCard4 c4BufSz_mbufReportData = 0;
        THeapBuf mbufReportData;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        GenerateTypeReport
        (
            strDescription
          , strHPathScope
          , bRecurse
          , c4BufSz_mbufReportData
          , mbufReportData
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4BufSz_mbufReportData;
        orbcToDispatch.strmOut().c4WriteBuffer(mbufReportData, c4BufSz_mbufReportData);
    }
     else if (strMethodName == L"MakeNewScope")
    {
        TString strParScope;
        orbcToDispatch.strmIn() >> strParScope;
        TString strNewSubScope;
        orbcToDispatch.strmIn() >> strNewSubScope;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        MakeNewScope
        (
            strParScope
          , strNewSubScope
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"MakePath")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        MakePath
        (
            strPath
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"PastePath")
    {
        TString strSrcPath;
        orbcToDispatch.strmIn() >> strSrcPath;
        TString strTarScope;
        orbcToDispatch.strmIn() >> strTarScope;
        tCIDLib::TBoolean bSrcIsScope;
        orbcToDispatch.strmIn() >> bSrcIsScope;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        PastePath
        (
            strSrcPath
          , strTarScope
          , bSrcIsScope
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"Ping")
    {
        Ping
        (
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"QueryItemInfo")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        tCIDLib::TBoolean bIsScope = {};
        TFundVector<tCIDLib::TCard4> fcolPathIds;
        TDSBrowseItem dsbiToFill;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryItemInfo
        (
            strPath
          , bIsScope
          , fcolPathIds
          , dsbiToFill
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << bIsScope;
        orbcToDispatch.strmOut() << fcolPathIds;
        orbcToDispatch.strmOut() << dsbiToFill;
    }
     else if (strMethodName == L"QueryItemInfo2")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        tCIDLib::TBoolean bIsScope = {};
        TFundVector<tCIDLib::TCard4> fcolPathIds;
        TDSBrowseItem dsbiTarget;
        TDSBrowseItem dsbiParScope;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryItemInfo2
        (
            strPath
          , bIsScope
          , fcolPathIds
          , dsbiTarget
          , dsbiParScope
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << bIsScope;
        orbcToDispatch.strmOut() << fcolPathIds;
        orbcToDispatch.strmOut() << dsbiTarget;
        orbcToDispatch.strmOut() << dsbiParScope;
    }
     else if (strMethodName == L"QueryPathIds")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        tCIDLib::TBoolean bIsScope = {};
        tCIDLib::TCard4 c4ItemId = {};
        tCIDLib::TCard4 c4ScopeId = {};
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryPathIds
        (
            strPath
          , bIsScope
          , c4ItemId
          , c4ScopeId
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << bIsScope;
        orbcToDispatch.strmOut() << c4ItemId;
        orbcToDispatch.strmOut() << c4ScopeId;
    }
     else if (strMethodName == L"QueryPathIds1")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        tCIDLib::TBoolean bIsScope = {};
        TFundVector<tCIDLib::TCard4> fcolPathIds;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryPathIds
        (
            strPath
          , bIsScope
          , fcolPathIds
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << bIsScope;
        orbcToDispatch.strmOut() << fcolPathIds;
    }
     else if (strMethodName == L"QueryScopeItems")
    {
        TString strPath;
        orbcToDispatch.strmIn() >> strPath;
        TFundVector<tCIDLib::TCard4> fcolPathIds;
        TVector<TDSBrowseItem> colItems;
        tCIDLib::TBoolean bItemsOnly;
        orbcToDispatch.strmIn() >> bItemsOnly;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryScopeItems
        (
            strPath
          , fcolPathIds
          , colItems
          , bItemsOnly
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << fcolPathIds;
        orbcToDispatch.strmOut() << colItems;
    }
     else if (strMethodName == L"QueryTree")
    {
        TString strStartScope;
        orbcToDispatch.strmIn() >> strStartScope;
        TString strXML;
        tCIDLib::TBoolean bSparse;
        orbcToDispatch.strmIn() >> bSparse;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryTree
        (
            strStartScope
          , strXML
          , bSparse
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << strXML;
    }
     else if (strMethodName == L"QueryTree2")
    {
        TString strStartScope;
        orbcToDispatch.strmIn() >> strStartScope;
        TVector<TString> colList;
        tCIDLib::TBoolean bSparse;
        orbcToDispatch.strmIn() >> bSparse;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        QueryTree2
        (
            strStartScope
          , colList
          , bSparse
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << colList;
    }
     else if (strMethodName == L"SetEventPauseState")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4NewSerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        tCIDLib::TBoolean bToSet;
        orbcToDispatch.strmIn() >> bToSet;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        SetEventPauseState
        (
            strHPath
          , c4NewSerialNum
          , enctLastChange
          , bToSet
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4NewSerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"SetPeriodicEvTime")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4NewSerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        tCIDLib::TCard4 c4Period;
        orbcToDispatch.strmIn() >> c4Period;
        tCIDLib::TCard8 enctStartAt;
        orbcToDispatch.strmIn() >> enctStartAt;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        SetPeriodicEvTime
        (
            strHPath
          , c4NewSerialNum
          , enctLastChange
          , c4Period
          , enctStartAt
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4NewSerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"SetScheduledEvTime")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4NewSerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        tCIDLib::TCard4 c4Day;
        orbcToDispatch.strmIn() >> c4Day;
        tCIDLib::TCard4 c4Hour;
        orbcToDispatch.strmIn() >> c4Hour;
        tCIDLib::TCard4 c4Minute;
        orbcToDispatch.strmIn() >> c4Minute;
        tCIDLib::TCard4 c4Mask;
        orbcToDispatch.strmIn() >> c4Mask;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        SetScheduledEvTime
        (
            strHPath
          , c4NewSerialNum
          , enctLastChange
          , c4Day
          , c4Hour
          , c4Minute
          , c4Mask
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4NewSerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"SetSunBasedEvOffset")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4NewSerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        tCIDLib::TInt4 i4Offset;
        orbcToDispatch.strmIn() >> i4Offset;
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        SetSunBasedEvOffset
        (
            strHPath
          , c4NewSerialNum
          , enctLastChange
          , i4Offset
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4NewSerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"UploadFirst")
    {
        TString strHPath;
        orbcToDispatch.strmIn() >> strHPath;
        tCIDLib::TCard4 c4Cookie = {};
        tCIDLib::TCard4 c4SerialNum = {};
        tCIDLib::TCard4 c4DataChunkSz;
        orbcToDispatch.strmIn() >> c4DataChunkSz;
        TVector<TKeyValFPair> colMetaVals;
        orbcToDispatch.strmIn() >> colMetaVals;
        tCIDLib::TCard4 c4BufSz_mbufFirstBlock;
        orbcToDispatch.strmIn() >> c4BufSz_mbufFirstBlock;
        THeapBuf mbufFirstBlock(c4BufSz_mbufFirstBlock + 1);
        orbcToDispatch.strmIn().c4ReadBuffer(mbufFirstBlock, c4BufSz_mbufFirstBlock);
        TString strExtChunkId;
        orbcToDispatch.strmIn() >> strExtChunkId;
        tCIDLib::TCard4 c4BufSz_mbufExtChunk;
        orbcToDispatch.strmIn() >> c4BufSz_mbufExtChunk;
        THeapBuf mbufExtChunk(c4BufSz_mbufExtChunk + 1);
        orbcToDispatch.strmIn().c4ReadBuffer(mbufExtChunk, c4BufSz_mbufExtChunk);
        tCIDLib::TCard4 c4Flags;
        orbcToDispatch.strmIn() >> c4Flags;
        tCIDLib::TCard8 enctLastChange = {};
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        UploadFirst
        (
            strHPath
          , c4Cookie
          , c4SerialNum
          , c4DataChunkSz
          , colMetaVals
          , c4BufSz_mbufFirstBlock
          , tCIDLib::ForceMove(mbufFirstBlock)
          , strExtChunkId
          , c4BufSz_mbufExtChunk
          , tCIDLib::ForceMove(mbufExtChunk)
          , c4Flags
          , enctLastChange
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4Cookie;
        orbcToDispatch.strmOut() << c4SerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else if (strMethodName == L"UploadNext")
    {
        tCIDLib::TCard4 c4BufSz_mbufData;
        orbcToDispatch.strmIn() >> c4BufSz_mbufData;
        THeapBuf mbufData(c4BufSz_mbufData + 1);
        orbcToDispatch.strmIn().c4ReadBuffer(mbufData, c4BufSz_mbufData);
        tCIDLib::TCard4 c4Cookie;
        orbcToDispatch.strmIn() >> c4Cookie;
        tCIDLib::TBoolean bLast;
        orbcToDispatch.strmIn() >> bLast;
        tCIDLib::TCard4 c4SerialNum = {};
        tCIDLib::TCard8 enctLastChange = {};
        UploadNext
        (
            c4BufSz_mbufData
          , mbufData
          , c4Cookie
          , bLast
          , c4SerialNum
          , enctLastChange
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4SerialNum;
        orbcToDispatch.strmOut() << enctLastChange;
    }
     else
    {
         TParent::Dispatch(strMethodName, orbcToDispatch);
    }
}

