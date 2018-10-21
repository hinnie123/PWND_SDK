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

// UserDefinedStruct InGameTipsStructure.InGameTipsStructure
// 0x0030
struct FInGameTipsStructure
{
	TEnumAsByte<EeInGameTipsTrigger>                   Eligible_2_C56F18F14853B168D6A306A60CCED682;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Eligible_Num_12_2E28B471407A5FF13B4CAE9ECAC25E6F;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeInGameTipsTrigger>                   Activates_4_3639D818405C96B90B48F3A923C84B0E;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Activated_Num_14_D904DAF343877B43E9BCD28996A2AFBB;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeInGameTipsTrigger>                   Shutoff_6_C6F462A548BB71755218FAAD7973DC23;               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Shutoff_Num_16_676F2F6D4F4FD78D14902EA3FC32B4AF;          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text_9_D39C1A48430C9A5E38092EBAB50E1236;                  // 0x0018(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
