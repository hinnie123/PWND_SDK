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

// BlueprintGeneratedClass GooBomb_L1_Weapon.GooBomb_L1_Weapon_C
// 0x0000 (0x09C8 - 0x09C8)
class AGooBomb_L1_Weapon_C : public AGooBomb_Base_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GooBomb_L1_Weapon.GooBomb_L1_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
