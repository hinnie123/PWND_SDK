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

// Function Law_SuperJumpFX.Law_SuperJumpFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALaw_SuperJumpFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_SuperJumpFX.Law_SuperJumpFX_C.UserConstructionScript");

	ALaw_SuperJumpFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_SuperJumpFX.Law_SuperJumpFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALaw_SuperJumpFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_SuperJumpFX.Law_SuperJumpFX_C.ReceiveBeginPlay");

	ALaw_SuperJumpFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_SuperJumpFX.Law_SuperJumpFX_C.ExecuteUbergraph_Law_SuperJumpFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_SuperJumpFX_C::ExecuteUbergraph_Law_SuperJumpFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_SuperJumpFX.Law_SuperJumpFX_C.ExecuteUbergraph_Law_SuperJumpFX");

	ALaw_SuperJumpFX_C_ExecuteUbergraph_Law_SuperJumpFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
