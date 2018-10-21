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

// Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStickyBomb_Base_ExplosionFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.UserConstructionScript");

	AStickyBomb_Base_ExplosionFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStickyBomb_Base_ExplosionFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.ReceiveBeginPlay");

	AStickyBomb_Base_ExplosionFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.ExecuteUbergraph_StickyBomb_Base_ExplosionFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_ExplosionFX_C::ExecuteUbergraph_StickyBomb_Base_ExplosionFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_ExplosionFX.StickyBomb_Base_ExplosionFX_C.ExecuteUbergraph_StickyBomb_Base_ExplosionFX");

	AStickyBomb_Base_ExplosionFX_C_ExecuteUbergraph_StickyBomb_Base_ExplosionFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
