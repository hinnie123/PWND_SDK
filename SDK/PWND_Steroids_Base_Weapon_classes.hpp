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

// BlueprintGeneratedClass Steroids_Base_Weapon.Steroids_Base_Weapon_C
// 0x0020 (0x09B8 - 0x0998)
class ASteroids_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Steroids_DOT;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Steroids_Base_Weapon.Steroids_Base_Weapon_C");
		return ptr;
	}


	bool IsAbilityActive();
	void UserConstructionScript();
	void OnWeaponFire();
	void CustomFire(float* ChargePct);
	void ExecuteUbergraph_Steroids_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
