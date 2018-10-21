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

// Function Base_FX_Trail.Base_FX_Trail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_FX_Trail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Trail.Base_FX_Trail_C.UserConstructionScript");

	ABase_FX_Trail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Trail.Base_FX_Trail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_FX_Trail_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Trail.Base_FX_Trail_C.ReceiveBeginPlay");

	ABase_FX_Trail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Trail.Base_FX_Trail_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Trail_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Trail.Base_FX_Trail_C.OnSetActive");

	ABase_FX_Trail_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Trail.Base_FX_Trail_C.OnSetTeamNum
// (Event, Protected, BlueprintEvent)
// Parameters:
// unsigned char*                 OldTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Trail_C::OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Trail.Base_FX_Trail_C.OnSetTeamNum");

	ABase_FX_Trail_C_OnSetTeamNum_Params params;
	params.OldTeamNum = OldTeamNum;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Trail.Base_FX_Trail_C.ExecuteUbergraph_Base_FX_Trail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Trail_C::ExecuteUbergraph_Base_FX_Trail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Trail.Base_FX_Trail_C.ExecuteUbergraph_Base_FX_Trail");

	ABase_FX_Trail_C_ExecuteUbergraph_Base_FX_Trail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
