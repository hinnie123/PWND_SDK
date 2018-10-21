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

// BlueprintGeneratedClass GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C
// 0x0038 (0x03C8 - 0x0390)
class AGooBomb_Base_Projectile_Explosion_FX_C : public APwndFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AllySound;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             EnemySound;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AllyExplosion;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnemyExplosion;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Enemy;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Ally;                                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetActive(bool* bIsActive);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GooBomb_Base_Projectile_Explosion_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
