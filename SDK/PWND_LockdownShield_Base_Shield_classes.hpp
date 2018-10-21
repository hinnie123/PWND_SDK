#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LockdownShield_Base_Shield.LockdownShield_Base_Shield_C
// 0x0038 (0x07B8 - 0x0780)
class ALockdownShield_Base_Shield_C : public ABase_CPP_ShieldBuckyBall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             ShutdownAudio;                                            // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LoopingAudio;                                             // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 EnemyTimer;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 AllyTimer;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayedShutdown;                                          // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07A9(0x0007) MISSED OFFSET
	class USoundBase*                                  AllyProjectileOverlapSound;                               // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LockdownShield_Base_Shield.LockdownShield_Base_Shield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_LockdownShield_Base_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
