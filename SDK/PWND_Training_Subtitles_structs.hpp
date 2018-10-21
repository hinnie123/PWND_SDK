#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Training_Subtitles.Training_Subtitles
// 0x00E0
struct FTraining_Subtitles
{
	int                                                Training_Type_23_5E4B725D4500CC9D3FFF03A49D338A4D;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Segment_26_A11C3CFF4309A6656898F69AEFB93DA7;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Subtitle_Text_00_14_514CC35646CB328E2ED3A18931A2BD13;     // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_01_18_BE51647649CD879939F44CBA63AE2A0B;     // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_02_19_D61106C0420FB1EFEF7C7D8D53D3E7B3;     // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_03_20_B4D1DCA644C5765FBCACDA9E39708300;     // 0x0050(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_04_37_B1D7A640447DF1776586C4BBF646A52C;     // 0x0068(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_05_40_831376644195CD1C378F259658A831C9;     // 0x0080(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_Text_06_41_836EBBAC44A16B74C87807A8B1B70E05;     // 0x0098(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ActionTipHeader_31_D1B294A1429CFA6028B787BEBA3B3482;      // 0x00B0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ActionTipBody_32_A36402534286AD87A5B4ABB48333F41C;        // 0x00C8(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
