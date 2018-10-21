#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Test_Collectable.Test_Collectable_C.UserConstructionScript
struct ATest_Collectable_C_UserConstructionScript_Params
{
};

// Function Test_Collectable.Test_Collectable_C.Timeline_0__FinishedFunc
struct ATest_Collectable_C_Timeline_0__FinishedFunc_Params
{
};

// Function Test_Collectable.Test_Collectable_C.Timeline_0__UpdateFunc
struct ATest_Collectable_C_Timeline_0__UpdateFunc_Params
{
};

// Function Test_Collectable.Test_Collectable_C.Timeline_3__FinishedFunc
struct ATest_Collectable_C_Timeline_3__FinishedFunc_Params
{
};

// Function Test_Collectable.Test_Collectable_C.Timeline_3__UpdateFunc
struct ATest_Collectable_C_Timeline_3__UpdateFunc_Params
{
};

// Function Test_Collectable.Test_Collectable_C.ReceiveBeginPlay
struct ATest_Collectable_C_ReceiveBeginPlay_Params
{
};

// Function Test_Collectable.Test_Collectable_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATest_Collectable_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Test_Collectable.Test_Collectable_C.Restart Collectable
struct ATest_Collectable_C_Restart_Collectable_Params
{
};

// Function Test_Collectable.Test_Collectable_C.RestartChallengeItem
struct ATest_Collectable_C_RestartChallengeItem_Params
{
};

// Function Test_Collectable.Test_Collectable_C.ReceiveTick
struct ATest_Collectable_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Test_Collectable.Test_Collectable_C.Animation
struct ATest_Collectable_C_Animation_Params
{
};

// Function Test_Collectable.Test_Collectable_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ATest_Collectable_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Test_Collectable.Test_Collectable_C.ExecuteUbergraph_Test_Collectable
struct ATest_Collectable_C_ExecuteUbergraph_Test_Collectable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Test_Collectable.Test_Collectable_C.PlayerGrabbedItem__DelegateSignature
struct ATest_Collectable_C_PlayerGrabbedItem__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
