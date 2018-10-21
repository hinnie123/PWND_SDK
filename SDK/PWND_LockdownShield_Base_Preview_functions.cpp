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

// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALockdownShield_Base_Preview_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.UserConstructionScript");

	ALockdownShield_Base_Preview_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Preview_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.OnSetActive");

	ALockdownShield_Base_Preview_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.ExecuteUbergraph_LockdownShield_Base_Preview
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Preview_C::ExecuteUbergraph_LockdownShield_Base_Preview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.ExecuteUbergraph_LockdownShield_Base_Preview");

	ALockdownShield_Base_Preview_C_ExecuteUbergraph_LockdownShield_Base_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
