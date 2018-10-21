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

// Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Impact_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.UserConstructionScript");

	ANinja_Sword_Impact_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANinja_Sword_Impact_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ReceiveBeginPlay");

	ANinja_Sword_Impact_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Impact_FX_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ReceiveTick");

	ANinja_Sword_Impact_FX_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ExecuteUbergraph_Ninja_Sword_Impact_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Impact_FX_C::ExecuteUbergraph_Ninja_Sword_Impact_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C.ExecuteUbergraph_Ninja_Sword_Impact_FX");

	ANinja_Sword_Impact_FX_C_ExecuteUbergraph_Ninja_Sword_Impact_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
