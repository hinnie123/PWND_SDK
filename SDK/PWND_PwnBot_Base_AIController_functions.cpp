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

// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.IsSelfDestructing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSelfDestruct                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_AIController_C::IsSelfDestructing(bool* IsSelfDestruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.IsSelfDestructing");

	APwnBot_Base_AIController_C_IsSelfDestructing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelfDestruct != nullptr)
		*IsSelfDestruct = params.IsSelfDestruct;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.SetSelfDestruct
// (Public, BlueprintCallable, BlueprintEvent)

void APwnBot_Base_AIController_C::SetSelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.SetSelfDestruct");

	APwnBot_Base_AIController_C_SetSelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwnBot_Base_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.UserConstructionScript");

	APwnBot_Base_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_AIController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ReceiveTick");

	APwnBot_Base_AIController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPawnActionStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePawnActionState>* NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePawnActionState>* OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_AIController_C::OnPawnActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* NewState, TEnumAsByte<EePawnActionState>* OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPawnActionStateUpdated");

	APwnBot_Base_AIController_C_OnPawnActionStateUpdated_Params params;
	params.Char = Char;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPwnageScored
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Pwner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndCharacter**         PwndPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_AIController_C::OnPwnageScored(class APwndCharacter** Pwner, class APwndCharacter** PwndPawn, bool* bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.OnPwnageScored");

	APwnBot_Base_AIController_C_OnPwnageScored_Params params;
	params.Pwner = Pwner;
	params.PwndPawn = PwndPawn;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ExecuteUbergraph_PwnBot_Base_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_AIController_C::ExecuteUbergraph_PwnBot_Base_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_AIController.PwnBot_Base_AIController_C.ExecuteUbergraph_PwnBot_Base_AIController");

	APwnBot_Base_AIController_C_ExecuteUbergraph_PwnBot_Base_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
