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

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBase_PwndShieldComponent_C::UpdateShieldColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldColors");

	UBase_PwndShieldComponent_C_UpdateShieldColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::UpdateShieldDamage(float NewParam1, float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldDamage");

	UBase_PwndShieldComponent_C_UpdateShieldDamage_Params params;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::UpdateShieldMaterials(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldMaterials");

	UBase_PwndShieldComponent_C_UpdateShieldMaterials_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBase_PwndShieldComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveBeginPlay");

	UBase_PwndShieldComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveTick");

	UBase_PwndShieldComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           OldHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentHealthPct               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::OnPanelHealthChanged(int* OldHealth, int* NewHealth, float* CurrentHealthPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelHealthChanged");

	UBase_PwndShieldComponent_C_OnPanelHealthChanged_Params params;
	params.OldHealth = OldHealth;
	params.NewHealth = NewHealth;
	params.CurrentHealthPct = CurrentHealthPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelSetActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::OnPanelSetActive(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelSetActive");

	UBase_PwndShieldComponent_C_OnPanelSetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDestroyed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::OnPanelDestroyed(bool* bDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelDestroyed");

	UBase_PwndShieldComponent_C_OnPanelDestroyed_Params params;
	params.bDestroyed = bDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ExecuteUbergraph_Base_PwndShieldComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_PwndShieldComponent_C::ExecuteUbergraph_Base_PwndShieldComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ExecuteUbergraph_Base_PwndShieldComponent");

	UBase_PwndShieldComponent_C_ExecuteUbergraph_Base_PwndShieldComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
