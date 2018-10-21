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

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.GetBot
struct APwngineer_Primary01_Base_Weapon_C_GetBot_Params
{
	class APwndCharacter*                              Bot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetIcon
struct APwngineer_Primary01_Base_Weapon_C_SetIcon_Params
{
	class UMaterialInterface*                          InIcon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetTextLine
struct APwngineer_Primary01_Base_Weapon_C_SetTextLine_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD_Internal
struct APwngineer_Primary01_Base_Weapon_C_RenderLCD_Internal_Params
{
	class UCanvas*                                     inCanvas;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UpdateLCD
struct APwngineer_Primary01_Base_Weapon_C_UpdateLCD_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD
struct APwngineer_Primary01_Base_Weapon_C_RenderLCD_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UserConstructionScript
struct APwngineer_Primary01_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveBeginPlay
struct APwngineer_Primary01_Base_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveTick
struct APwngineer_Primary01_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponFire
struct APwngineer_Primary01_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponAmmoCountChanged
struct APwngineer_Primary01_Base_Weapon_C_OnWeaponAmmoCountChanged_Params
{
	int*                                               OldAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartReload
struct APwngineer_Primary01_Base_Weapon_C_OnWeaponStartReload_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnUpgraded
struct APwngineer_Primary01_Base_Weapon_C_OnUpgraded_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartCharging
struct APwngineer_Primary01_Base_Weapon_C_OnWeaponStartCharging_Params
{
	bool*                                              bInitialCharge;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStopCharging
struct APwngineer_Primary01_Base_Weapon_C_OnWeaponStopCharging_Params
{
};

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon
struct APwngineer_Primary01_Base_Weapon_C_ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
