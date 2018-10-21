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

// BlueprintGeneratedClass Base_Character.Base_Character_C
// 0x00B8 (0x12D8 - 0x1220)
class ABase_Character_C : public ABase_CPP_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1220(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RadiusIndicator;                                          // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RadiusIndicatorScaler;                                    // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_UI_RocketJumpCharge_Full_Loop;                         // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_UI_RocketJumpCharge_Start;                             // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_UI_Overheated_Warning;                                 // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_UI_Overheated_Cooled;                                  // 0x1250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_UI_Overheated;                                         // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GibbedFXClass;                                            // 0x1260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FXCachedHealthPct;                                        // 0x1268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x126C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          HealthUpFullscreenFX;                                     // 0x1270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthUpFullscreenFX_Timer;                               // 0x1278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x127C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    HealthUpFullscreenFX_MatInst;                             // 0x1280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HealthUpFullscreenFX_AmountCurve;                         // 0x1288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HealthUpFullscreenFX_TimeCurve;                           // 0x1290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthUpFullscreenFX_Delta;                               // 0x1298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHealthUpFullscreenFX_Visible;                            // 0x129C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x129D(0x0003) MISSED OFFSET
	struct FName                                       DamageFXAttachPoint;                                      // 0x12A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageFXOffset;                                           // 0x12A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DamageFXTimeStamp;                                        // 0x12B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DamageFXOrigin;                                           // 0x12B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x12C4(0x0004) MISSED OFFSET
	class UParticleSystem*                             RocketJump_BaseFX;                                        // 0x12C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RocketJump_BaseSound;                                     // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Character.Base_Character_C");
		return ptr;
	}


	void RenderTempWorldUI();
	void TickHealthFX(float DeltaSeconds);
	void IsLocalPlayer(bool* IsLocalPlayer);
	void UserConstructionScript();
	void OnRocketJumpFailed(bool* bCanRocketJump, bool* bRocketJumpFailed);
	void OnSpecialMovementFailed(bool* bAllowSpecialMove, bool* bSpecialMoveFailed);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnUpdateGibbed(bool* bIsGibbed);
	void OnRocketJump(struct FReplicatedRocketJump* JumpInfo);
	void OnDamageReceived(struct FPwndReplicatedDamageEvent* DamageEvent);
	void OnWeaponFire(class APwndWeapon** FiredWeapon);
	void OnHeatStatusChanged(TEnumAsByte<EeHeatStatus>* NewHeatStatus, TEnumAsByte<EeHeatStatus>* OldHeatStatus);
	void OnCompletedActionStateUpdated(TEnumAsByte<EePawnActionState>* State, bool* bSuccess, struct FPwndCharacterActionCompletion* ActionCompleted);
	void OnAwardRank(int* NewRank, bool* bLocal);
	void ExecuteUbergraph_Base_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
