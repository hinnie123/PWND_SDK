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

// Function Hank_Character.Hank_Character_C.UserConstructionScript
struct AHank_Character_C_UserConstructionScript_Params
{
};

// Function Hank_Character.Hank_Character_C.OnRocketJump
struct AHank_Character_C_OnRocketJump_Params
{
	struct FReplicatedRocketJump*                      JumpInfo;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hank_Character.Hank_Character_C.ExecuteUbergraph_Hank_Character
struct AHank_Character_C_ExecuteUbergraph_Hank_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
