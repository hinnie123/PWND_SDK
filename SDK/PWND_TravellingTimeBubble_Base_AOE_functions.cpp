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

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.Update_DNA_Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ATravellingTimeBubble_Base_AOE_C::Update_DNA_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.Update_DNA_Materials");

	ATravellingTimeBubble_Base_AOE_C_Update_DNA_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATravellingTimeBubble_Base_AOE_C::UpdateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateScale");

	ATravellingTimeBubble_Base_AOE_C_UpdateScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ATravellingTimeBubble_Base_AOE_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateMaterials");

	ATravellingTimeBubble_Base_AOE_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATravellingTimeBubble_Base_AOE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UserConstructionScript");

	ATravellingTimeBubble_Base_AOE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.OnSetActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATravellingTimeBubble_Base_AOE_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.OnSetActive");

	ATravellingTimeBubble_Base_AOE_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATravellingTimeBubble_Base_AOE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveTick");

	ATravellingTimeBubble_Base_AOE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATravellingTimeBubble_Base_AOE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveBeginPlay");

	ATravellingTimeBubble_Base_AOE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ExecuteUbergraph_TravellingTimeBubble_Base_AOE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATravellingTimeBubble_Base_AOE_C::ExecuteUbergraph_TravellingTimeBubble_Base_AOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ExecuteUbergraph_TravellingTimeBubble_Base_AOE");

	ATravellingTimeBubble_Base_AOE_C_ExecuteUbergraph_TravellingTimeBubble_Base_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
