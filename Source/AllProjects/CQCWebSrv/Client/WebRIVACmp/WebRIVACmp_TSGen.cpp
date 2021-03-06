//
// FILE NAME: WebRIVACmp_TSGen.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 06/04/2017
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
//  This class takes the root element of the XML tree and does the generation for
//  the Typescript side.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $Log$
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include "WebRIVACmp.hpp"



// ---------------------------------------------------------------------------
//   CLASS: TTSGenerator
//  PREFIX: gen
// ---------------------------------------------------------------------------

// --------------------------------------------------------------------
//  TTSGenerator: Constructors and Destructor
// --------------------------------------------------------------------
TTSGenerator::TTSGenerator()
{
}


TTSGenerator::~TTSGenerator()
{
}


// --------------------------------------------------------------------
//  TTSGenerator: Public, non-virtual methods
// --------------------------------------------------------------------
tCIDLib::TVoid TTSGenerator::GenerateOutput(const TXMLTreeElement& xtnodeRoot)
{

    TPathStr pathSrc = TProcEnvironment::strFind(L"CQC_SRCTREE");
    pathSrc.AddLevel(L"Source");
    pathSrc.AddLevel(L"AllProjects");

    TPathStr pathTS(pathSrc);
    pathTS.AddLevels(L"Web", L"WebRIVA", L"Src");
    pathTS.AddLevel(L"RIVAProto.ts");

    // And let's create output streams for those
    m_strmTS.Open
    (
        pathTS
        , tCIDLib::ECreateActs::CreateAlways
        , tCIDLib::EFilePerms::Default
        , tCIDLib::EFileFlags::SequentialScan
        , tCIDLib::EAccessModes::Excl_Write
    );

    //
    //  Output the opening stuff
    //
    TTime tmNow(tCIDLib::ESpecialTimes::CurrentTime);
    tmNow.strDefaultFormat(TTime::strCTime());
    m_strmTS    << L"// -----------------------------------------\n"
                   L"//  Generated by WebRIVACmp (" << tmNow << L")\n"
                << L"// -----------------------------------------\n\n";


    // Generate the constants
    {
        const TXMLTreeElement& xtnodeConstants = xtnodeRoot.xtnodeChildAtAsElement(0);
        const tCIDLib::TCard4 c4Count = xtnodeConstants.c4ChildCount();
        for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        {
            const TXMLTreeElement& xtnodeCur = xtnodeConstants.xtnodeChildAtAsElement(c4Index);
            const TString& strName = xtnodeCur.xtattrNamed(kWebRIVACmp::strAttrName).strValue();

            m_strmTS << L"export const k" << strName << L" : ";
            const tWebRIVACmp::EConstTypes eType = eFormatConst(m_strmTS, xtnodeCur);
        }
        m_strmTS << L"\n\n";
    }

    // Generate the enums. Remember the index of the opcodes one
    tCIDLib::TCard4 c4OpCodeEnumInd = kCIDLib::c4MaxCard;
    {
        TString strVal;



        const TXMLTreeElement& xtnodeEnums = xtnodeRoot.xtnodeChildAtAsElement(1);
        const tCIDLib::TCard4 c4Count = xtnodeEnums.c4ChildCount();
        for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        {
            const TXMLTreeElement& xtnodeCur = xtnodeEnums.xtnodeChildAtAsElement(c4Index);
            const TString& strEName = xtnodeCur.xtattrNamed(kWebRIVACmp::strAttrName).strValue();
            if (strEName == L"OpCode")
                c4OpCodeEnumInd = c4Index;

            m_strmTS    << L"export enum " << strEName << L"s\n{\n";

            // Iterate the the values for this enumeration
            const tCIDLib::TCard4 c4ValCnt = xtnodeCur.c4ChildCount();
            for (tCIDLib::TCard4 c4Index = 0; c4Index < c4ValCnt; c4Index++)
            {
                const TXMLTreeElement& xtnodeVal = xtnodeCur.xtnodeChildAtAsElement(c4Index);
                m_strmTS << L"    ";
                if (c4Index)
                    m_strmTS << L", ";

                m_strmTS << xtnodeVal.xtattrNamed(kWebRIVACmp::strAttrName).strValue();

                // If it has an explicit value, set that
                if (xtnodeVal.bAttrExists(kWebRIVACmp::strAttrVal, strVal))
                    m_strmTS << L" = " << strVal;

                m_strmTS << kCIDLib::NewLn;
            }

            m_strmTS    << L"};\n\n";
        }
    }
}


// --------------------------------------------------------------------
//  TTSGenerator: Public, non-virtual methods
// --------------------------------------------------------------------

tWebRIVACmp::EConstTypes
TTSGenerator::eFormatConst(TTextOutStream& strmTar, const TXMLTreeElement& xtnodeSrc)
{
    const TString& strType = xtnodeSrc.xtattrNamed(kWebRIVACmp::strAttrType).strValue();
    const TString& strVal = xtnodeSrc.xtattrNamed(kWebRIVACmp::strAttrVal).strValue();

    const tWebRIVACmp::EConstTypes eType = tWebRIVACmp::eXlatEConstTypes(strType);
    switch(eType)
    {
        case tWebRIVACmp::EConstTypes::Boolean :
        {
            m_strmTS << L"boolean = ";
            if (strVal.bCompareI(kCQCKit::pszFld_False))
                m_strmTS << L"false";
            else if (strVal.bCompareI(kCQCKit::pszFld_True))
                m_strmTS << L"true";
            else
            {
                CIDAssert2(L"Constant value is not a boolean value");
            }
            break;
        }

        case tWebRIVACmp::EConstTypes::Card1 :
        case tWebRIVACmp::EConstTypes::Card2 :
        case tWebRIVACmp::EConstTypes::Card4 :
        case tWebRIVACmp::EConstTypes::Card8 :
        case tWebRIVACmp::EConstTypes::Float8 :
        case tWebRIVACmp::EConstTypes::Int1 :
        case tWebRIVACmp::EConstTypes::Int2 :
        case tWebRIVACmp::EConstTypes::Int4 :
        case tWebRIVACmp::EConstTypes::Int8 :
        {
            // These all have to just map to number
            m_strmTS << L"number = " << strVal;
            break;
        }

        case tWebRIVACmp::EConstTypes::String :
        {
            m_strmTS << L"string = \"" << strVal << L"\"";
            break;
        }

        default :
            CIDAssert2(TString(L"Unknown constant type in TS file generation:") + strType);
            break;
    };

    m_strmTS << L";\n";

    return eType;
}


tWebRIVACmp::EMemTypes
TTSGenerator::eFormatStructMemType(TTextOutStream& strmTar, const TXMLTreeElement& xtnodeSrc)
{
    // Translate the type name to our mapping enum
    const TString& strType = xtnodeSrc.xtattrNamed(kWebRIVACmp::strAttrType).strValue();
    const tWebRIVACmp::EMemTypes eType = tWebRIVACmp::eXlatEMemTypes(strType);

    switch(eType)
    {
        case tWebRIVACmp::EMemTypes::Boolean :
            strmTar << L"boolean";
            break;

        case tWebRIVACmp::EMemTypes::Card1 :
        case tWebRIVACmp::EMemTypes::Card2 :
        case tWebRIVACmp::EMemTypes::Card4 :
        case tWebRIVACmp::EMemTypes::Card8 :
        case tWebRIVACmp::EMemTypes::Float8 :
        case tWebRIVACmp::EMemTypes::Int1 :
        case tWebRIVACmp::EMemTypes::Int2 :
        case tWebRIVACmp::EMemTypes::Int4 :
        case tWebRIVACmp::EMemTypes::Int8 :
            strmTar << L"number";
            break;

        case tWebRIVACmp::EMemTypes::Area :
        case tWebRIVACmp::EMemTypes::AlphaColor :
        case tWebRIVACmp::EMemTypes::Color :
        case tWebRIVACmp::EMemTypes::Point :
        case tWebRIVACmp::EMemTypes::String :
            strmTar << L"string";
            break;

        default :
            CIDAssert2(TString(L"Unknown member type in TS file generation:") + strType);
            break;
    };

    return eType;
}

