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

// Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFX_GenericExplosionSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.UserConstructionScript");

	AFX_GenericExplosionSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFX_GenericExplosionSmall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.ReceiveBeginPlay");

	AFX_GenericExplosionSmall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.ExecuteUbergraph_FX_GenericExplosionSmall
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFX_GenericExplosionSmall_C::ExecuteUbergraph_FX_GenericExplosionSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_GenericExplosionSmall.FX_GenericExplosionSmall_C.ExecuteUbergraph_FX_GenericExplosionSmall");

	AFX_GenericExplosionSmall_C_ExecuteUbergraph_FX_GenericExplosionSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
