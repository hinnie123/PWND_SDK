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

// Function BP_LoadOutStats.BP_LoadOutStats_C.Update Loadout
struct UBP_LoadOutStats_C_Update_Loadout_Params
{
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LoadOutStats.BP_LoadOutStats_C.Update Character
struct UBP_LoadOutStats_C_Update_Character_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LoadOutStats.BP_LoadOutStats_C.HideInfoGuide
struct UBP_LoadOutStats_C_HideInfoGuide_Params
{
};

// Function BP_LoadOutStats.BP_LoadOutStats_C.ExecuteUbergraph_BP_LoadOutStats
struct UBP_LoadOutStats_C_ExecuteUbergraph_BP_LoadOutStats_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
