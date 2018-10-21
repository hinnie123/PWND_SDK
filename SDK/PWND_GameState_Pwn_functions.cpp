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

// Function GameState_Pwn.GameState_Pwn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameState_Pwn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_Pwn.GameState_Pwn_C.UserConstructionScript");

	AGameState_Pwn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
