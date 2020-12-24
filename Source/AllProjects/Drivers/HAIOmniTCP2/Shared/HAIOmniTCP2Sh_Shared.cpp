// ----------------------------------------------------------------------------
//  FILE: HAIOmniTCP2Sh_Shared.cpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "HAIOmniTCP2Sh_.hpp"



static TEnumMap::TEnumValItem aeitemValues_EAlarmTypes[9] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Burglary), 0, 0,  { L"", L"", L"", L"Burglary", L"EAlarmTypes::Burglary", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Fire), 0, 0,  { L"", L"", L"", L"Fire", L"EAlarmTypes::Fire", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Gas), 0, 0,  { L"", L"", L"", L"Gas", L"EAlarmTypes::Gas", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Auxillary), 0, 0,  { L"", L"", L"", L"Auxillary", L"EAlarmTypes::Auxillary", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Freeze), 0, 0,  { L"", L"", L"", L"Freeze", L"EAlarmTypes::Freeze", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Water), 0, 0,  { L"", L"", L"", L"Water", L"EAlarmTypes::Water", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Duress), 0, 0,  { L"", L"", L"", L"Duress", L"EAlarmTypes::Duress", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Temperature), 0, 0,  { L"", L"", L"", L"Temperature", L"EAlarmTypes::Temperature", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EAlarmTypes::Unknown), 0, 0,  { L"", L"", L"", L"Unknown", L"EAlarmTypes::Unknown", L"" } }

};

static TEnumMap emapEAlarmTypes
(
     L"EAlarmTypes"
     , 9
     , kCIDLib::False
     , aeitemValues_EAlarmTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EAlarmTypes::Count)
);

const TString& tHAIOmniTCP2Sh::strXlatEAlarmTypes(const tHAIOmniTCP2Sh::EAlarmTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEAlarmTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EAlarmTypes tHAIOmniTCP2Sh::eXlatEAlarmTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EAlarmTypes(emapEAlarmTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tHAIOmniTCP2Sh::EAlarmTypes operator++(tHAIOmniTCP2Sh::EAlarmTypes& eVal, int)
{
    tHAIOmniTCP2Sh::EAlarmTypes eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EAlarmTypes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EAlarmTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EAlarmTypes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EAlarmTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EAlarmTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EAlarmTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EAlarmTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EAlarmTypes eVal)
{
    return emapEAlarmTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EArmModes[7] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::Off), 0, 0,  { L"", L"", L"", L"Off", L"EArmModes::Off", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::Day), 0, 0,  { L"", L"", L"", L"Day", L"EArmModes::Day", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::Night), 0, 0,  { L"", L"", L"", L"Night", L"EArmModes::Night", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::Away), 0, 0,  { L"", L"", L"", L"Away", L"EArmModes::Away", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::Vacation), 0, 0,  { L"", L"", L"", L"Vacation", L"EArmModes::Vacation", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::DayInstant), 0, 0,  { L"", L"", L"", L"DayInstant", L"EArmModes::DayInstant", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EArmModes::NightDelay), 0, 0,  { L"", L"", L"", L"NightDelay", L"EArmModes::NightDelay", L"" } }

};

static TEnumMap emapEArmModes
(
     L"EArmModes"
     , 7
     , kCIDLib::False
     , aeitemValues_EArmModes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EArmModes::Count)
);

tCIDLib::TVoid tHAIOmniTCP2Sh::FormatEArmModes(TString& strToFill, const TString& strPrefix, const tCIDLib::TCh chSepChar, const TEnumMap::ETextVals eVal)
{
    emapEArmModes.FormatValues(strToFill, strPrefix, chSepChar, eVal);
}
const TString& tHAIOmniTCP2Sh::strXlatEArmModes(const tHAIOmniTCP2Sh::EArmModes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEArmModes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EArmModes tHAIOmniTCP2Sh::eXlatEArmModes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EArmModes(emapEArmModes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tHAIOmniTCP2Sh::EArmModes operator++(tHAIOmniTCP2Sh::EArmModes& eVal, int)
{
    tHAIOmniTCP2Sh::EArmModes eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EArmModes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EArmModes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EArmModes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EArmModes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EArmModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EArmModes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EArmModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EArmModes eVal)
{
    return emapEArmModes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EFanModes[3] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EFanModes::Auto), 0, 0,  { L"", L"", L"", L"Auto", L"EFanModes::Auto", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EFanModes::On), 0, 0,  { L"", L"", L"", L"On", L"EFanModes::On", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EFanModes::Cycle), 0, 0,  { L"", L"", L"", L"Cycle", L"EFanModes::Cycle", L"" } }

};

static TEnumMap emapEFanModes
(
     L"EFanModes"
     , 3
     , kCIDLib::False
     , aeitemValues_EFanModes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EFanModes::Count)
);

tCIDLib::TVoid tHAIOmniTCP2Sh::FormatEFanModes(TString& strToFill, const TString& strPrefix, const tCIDLib::TCh chSepChar, const TEnumMap::ETextVals eVal)
{
    emapEFanModes.FormatValues(strToFill, strPrefix, chSepChar, eVal);
}
const TString& tHAIOmniTCP2Sh::strXlatEFanModes(const tHAIOmniTCP2Sh::EFanModes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEFanModes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EFanModes tHAIOmniTCP2Sh::eXlatEFanModes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EFanModes(emapEFanModes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tHAIOmniTCP2Sh::EFanModes operator++(tHAIOmniTCP2Sh::EFanModes& eVal, int)
{
    tHAIOmniTCP2Sh::EFanModes eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EFanModes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EFanModes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EFanModes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EFanModes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EFanModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EFanModes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EFanModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EFanModes eVal)
{
    return emapEFanModes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EItemTypes[8] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Unknown), 0, 0,  { L"", L"", L"", L"Unknown", L"EItemTypes::Unknown", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Area), 0, 0,  { L"", L"", L"", L"Area", L"EItemTypes::Area", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Button), 0, 0,  { L"", L"", L"", L"Button", L"EItemTypes::Button", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Code), 0, 0,  { L"", L"", L"", L"Code", L"EItemTypes::Code", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Msg), 0, 0,  { L"", L"", L"", L"Msg", L"EItemTypes::Msg", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Thermo), 0, 0,  { L"", L"", L"", L"Thermo", L"EItemTypes::Thermo", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Unit), 0, 0,  { L"", L"", L"", L"Unit", L"EItemTypes::Unit", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EItemTypes::Zone), 0, 0,  { L"", L"", L"", L"Zone", L"EItemTypes::Zone", L"" } }

};

static TEnumMap emapEItemTypes
(
     L"EItemTypes"
     , 8
     , kCIDLib::False
     , aeitemValues_EItemTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EItemTypes::Count)
);

const TString& tHAIOmniTCP2Sh::strXlatEItemTypes(const tHAIOmniTCP2Sh::EItemTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEItemTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EItemTypes tHAIOmniTCP2Sh::eXlatEItemTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EItemTypes(emapEItemTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EItemTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EItemTypes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EItemTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EItemTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EItemTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EItemTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EItemTypes eVal)
{
    return emapEItemTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EThermoModes[5] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoModes::Off), 0, 0,  { L"", L"", L"", L"Off", L"EThermoModes::Off", L"Off" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoModes::Heat), 0, 0,  { L"", L"", L"", L"Heat", L"EThermoModes::Heat", L"Heat" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoModes::Cool), 0, 0,  { L"", L"", L"", L"Cool", L"EThermoModes::Cool", L"Cool" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoModes::Auto), 0, 0,  { L"", L"", L"", L"Auto", L"EThermoModes::Auto", L"Auto" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoModes::EmHeat), 0, 0,  { L"", L"", L"", L"EmHeat", L"EThermoModes::EmHeat", L"Em.Heat" } }

};

static TEnumMap emapEThermoModes
(
     L"EThermoModes"
     , 5
     , kCIDLib::False
     , aeitemValues_EThermoModes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EThermoModes::Count)
);

tCIDLib::TVoid tHAIOmniTCP2Sh::FormatEThermoModes(TString& strToFill, const TString& strPrefix, const tCIDLib::TCh chSepChar, const TEnumMap::ETextVals eVal)
{
    emapEThermoModes.FormatValues(strToFill, strPrefix, chSepChar, eVal);
}
const TString& tHAIOmniTCP2Sh::strXlatEThermoModes(const tHAIOmniTCP2Sh::EThermoModes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEThermoModes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tHAIOmniTCP2Sh::EThermoModes tHAIOmniTCP2Sh::eXlatEThermoModes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EThermoModes(emapEThermoModes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tHAIOmniTCP2Sh::EThermoModes operator++(tHAIOmniTCP2Sh::EThermoModes& eVal, int)
{
    tHAIOmniTCP2Sh::EThermoModes eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EThermoModes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EThermoModes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EThermoModes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EThermoModes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EThermoModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EThermoModes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EThermoModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EThermoModes eVal)
{
    return emapEThermoModes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EThermoTypes[6] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::Unused), 0, 0,  { L"", L"", L"", L"Unused", L"EThermoTypes::Unused", L"Unused" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::AutoHC), 0, 0,  { L"", L"", L"", L"AutoHC", L"EThermoTypes::AutoHC", L"AutoHC" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::HeatCool), 0, 0,  { L"", L"", L"", L"HeatCool", L"EThermoTypes::HeatCool", L"HeatCool" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::Heat), 0, 0,  { L"", L"", L"", L"Heat", L"EThermoTypes::Heat", L"Heat" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::Cool), 0, 0,  { L"", L"", L"", L"Cool", L"EThermoTypes::Cool", L"Cool" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EThermoTypes::SP), 0, 0,  { L"", L"", L"", L"SP", L"EThermoTypes::SP", L"SetPoint" } }

};

static TEnumMap emapEThermoTypes
(
     L"EThermoTypes"
     , 6
     , kCIDLib::False
     , aeitemValues_EThermoTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EThermoTypes::Count)
);

const TString& tHAIOmniTCP2Sh::strXlatEThermoTypes(const tHAIOmniTCP2Sh::EThermoTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEThermoTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tHAIOmniTCP2Sh::EThermoTypes tHAIOmniTCP2Sh::eXlatEThermoTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EThermoTypes(emapEThermoTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EThermoTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EThermoTypes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EThermoTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EThermoTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EThermoTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EThermoTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EThermoTypes eVal)
{
    return emapEThermoTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EUnitTypes[4] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EUnitTypes::Unused), 0, 0,  { L"", L"", L"", L"Unused", L"EUnitTypes::Unused", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EUnitTypes::Dimmer), 0, 0,  { L"", L"", L"", L"Dimmer", L"EUnitTypes::Dimmer", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EUnitTypes::Flag), 0, 0,  { L"", L"", L"", L"Flag", L"EUnitTypes::Flag", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EUnitTypes::Switch), 0, 0,  { L"", L"", L"", L"Switch", L"EUnitTypes::Switch", L"" } }

};

static TEnumMap emapEUnitTypes
(
     L"EUnitTypes"
     , 4
     , kCIDLib::False
     , aeitemValues_EUnitTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EUnitTypes::Count)
);

const TString& tHAIOmniTCP2Sh::strXlatEUnitTypes(const tHAIOmniTCP2Sh::EUnitTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEUnitTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EUnitTypes tHAIOmniTCP2Sh::eXlatEUnitTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EUnitTypes(emapEUnitTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EUnitTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EUnitTypes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EUnitTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EUnitTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EUnitTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EUnitTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EUnitTypes eVal)
{
    return emapEUnitTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EZoneArmModes[4] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneArmModes::Disarmed), 0, 0,  { L"", L"", L"", L"Disarmed", L"EZoneArmModes::Disarmed", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneArmModes::Armed), 0, 0,  { L"", L"", L"", L"Armed", L"EZoneArmModes::Armed", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneArmModes::BypassUser), 0, 0,  { L"", L"", L"", L"BypassUser", L"EZoneArmModes::BypassUser", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneArmModes::BypassSystem), 0, 0,  { L"", L"", L"", L"BypassSystem", L"EZoneArmModes::BypassSystem", L"" } }

};

static TEnumMap emapEZoneArmModes
(
     L"EZoneArmModes"
     , 4
     , kCIDLib::False
     , aeitemValues_EZoneArmModes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EZoneArmModes::Count)
);

tCIDLib::TVoid tHAIOmniTCP2Sh::FormatEZoneArmModes(TString& strToFill, const TString& strPrefix, const tCIDLib::TCh chSepChar, const TEnumMap::ETextVals eVal)
{
    emapEZoneArmModes.FormatValues(strToFill, strPrefix, chSepChar, eVal);
}
const TString& tHAIOmniTCP2Sh::strXlatEZoneArmModes(const tHAIOmniTCP2Sh::EZoneArmModes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEZoneArmModes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EZoneArmModes tHAIOmniTCP2Sh::eXlatEZoneArmModes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EZoneArmModes(emapEZoneArmModes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tHAIOmniTCP2Sh::EZoneArmModes operator++(tHAIOmniTCP2Sh::EZoneArmModes& eVal, int)
{
    tHAIOmniTCP2Sh::EZoneArmModes eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EZoneArmModes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneArmModes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneArmModes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EZoneArmModes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneArmModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EZoneArmModes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneArmModes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EZoneArmModes eVal)
{
    return emapEZoneArmModes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EZoneLatch[3] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneLatch::Secure), 0, 0,  { L"", L"", L"", L"Secure", L"EZoneLatch::Secure", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneLatch::Tripped), 0, 0,  { L"", L"", L"", L"Tripped", L"EZoneLatch::Tripped", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneLatch::Reset), 0, 0,  { L"", L"", L"", L"Reset", L"EZoneLatch::Reset", L"" } }

};

static TEnumMap emapEZoneLatch
(
     L"EZoneLatch"
     , 3
     , kCIDLib::False
     , aeitemValues_EZoneLatch
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EZoneLatch::Count)
);

tCIDLib::TVoid tHAIOmniTCP2Sh::FormatEZoneLatch(TString& strToFill, const TString& strPrefix, const tCIDLib::TCh chSepChar, const TEnumMap::ETextVals eVal)
{
    emapEZoneLatch.FormatValues(strToFill, strPrefix, chSepChar, eVal);
}
const TString& tHAIOmniTCP2Sh::strXlatEZoneLatch(const tHAIOmniTCP2Sh::EZoneLatch eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEZoneLatch.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EZoneLatch tHAIOmniTCP2Sh::eXlatEZoneLatch(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EZoneLatch(emapEZoneLatch.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tHAIOmniTCP2Sh::EZoneLatch operator++(tHAIOmniTCP2Sh::EZoneLatch& eVal, int)
{
    tHAIOmniTCP2Sh::EZoneLatch eTmp = eVal;
    eVal = tHAIOmniTCP2Sh::EZoneLatch(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneLatch eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneLatch& eVal)
{
    eVal = tHAIOmniTCP2Sh::EZoneLatch(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneLatch* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EZoneLatch(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneLatch* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EZoneLatch eVal)
{
    return emapEZoneLatch.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EZoneTypes[8] = 
{
    {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Unused), 0, 0,  { L"", L"", L"", L"Unused", L"EZoneTypes::Unused", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Alarm), 0, 0,  { L"", L"", L"", L"Alarm", L"EZoneTypes::Alarm", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Fire), 0, 0,  { L"", L"", L"", L"Fire", L"EZoneTypes::Fire", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Humidity), 0, 0,  { L"", L"", L"", L"Humidity", L"EZoneTypes::Humidity", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Intrusion), 0, 0,  { L"", L"", L"", L"Intrusion", L"EZoneTypes::Intrusion", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Motion), 0, 0,  { L"", L"", L"", L"Motion", L"EZoneTypes::Motion", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Temp), 0, 0,  { L"", L"", L"", L"Temp", L"EZoneTypes::Temp", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniTCP2Sh::EZoneTypes::Water), 0, 0,  { L"", L"", L"", L"Water", L"EZoneTypes::Water", L"" } }

};

static TEnumMap emapEZoneTypes
(
     L"EZoneTypes"
     , 8
     , kCIDLib::False
     , aeitemValues_EZoneTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniTCP2Sh::EZoneTypes::Count)
);

const TString& tHAIOmniTCP2Sh::strXlatEZoneTypes(const tHAIOmniTCP2Sh::EZoneTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEZoneTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniTCP2Sh::EZoneTypes tHAIOmniTCP2Sh::eXlatEZoneTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniTCP2Sh::EZoneTypes(emapEZoneTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneTypes& eVal)
{
    eVal = tHAIOmniTCP2Sh::EZoneTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniTCP2Sh::EZoneTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tHAIOmniTCP2Sh::EZoneTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniTCP2Sh::EZoneTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tHAIOmniTCP2Sh::bIsValidEnum(const tHAIOmniTCP2Sh::EZoneTypes eVal)
{
    return emapEZoneTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}
