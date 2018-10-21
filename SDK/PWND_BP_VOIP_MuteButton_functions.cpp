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

// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.SetIsMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VOIP_MuteButton_C::SetIsMuted(bool isMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.SetIsMuted");

	UBP_VOIP_MuteButton_C_SetIsMuted_Params params;
	params.isMuted = isMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.ShowIsMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VOIP_MuteButton_C::ShowIsMuted(bool isMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.ShowIsMuted");

	UBP_VOIP_MuteButton_C_ShowIsMuted_Params params;
	params.isMuted = isMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_VOIP_MuteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBP_VOIP_MuteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_158_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_VOIP_MuteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_158_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_158_OnButtonHoverEvent__DelegateSignature");

	UBP_VOIP_MuteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_158_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_183_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_VOIP_MuteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_183_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_183_OnButtonHoverEvent__DelegateSignature");

	UBP_VOIP_MuteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_183_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.ExecuteUbergraph_BP_VOIP_MuteButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VOIP_MuteButton_C::ExecuteUbergraph_BP_VOIP_MuteButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.ExecuteUbergraph_BP_VOIP_MuteButton");

	UBP_VOIP_MuteButton_C_ExecuteUbergraph_BP_VOIP_MuteButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_VOIP_MuteButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_MuteButton.BP_VOIP_MuteButton_C.OnClicked__DelegateSignature");

	UBP_VOIP_MuteButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
