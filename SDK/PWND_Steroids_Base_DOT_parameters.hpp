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

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveBeginPlay
struct USteroids_Base_DOT_C_ReceiveBeginPlay_Params
{
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveEndPlay
struct USteroids_Base_DOT_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveTick
struct USteroids_Base_DOT_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneAOE
struct USteroids_Base_DOT_C_OnTuneAOE_Params
{
	class APwndAOE**                                   AOE;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneDOT
struct USteroids_Base_DOT_C_OnTuneDOT_Params
{
	class UPwndDOTComponent**                          DOT;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneProjectile
struct USteroids_Base_DOT_C_OnTuneProjectile_Params
{
	class APwndProjectile**                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneCharacter
struct USteroids_Base_DOT_C_OnTuneCharacter_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneInventory
struct USteroids_Base_DOT_C_OnTuneInventory_Params
{
	class APwndInventory**                             Inv;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ExecuteUbergraph_Steroids_Base_DOT
struct USteroids_Base_DOT_C_ExecuteUbergraph_Steroids_Base_DOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
