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

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.IsSelfDestructing
struct APwnBot_Base_AIController_C_IsSelfDestructing_Params
{
	bool                                               IsSelfDestruct;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.SetSelfDestruct
struct APwnBot_Base_AIController_C_SetSelfDestruct_Params
{
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.UserConstructionScript
struct APwnBot_Base_AIController_C_UserConstructionScript_Params
{
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ReceiveTick
struct APwnBot_Base_AIController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPawnActionStateUpdated
struct APwnBot_Base_AIController_C_OnPawnActionStateUpdated_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>*                    NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>*                    OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPwnageScored
struct APwnBot_Base_AIController_C_OnPwnageScored_Params
{
	class APwndCharacter**                             Pwner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter**                             PwndPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ExecuteUbergraph_PwnBot_Base_AIController
struct APwnBot_Base_AIController_C_ExecuteUbergraph_PwnBot_Base_AIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
