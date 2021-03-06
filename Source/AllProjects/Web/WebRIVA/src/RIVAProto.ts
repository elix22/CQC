// -----------------------------------------
//  Generated by WebRIVACmp (Wed, Mar 06 13:30:57 2019 -0500)
// -----------------------------------------

export const kProtoVer : number = 1;
export const kInterAckMax : number = 200;
export const kInterAckHalf : number = 120;
export const kIntRIVACmdPref : string = "/CQSL/RIVACmd/";
export const kIntRIVACmd_LoadURLTab : string = "/CQSL/RIVACmd/LoadURLTab";
export const kAttr_At : string = "1";
export const kAttr_ClipArea : string = "2";
export const kAttr_ClipMode : string = "3";
export const kAttr_ConstAlpha : string = "4";
export const kAttr_SerialNum : string = "5";
export const kAttr_OpCode : string = "6";
export const kAttr_Id : string = "7";
export const kAttr_SrcArea : string = "8";
export const kAttr_TarArea : string = "9";
export const kAttr_Flags : string = "10";
export const kAttr_Rounding : string = "11";
export const kAttr_BgnColor : string = "12";
export const kAttr_ToDo : string = "13";
export const kAttr_HJustify : string = "14";
export const kAttr_VJustify : string = "15";
export const kAttr_FromPnt : string = "16";
export const kAttr_ToPnt : string = "17";
export const kAttr_ToDraw : string = "18";
export const kAttr_UpdateArea : string = "19";
export const kAttr_Last : string = "20";
export const kAttr_FontH : string = "21";
export const kAttr_FontFace : string = "42";
export const kAttr_CurBytes : string = "43";
export const kAttr_Mode : string = "24";
export const kAttr_BackMixMode : string = "25";
export const kAttr_MixMode : string = "26";
export const kAttr_ErrCode : string = "27";
export const kAttr_KErrCode : string = "28";
export const kAttr_SErrCode : string = "29";
export const kAttr_ErrText : string = "30";
export const kAttr_AuxText : string = "31";
export const kAttr_ProcName : string = "32";
export const kAttr_FacName : string = "33";
export const kAttr_MsgText : string = "34";
export const kAttr_LineNum : string = "35";
export const kAttr_Title : string = "36";
export const kAttr_Flag : string = "37";
export const kAttr_Status : string = "38";
export const kAttr_Extra : string = "39";
export const kAttr_Path : string = "40";
export const kAttr_TotalBytes : string = "41";
export const kAttr_User : string = "42";
export const kAttr_UserRole : string = "43";
export const kAttr_ToSet : string = "44";
export const kAttr_Size : string = "45";
export const kAttr_DataBytes : string = "46";
export const kAttr_UserData : string = "47";
export const kAttr_Width : string = "48";
export const kAttr_Color : string = "49";
export const kAttr_Color2 : string = "50";
export const kAttr_PntOffset : string = "51";
export const kAttr_Effect : string = "52";
export const kAttr_Dir : string = "53";
export const kAttr_Percent : string = "54";
export const kAttr_List : string = "55";
export const kAttr_State : string = "56";
export const kAttr_FileName : string = "57";
export const kAttr_Mask : string = "58";
export const kAttr_ToLoad : string = "59";
export const kAttr_Type : string = "60";
export const kAttr_P1 : string = "61";
export const kAttr_P2 : string = "62";
export const kAttr_P3 : string = "63";
export const kAttr_Params : string = "64";
export const kBltFlag_SrcAlpha : number = 0x01;
export const kFontFlag_Italic : number = 0x01;
export const kFontFlag_Bold : number = 0x02;
export const kJSON_EndMsg : string = "\n}\n";
export const kJSON_StartMsg : string = "{\n";
export const kSrvFlag_None : number = 0x0000;
export const kSrvFlag_LogSrvMsgs : number = 0x0001;
export const kSrvFlag_LogGUIEvents : number = 0x0002;
export const kSrvFlag_NoCache : number = 0x0004;
export const kSrvFlag_InBgnTab : number = 0x0008;
export const kSrvFlags_AllBits : number = 0x000F;
export const kTextFlag_None : number = 0x00;
export const kTextFlag_NoClip : number = 0x01;
export const kTextFlag_Mnemonics : number = 0x02;
export const kTextFlag_Strikeout : number = 0x04;
export const kTextFlag_Disabled : number = 0x08;
export const kMTextFlag_WordBreak : number = 0x01000000;
export const kTextFXFlag_NoWrap : number = 0x01;


export enum BackMixModes
{
    Opaque = 0
    , Transparent = 1
};

export enum BmpModes
{
    None = 0
    , DstInvert = 1
    , PatCopy = 2
    , PatInvert = 3
    , SrcAnd = 4
    , SrcCopy = 5
    , SrcErase = 6
    , SrcPaint = 7
};

export enum ClipModes
{
    And = 0
    , Copy = 1
};

export enum Dirs
{
    Left
    , Right
    , Up
    , Down
};

export enum DrawingColors
{
    Background = 0
    , Text = 1
};

export enum ErrMsgs
{
    None
    , LoginFailed
    , NoDefTemplate
    , NoCredsSent
};

export enum GradDirs
{
    Horizontal
    , Vertical
    , UpDiagonal
    , DownDiagonal
};

export enum HJustifys
{
    Left
    , Right
    , Center
};

export enum MixModes
{
    MixMode_Black = 0
    , MixMode_CopyPen = 1
    , MixMode_MaskNotPen = 2
    , MixMode_MaskPen = 3
    , MixMode_MaskPenNot = 4
    , MixMode_MergeNotPen = 5
    , MixMode_MergePen = 6
    , MixMode_MergePenNot = 7
    , MixMode_NOP = 8
    , MixMode_Not = 9
    , MixMode_NotCopyPen = 10
    , MixMode_NotMaskPen = 11
    , MixMode_NotMergePen = 12
    , MixMode_NotXorPen = 13
    , MixMode_White = 14
    , MixMode_XorPen = 15
};

export enum MsgDirs
{
    StoS
    , StoC
};

export enum OpCodes
{
    OpCode_None = 0
    , AlphaBlit = 1
    , AlphaBlitST = 2
    , DrawBitmap = 3
    , DrawBitmapST = 4
    , DrawLine = 5
    , DrawMultiText = 6
    , DrawPBar = 7
    , DrawText = 8
    , DrawTextFX = 9
    , FillArea = 10
    , FillWithBmp = 11
    , GradientFill = 12
    , MaskedAlphaBlit = 13
    , StrokeArea = 14
    , LastDrawing = 49
    , PopClipArea = 50
    , PopContext = 51
    , PopFont = 52
    , PushClipArea = 53
    , PushContext = 54
    , PushFont = 55
    , SetBackMixMode = 56
    , SetColor = 57
    , SetMixMode = 58
    , LastGraphics = 99
    , NewTemplate = 100
    , EndDraw = 110
    , StartDraw = 111
    , Press = 120
    , Move = 121
    , Release = 122
    , CancelInput = 123
    , ImgDataFirst = 130
    , ImgDataNext = 131
    , LoginRes = 140
    , StatusReturn = 141
    , ShowException = 142
    , Ping = 143
    , ShowErrorMsg = 144
    , LogMsg = 145
    , SessionState = 146
    , SetVisState = 147
    , SpecialAction = 160
    , ShowMsg = 161
    , PlayWAV = 162
    , SayText = 163
    , HotKey = 164
    , SetTmplBorderClr = 165
    , SetServerFlags = 166
    , ExitViewer = 167
    , CreateRemWidget = 168
    , DestroyRemWidget = 169
    , SetRemWidgetURL = 170
    , SetRemWidgetVis = 171
    , RIVACmd = 172
    , FirstPrivate = 250
    , LastPrivate = 255
};

export enum SpecialActs
{
    Blanker = 0
    , Exit = 1
    , ExitFS = 2
    , FSMode = 3
    , DisplayOff = 4
    , BlankAndBlanker = 5
    , ClockBlanker = 6
    , ShowBlanker = 7
};

export enum TextFXs
{
    None = 0
    , Gradient = 1
    , GradientRefl = 2
    , Reflected = 3
    , GaussianBlur = 4
    , DropShadow = 5
};

export enum VJustifys
{
    Bottom
    , Center
    , Top
};

export enum UserRoles
{
    Limited
    , Normal
    , Power
    , Admin
};

export enum WdgTypes
{
    WebBrowser
    , WebCamera
};

