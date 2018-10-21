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

// Function Phasing_Base_DOT.Phasing_Base_DOT_C.ReceiveEndPlay
struct UPhasing_Base_DOT_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phasing_Base_DOT.Phasing_Base_DOT_C.ReceiveTick
struct UPhasing_Base_DOT_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phasing_Base_DOT.Phasing_Base_DOT_C.ReceiveBeginPlay
struct UPhasing_Base_DOT_C_ReceiveBeginPlay_Params
{
};

// Function Phasing_Base_DOT.Phasing_Base_DOT_C.OnTuneCharacter
struct UPhasing_Base_DOT_C_OnTuneCharacter_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phasing_Base_DOT.Phasing_Base_DOT_C.ExecuteUbergraph_Phasing_Base_DOT
struct UPhasing_Base_DOT_C_ExecuteUbergraph_Phasing_Base_DOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
