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

// BlueprintGeneratedClass PwnBot_Base_Weapon.PwnBot_Base_Weapon_C
// 0x0008 (0x0A70 - 0x0A68)
class APwnBot_Base_Weapon_C : public APwngineer_Primary01_Base_Weapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwnBot_Base_Weapon.PwnBot_Base_Weapon_C");
		return ptr;
	}


	TArray<class UClass*> GetLoadoutViewAccessories();
	void UserConstructionScript();
	void OnWeaponFire();
	void ExecuteUbergraph_PwnBot_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
