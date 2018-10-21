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

// Function ReviveTarget_Task.ReviveTarget_Task_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveTarget_Task_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveTarget_Task.ReviveTarget_Task_C.ReceiveExecute");

	UReviveTarget_Task_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveTarget_Task.ReviveTarget_Task_C.ExecuteUbergraph_ReviveTarget_Task
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveTarget_Task_C::ExecuteUbergraph_ReviveTarget_Task(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveTarget_Task.ReviveTarget_Task_C.ExecuteUbergraph_ReviveTarget_Task");

	UReviveTarget_Task_C_ExecuteUbergraph_ReviveTarget_Task_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
