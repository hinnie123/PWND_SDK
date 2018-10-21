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

// BlueprintGeneratedClass RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C
// 0x006C (0x1214 - 0x11A8)
class ARecallTeleporter_Base_Projectile_C : public ABase_AbilityProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AllyMesh;                                                 // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnemyStuckFX;                                             // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StuckMesh;                                                // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPwndBasicFieldTagComponent*                 PwndBasicFieldTag;                                        // 0x11C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AllyStuckFX;                                              // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AllyImpactFX;                                             // 0x11D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnemyImpactFX;                                            // 0x11E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AllyStuckMesh;                                            // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ArmedSoundLoop;                                           // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        HackPointLight;                                           // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x1200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StuckSound;                                               // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetonationDuration;                                       // 0x1210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStuck();
	void OnArmedUpdated(bool* bIsArmed);
	void OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy);
	void ReceiveBeginPlay();
	void OnTeamUpdated(unsigned char* NewTeamNum);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_RecallTeleporter_Base_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
