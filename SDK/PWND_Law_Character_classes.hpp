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

// BlueprintGeneratedClass Law_Character.Law_Character_C
// 0x0051 (0x1329 - 0x12D8)
class ALaw_Character_C : public ABase_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12D8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             EnemyReEntrySound;                                        // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AllyReEntrySound;                                         // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnemyReEntryFX;                                           // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AllyReEntryFX;                                            // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             EnemyReEntry;                                             // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AllyReEntry;                                              // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GroundSlamFX;                                             // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReEntryFX;                                                // 0x1318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SuperJumpFX;                                              // 0x1320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnedShield_FoundEnemyTrapped;                          // 0x1328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Law_Character.Law_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void ReceiveTick(float* DeltaSeconds);
	void OnRocketJump(struct FReplicatedRocketJump* JumpInfo);
	void PostEventTrigger_EventHandler(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger);
	void ReceivePossessed(class AController** NewController);
	void ExecuteUbergraph_Law_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
