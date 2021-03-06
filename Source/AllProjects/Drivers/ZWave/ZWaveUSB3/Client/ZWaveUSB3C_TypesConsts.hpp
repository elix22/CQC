// ----------------------------------------------------------------------------
//  FILE: ZWaveUSB3C_TypesConsts.hpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tZWaveUSB3C
{
    
    // ------------------------------------------------------------------------
    //  The column indices in the multi-column list box. This lets everyone
    //  easily agree on what data is where. Actual editing is done in an
    //  attribute editor for the selected unit. There are too many things
    //  to try to do it all directly in the list box. We need an alt value
    //  which we use as the column titles.
    //                  
    // ------------------------------------------------------------------------
    enum class EListCols
    {
        Menu
        , Id
        , Name
        , State
        , Make
        , Model
        , Listener
        , Count
        , Min = Menu
        , Max = Listener
    };
     const TString& strLoadEListCols(const EListCols eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strAltXlatEListCols(const EListCols eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     EListCols eAltXlatEListCols(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     tCIDLib::TBoolean bIsValidEnum(const EListCols eVal);

}

#pragma CIDLIB_POPPACK

 tZWaveUSB3C::EListCols operator++(tZWaveUSB3C::EListCols& eVal, int);

