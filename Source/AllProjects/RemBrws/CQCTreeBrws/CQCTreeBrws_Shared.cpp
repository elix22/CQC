// ----------------------------------------------------------------------------
//  FILE: CQCTreeBrws_Shared.cpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "CQCTreeBrws_.hpp"

const TString kCQCTreeBrws::strBrwsAttr_ItemName(L"ItemName");
const TString kCQCTreeBrws::strBrwsAttr_ScopeName(L"ScopeName");


static TEnumMap::TEnumValItem aeitemValues_EItemStates[3] = 
{
    {  tCIDLib::TInt4(tCQCTreeBrws::EItemStates::Normal), 0, 0,  { L"", L"", L"", L"Normal", L"EItemStates::Normal", L"" } }
  , {  tCIDLib::TInt4(tCQCTreeBrws::EItemStates::Bad), 0, 0,  { L"", L"", L"", L"Bad", L"EItemStates::Bad", L"" } }
  , {  tCIDLib::TInt4(tCQCTreeBrws::EItemStates::Paused), 0, 0,  { L"", L"", L"", L"Paused", L"EItemStates::Paused", L"" } }

};

static TEnumMap emapEItemStates
(
     L"EItemStates"
     , 3
     , kCIDLib::False
     , aeitemValues_EItemStates
     , nullptr
     , tCIDLib::TCard4(tCQCTreeBrws::EItemStates::Count)
);

const TString& tCQCTreeBrws::strXlatEItemStates(const tCQCTreeBrws::EItemStates eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEItemStates.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCQCTreeBrws::EItemStates tCQCTreeBrws::eXlatEItemStates(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCQCTreeBrws::EItemStates(emapEItemStates.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCQCTreeBrws::bIsValidEnum(const tCQCTreeBrws::EItemStates eVal)
{
    return emapEItemStates.bIsValidEnum(tCIDLib::TCard4(eVal));

}

