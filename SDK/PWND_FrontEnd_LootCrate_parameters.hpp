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

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__FinishedFunc
struct AFrontEnd_LootCrate_C_Timeline_0__FinishedFunc_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__UpdateFunc
struct AFrontEnd_LootCrate_C_Timeline_0__UpdateFunc_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__FinishedFunc
struct AFrontEnd_LootCrate_C_Timeline_1__FinishedFunc_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__UpdateFunc
struct AFrontEnd_LootCrate_C_Timeline_1__UpdateFunc_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ReceiveBeginPlay
struct AFrontEnd_LootCrate_C_ReceiveBeginPlay_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.CamMove
struct AFrontEnd_LootCrate_C_CamMove_Params
{
	struct FTransform                                  Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.NoCrates
struct AFrontEnd_LootCrate_C_NoCrates_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.HasCrate
struct AFrontEnd_LootCrate_C_HasCrate_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Set Crate Rarity
struct AFrontEnd_LootCrate_C_Set_Crate_Rarity_Params
{
	TEnumAsByte<EeItemRarity>                          Highest_Rarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.RE Set Loot Camera
struct AFrontEnd_LootCrate_C_RE_Set_Loot_Camera_Params
{
};

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ExecuteUbergraph_FrontEnd_LootCrate
struct AFrontEnd_LootCrate_C_ExecuteUbergraph_FrontEnd_LootCrate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
