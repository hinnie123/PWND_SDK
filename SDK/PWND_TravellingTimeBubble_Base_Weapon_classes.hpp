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

// BlueprintGeneratedClass TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C
// 0x0028 (0x09C0 - 0x0998)
class ATravellingTimeBubble_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TP_Travelling_TimeBubble_MuzzleFlash;                     // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FP_Travelling_TimeBubble_MuzzleFlash;                     // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponFire();
	void OnUpgraded();
	void ExecuteUbergraph_TravellingTimeBubble_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
