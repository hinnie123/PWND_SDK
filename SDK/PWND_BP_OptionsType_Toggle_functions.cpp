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

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option1
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsType_Toggle_C::Set_Option1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option1");

	UBP_OptionsType_Toggle_C_Set_Option1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option2
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsType_Toggle_C::Set_Option2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option2");

	UBP_OptionsType_Toggle_C_Set_Option2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsType_Toggle_C::BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsType_Toggle_C_BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsType_Toggle_C::BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsType_Toggle_C_BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   _0                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   _1                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_OptionsScreen_C*     OptionsScreen                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_OptionsType_Toggle_C::SetText(const struct FText& _0, const struct FText& _1, class UBP_OptionsScreen_C* OptionsScreen, const struct FString& Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SetText");

	UBP_OptionsType_Toggle_C_SetText_Params params;
	params._0 = _0;
	params._1 = _1;
	params.OptionsScreen = OptionsScreen;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Toggle
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsType_Toggle_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Toggle");

	UBP_OptionsType_Toggle_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ActivateToggle
// (Event, Public, BlueprintEvent)

void UBP_OptionsType_Toggle_C::ActivateToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ActivateToggle");

	UBP_OptionsType_Toggle_C_ActivateToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ExecuteUbergraph_BP_OptionsType_Toggle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsType_Toggle_C::ExecuteUbergraph_BP_OptionsType_Toggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ExecuteUbergraph_BP_OptionsType_Toggle");

	UBP_OptionsType_Toggle_C_ExecuteUbergraph_BP_OptionsType_Toggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SelectionMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsType_Toggle_C::SelectionMade__DelegateSignature(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SelectionMade__DelegateSignature");

	UBP_OptionsType_Toggle_C_SelectionMade__DelegateSignature_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
