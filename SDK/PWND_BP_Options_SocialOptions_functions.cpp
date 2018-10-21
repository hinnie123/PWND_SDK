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

// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_OptionsScreen_C*     Options_Screen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_SocialOptions_C::Populate(class UBP_OptionsScreen_C* Options_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Populate");

	UBP_Options_SocialOptions_C_Populate_Params params;
	params.Options_Screen = Options_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Change Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_SocialOptions_C::Change_Value(int Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Change Value");

	UBP_Options_SocialOptions_C_Change_Value_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.ExecuteUbergraph_BP_Options_SocialOptions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_SocialOptions_C::ExecuteUbergraph_BP_Options_SocialOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.ExecuteUbergraph_BP_Options_SocialOptions");

	UBP_Options_SocialOptions_C_ExecuteUbergraph_BP_Options_SocialOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
