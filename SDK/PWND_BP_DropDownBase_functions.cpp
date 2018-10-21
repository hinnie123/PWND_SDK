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

// Function BP_DropDownBase.BP_DropDownBase_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::IsOpen(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.IsOpen");

	UBP_DropDownBase_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_DropDownBase.BP_DropDownBase_C.OnGetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBP_DropDownBase_C::OnGetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.OnGetMenuContent_1");

	UBP_DropDownBase_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DropDownBase.BP_DropDownBase_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DropDownBase_C::BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_DropDownBase_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::Set_Selected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Set Selected");

	UBP_DropDownBase_C_Set_Selected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Assign options
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           New_Options                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_DropDownBase_C::Assign_options(TArray<struct FText> New_Options, const struct FString& Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Assign options");

	UBP_DropDownBase_C_Assign_options_Params params;
	params.New_Options = New_Options;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Option Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::Option_Selected(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Option Selected");

	UBP_DropDownBase_C_Option_Selected_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Assign Parent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::Assign_Parent(class UUserWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Assign Parent");

	UBP_DropDownBase_C_Assign_Parent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.ListUpdated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FText>*          UpdatedList                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                IndexString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_DropDownBase_C::ListUpdated(TArray<struct FText>* UpdatedList, struct FString* IndexString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.ListUpdated");

	UBP_DropDownBase_C_ListUpdated_Params params;
	params.UpdatedList = UpdatedList;
	params.IndexString = IndexString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Close List
// (BlueprintCallable, BlueprintEvent)

void UBP_DropDownBase_C::Close_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Close List");

	UBP_DropDownBase_C_Close_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Hide Base
// (BlueprintCallable, BlueprintEvent)

void UBP_DropDownBase_C::Hide_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Hide Base");

	UBP_DropDownBase_C_Hide_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Drop Down Focus Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::Drop_Down_Focus_Changed(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Drop Down Focus Changed");

	UBP_DropDownBase_C_Drop_Down_Focus_Changed_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropDownBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Construct");

	UBP_DropDownBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.ToggleDropDown
// (Event, Public, BlueprintEvent)

void UBP_DropDownBase_C::ToggleDropDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.ToggleDropDown");

	UBP_DropDownBase_C_ToggleDropDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.Open Drop Down
// (BlueprintCallable, BlueprintEvent)

void UBP_DropDownBase_C::Open_Drop_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.Open Drop Down");

	UBP_DropDownBase_C_Open_Drop_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.PassFrontEndScreenReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEnd_BaseScreen*    OwningScreen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::PassFrontEndScreenReference(class UFrontEnd_BaseScreen* OwningScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.PassFrontEndScreenReference");

	UBP_DropDownBase_C_PassFrontEndScreenReference_Params params;
	params.OwningScreen = OwningScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.GiveAttentionToTopElement
// (BlueprintCallable, BlueprintEvent)

void UBP_DropDownBase_C::GiveAttentionToTopElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.GiveAttentionToTopElement");

	UBP_DropDownBase_C_GiveAttentionToTopElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.PassWidgetToGiveAttentionToAfterClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable*       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::PassWidgetToGiveAttentionToAfterClose(class UUI_MenuNavigable* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.PassWidgetToGiveAttentionToAfterClose");

	UBP_DropDownBase_C_PassWidgetToGiveAttentionToAfterClose_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.ExecuteUbergraph_BP_DropDownBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::ExecuteUbergraph_BP_DropDownBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.ExecuteUbergraph_BP_DropDownBase");

	UBP_DropDownBase_C_ExecuteUbergraph_BP_DropDownBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownBase.BP_DropDownBase_C.SelectionMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownBase_C::SelectionMade__DelegateSignature(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownBase.BP_DropDownBase_C.SelectionMade__DelegateSignature");

	UBP_DropDownBase_C_SelectionMade__DelegateSignature_Params params;
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
