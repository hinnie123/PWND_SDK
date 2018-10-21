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

// UserDefinedStruct Challenge_Descriptions.Challenge_Descriptions
// 0x0058
struct FChallenge_Descriptions
{
	int                                                Type_2_5CCE724246EA4347597F7FA3DC2E316F;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MapName_24_4C3017FC4C3586265EE88C89BAFDF190;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ChallengeNum_28_35E5DE974024CA7E5DC828A2186FAB6D;         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       LevelName_33_D4C0130A48C90B018C31F7BCFEBF2DAD;            // 0x0028(0x0018) (Edit, BlueprintVisible)
	float                                              S_RankTime_53_D021B9B3441F813C8A3BBBA4ACA8BA24;           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              A_RankTime_52_C25AF27D4C8393285542C8B7A774CF26;           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              B_RankTime_51_19DFDCF34B55904CBC45E3A326C563DE;           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_RankTime_50_205F47074A06BB80BC67C9A26C568501;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              D_RankTime_49_0FB11FC640D194DDBCF206BDA5F905AB;           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              F_RankTime_48_FEACDD7E4A1A5CE25977D1BAEE61313F;           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
