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

// BlueprintGeneratedClass PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C
// 0x002C (0x03DD - 0x03B1)
class APopGun_FP_MuzzleFlash_FX_C : public ABase_Weapon_FP_MuzzleFlash_FX_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Muzzle_Flash3;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Flash2;                                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Flash1;                                            // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerDelay;                                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PopGun_Active;                                            // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetActive(bool* bIsActive);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PopGun_FP_MuzzleFlash_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
