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

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGooBomb_Base_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.UserConstructionScript");

	AGooBomb_Base_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnTeamUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Projectile_C::OnTeamUpdated(unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnTeamUpdated");

	AGooBomb_Base_Projectile_C_OnTeamUpdated_Params params;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGooBomb_Base_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ReceiveBeginPlay");

	AGooBomb_Base_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnStuck
// (Event, Public, BlueprintEvent)

void AGooBomb_Base_Projectile_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnStuck");

	AGooBomb_Base_Projectile_C_OnStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ExecuteUbergraph_GooBomb_Base_Projectile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Projectile_C::ExecuteUbergraph_GooBomb_Base_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ExecuteUbergraph_GooBomb_Base_Projectile");

	AGooBomb_Base_Projectile_C_ExecuteUbergraph_GooBomb_Base_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
