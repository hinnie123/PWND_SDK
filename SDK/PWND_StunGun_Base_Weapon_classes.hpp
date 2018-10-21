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

// BlueprintGeneratedClass StunGun_Base_Weapon.StunGun_Base_Weapon_C
// 0x0018 (0x09B0 - 0x0998)
class AStunGun_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StunGun_Base_Weapon.StunGun_Base_Weapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponFire();
	void ExecuteUbergraph_StunGun_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
