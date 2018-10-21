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

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_HUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.UserConstructionScript");

	AGameMode_Tutorial_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int*                           SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_HUD_C::ReceiveDrawHUD(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ReceiveDrawHUD");

	AGameMode_Tutorial_HUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.SetTutorialHUDText
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_HUD_C::SetTutorialHUDText(const struct FString& Text, const struct FLinearColor& Color, const struct FVector2D& Position, class UFont* Font, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.SetTutorialHUDText");

	AGameMode_Tutorial_HUD_C_SetTutorialHUDText_Params params;
	params.Text = Text;
	params.Color = Color;
	params.Position = Position;
	params.Font = Font;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ClearTutorialHUDText
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_HUD_C::ClearTutorialHUDText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ClearTutorialHUDText");

	AGameMode_Tutorial_HUD_C_ClearTutorialHUDText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ExecuteUbergraph_GameMode_Tutorial_HUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_HUD_C::ExecuteUbergraph_GameMode_Tutorial_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ExecuteUbergraph_GameMode_Tutorial_HUD");

	AGameMode_Tutorial_HUD_C_ExecuteUbergraph_GameMode_Tutorial_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
