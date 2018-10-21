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

// Function BP_LootSummary.BP_LootSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LootSummary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Construct");

	UBP_LootSummary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Assign Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootSummary_C::Assign_Button(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Assign Button");

	UBP_LootSummary_C_Assign_Button_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Clicked
// (BlueprintCallable, BlueprintEvent)

void UBP_LootSummary_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Clicked");

	UBP_LootSummary_C_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Hovered_event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_LootSummary_C::Hovered_event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Hovered_event_1");

	UBP_LootSummary_C_Hovered_event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Unhovered_event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_LootSummary_C::Unhovered_event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Unhovered_event_1");

	UBP_LootSummary_C_Unhovered_event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Hide Details
// (BlueprintCallable, BlueprintEvent)

void UBP_LootSummary_C::Hide_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Hide Details");

	UBP_LootSummary_C_Hide_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Update Loot Summary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_LootSummary_C::Update_Loot_Summary(bool Duplicate, int Value, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Update Loot Summary");

	UBP_LootSummary_C_Update_Loot_Summary_Params params;
	params.Duplicate = Duplicate;
	params.Value = Value;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.Show Details
// (BlueprintCallable, BlueprintEvent)

void UBP_LootSummary_C::Show_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.Show Details");

	UBP_LootSummary_C_Show_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_LootSummary_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.OnButtonPressed_Local");

	UBP_LootSummary_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootSummary_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.OnReceiveAttention");

	UBP_LootSummary_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootSummary_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.OnRemoveAttention");

	UBP_LootSummary_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.ExecuteUbergraph_BP_LootSummary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootSummary_C::ExecuteUbergraph_BP_LootSummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.ExecuteUbergraph_BP_LootSummary");

	UBP_LootSummary_C_ExecuteUbergraph_BP_LootSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSummary.BP_LootSummary_C.LootSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootSummary_C::LootSelected__DelegateSignature(const struct FGuid& Guid, bool Duplicate, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSummary.BP_LootSummary_C.LootSelected__DelegateSignature");

	UBP_LootSummary_C_LootSelected__DelegateSignature_Params params;
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
