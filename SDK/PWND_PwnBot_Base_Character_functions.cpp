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

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.AllowPwn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APwnBot_Base_Character_C::AllowPwn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.AllowPwn");

	APwnBot_Base_Character_C_AllowPwn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PwnBot_Base_Character.PwnBot_Base_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwnBot_Base_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.UserConstructionScript");

	APwnBot_Base_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APwnBot_Base_Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveBeginPlay");

	APwnBot_Base_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_Character_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveTick");

	APwnBot_Base_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_Character_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceivePossessed");

	APwnBot_Base_Character_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ExecuteUbergraph_PwnBot_Base_Character
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_Character_C::ExecuteUbergraph_PwnBot_Base_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Character.PwnBot_Base_Character_C.ExecuteUbergraph_PwnBot_Base_Character");

	APwnBot_Base_Character_C_ExecuteUbergraph_PwnBot_Base_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
