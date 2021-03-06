// ----------------------------------------------------------------------------
//  FILE: CQCDataSrv_SysCfgServerBase.cpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//    ID: 6EBA61ABF3342112-8262C7001241EE53
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
RTTIDecls(TCQCSysCfgServerBase,TOrbServerBase)


// ----------------------------------------------------------------------------
// Public, static data
// ----------------------------------------------------------------------------
const TString TCQCSysCfgServerBase::strInterfaceId(L"6EBA61ABF3342112-8262C7001241EE53");
const TString TCQCSysCfgServerBase::strBinding(L"/CQC/CQCDataServer/SysCfg");


// ----------------------------------------------------------------------------
// TCQCSysCfgServerBase: Destructor
// ----------------------------------------------------------------------------
TCQCSysCfgServerBase::~TCQCSysCfgServerBase()
{
}

// ----------------------------------------------------------------------------
// TCQCSysCfgServerBase: Protected Constructors
// ----------------------------------------------------------------------------
TCQCSysCfgServerBase::TCQCSysCfgServerBase() :
    TOrbServerBase(strInterfaceId, L"TCQCSysCfgClientProxy" )
{
}

TCQCSysCfgServerBase::TCQCSysCfgServerBase(const TOrbObjId& ooidThis) :
    TOrbServerBase(ooidThis)
{
}

// ----------------------------------------------------------------------------
// TCQCSysCfgServerBase: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TCQCSysCfgServerBase::Dispatch(const TString& strMethodName, TOrbCmd& orbcToDispatch)
{
    if (strMethodName == L"bQueryRoomCfg")
    {
        tCIDLib::TCard4 c4SerialNum = {};
        orbcToDispatch.strmIn() >> c4SerialNum;
        TCQCSysCfg scfgToFill;
        tCIDLib::TBoolean retVal = bQueryRoomCfg
        (
            c4SerialNum
          , scfgToFill
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        if (retVal)
        {
            orbcToDispatch.strmOut() << c4SerialNum;
            orbcToDispatch.strmOut() << scfgToFill;
        }
    }
     else if (strMethodName == L"StoreRoomCfg")
    {
        TCQCSysCfg scfgToStore;
        orbcToDispatch.strmIn() >> scfgToStore;
        tCIDLib::TCard4 c4NewSerialNum = {};
        TCQCSecToken sectUser;
        orbcToDispatch.strmIn() >> sectUser;
        StoreRoomCfg
        (
            scfgToStore
          , c4NewSerialNum
          , sectUser
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << c4NewSerialNum;
    }
     else
    {
         TParent::Dispatch(strMethodName, orbcToDispatch);
    }
}

