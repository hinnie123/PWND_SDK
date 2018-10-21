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

// Function BP_DropDownList.BP_DropDownList_C.DoesListElementHaveAttention
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownList_C::DoesListElementHaveAttention(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.DoesListElementHaveAttention");

	UBP_DropDownList_C_DoesListElementHaveAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_DropDownList.BP_DropDownList_C.Create List
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Contents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_DropDownList_C::Create_List(TArray<struct FText> Contents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.Create List");

	UBP_DropDownList_C_Create_List_Params params;
	params.Contents = Contents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownList.BP_DropDownList_C.Option Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownList_C::Option_Selected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.Option Selected");

	UBP_DropDownList_C_Option_Selected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownList.BP_DropDownList_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DropDownList_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.OnFocusLost");

	UBP_DropDownList_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownList.BP_DropDownList_C.Pass Front End Screen Reference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEnd_BaseScreen*    OwningScreen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownList_C::Pass_Front_End_Screen_Reference(class UFrontEnd_BaseScreen* OwningScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.Pass Front End Screen Reference");

	UBP_DropDownList_C_Pass_Front_End_Screen_Reference_Params params;
	params.OwningScreen = OwningScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownList.BP_DropDownList_C.ProvideAttentionToTopElement
// (BlueprintCallable, BlueprintEvent)

void UBP_DropDownList_C::ProvideAttentionToTopElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.ProvideAttentionToTopElement");

	UBP_DropDownList_C_ProvideAttentionToTopElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropDownList.BP_DropDownList_C.ExecuteUbergraph_BP_DropDownList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownList_C::ExecuteUbergraph_BP_DropDownList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropDownList.BP_DropDownList_C.ExecuteUbergraph_BP_DropDownList");

	UBP_DropDownList_C_ExecuteUbergraph_BP_DropDownList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
