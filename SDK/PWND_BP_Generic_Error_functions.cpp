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

// Function BP_Generic_Error.BP_Generic_Error_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Generic_Error_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Error.BP_Generic_Error_C.Construct");

	UBP_Generic_Error_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Error.BP_Generic_Error_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Body_Text                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Generic_Error_C::Set_Text(const struct FText& Header_Text, const struct FText& Body_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Error.BP_Generic_Error_C.Set Text");

	UBP_Generic_Error_C_Set_Text_Params params;
	params.Header_Text = Header_Text;
	params.Body_Text = Body_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Error.BP_Generic_Error_C.OnCloseRequested
// (Event, Public, BlueprintEvent)

void UBP_Generic_Error_C::OnCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Error.BP_Generic_Error_C.OnCloseRequested");

	UBP_Generic_Error_C_OnCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Error.BP_Generic_Error_C.OnOutroAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UBP_Generic_Error_C::OnOutroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Error.BP_Generic_Error_C.OnOutroAnimFinished");

	UBP_Generic_Error_C_OnOutroAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Generic_Error.BP_Generic_Error_C.ExecuteUbergraph_BP_Generic_Error
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Generic_Error_C::ExecuteUbergraph_BP_Generic_Error(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Generic_Error.BP_Generic_Error_C.ExecuteUbergraph_BP_Generic_Error");

	UBP_Generic_Error_C_ExecuteUbergraph_BP_Generic_Error_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
