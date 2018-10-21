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

// Function Pwngineer_Character.Pwngineer_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwngineer_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Character.Pwngineer_Character_C.UserConstructionScript");

	APwngineer_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Character.Pwngineer_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Character_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Character.Pwngineer_Character_C.ReceiveTick");

	APwngineer_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Character.Pwngineer_Character_C.ExecuteUbergraph_Pwngineer_Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Character_C::ExecuteUbergraph_Pwngineer_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Character.Pwngineer_Character_C.ExecuteUbergraph_Pwngineer_Character");

	APwngineer_Character_C_ExecuteUbergraph_Pwngineer_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
