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

// Function BP_CustomMatchButton.BP_CustomMatchButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CustomMatchButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.Construct");

	UBP_CustomMatchButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomMatchButton_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomMatchButton_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.Fill Contents
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           New_Content                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_CustomMatchButton_C::Fill_Contents(TArray<struct FText> New_Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.Fill Contents");

	UBP_CustomMatchButton_C_Fill_Contents_Params params;
	params.New_Content = New_Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.Select Content
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomMatchButton_C::Select_Content(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.Select Content");

	UBP_CustomMatchButton_C_Select_Content_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomMatchButton_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");

	UBP_CustomMatchButton_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomMatchButton_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");

	UBP_CustomMatchButton_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomMatchButton.BP_CustomMatchButton_C.ExecuteUbergraph_BP_CustomMatchButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomMatchButton_C::ExecuteUbergraph_BP_CustomMatchButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomMatchButton.BP_CustomMatchButton_C.ExecuteUbergraph_BP_CustomMatchButton");

	UBP_CustomMatchButton_C_ExecuteUbergraph_BP_CustomMatchButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
