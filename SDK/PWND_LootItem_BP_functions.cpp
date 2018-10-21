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

// Function LootItem_BP.LootItem_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.UserConstructionScript");

	ALootItem_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Update Actor Loot Summary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ALootItem_BP_C::Update_Actor_Loot_Summary(bool Duplicate, int Value, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Update Actor Loot Summary");

	ALootItem_BP_C_Update_Actor_Loot_Summary_Params params;
	params.Duplicate = Duplicate;
	params.Value = Value;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Assign Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootItem_BP_C::Assign_Button(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Assign Button");

	ALootItem_BP_C_Assign_Button_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Clicked
// (BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Clicked");

	ALootItem_BP_C_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.OnUnhovered_Event_1
// (BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::OnUnhovered_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.OnUnhovered_Event_1");

	ALootItem_BP_C_OnUnhovered_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.ResetCam
// (BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::ResetCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.ResetCam");

	ALootItem_BP_C_ResetCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.OnHovered_Event_1
// (BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::OnHovered_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.OnHovered_Event_1");

	ALootItem_BP_C_OnHovered_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Assign GeneralUseCaseButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GeneralUseCaseButton* GeneralUseCaseButton           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootItem_BP_C::Assign_GeneralUseCaseButton(class UUI_GeneralUseCaseButton* GeneralUseCaseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Assign GeneralUseCaseButton");

	ALootItem_BP_C_Assign_GeneralUseCaseButton_Params params;
	params.GeneralUseCaseButton = GeneralUseCaseButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::OnButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.OnButtonPressed");

	ALootItem_BP_C_OnButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.ExecuteUbergraph_LootItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootItem_BP_C::ExecuteUbergraph_LootItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.ExecuteUbergraph_LootItem_BP");

	ALootItem_BP_C_ExecuteUbergraph_LootItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Move__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::Move__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Move__DelegateSignature");

	ALootItem_BP_C_Move__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Selected__DelegateSignature");

	ALootItem_BP_C_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.UnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::UnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.UnHovered__DelegateSignature");

	ALootItem_BP_C_UnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALootItem_BP_C::Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.Hovered__DelegateSignature");

	ALootItem_BP_C_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootItem_BP.LootItem_BP_C.LootSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootItem_BP_C::LootSelected__DelegateSignature(const struct FGuid& Guid, bool Duplicate, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItem_BP.LootItem_BP_C.LootSelected__DelegateSignature");

	ALootItem_BP_C_LootSelected__DelegateSignature_Params params;
	params.Guid = Guid;
	params.Duplicate = Duplicate;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
