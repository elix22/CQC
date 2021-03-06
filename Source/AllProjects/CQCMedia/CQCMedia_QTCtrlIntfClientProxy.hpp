// ----------------------------------------------------------------------------
//  FILE: CQCMedia_QTCtrlIntfClientProxy.hpp
//  DATE: Fri, Feb 14 18:49:45 2020 -0500
//    ID: 0EA9CE401A3331B3-87EE914CFED50C18
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class CQCMEDIAEXPORT TQTIntfClientProxy : public TOrbClientBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strEvResName;
        static const TString strReadyEvResName;
        static const TString strMtxResName;
        static const TString strMBufResName;



        // --------------------------------------------------------------------
        // Public Constructors and Destructor
        // --------------------------------------------------------------------
        TQTIntfClientProxy();
        TQTIntfClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding);
        TQTIntfClientProxy(const TQTIntfClientProxy&) = delete;
        TQTIntfClientProxy(TQTIntfClientProxy&&) = delete;
        ~TQTIntfClientProxy();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TQTIntfClientProxy& operator=(const TQTIntfClientProxy&) = delete;
        TQTIntfClientProxy& operator=(TQTIntfClientProxy&&) = delete;

        // --------------------------------------------------------------------
        // Public, inherited methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid SetObjId
        (
            const   TOrbObjId& ooidToSet
            , const TString& strNSBinding
            , const tCIDLib::TBoolean bCheck = kCIDLib::True
        )   override;

        // --------------------------------------------------------------------
        // Public, non-virtual methods
        // --------------------------------------------------------------------
        tCIDLib::TBoolean bMute
        (
            const tCIDLib::TBoolean bToSet
        );

        tCIDLib::TCard4 c4Volume
        (
            const tCIDLib::TCard4 c4ToSet
        );

        tCIDLib::TVoid LoadFile
        (
            const TString& strPath
            , const TString& strAudioDevice
        );

        tCIDLib::TVoid Pause();

        tCIDLib::TVoid Play();

        tCIDLib::TVoid Reset();

        tCIDLib::TVoid Stop();

    protected :
        // --------------------------------------------------------------------
        // Declare our friends
        // --------------------------------------------------------------------
        friend class TFacCIDOrb;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TQTIntfClientProxy,TOrbClientBase)
};

#pragma CIDLIB_POPPACK

inline tCIDLib::TVoid
TQTIntfClientProxy::SetObjId(const  TOrbObjId& ooidToSet
              , const TString& strNSBinding
              , const tCIDLib::TBoolean bCheck)
{
    TParent::SetObjId(ooidToSet, strNSBinding, bCheck);
}

