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

// BlueprintGeneratedClass StunGun_L3_Weapon.StunGun_L3_Weapon_C
// 0x0000 (0x09B0 - 0x09B0)
class AStunGun_L3_Weapon_C : public AStunGun_Base_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StunGun_L3_Weapon.StunGun_L3_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
