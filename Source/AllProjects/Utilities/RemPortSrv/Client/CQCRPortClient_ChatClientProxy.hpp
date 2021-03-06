// ----------------------------------------------------------------------------
//  FILE: CQCRPortClient_ChatClientProxy.hpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//    ID: 8DC119F469C5036D-D3DE9312730302EE
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class CQCRPORTCEXPORT TRemChatClientProxy : public TOrbClientBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static constexpr tCIDLib::TCard4 c4PollSeconds = 5;
        static const TString strInstanceId;



        // --------------------------------------------------------------------
        // Public Constructors and Destructor
        // --------------------------------------------------------------------
        TRemChatClientProxy();
        TRemChatClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding);
        TRemChatClientProxy(const TRemChatClientProxy&) = delete;
        TRemChatClientProxy(TRemChatClientProxy&&) = delete;
        ~TRemChatClientProxy();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TRemChatClientProxy& operator=(const TRemChatClientProxy&) = delete;
        TRemChatClientProxy& operator=(TRemChatClientProxy&&) = delete;

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
        tCIDLib::TBoolean bExchange
        (
            const TString& strSendMsg
            , TString& strRecMsg
        );

    protected :
        // --------------------------------------------------------------------
        // Declare our friends
        // --------------------------------------------------------------------
        friend class TFacCIDOrb;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TRemChatClientProxy,TOrbClientBase)
};

#pragma CIDLIB_POPPACK

inline tCIDLib::TVoid
TRemChatClientProxy::SetObjId(const  TOrbObjId& ooidToSet
              , const TString& strNSBinding
              , const tCIDLib::TBoolean bCheck)
{
    TParent::SetObjId(ooidToSet, strNSBinding, bCheck);
}

