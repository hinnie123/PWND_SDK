#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Construct
struct UBP_CustomizeCharacterSelect_C_Construct_Params
{
};

// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set World Progress
struct UBP_CustomizeCharacterSelect_C_Set_World_Progress_Params
{
	TArray<bool>                                       Levels_Completed;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Level_Coins;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Total_Levels;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total_Levels_Completed;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total_Coins_Found;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set Character
struct UBP_CustomizeCharacterSelect_C_Set_Character_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.ExecuteUbergraph_BP_CustomizeCharacterSelect
struct UBP_CustomizeCharacterSelect_C_ExecuteUbergraph_BP_CustomizeCharacterSelect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
