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

// BlueprintGeneratedClass StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C
// 0x0050 (0x11F8 - 0x11A8)
class AStickyBomb_Base_Projectile_C : public ABase_AbilityProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             ArmedSoundLoop;                                           // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Hack_Enemy_StickyBomb_FX;                                 // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Hack_Ally_StickyBomb_FX;                                  // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        HackPointLight;                                           // 0x11C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StuckMesh;                                                // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StuckSound;                                               // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AllyMaterial;                                             // 0x11E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EnemyMaterial;                                            // 0x11F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStuck();
	void OnArmedUpdated(bool* bIsArmed);
	void OnBeginArming();
	void OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy);
	void ReceiveBeginPlay();
	void OnTeamUpdated(unsigned char* NewTeamNum);
	void ExecuteUbergraph_StickyBomb_Base_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
