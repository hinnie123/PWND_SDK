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

// BlueprintGeneratedClass RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C
// 0x011C (0x0AB4 - 0x0998)
class ARecallTeleporter_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             BeaconDestroyedSound;                                     // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BeaconUsedSound;                                          // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BeaconBeepSound;                                          // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ReplicatedTeleport;                                       // 0x09C8(0x0088) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DisappearFX;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AppearFX;                                                 // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APwndProjectile*                             ReplicatedProjectile;                                     // 0x0A60(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                LastBeepTime;                                             // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProjectileWasDetonated;                                  // 0x0A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A6D(0x0003) MISSED OFFSET
	struct FTransform                                  DelayedTeleportTransform;                                 // 0x0A70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayedTeleportTimer;                                     // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AA4(0x0004) MISSED OFFSET
	class UClass*                                      FirstPersonFX;                                            // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeleportDelay;                                            // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C");
		return ptr;
	}


	struct FVector GetSpecialMovementTarget(struct FVector* TargetVelocity);
	bool IsAbilityActive();
	bool IsSpecialMovementTwoStage(bool* bFirstStage);
	void OnRep_ReplicatedTeleport();
	void PerformTeleport(const struct FTransform& TeleportTarget, float Delay);
	class APwndProjectile* ProjectileFire(float* ChargePct);
	bool AllowReloadTimerAdvance();
	bool AllowReloadStart();
	bool AllowFire();
	void UserConstructionScript();
	void OnDrawHUD(class APwndHUD** HUD, class UCanvas** Canvas, struct FVector* ViewLocation, struct FRotator* ViewRotation, struct FVector2D* CanvasOrigin, struct FVector2D* CanvasSize);
	void OnWeaponFire();
	void ReceiveTick(float* DeltaSeconds);
	void ClientPlayTeleportFXOnCarried();
	void ExecuteUbergraph_RecallTeleporter_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
