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

// Function Base_Character.Base_Character_C.RenderTempWorldUI
struct ABase_Character_C_RenderTempWorldUI_Params
{
};

// Function Base_Character.Base_Character_C.TickHealthFX
struct ABase_Character_C_TickHealthFX_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.IsLocalPlayer
struct ABase_Character_C_IsLocalPlayer_Params
{
	bool                                               IsLocalPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.UserConstructionScript
struct ABase_Character_C_UserConstructionScript_Params
{
};

// Function Base_Character.Base_Character_C.OnRocketJumpFailed
struct ABase_Character_C_OnRocketJumpFailed_Params
{
	bool*                                              bCanRocketJump;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRocketJumpFailed;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.OnSpecialMovementFailed
struct ABase_Character_C_OnSpecialMovementFailed_Params
{
	bool*                                              bAllowSpecialMove;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSpecialMoveFailed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.ReceiveBeginPlay
struct ABase_Character_C_ReceiveBeginPlay_Params
{
};

// Function Base_Character.Base_Character_C.ReceiveTick
struct ABase_Character_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.OnUpdateGibbed
struct ABase_Character_C_OnUpdateGibbed_Params
{
	bool*                                              bIsGibbed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.OnRocketJump
struct ABase_Character_C_OnRocketJump_Params
{
	struct FReplicatedRocketJump*                      JumpInfo;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Base_Character.Base_Character_C.OnDamageReceived
struct ABase_Character_C_OnDamageReceived_Params
{
	struct FPwndReplicatedDamageEvent*                 DamageEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Base_Character.Base_Character_C.OnWeaponFire
struct ABase_Character_C_OnWeaponFire_Params
{
	class APwndWeapon**                                FiredWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.OnHeatStatusChanged
struct ABase_Character_C_OnHeatStatusChanged_Params
{
	TEnumAsByte<EeHeatStatus>*                         NewHeatStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeHeatStatus>*                         OldHeatStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.OnCompletedActionStateUpdated
struct ABase_Character_C_OnCompletedActionStateUpdated_Params
{
	TEnumAsByte<EePawnActionState>*                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndCharacterActionCompletion*             ActionCompleted;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Base_Character.Base_Character_C.OnAwardRank
struct ABase_Character_C_OnAwardRank_Params
{
	int*                                               NewRank;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLocal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Character.Base_Character_C.ExecuteUbergraph_Base_Character
struct ABase_Character_C_ExecuteUbergraph_Base_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
