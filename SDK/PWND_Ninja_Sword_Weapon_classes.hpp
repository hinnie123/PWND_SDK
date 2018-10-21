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

// BlueprintGeneratedClass Ninja_Sword_Weapon.Ninja_Sword_Weapon_C
// 0x00AC (0x0ABC - 0x0A10)
class ANinja_Sword_Weapon_C : public ABase_Weapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             LockonDash;                                               // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LockonLoop;                                               // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Proj_4;                                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Proj_3;                                                   // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Proj_2;                                                   // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TP_Swing_MuzzleFX;                                        // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FP_Swing_MuzzleFX;                                        // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PullInTime;                                               // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PullInOffset;                                             // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PullInPrediction;                                         // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          TargetIndicator;                                          // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TargetIndicatorRelativeSize;                              // 0x0A68(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAppliedSelfImpulse;                                      // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A71(0x0003) MISSED OFFSET
	float                                              SelfImpulseZFactor;                                       // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfImpulseAmount;                                        // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	class UClass*                                      ImpactFX;                                                 // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasPullingIn;                                            // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              InteractionLockonStrengthMul;                             // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrapplingHookFailSafe;                                    // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	TArray<float>                                      GroundSlashAngles;                                        // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      AirSlashAngles;                                           // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ComboIndex;                                               // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_Weapon.Ninja_Sword_Weapon_C");
		return ptr;
	}


	class UClass* GetArcHitOverrideDamageTypeClass(float* ChargePct, struct FHitResult* Hit, struct FVector* Origin, struct FRotator* Rot);
	void GetNextComboIndex(int* Index);
	void ComputeProjectileRoll(float* Roll);
	void GetTarget(class AActor** NewTarget);
	struct FRotator AdjustRotationInput(float* DeltaTime, float* AimingDilation, struct FRotator* RotationInput, struct FVector* StartTrace, struct FRotator* ControlRot);
	void ExecutePullIn(class AActor* PullInTarget);
	TEnumAsByte<EeSpreadType> GetSpreadType(int* TotalShots);
	TEnumAsByte<EeWeaponFireType> GetWeaponFireType(float* ChargePct, int* Shot, int* TotalShots);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnWeaponShotCountChanged(bool* bCharging, int* OldShotCount, int* NewShotCount);
	void OnWeaponFire();
	void ArcFire(float* ChargePct);
	void OnDrawHUD(class APwndHUD** HUD, class UCanvas** Canvas, struct FVector* ViewLocation, struct FRotator* ViewRotation, struct FVector2D* CanvasOrigin, struct FVector2D* CanvasSize);
	void HandleArcHit(struct FHitResult* Hit, struct FPwndWeaponArcFire* Arc, struct FVector* Origin, struct FRotator* Rot, float* ChargePct);
	void OnClientHandleArcHitResponse(bool* bDidHit, struct FHitResult* Hit);
	void OnMulticastHandleArcHit(struct FHitResult* Hit, struct FVector* Origin, struct FRotator* Rot);
	void ServerFireProjectile(float Roll);
	void OnGrapplingHookFired();
	void ApplyWeaponSkin(class UPwndWeaponSkin** Skin);
	void OnPhasingFired();
	void OnTeleportUsed();
	void OnCharacterSkinAppliedHACK(class UPwndCharacterSkin** Skin);
	void ExecuteUbergraph_Ninja_Sword_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
