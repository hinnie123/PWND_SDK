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

// UserDefinedStruct Options_Struct.Options_Struct
// 0x00C0
struct FOptions_Struct
{
	struct FText                                       OptionName_2_28B038C3488005422D76BCB4884F17C3;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                OptionType_5_DFA32A6143B3C096AFFD55A12194F3D6;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       Text1_30_A308BC364165485A261164B8CC3C908B;                // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Text2_31_1B31729D48DE78AB736DA4A816376FF8;                // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Text3_32_82ED7CEE45C3670F149B22B430AAC186;                // 0x0050(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Texture1_33_38AF031F40B028106CDA748BD0CC2512;             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2_34_AA885BD54AE7A79870D56B8774B1D669;             // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DropdownText4_24_63B6D38B420647A3BBCE019F0013329D;        // 0x0078(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DropdownText5_26_200242B0452C98E99E932FA4B7B9CDAA;        // 0x0090(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DropdownText6_28_E8363565492AA37FF9ABF0ABCE1EA828;        // 0x00A8(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
