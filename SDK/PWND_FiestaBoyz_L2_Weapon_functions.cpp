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

// Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFiestaBoyz_L2_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.UserConstructionScript");

	AFiestaBoyz_L2_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFiestaBoyz_L2_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.ReceiveBeginPlay");

	AFiestaBoyz_L2_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.ExecuteUbergraph_FiestaBoyz_L2_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFiestaBoyz_L2_Weapon_C::ExecuteUbergraph_FiestaBoyz_L2_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C.ExecuteUbergraph_FiestaBoyz_L2_Weapon");

	AFiestaBoyz_L2_Weapon_C_ExecuteUbergraph_FiestaBoyz_L2_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
