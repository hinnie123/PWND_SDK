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

// Function Buffy_Character.Buffy_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuffy_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Character.Buffy_Character_C.UserConstructionScript");

	ABuffy_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buffy_Character.Buffy_Character_C.K2_UpdateCustomMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuffy_Character_C::K2_UpdateCustomMovement(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Character.Buffy_Character_C.K2_UpdateCustomMovement");

	ABuffy_Character_C_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buffy_Character.Buffy_Character_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuffy_Character_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Character.Buffy_Character_C.K2_OnMovementModeChanged");

	ABuffy_Character_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buffy_Character.Buffy_Character_C.ExecuteUbergraph_Buffy_Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuffy_Character_C::ExecuteUbergraph_Buffy_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Character.Buffy_Character_C.ExecuteUbergraph_Buffy_Character");

	ABuffy_Character_C_ExecuteUbergraph_Buffy_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
