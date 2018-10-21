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

// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.UserConstructionScript");

	ABP_FrontEndPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::OnArrivedToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToMainMenu");

	ABP_FrontEndPlayerController_C_OnArrivedToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToLobby
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::OnArrivedToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToLobby");

	ABP_FrontEndPlayerController_C_OnArrivedToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToPostMatchScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::OnArrivedToPostMatchScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToPostMatchScreen");

	ABP_FrontEndPlayerController_C_OnArrivedToPostMatchScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToMatchTypeScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::OnArrivedToMatchTypeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnArrivedToMatchTypeScreen");

	ABP_FrontEndPlayerController_C_OnArrivedToMatchTypeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnMonkeyReadyToQeueue
// (Event, Public, BlueprintEvent)

void ABP_FrontEndPlayerController_C::OnMonkeyReadyToQeueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.OnMonkeyReadyToQeueue");

	ABP_FrontEndPlayerController_C_OnMonkeyReadyToQeueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.LobbyCheckForDupe
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontEndPlayerController_C::LobbyCheckForDupe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.LobbyCheckForDupe");

	ABP_FrontEndPlayerController_C_LobbyCheckForDupe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.ExecuteUbergraph_BP_FrontEndPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontEndPlayerController_C::ExecuteUbergraph_BP_FrontEndPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndPlayerController.BP_FrontEndPlayerController_C.ExecuteUbergraph_BP_FrontEndPlayerController");

	ABP_FrontEndPlayerController_C_ExecuteUbergraph_BP_FrontEndPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
