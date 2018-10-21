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

// Function BP_InputBinding.BP_InputBinding_C.WidgetUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                NewKeyBind                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsCutomValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InputBinding_C::WidgetUpdated(struct FString* Action, struct FString* NewKeyBind, bool* bIsCutomValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.WidgetUpdated");

	UBP_InputBinding_C_WidgetUpdated_Params params;
	params.Action = Action;
	params.NewKeyBind = NewKeyBind;
	params.bIsCutomValue = bIsCutomValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.InputBindingConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                NewKeyBind                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_InputBinding_C::InputBindingConfirmed(struct FString* Action, struct FString* NewKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.InputBindingConfirmed");

	UBP_InputBinding_C_InputBindingConfirmed_Params params;
	params.Action = Action;
	params.NewKeyBind = NewKeyBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.InputBindingNeedsConfirmation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_InputBinding_C::InputBindingNeedsConfirmation(struct FString* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.InputBindingNeedsConfirmation");

	UBP_InputBinding_C_InputBindingNeedsConfirmation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.Assign Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Slot_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Slot_Num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Name                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InputBinding_C::Assign_Widget(const struct FString& Slot_Name, int Slot_Num, const struct FText& Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.Assign Widget");

	UBP_InputBinding_C_Assign_Widget_Params params;
	params.Slot_Name = Slot_Name;
	params.Slot_Num = Slot_Num;
	params.Display_Name = Display_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_InputBinding_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_InputBinding_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");

	UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_InputBinding_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature");

	UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InputBinding.BP_InputBinding_C.ExecuteUbergraph_BP_InputBinding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InputBinding_C::ExecuteUbergraph_BP_InputBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputBinding.BP_InputBinding_C.ExecuteUbergraph_BP_InputBinding");

	UBP_InputBinding_C_ExecuteUbergraph_BP_InputBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
