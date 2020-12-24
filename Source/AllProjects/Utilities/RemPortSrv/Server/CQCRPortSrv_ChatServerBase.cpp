// ----------------------------------------------------------------------------
//  FILE: CQCRPortSrv_ChatServerBase.cpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//    ID: 8DC119F469C5036D-D3DE9312730302EE
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQCRPortSrv.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
RTTIDecls(TRemChatServerBase,TOrbServerBase)


// ----------------------------------------------------------------------------
// Public, static data
// ----------------------------------------------------------------------------
const TString TRemChatServerBase::strInterfaceId(L"8DC119F469C5036D-D3DE9312730302EE");
const TString TRemChatServerBase::strInstanceId(L"C4C9F2448D394831-EFDE3C4B6C36A40F");


// ----------------------------------------------------------------------------
// TRemChatServerBase: Destructor
// ----------------------------------------------------------------------------
TRemChatServerBase::~TRemChatServerBase()
{
}

// ----------------------------------------------------------------------------
// TRemChatServerBase: Protected Constructors
// ----------------------------------------------------------------------------
TRemChatServerBase::TRemChatServerBase() :
    TOrbServerBase(strInterfaceId, L"TRemChatClientProxy" )
{
}

TRemChatServerBase::TRemChatServerBase(const TOrbObjId& ooidThis) :
    TOrbServerBase(ooidThis)
{
}

// ----------------------------------------------------------------------------
// TRemChatServerBase: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TRemChatServerBase::Dispatch(const TString& strMethodName, TOrbCmd& orbcToDispatch)
{
    if (strMethodName == L"bExchange")
    {
        TString strSendMsg;
        orbcToDispatch.strmIn() >> strSendMsg;
        TString strRecMsg;
        tCIDLib::TBoolean retVal = bExchange
        (
            strSendMsg
          , strRecMsg
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << strRecMsg;
    }
     else
    {
         TParent::Dispatch(strMethodName, orbcToDispatch);
    }
}
