// ----------------------------------------------------------------------------
//  FILE: CQCDataSrv_IRServerBase.cpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//    ID: E2ABEBB0AA4D1186-3412D00C17FA509A
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
RTTIDecls(TIRRepoServerBase,TOrbServerBase)


// ----------------------------------------------------------------------------
// Public, static data
// ----------------------------------------------------------------------------
const TString TIRRepoServerBase::strInterfaceId(L"E2ABEBB0AA4D1186-3412D00C17FA509A");
const TString TIRRepoServerBase::strBinding(L"/CQC/CQCDataServer/IRServerObj");


// ----------------------------------------------------------------------------
// TIRRepoServerBase: Destructor
// ----------------------------------------------------------------------------
TIRRepoServerBase::~TIRRepoServerBase()
{
}

// ----------------------------------------------------------------------------
// TIRRepoServerBase: Protected Constructors
// ----------------------------------------------------------------------------
TIRRepoServerBase::TIRRepoServerBase() :
    TOrbServerBase(strInterfaceId, L"TIRRepoClientProxy" )
{
}

TIRRepoServerBase::TIRRepoServerBase(const TOrbObjId& ooidThis) :
    TOrbServerBase(ooidThis)
{
}

// ----------------------------------------------------------------------------
// TIRRepoServerBase: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TIRRepoServerBase::Dispatch(const TString& strMethodName, TOrbCmd& orbcToDispatch)
{
    if (strMethodName == L"bModelExists")
    {
        TString strDevModel;
        orbcToDispatch.strmIn() >> strDevModel;
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        tCIDLib::TBoolean retVal = bModelExists
        (
            strDevModel
          , strBlasterName
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
    }
     else if (strMethodName == L"c4QueryDevCatList")
    {
        tCQCKit::EDevCats eCategory;
        orbcToDispatch.strmIn() >> eCategory;
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        TVector<TIRBlasterDevModelInfo> colToFill;
        tCIDLib::TCard4 retVal = c4QueryDevCatList
        (
            eCategory
          , strBlasterName
          , colToFill
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << colToFill;
    }
     else if (strMethodName == L"c4QueryDevModelList")
    {
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        TVector<TIRBlasterDevModelInfo> colToFill;
        tCIDLib::TCard4 retVal = c4QueryDevModelList
        (
            strBlasterName
          , colToFill
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << colToFill;
    }
     else if (strMethodName == L"DeleteDevModel")
    {
        TString strDevModel;
        orbcToDispatch.strmIn() >> strDevModel;
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        DeleteDevModel
        (
            strDevModel
          , strBlasterName
        );
        orbcToDispatch.strmOut().Reset();
    }
     else if (strMethodName == L"QueryDevModel")
    {
        TString strDevModel;
        orbcToDispatch.strmIn() >> strDevModel;
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        TIRBlasterDevModel irbdmToFill;
        QueryDevModel
        (
            strDevModel
          , strBlasterName
          , irbdmToFill
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << irbdmToFill;
    }
     else if (strMethodName == L"WriteDevModel")
    {
        TString strDevModel;
        orbcToDispatch.strmIn() >> strDevModel;
        TString strBlasterName;
        orbcToDispatch.strmIn() >> strBlasterName;
        TIRBlasterDevModel irbdmToWrite;
        orbcToDispatch.strmIn() >> irbdmToWrite;
        WriteDevModel
        (
            strDevModel
          , strBlasterName
          , irbdmToWrite
        );
        orbcToDispatch.strmOut().Reset();
    }
     else
    {
         TParent::Dispatch(strMethodName, orbcToDispatch);
    }
}
