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

// Function Button_TextureSwap.Button_TextureSwap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_TextureSwap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextureSwap.Button_TextureSwap_C.Construct");

	UButton_TextureSwap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_TextureSwap.Button_TextureSwap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_TextureSwap_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextureSwap.Button_TextureSwap_C.Tick");

	UButton_TextureSwap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_TextureSwap.Button_TextureSwap_C.ExecuteUbergraph_Button_TextureSwap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_TextureSwap_C::ExecuteUbergraph_Button_TextureSwap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextureSwap.Button_TextureSwap_C.ExecuteUbergraph_Button_TextureSwap");

	UButton_TextureSwap_C_ExecuteUbergraph_Button_TextureSwap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
