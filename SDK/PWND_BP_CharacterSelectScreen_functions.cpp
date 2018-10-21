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

// Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CharacterSelectScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.Construct");

	UBP_CharacterSelectScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.OnGoBackToMainMenu
// (Event, Public, BlueprintEvent)

void UBP_CharacterSelectScreen_C::OnGoBackToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.OnGoBackToMainMenu");

	UBP_CharacterSelectScreen_C_OnGoBackToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.ExecuteUbergraph_BP_CharacterSelectScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterSelectScreen_C::ExecuteUbergraph_BP_CharacterSelectScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.ExecuteUbergraph_BP_CharacterSelectScreen");

	UBP_CharacterSelectScreen_C_ExecuteUbergraph_BP_CharacterSelectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.CharactersScreenToMainMenuScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CharacterSelectScreen_C::CharactersScreenToMainMenuScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectScreen.BP_CharacterSelectScreen_C.CharactersScreenToMainMenuScreen__DelegateSignature");

	UBP_CharacterSelectScreen_C_CharactersScreenToMainMenuScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
