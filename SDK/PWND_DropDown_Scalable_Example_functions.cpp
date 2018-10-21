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

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDropDown_Scalable_Example_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Construct");

	UDropDown_Scalable_Example_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDropDown_Scalable_Example_C::BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UDropDown_Scalable_Example_C_BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.OnListElementSelected
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDropDownElement*       SelectedListItem               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDropDown_Scalable_Example_C::OnListElementSelected(struct FDropDownElement* SelectedListItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.OnListElementSelected");

	UDropDown_Scalable_Example_C_OnListElementSelected_Params params;
	params.SelectedListItem = SelectedListItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Texts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Contents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDropDown_Scalable_Example_C::Set_Texts(TArray<struct FText> Contents, const struct FString& Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Texts");

	UDropDown_Scalable_Example_C_Set_Texts_Params params;
	params.Contents = Contents;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Toggle
// (BlueprintCallable, BlueprintEvent)

void UDropDown_Scalable_Example_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Toggle");

	UDropDown_Scalable_Example_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Selected Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropDown_Scalable_Example_C::Set_Selected_Text(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Selected Text");

	UDropDown_Scalable_Example_C_Set_Selected_Text_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.ExecuteUbergraph_DropDown_Scalable_Example
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropDown_Scalable_Example_C::ExecuteUbergraph_DropDown_Scalable_Example(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.ExecuteUbergraph_DropDown_Scalable_Example");

	UDropDown_Scalable_Example_C_ExecuteUbergraph_DropDown_Scalable_Example_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.SelectionMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropDown_Scalable_Example_C::SelectionMade__DelegateSignature(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.SelectionMade__DelegateSignature");

	UDropDown_Scalable_Example_C_SelectionMade__DelegateSignature_Params params;
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
