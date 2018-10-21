// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainHUD.MainHUD_C.UpdateAbilityBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Action_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainHUD_C::UpdateAbilityBindings(class UImage* Image, const struct FString& Action_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.UpdateAbilityBindings");

	UMainHUD_C_UpdateAbilityBindings_Params params;
	params.Image = Image;
	params.Action_Name = Action_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.AbilityAmmoCountHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  LeftDotFilled                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UImage*                  LeftDotOutline                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UImage*                  MiddleDotFilled                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UImage*                  MiddleDotOutline               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UImage*                  RightDotFilled                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UImage*                  RightDotOutline                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMainHUD_C::AbilityAmmoCountHelper(int MaxAmmoCount, int CurrentAmmoCount, class UImage** LeftDotFilled, class UImage** LeftDotOutline, class UImage** MiddleDotFilled, class UImage** MiddleDotOutline, class UImage** RightDotFilled, class UImage** RightDotOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.AbilityAmmoCountHelper");

	UMainHUD_C_AbilityAmmoCountHelper_Params params;
	params.MaxAmmoCount = MaxAmmoCount;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftDotFilled != nullptr)
		*LeftDotFilled = params.LeftDotFilled;
	if (LeftDotOutline != nullptr)
		*LeftDotOutline = params.LeftDotOutline;
	if (MiddleDotFilled != nullptr)
		*MiddleDotFilled = params.MiddleDotFilled;
	if (MiddleDotOutline != nullptr)
		*MiddleDotOutline = params.MiddleDotOutline;
	if (RightDotFilled != nullptr)
		*RightDotFilled = params.RightDotFilled;
	if (RightDotOutline != nullptr)
		*RightDotOutline = params.RightDotOutline;
}


// Function MainHUD.MainHUD_C.Get_MovementAbilityAmmoCount_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_MovementAbilityAmmoCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_MovementAbilityAmmoCount_Text_1");

	UMainHUD_C_Get_MovementAbilityAmmoCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.SetMovementAbilityBarRecharging
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRecharging                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayRechargedAnim             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::SetMovementAbilityBarRecharging(bool bRecharging, bool bPlayRechargedAnim, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.SetMovementAbilityBarRecharging");

	UMainHUD_C_SetMovementAbilityBarRecharging_Params params;
	params.bRecharging = bRecharging;
	params.bPlayRechargedAnim = bPlayRechargedAnim;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Get_PrimaryAbility_AmmoCount_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_PrimaryAbility_AmmoCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_PrimaryAbility_AmmoCount_Text_1");

	UMainHUD_C_Get_PrimaryAbility_AmmoCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_SecondaryAbility_AmmoCount_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_SecondaryAbility_AmmoCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_SecondaryAbility_AmmoCount_Text_1");

	UMainHUD_C_Get_SecondaryAbility_AmmoCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_MovementAbility_Bar_Percent_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_MovementAbility_Bar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_MovementAbility_Bar_Percent_1");

	UMainHUD_C_Get_MovementAbility_Bar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.UpdateRocketJumpable
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::UpdateRocketJumpable()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.UpdateRocketJumpable");

	UMainHUD_C_UpdateRocketJumpable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.InitRocketJumpableIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::InitRocketJumpableIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.InitRocketJumpableIndicator");

	UMainHUD_C_InitRocketJumpableIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Update_Teammates_Icon
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::Update_Teammates_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Update_Teammates_Icon");

	UMainHUD_C_Update_Teammates_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.UpdateHeatMeterValue
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::UpdateHeatMeterValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.UpdateHeatMeterValue");

	UMainHUD_C_UpdateHeatMeterValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Get_SecondaryAbilityReloadTimer_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_SecondaryAbilityReloadTimer_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_SecondaryAbilityReloadTimer_Text_1");

	UMainHUD_C_Get_SecondaryAbilityReloadTimer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_PrimaryAbilityReloadTimer_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_PrimaryAbilityReloadTimer_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_PrimaryAbilityReloadTimer_Text_1");

	UMainHUD_C_Get_PrimaryAbilityReloadTimer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_ActionText_General
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WantsActionText                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WantsAllyName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Output_Text                    (Parm, OutParm)

void UMainHUD_C::Get_ActionText_General(bool WantsActionText, bool WantsAllyName, struct FText* Output_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_ActionText_General");

	UMainHUD_C_Get_ActionText_General_Params params;
	params.WantsActionText = WantsActionText;
	params.WantsAllyName = WantsAllyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Text != nullptr)
		*Output_Text = params.Output_Text;
}


// Function MainHUD.MainHUD_C.Get_Action_Enemy_text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Action_Enemy_text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Action_Enemy_text_Text_1");

	UMainHUD_C_Get_Action_Enemy_text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Action_Ally_text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Action_Ally_text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Action_Ally_text_Text_1");

	UMainHUD_C_Get_Action_Ally_text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Action_Text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Action_Text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Action_Text_Text_1");

	UMainHUD_C_Get_Action_Text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Bar_Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalPercentage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPercentage                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::Bar_Animation(float CurrentPercentage, float GoalPercentage, float Speed, float* NewPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Bar_Animation");

	UMainHUD_C_Bar_Animation_Params params;
	params.CurrentPercentage = CurrentPercentage;
	params.GoalPercentage = GoalPercentage;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPercentage != nullptr)
		*NewPercentage = params.NewPercentage;
}


// Function MainHUD.MainHUD_C.Get_Bounty_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Bounty_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Bounty_Text_1");

	UMainHUD_C_Get_Bounty_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Level_Number_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Level_Number_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Level_Number_Text_1");

	UMainHUD_C_Get_Level_Number_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_LevelProgressionBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_LevelProgressionBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_LevelProgressionBar_Percent_1");

	UMainHUD_C_Get_LevelProgressionBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Low_Health_FX
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::Low_Health_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Low_Health_FX");

	UMainHUD_C_Low_Health_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Update_Pwn_Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::Update_Pwn_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Update_Pwn_Icon");

	UMainHUD_C_Update_Pwn_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Update_Player_Damaged_FX
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::Update_Player_Damaged_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Update_Player_Damaged_FX");

	UMainHUD_C_Update_Player_Damaged_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Get_Respawn_Text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Respawn_Text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Respawn_Text_Text_1");

	UMainHUD_C_Get_Respawn_Text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Enemy_Score_Bar_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_Enemy_Score_Bar_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Enemy_Score_Bar_Percent");

	UMainHUD_C_Get_Enemy_Score_Bar_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Enemy_Team_Score
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Enemy_Team_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Enemy_Team_Score");

	UMainHUD_C_Get_Enemy_Team_Score_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_PwndCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndCharacter*          PwndCharacter                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::Get_PwndCharacter(class APwndCharacter** PwndCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_PwndCharacter");

	UMainHUD_C_Get_PwndCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PwndCharacter != nullptr)
		*PwndCharacter = params.PwndCharacter;
}


// Function MainHUD.MainHUD_C.Get_PrimaryAbilityImage_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UMainHUD_C::Get_PrimaryAbilityImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_PrimaryAbilityImage_Brush_1");

	UMainHUD_C_Get_PrimaryAbilityImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_HealthBar_Healing_Percentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_HealthBar_Healing_Percentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_HealthBar_Healing_Percentage");

	UMainHUD_C_Get_HealthBar_Healing_Percentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_HealthBar_Damaged_Percentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_HealthBar_Damaged_Percentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_HealthBar_Damaged_Percentage");

	UMainHUD_C_Get_HealthBar_Damaged_Percentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Show_Me
// (Public, BlueprintCallable, BlueprintEvent)

void UMainHUD_C::Show_Me()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Show_Me");

	UMainHUD_C_Show_Me_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Hide_Me
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowHealthBar                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::Hide_Me(bool ShowHealthBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Hide_Me");

	UMainHUD_C_Hide_Me_Params params;
	params.ShowHealthBar = ShowHealthBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Get_Health_Left
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Health_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Health_Left");

	UMainHUD_C_Get_Health_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Notification_TextBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainHUD_C::Get_Notification_TextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Notification_TextBar");

	UMainHUD_C_Get_Notification_TextBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_SecondaryAbilityBar_Percent_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_SecondaryAbilityBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_SecondaryAbilityBar_Percent_1");

	UMainHUD_C_Get_SecondaryAbilityBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_PrimaryAbilityBar_Percent_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_PrimaryAbilityBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_PrimaryAbilityBar_Percent_1");

	UMainHUD_C_Get_PrimaryAbilityBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_Heat_Brush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UMainHUD_C::Get_Heat_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_Heat_Brush");

	UMainHUD_C_Get_Heat_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.Get_HealthBar_Percentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainHUD_C::Get_HealthBar_Percentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_HealthBar_Percentage");

	UMainHUD_C_Get_HealthBar_Percentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainHUD.MainHUD_C.OnUpdateUI_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Changed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::OnUpdateUI_Event_1(class APwndPlayerController* Controller, class UObject* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.OnUpdateUI_Event_1");

	UMainHUD_C_OnUpdateUI_Event_1_Params params;
	params.Controller = Controller;
	params.Changed = Changed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.OnAwardRank_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewRank                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewRating                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewNextRankRating              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::OnAwardRank_Event_1(class APwndPlayerController* Controller, int NewRank, float NewRating, float NewNextRankRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.OnAwardRank_Event_1");

	UMainHUD_C_OnAwardRank_Event_1_Params params;
	params.Controller = Controller;
	params.NewRank = NewRank;
	params.NewRating = NewRating;
	params.NewNextRankRating = NewNextRankRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Construct");

	UMainHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Tick");

	UMainHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainHUD_C::ExecuteUbergraph_MainHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD");

	UMainHUD_C_ExecuteUbergraph_MainHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
