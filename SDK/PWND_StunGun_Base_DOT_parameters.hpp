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

// Function StunGun_Base_DOT.StunGun_Base_DOT_C.OnTuneCharacter
struct UStunGun_Base_DOT_C_OnTuneCharacter_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveBeginPlay
struct UStunGun_Base_DOT_C_ReceiveBeginPlay_Params
{
};

// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveEndPlay
struct UStunGun_Base_DOT_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ExecuteUbergraph_StunGun_Base_DOT
struct UStunGun_Base_DOT_C_ExecuteUbergraph_StunGun_Base_DOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
