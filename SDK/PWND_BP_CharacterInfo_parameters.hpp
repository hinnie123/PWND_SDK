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

// Function BP_CharacterInfo.BP_CharacterInfo_C.Update Control Bind Icon
struct UBP_CharacterInfo_C_Update_Control_Bind_Icon_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Action_String;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Character Text
struct UBP_CharacterInfo_C_Set_Character_Text_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Role;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Character_Icon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Role_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Primary Ability Text
struct UBP_CharacterInfo_C_Set_Primary_Ability_Text_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Movement Text
struct UBP_CharacterInfo_C_Set_Movement_Text_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Secondary Ability Text
struct UBP_CharacterInfo_C_Set_Secondary_Ability_Text_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Weapon Text
struct UBP_CharacterInfo_C_Set_Weapon_Text_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Update Info
struct UBP_CharacterInfo_C_Update_Info_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       PAbility;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       SAbility;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Construct
struct UBP_CharacterInfo_C_Construct_Params
{
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 0
struct UBP_CharacterInfo_C_Async_Continue_0_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 1
struct UBP_CharacterInfo_C_Async_Continue_1_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 2
struct UBP_CharacterInfo_C_Async_Continue_2_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 3
struct UBP_CharacterInfo_C_Async_Continue_3_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterInfo.BP_CharacterInfo_C.ExecuteUbergraph_BP_CharacterInfo
struct UBP_CharacterInfo_C_ExecuteUbergraph_BP_CharacterInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
