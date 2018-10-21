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

// Function Test_Collectable.Test_Collectable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATest_Collectable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.UserConstructionScript");

	ATest_Collectable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATest_Collectable_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Timeline_0__FinishedFunc");

	ATest_Collectable_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATest_Collectable_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Timeline_0__UpdateFunc");

	ATest_Collectable_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ATest_Collectable_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Timeline_3__FinishedFunc");

	ATest_Collectable_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ATest_Collectable_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Timeline_3__UpdateFunc");

	ATest_Collectable_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATest_Collectable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.ReceiveBeginPlay");

	ATest_Collectable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATest_Collectable_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATest_Collectable_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Restart Collectable
// (BlueprintCallable, BlueprintEvent)

void ATest_Collectable_C::Restart_Collectable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Restart Collectable");

	ATest_Collectable_C_Restart_Collectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.RestartChallengeItem
// (Public, BlueprintCallable, BlueprintEvent)

void ATest_Collectable_C::RestartChallengeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.RestartChallengeItem");

	ATest_Collectable_C_RestartChallengeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATest_Collectable_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.ReceiveTick");

	ATest_Collectable_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.Animation
// (BlueprintCallable, BlueprintEvent)

void ATest_Collectable_C::Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.Animation");

	ATest_Collectable_C_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATest_Collectable_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ATest_Collectable_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.ExecuteUbergraph_Test_Collectable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATest_Collectable_C::ExecuteUbergraph_Test_Collectable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.ExecuteUbergraph_Test_Collectable");

	ATest_Collectable_C_ExecuteUbergraph_Test_Collectable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Test_Collectable.Test_Collectable_C.PlayerGrabbedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATest_Collectable_C::PlayerGrabbedItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Test_Collectable.Test_Collectable_C.PlayerGrabbedItem__DelegateSignature");

	ATest_Collectable_C_PlayerGrabbedItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
