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

// Function Pwngineer_Character.Pwngineer_Character_C.UserConstructionScript
struct APwngineer_Character_C_UserConstructionScript_Params
{
};

// Function Pwngineer_Character.Pwngineer_Character_C.ReceiveTick
struct APwngineer_Character_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Character.Pwngineer_Character_C.ExecuteUbergraph_Pwngineer_Character
struct APwngineer_Character_C_ExecuteUbergraph_Pwngineer_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
