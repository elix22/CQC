//
// FILE NAME: WundergroundS.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 10/23/2011
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2020
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and 
//  the author (Dean Roddey.) It is licensed under the MIT Open Source 
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main implementation file for the Weather Underground data feed
//  driver.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "WundergroundS.hpp"


namespace WundergroundS
{
    // -----------------------------------------------------------------------
    //  Local data
    //
    //  pfacWeatherS
    //      Our facility object pointer, which is lazily faulted in.
    // -----------------------------------------------------------------------
    TFacility* pfacWundergroundS = nullptr;
}


// ---------------------------------------------------------------------------
//  Glocal functions
// ---------------------------------------------------------------------------
TFacility& facWundergroundS()
{
    //
    //  Normally, in a CIDLib facility, this would be a lazy eval method. But,
    //  since this is a driver, we can force it in below when we are loaded.
    //  So we can avoid the overhead of synchronization and checking whether
    //  it exists.
    //
    return *WundergroundS::pfacWundergroundS;
}


// ---------------------------------------------------------------------------
//  Global function that the server framework dynamically finds and uses to
//  get us to create an instance of our driver.
// ---------------------------------------------------------------------------
extern "C" CID_FNEXPORT TCQCServerBase*
psdrvMakeNewSrv(const TCQCDriverObjCfg& cqcdcToLoad)
{
    //
    //  Sanity check that the passed config object matches our known client
    //  side driver name.
    //
    facCQCKit().ValidateDrvCfg
    (
        tCIDLib::ECSSides::Server
        , cqcdcToLoad
        , kWundergroundS::pszServerFacName
    );

    //
    //  Create our facility object now. Since we *should* always be loaded
    //  dynamically and this called before anything else, this insures that
    //  the facilty object is always there and doesn't have to be faulted
    //  in.
    //
    WundergroundS::pfacWundergroundS = new TFacility
    (
        kWundergroundS::pszServerFacName
        , tCIDLib::EModTypes::SharedLib
        , kWundergroundS::c4MajVersion
        , kWundergroundS::c4MinVersion
        , kWundergroundS::c4Revision
        , tCIDLib::EModFlags::HasMsgFile
    );

    // And now gen up an instance of our driver and return it
    return new TWundergroundSDriver(cqcdcToLoad);
}


