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

// Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwnBot_Base_ExplosionFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.UserConstructionScript");

	APwnBot_Base_ExplosionFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APwnBot_Base_ExplosionFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.ReceiveBeginPlay");

	APwnBot_Base_ExplosionFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.ExecuteUbergraph_PwnBot_Base_ExplosionFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_ExplosionFX_C::ExecuteUbergraph_PwnBot_Base_ExplosionFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_ExplosionFX.PwnBot_Base_ExplosionFX_C.ExecuteUbergraph_PwnBot_Base_ExplosionFX");

	APwnBot_Base_ExplosionFX_C_ExecuteUbergraph_PwnBot_Base_ExplosionFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
