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

// BlueprintGeneratedClass GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C
// 0x0048 (0x09E0 - 0x0998)
class AGrappleHook_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             GrappleHookLineRoot;                                      // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterReelInSpeed;                                     // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFailedFire;                                              // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	class AActor*                                      SplineTarget;                                             // 0x09C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APwndRopeActor*                              RopeActor;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RopeActorClass;                                           // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RopeCurve;                                                // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C");
		return ptr;
	}


	void SetSplineTarget(class AActor* SplineTargetActor);
	void UpdateSpline(float DeltaSeconds);
	class APwndProjectile* ProjectileFire(float* ChargePct);
	float GetReloadTime();
	bool AllowReloadStart();
	bool AllowReloadTimerAdvance();
	bool AllowFire();
	void UserConstructionScript();
	void StopFire(float* Timestamp, bool* bFromServerCallback, bool* bReplicate);
	void OnWeaponFire();
	void ReceiveTick(float* DeltaSeconds);
	void StartFire(float* Timestamp, bool* bFromServerCallback, bool* bReplicate);
	void CustomFire(float* ChargePct);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void MulticastPlayImpactSound(unsigned char Type, const struct FVector& Location);
	void ExecuteUbergraph_GrappleHook_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
