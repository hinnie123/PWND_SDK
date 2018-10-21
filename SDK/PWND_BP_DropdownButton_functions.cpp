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

// Function BP_DropdownButton.BP_DropDownButton_C.Assign Values
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_DropDownList_C*      Mom                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownButton_C::Assign_Values(const struct FText& Name, int Index, class UBP_DropDownList_C* Mom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownButton.BP_DropDownButton_C.Assign Values");

	UBP_DropDownButton_C_Assign_Values_Params params;
	params.Name = Name;
	params.Index = Index;
	params.Mom = Mom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownButton.BP_DropDownButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropDownButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownButton.BP_DropDownButton_C.Construct");

	UBP_DropDownButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownButton.BP_DropDownButton_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_DropDownButton_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownButton.BP_DropDownButton_C.OnButtonPressed_Local");

	UBP_DropDownButton_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownButton.BP_DropDownButton_C.ExecuteUbergraph_BP_DropDownButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropDownButton_C::ExecuteUbergraph_BP_DropDownButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownButton.BP_DropDownButton_C.ExecuteUbergraph_BP_DropDownButton");

	UBP_DropDownButton_C_ExecuteUbergraph_BP_DropDownButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
