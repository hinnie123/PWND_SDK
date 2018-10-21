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

// BlueprintGeneratedClass StickyBomb_L1_Weapon.StickyBomb_L1_Weapon_C
// 0x0000 (0x09B8 - 0x09B8)
class AStickyBomb_L1_Weapon_C : public AStickyBomb_Base_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StickyBomb_L1_Weapon.StickyBomb_L1_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
