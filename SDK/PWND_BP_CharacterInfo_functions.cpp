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

// Function BP_CharacterInfo.BP_CharacterInfo_C.Update Control Bind Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Action_String                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_CharacterInfo_C::Update_Control_Bind_Icon(class UImage* Image, const struct FString& Action_String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Update Control Bind Icon");

	UBP_CharacterInfo_C_Update_Control_Bind_Icon_Params params;
	params.Image = Image;
	params.Action_String = Action_String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Character Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Role                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Character_Icon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Role_Color                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CharacterInfo_C::Set_Character_Text(const struct FText& Name, const struct FText& Role, const struct FText& Desc, class UTexture2D* Character_Icon, const struct FSlateColor& Role_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Set Character Text");

	UBP_CharacterInfo_C_Set_Character_Text_Params params;
	params.Name = Name;
	params.Role = Role;
	params.Desc = Desc;
	params.Character_Icon = Character_Icon;
	params.Role_Color = Role_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Primary Ability Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Set_Primary_Ability_Text(const struct FText& Name, const struct FText& Desc, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Set Primary Ability Text");

	UBP_CharacterInfo_C_Set_Primary_Ability_Text_Params params;
	params.Name = Name;
	params.Desc = Desc;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Movement Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Set_Movement_Text(const struct FText& Name, const struct FText& Desc, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Set Movement Text");

	UBP_CharacterInfo_C_Set_Movement_Text_Params params;
	params.Name = Name;
	params.Desc = Desc;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Secondary Ability Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Set_Secondary_Ability_Text(const struct FText& Name, const struct FText& Desc, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Set Secondary Ability Text");

	UBP_CharacterInfo_C_Set_Secondary_Ability_Text_Params params;
	params.Name = Name;
	params.Desc = Desc;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Set Weapon Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Set_Weapon_Text(const struct FText& Name, const struct FText& Desc, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Set Weapon Text");

	UBP_CharacterInfo_C_Set_Weapon_Text_Params params;
	params.Name = Name;
	params.Desc = Desc;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Update Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   PAbility                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   SAbility                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_CharacterInfo_C::Update_Info(const struct FGuid& Character, const struct FGuid& Weapon, const struct FGuid& PAbility, const struct FGuid& SAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Update Info");

	UBP_CharacterInfo_C_Update_Info_Params params;
	params.Character = Character;
	params.Weapon = Weapon;
	params.PAbility = PAbility;
	params.SAbility = SAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CharacterInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Construct");

	UBP_CharacterInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Async_Continue_0(const struct FGuid& Guid, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 0");

	UBP_CharacterInfo_C_Async_Continue_0_Params params;
	params.Guid = Guid;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Async_Continue_1(const struct FGuid& Guid, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 1");

	UBP_CharacterInfo_C_Async_Continue_1_Params params;
	params.Guid = Guid;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Async_Continue_2(const struct FGuid& Guid, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 2");

	UBP_CharacterInfo_C_Async_Continue_2_Params params;
	params.Guid = Guid;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::Async_Continue_3(const struct FGuid& Guid, const struct FName& Type, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.Async Continue 3");

	UBP_CharacterInfo_C_Async_Continue_3_Params params;
	params.Guid = Guid;
	params.Type = Type;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterInfo.BP_CharacterInfo_C.ExecuteUbergraph_BP_CharacterInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterInfo_C::ExecuteUbergraph_BP_CharacterInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterInfo.BP_CharacterInfo_C.ExecuteUbergraph_BP_CharacterInfo");

	UBP_CharacterInfo_C_ExecuteUbergraph_BP_CharacterInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
