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

// Function BP_Generic_Confirm.BP_Generic_Confirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Generic_Confirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.Construct");

	UBP_Generic_Confirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Generic_Confirm_C::BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_Generic_Confirm_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Body_Text                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Generic_Confirm_C::Set_Text(const struct FText& Header_Text, const struct FText& Body_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.Set Text");

	UBP_Generic_Confirm_C_Set_Text_Params params;
	params.Header_Text = Header_Text;
	params.Body_Text = Body_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.BndEvt__Button_Cindy_Outline_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Generic_Confirm_C::BndEvt__Button_Cindy_Outline_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.BndEvt__Button_Cindy_Outline_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UBP_Generic_Confirm_C_BndEvt__Button_Cindy_Outline_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.OnCloseRequested
// (Event, Public, BlueprintEvent)

void UBP_Generic_Confirm_C::OnCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.OnCloseRequested");

	UBP_Generic_Confirm_C_OnCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.OnOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UBP_Generic_Confirm_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.OnOutroFinished");

	UBP_Generic_Confirm_C_OnOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.ExecuteUbergraph_BP_Generic_Confirm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Generic_Confirm_C::ExecuteUbergraph_BP_Generic_Confirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.ExecuteUbergraph_BP_Generic_Confirm");

	UBP_Generic_Confirm_C_ExecuteUbergraph_BP_Generic_Confirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.CancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Generic_Confirm_C::CancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.CancelClicked__DelegateSignature");

	UBP_Generic_Confirm_C_CancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Confirm.BP_Generic_Confirm_C.AcceptClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Generic_Confirm_C::AcceptClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Confirm.BP_Generic_Confirm_C.AcceptClicked__DelegateSignature");

	UBP_Generic_Confirm_C_AcceptClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
