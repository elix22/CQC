//
// FILE NAME: GC-IRLS.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 07/29/2008
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
//  This is the main implementation file for the GC-IRE server side driver.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "GC-IRLS.hpp"


namespace GCIRLS
{
    // -----------------------------------------------------------------------
    //  Local data
    //
    //  pfacGCIRLS
    //      Our facility object pointer, which is allocated during the driver
    //      init call below. Normally, these are lazily faulted in, but in
    //      the case of a driver, initialization is formal so we can just gen
    //      it up at that time.
    // -----------------------------------------------------------------------
    TFacility* pfacGCIRLS = nullptr;
}


// ---------------------------------------------------------------------------
//  Glocal functions
// ---------------------------------------------------------------------------
TFacility& facGCIRLS()
{
    //
    //  Normally, in a CIDLib facility, this would be a lazy eval method. But,
    //  since this is a driver, we can force it in below when we are loaded.
    //  So we can avoid the overhead of synchronization and checking whether
    //  it exists.
    //
    return *GCIRLS::pfacGCIRLS;
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
        , kGCIRLS::pszServerFacName
    );

    //
    //  Create our facility object now. Since we *should* always be loaded
    //  dynamically and this called before anything else, this insures that
    //  the facility object is always there and doesn't have to be faulted
    //  in.
    //
    //  The facility object represents an instance of a DLL/SharedObj at
    //  runtime. Through this object we can get to our attached resources such
    //  as loadable text, and we also use it to throw or log errors because it
    //  provides extra info for us, and so on.
    //
    GCIRLS::pfacGCIRLS = new TFacility
    (
        kGCIRLS::pszServerFacName
        , tCIDLib::EModTypes::SharedLib
        , kGCIRLS::c4MajVersion
        , kGCIRLS::c4MinVersion
        , kGCIRLS::c4Revision
        , tCIDLib::EModFlags::HasMsgFile
    );

    //
    //  And now gen up an instance of our driver and return it. We pass it the
    //  driver configuration info and moniker that we were provided by the
    //  server framework. This object gets returned to the framework who will
    //  register it with the CIDLib ORB, because server drivers are basically
    //  just remote objects. The ORB will then own this object and clean it up
    //  at the appropriate time.
    //
    return new TGCIRLSDriver(cqcdcToLoad);
}


