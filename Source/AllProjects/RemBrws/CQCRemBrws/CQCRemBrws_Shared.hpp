// ----------------------------------------------------------------------------
//  FILE: CQCRemBrws_Shared.hpp
//  DATE: Mon, Sep 14 19:58:58 2020 -0400
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Constants namespace
// ----------------------------------------------------------------------------
namespace kCQCRemBrws
{
    
    // ------------------------------------------------------------------------
    //  These are flags used by the data server for upload/download ops.
    //  
    //  Done      - For internal use only during the up/download, to indicate
    //              the last block in the sequence.
    //  Encrypted - For reads indicates that the caller can accept encrypted
    //              files or not. If not and it is, an exception is thrown.
    //              Upon return, this is either set or cleared to indicate whether
    //              it actually was encrypted or not.
    //  NoDataCache-Tells the server not to force the file into the data
    //              cache if it is not already.
    //  OverwriteOK-Tells the server it's ok to overwrite an existing file
    //              on upload.
    //  NoExtChunk -On read this can be set to indicate you don't need to get
    //              the extension chunk (assuming one is even defined for the
    //              file being read.) This is just for efficiency. So, if
    //              reading the image, and the thumb is not requierd, then
    //              no need to read the thumb. There is a separate method for
    //              just pulling down the extension chunk.
    //  ReadUpdate -Some things optionally get updated in some cases when they
    //              are read. The server knows what needs to be updated, it just
    //              needs to be told when to do it.
    //  
    //                  
    // ------------------------------------------------------------------------
    constexpr tCIDLib::TCard4 c4Flag_None = 0x00000000;
    constexpr tCIDLib::TCard4 c4Flag_Done = 0x80000000;
    constexpr tCIDLib::TCard4 c4Flag_Encrypted = 0x00000001;
    constexpr tCIDLib::TCard4 c4Flag_NoDataCache = 0x00000002;
    constexpr tCIDLib::TCard4 c4Flag_OverwriteOK = 0x00000004;
    constexpr tCIDLib::TCard4 c4Flag_NoExtChunk = 0x00000008;
    constexpr tCIDLib::TCard4 c4Flag_ReadUpdate = 0x00000010;
    
    // ------------------------------------------------------------------------
    //  Some special paths in the browsing hiearchy.
    //                  
    // ------------------------------------------------------------------------
    CQCREMBRWSEXP const extern TString strPath_Root;
    CQCREMBRWSEXP const extern TString strPath_Accounts;
    CQCREMBRWSEXP const extern TString strPath_Configure;
    CQCREMBRWSEXP const extern TString strPath_Customize;
    CQCREMBRWSEXP const extern TString strPath_Devices;
    CQCREMBRWSEXP const extern TString strPath_ExploreLogs;
    CQCREMBRWSEXP const extern TString strPath_Help;
    CQCREMBRWSEXP const extern TString strPath_Help_About;
    CQCREMBRWSEXP const extern TString strPath_Help_Actions;
    CQCREMBRWSEXP const extern TString strPath_Help_Acts_BigPicture;
    CQCREMBRWSEXP const extern TString strPath_Help_Acts_Reference;
    CQCREMBRWSEXP const extern TString strPath_Help_CML;
    CQCREMBRWSEXP const extern TString strPath_Help_CML_BigPicture;
    CQCREMBRWSEXP const extern TString strPath_Help_CML_Reference;
    CQCREMBRWSEXP const extern TString strPath_Help_Interface;
    CQCREMBRWSEXP const extern TString strPath_Help_Interface_BigPicture;
    CQCREMBRWSEXP const extern TString strPath_Help_Interface_Reference;
    CQCREMBRWSEXP const extern TString strPath_Help_Docs;
    CQCREMBRWSEXP const extern TString strPath_Help_Home;
    CQCREMBRWSEXP const extern TString strPath_Help_Intro;
    CQCREMBRWSEXP const extern TString strPath_Help_Install;
    CQCREMBRWSEXP const extern TString strPath_Help_Drivers;
    CQCREMBRWSEXP const extern TString strPath_Help_Drivers_BigPicture;
    CQCREMBRWSEXP const extern TString strPath_Help_Drivers_Reference;
    CQCREMBRWSEXP const extern TString strPath_Help_Tools;
    CQCREMBRWSEXP const extern TString strPath_Help_Videos;
    CQCREMBRWSEXP const extern TString strPath_Help_V2Classes;
    CQCREMBRWSEXP const extern TString strPath_Help_VoiceControl;
    CQCREMBRWSEXP const extern TString strPath_Help_VoiceControl_BigPicture;
    CQCREMBRWSEXP const extern TString strPath_Help_VoiceControl_Echo;
    CQCREMBRWSEXP const extern TString strPath_Help_VoiceControl_CQCVoice;
    CQCREMBRWSEXP const extern TString strPath_EMailAccts;
    CQCREMBRWSEXP const extern TString strPath_EvMonitors;
    CQCREMBRWSEXP const extern TString strPath_Events;
    CQCREMBRWSEXP const extern TString strPath_Location;
    CQCREMBRWSEXP const extern TString strPath_LogicSrv;
    CQCREMBRWSEXP const extern TString strPath_System_Monitor;
    CQCREMBRWSEXP const extern TString strPath_MonitorEvTriggers;
    CQCREMBRWSEXP const extern TString strPath_Ports;
    CQCREMBRWSEXP const extern TString strPath_GC100Ports;
    CQCREMBRWSEXP const extern TString strPath_JAPwrPorts;
    CQCREMBRWSEXP const extern TString strPath_SchEvents;
    CQCREMBRWSEXP const extern TString strPath_System;
    CQCREMBRWSEXP const extern TString strPath_SystemCfg;
    CQCREMBRWSEXP const extern TString strPath_TrgEvents;
    CQCREMBRWSEXP const extern TString strPath_Users;
    
    // ------------------------------------------------------------------------
    //  Some special paths in the browsing hiearchy.
    //                  
    // ------------------------------------------------------------------------
    CQCREMBRWSEXP const extern TString strItem_Actions;
    CQCREMBRWSEXP const extern TString strItem_CML;
    CQCREMBRWSEXP const extern TString strItem_Configure;
    CQCREMBRWSEXP const extern TString strItem_Customize;
    CQCREMBRWSEXP const extern TString strItem_Devices;
    CQCREMBRWSEXP const extern TString strItem_Docs;
    CQCREMBRWSEXP const extern TString strItem_Drivers;
    CQCREMBRWSEXP const extern TString strItem_Help;
    CQCREMBRWSEXP const extern TString strItem_Interface;
    CQCREMBRWSEXP const extern TString strItem_System;
    CQCREMBRWSEXP const extern TString strItem_VoiceControl;
    
    // ------------------------------------------------------------------------
    //  These are the names of some extra data chunks that are added to
    //  the chunked files used to store customization data on the data
    //  server. The main data chunk is mostly all that is needed but we
    //  need a chunk for thumbnails for images.
    //  
    //  We also have one used when we do a multi-chunk upload. In that case
    //  the chunk ids are in the actual data uploaded.
    //  
    //  Key       - This is key info for encrypted files. The actual key
    //              is purposefully misleading, even though it is s not the
    //              actual key but used to derive it.
    //  Thumbnail - Used for images to hold the thumbmnail of the image.
    //  
    //                  
    // ------------------------------------------------------------------------
    CQCREMBRWSEXP const extern TString strChunkId_Thumbnail;
    CQCREMBRWSEXP const extern TString strChunkId_Key;
    CQCREMBRWSEXP const extern TString strChunkId_PlainLen;
    
    // ------------------------------------------------------------------------
    //  These are the names of some metadata values stored on the data
    //  server's customization info files. This allows us to extract some
    //  info without having to read in the whole file. Some of this is
    //  redundantly stored in the actual files of course, but having to
    //  pull down the whole data chunk and resurrect is a pain, and would
    //  require the calling code to have access to the classes and so forth.
    //  
    //  There are some others but they are standard ones defined by the
    //  chunked file class.
    //  
    //  Data/Encrypted  - The values are True or False.
    //  Data/Paused     - The values are True or False.
    //  Data/MinRole    - The alt value of the user role enumeration
    //  Data/PlainLen   - If encrypted, this is the number of original bytes.
    //                    The cypher bytes are padded to have a full block
    //                    at the end. The key text is purposefully misleading.
    //  Img/Depth       - Formatted bit depth number (1, 2, 4, ..., 32)
    //  Img/Size        - Formatted TSize object
    //  Img/ThumbSize   - Formatted TSize object
    //  Img/Format      - The formatted out value of the EPixFmts enum
    //                  
    // ------------------------------------------------------------------------
    CQCREMBRWSEXP const extern TString strMetaKey_MinRole;
    CQCREMBRWSEXP const extern TString strMetaKey_Encrypted;
    CQCREMBRWSEXP const extern TString strMetaKey_ImgDepth;
    CQCREMBRWSEXP const extern TString strMetaKey_ImgFormat;
    CQCREMBRWSEXP const extern TString strMetaKey_ImgSize;
    CQCREMBRWSEXP const extern TString strMetaKey_Paused;
    CQCREMBRWSEXP const extern TString strMetaKey_Plain;
    CQCREMBRWSEXP const extern TString strMetaKey_ThumbSize;
}

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCQCRemBrws
{
    
    // ------------------------------------------------------------------------
    //  The types of information that our browsing scheme supports. These are handled
    //  by different browsers, most of which are implemented above this level, but we
    //  need to have a coherent list of them all for sanity's sake.
    //  
    //  THERE ARE some things in the facility class indexed by this list, so update those
    //  if you add or remove items here.
    //                  
    // ------------------------------------------------------------------------
    enum class EDTypes
    {
        Driver
        , EMailAccount
        , EvMonitor
        , GlobalAct
        , Help
        , Host
        , Image
        , Location
        , LogicSrv
        , Macro
        , GC100Ports
        , SchEvent
        , SystemCfg
        , System
        , Template
        , TrgEvent
        , User
        , JAPwrPorts
        , Count
        , Min = Driver
        , Max = JAPwrPorts
    };
    CQCREMBRWSEXP EDTypes eXlatEDTypes(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP const TString& strXlatEDTypes(const EDTypes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCREMBRWSEXP const TString& strLoadEDTypes(const EDTypes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP const TString& strAltXlatEDTypes(const EDTypes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCREMBRWSEXP EDTypes eAltXlatEDTypes(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP const TString& strAltXlat2EDTypes(const EDTypes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCREMBRWSEXP EDTypes eAltXlat2EDTypes(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP tCIDLib::TBoolean bIsValidEnum(const EDTypes eVal);

    
    // ------------------------------------------------------------------------
    //  The data server browser item can be marked as allowing certain actions to be
    //  done on it, which lets the client side browser know now what is legal to
    //  let the user try to do (i.e. it won't end up being rejected by the server.)
    //  
    //  In some cases it also indicates some about the item, such as whether it's a
    //  scope or an item, which implicitly indicates certain things can be done.
    //  
    //  CanNew - Only applies to scopes, means new sub-items can be created under it
    //  CanDelete - Obviously means it can be deleted
    //  CanRename - Obviously means it can be renamed
    //  CanEdit   - Means it can be edited (new content written.)
    //  NonTyped - It's one up above the type specific parts of the hierarchy
    //  Root - It's a root path for a type, i.e. the one above the User/System ones
    //  System - It's in the System part of the hierarchy, else user
    //  
    //  If it's an item, not a scope, then that implies (if the client code supports
    //  it) that it can be viewed in a read only fashion.
    //  
    //  For the other browsers, they don't have the level of generic access so they
    //  tend to just know what they can do, given a path.
    //  
    //                  
    // ------------------------------------------------------------------------
    enum class EItemFlags : tCIDLib::TCard4
    {
        IsScope = 0x00001
        , NonTyped = 0x00002
        , Root = 0x00010
        , System = 0x00020
        , CanNew = 0x00100
        , CanDelete = 0x00200
        , CanRename = 0x00400
        , CanEdit = 0x00800
        , SpecialScope = 0x00003
        , TypeRoot = 0x00011
        , SystemRoot = 0x00031
        , UserRoot = 0x00111
        , SystemItem = 0x00020
        , SystemScope = 0x00021
        , UserItem = 0x00E00
        , UserScope = 0x00701
        , Count = 16
        , None = 0
        , AllBits = 0xF33
    };
    CQCREMBRWSEXP EItemFlags eXlatEItemFlags(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP const TString& strXlatEItemFlags(const EItemFlags eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCREMBRWSEXP const TString& strLoadEItemFlags(const EItemFlags eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCREMBRWSEXP tCIDLib::TBoolean bIsValidEnum(const EItemFlags eVal);

    
    // ------------------------------------------------------------------------
    //  The data server access client proxy has a method that allows you to query the
    //  content of a scope. This indicates what the caller whats to get back. The
    //  valeus are set up to make items have a bit mask of 1 and scopes a bit mask of
    //  2 and both a bitmask of 3. We have to add a useless None to make that work.
    //                  
    // ------------------------------------------------------------------------
    enum class EQSFlags
    {
        None
        , Items
        , Scopes
        , Both
        , Count
        , Min = None
        , Max = Both
    };
    CQCREMBRWSEXP tCIDLib::TBoolean bIsValidEnum(const EQSFlags eVal);

}

#pragma CIDLIB_POPPACK

CQCREMBRWSEXP TBinOutStream& operator<<(TBinOutStream& strmTar, const tCQCRemBrws::EDTypes eToStream);
CQCREMBRWSEXP TBinInStream& operator>>(TBinInStream& strmSrc, tCQCRemBrws::EDTypes& eToFill);
CQCREMBRWSEXP tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCQCRemBrws::EDTypes* const aeList, const tCIDLib::TCard4 c4Count);
CQCREMBRWSEXP tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCQCRemBrws::EDTypes* const aeList, const tCIDLib::TCard4 c4Count);
CQCREMBRWSEXP tCQCRemBrws::EDTypes operator++(tCQCRemBrws::EDTypes& eVal, int);

CQCREMBRWSEXP TBinOutStream& operator<<(TBinOutStream& strmTar, const tCQCRemBrws::EItemFlags eToStream);
CQCREMBRWSEXP TBinInStream& operator>>(TBinInStream& strmSrc, tCQCRemBrws::EItemFlags& eToFill);
CQCREMBRWSEXP tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCQCRemBrws::EItemFlags* const aeList, const tCIDLib::TCard4 c4Count);
CQCREMBRWSEXP tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCQCRemBrws::EItemFlags* const aeList, const tCIDLib::TCard4 c4Count);
constexpr tCQCRemBrws::EItemFlags operator|(const tCQCRemBrws::EItemFlags eLHS, const tCQCRemBrws::EItemFlags eRHS)
{    
    return tCQCRemBrws::EItemFlags(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
}
constexpr tCQCRemBrws::EItemFlags& operator|=(tCQCRemBrws::EItemFlags& eLHS, const tCQCRemBrws::EItemFlags eRHS)
{    
    eLHS = tCQCRemBrws::EItemFlags(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}
constexpr tCQCRemBrws::EItemFlags operator&(const tCQCRemBrws::EItemFlags eLHS, const tCQCRemBrws::EItemFlags eRHS)
{    
    return tCQCRemBrws::EItemFlags(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
}
constexpr tCQCRemBrws::EItemFlags& operator&=(tCQCRemBrws::EItemFlags& eLHS, const tCQCRemBrws::EItemFlags eRHS)
{    
    eLHS = tCQCRemBrws::EItemFlags(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}

CQCREMBRWSEXP TBinOutStream& operator<<(TBinOutStream& strmTar, const tCQCRemBrws::EQSFlags eToStream);
CQCREMBRWSEXP TBinInStream& operator>>(TBinInStream& strmSrc, tCQCRemBrws::EQSFlags& eToFill);
CQCREMBRWSEXP tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCQCRemBrws::EQSFlags* const aeList, const tCIDLib::TCard4 c4Count);
CQCREMBRWSEXP tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCQCRemBrws::EQSFlags* const aeList, const tCIDLib::TCard4 c4Count);

