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

// Function BP_MOTD.BP_MOTD_C.SetMOTDTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MOTD_C::SetMOTDTexture(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.SetMOTDTexture");

	UBP_MOTD_C_SetMOTDTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MOTD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Construct");

	UBP_MOTD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.OnCloseRequested
// (Event, Public, BlueprintEvent)

void UBP_MOTD_C::OnCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnCloseRequested");

	UBP_MOTD_C_OnCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.OnMOTDDoneFadingOut
// (BlueprintCallable, BlueprintEvent)

void UBP_MOTD_C::OnMOTDDoneFadingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnMOTDDoneFadingOut");

	UBP_MOTD_C_OnMOTDDoneFadingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MOTD_C::ExecuteUbergraph_BP_MOTD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD");

	UBP_MOTD_C_ExecuteUbergraph_BP_MOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
