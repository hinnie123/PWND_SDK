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

// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Set Bindings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_OptionsType_Binding_C::Set_Bindings(int Value, const struct FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Set Bindings");

	UBP_OptionsType_Binding_C_Set_Bindings_Params params;
	params.Value = Value;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Assign options
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Display_Name                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_OptionsType_Binding_C::Assign_options(const struct FString& Index, const struct FText& Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Assign options");

	UBP_OptionsType_Binding_C_Assign_options_Params params;
	params.Index = Index;
	params.Display_Name = Display_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.ExecuteUbergraph_BP_OptionsType_Binding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsType_Binding_C::ExecuteUbergraph_BP_OptionsType_Binding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.ExecuteUbergraph_BP_OptionsType_Binding");

	UBP_OptionsType_Binding_C_ExecuteUbergraph_BP_OptionsType_Binding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
