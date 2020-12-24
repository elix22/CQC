// ----------------------------------------------------------------------------
//  FILE: CQCTrayMon_iTPlayerIntfServerBase.hpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//    ID: 016EC0A20CCA441C-F05CAF46433D51D7
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TiTPlayerIntfServerBase : public TOrbServerBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strImplScope;
        static const TString strImplBinding;


        
        // ------------------------------------------------------------------------
        //  Transport control values used in the player command call.
        //                  
        // ------------------------------------------------------------------------
        enum class EPlCmds
        {
            None
            , FF
            , FullScrOff
            , FullScrOn
            , Next
            , Pause
            , Play
            , Previous
            , Rewind
            , Stop
            , VisualsOff
            , VisualsOn
            , Count
            , Min = None
            , Max = VisualsOn
        };
        static  EPlCmds eXlatEPlCmds(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
        static  const TString& strXlatEPlCmds(const EPlCmds eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
        static  tCIDLib::TBoolean bIsValidEnum(const EPlCmds eVal);

        
        // ------------------------------------------------------------------------
        //  Transport control values used in the player command call.
        //                  
        // ------------------------------------------------------------------------
        enum class EPlStates
        {
            None
            , Playing
            , Stopped
            , Unknown
            , Count
            , Min = None
            , Max = Unknown
        };
        static  EPlStates eXlatEPlStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
        static  const TString& strXlatEPlStates(const EPlStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
        static  tCIDLib::TBoolean bIsValidEnum(const EPlStates eVal);



        // --------------------------------------------------------------------
        // Constructors and destructor
        // --------------------------------------------------------------------
        TiTPlayerIntfServerBase(const TiTPlayerIntfServerBase&) = delete;
        TiTPlayerIntfServerBase(TiTPlayerIntfServerBase&&) = delete;
        ~TiTPlayerIntfServerBase();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TiTPlayerIntfServerBase& operator=(const TiTPlayerIntfServerBase&) = delete;
        TiTPlayerIntfServerBase& operator=(TiTPlayerIntfServerBase&&) = delete;

        // --------------------------------------------------------------------
        // Public, pure virtual methods
        // --------------------------------------------------------------------
        virtual tCIDLib::TBoolean bGetPlayerState
        (
            tCIDLib::TCard4& c4Serial
            , tCIDLib::TBoolean& bConnected
            , tCIDLib::TCard4& c4Volume
            , TiTPlayerIntfServerBase::EPlStates& ePlState
            , tCIDLib::TBoolean& bMute
            , tCIDLib::TCard8& enctTotal
            , tCIDLib::TCard8& enctCur
            , TString& strCurAlbum
            , TString& strCurArtist
            , TString& strCurTrack
        ) = 0;

        virtual tCIDLib::TVoid DoPlayerCmd
        (
            const TiTPlayerIntfServerBase::EPlCmds eCmd
        ) = 0;

        virtual tCIDLib::TVoid SelPLByCookie
        (
            const TString& strTitleCookie
        ) = 0;

        virtual tCIDLib::TVoid SelTrackByCookie
        (
            const TString& strItemCookie
        ) = 0;

        virtual tCIDLib::TVoid SetMute
        (
            const tCIDLib::TBoolean bToSet
        ) = 0;

        virtual tCIDLib::TVoid SetVolume
        (
            const tCIDLib::TCard4 c4ToSet
        ) = 0;

    protected :
        // --------------------------------------------------------------------
        // Hidden constructors
        // --------------------------------------------------------------------
        TiTPlayerIntfServerBase();
        TiTPlayerIntfServerBase(const TOrbObjId& ooidThis);

        // --------------------------------------------------------------------
        // Protected, inherited methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid Dispatch
        (
            const  TString&      strMethodName
            ,      TOrbCmd&      orbcToDispatch
        )   override;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TiTPlayerIntfServerBase,TOrbServerBase)
};

#pragma CIDLIB_POPPACK

 TBinOutStream& operator<<(TBinOutStream& strmTar, const TiTPlayerIntfServerBase::EPlCmds eToStream);
 TBinInStream& operator>>(TBinInStream& strmSrc, TiTPlayerIntfServerBase::EPlCmds& eToFill);
 tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, TiTPlayerIntfServerBase::EPlCmds* const aeList, const tCIDLib::TCard4 c4Count);
 tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const TiTPlayerIntfServerBase::EPlCmds* const aeList, const tCIDLib::TCard4 c4Count);
 TiTPlayerIntfServerBase::EPlCmds operator++(TiTPlayerIntfServerBase::EPlCmds& eVal, int);

 TBinOutStream& operator<<(TBinOutStream& strmTar, const TiTPlayerIntfServerBase::EPlStates eToStream);
 TBinInStream& operator>>(TBinInStream& strmSrc, TiTPlayerIntfServerBase::EPlStates& eToFill);
 tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, TiTPlayerIntfServerBase::EPlStates* const aeList, const tCIDLib::TCard4 c4Count);
 tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const TiTPlayerIntfServerBase::EPlStates* const aeList, const tCIDLib::TCard4 c4Count);
 TiTPlayerIntfServerBase::EPlStates operator++(TiTPlayerIntfServerBase::EPlStates& eVal, int);
