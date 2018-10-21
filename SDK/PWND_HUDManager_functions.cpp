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

// Function HUDManager.HUDManager_C.ShowMeHUDManager
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDManager_C::ShowMeHUDManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.ShowMeHUDManager");

	UHUDManager_C_ShowMeHUDManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDManager.HUDManager_C.HideMeHUDManager
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDManager_C::HideMeHUDManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.HideMeHUDManager");

	UHUDManager_C_HideMeHUDManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDManager.HUDManager_C.Get_Respawn_Text_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUDManager_C::Get_Respawn_Text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.Get_Respawn_Text_Text_1");

	UHUDManager_C_Get_Respawn_Text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDManager.HUDManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.Construct");

	UHUDManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDManager.HUDManager_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDManager_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.Tick");

	UHUDManager_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDManager.HUDManager_C.ExecuteUbergraph_HUDManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDManager_C::ExecuteUbergraph_HUDManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDManager.HUDManager_C.ExecuteUbergraph_HUDManager");

	UHUDManager_C_ExecuteUbergraph_HUDManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
