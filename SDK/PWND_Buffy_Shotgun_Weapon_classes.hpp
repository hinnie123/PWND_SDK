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

// BlueprintGeneratedClass Buffy_Shotgun_Weapon.Buffy_Shotgun_Weapon_C
// 0x0000 (0x0A10 - 0x0A10)
class ABuffy_Shotgun_Weapon_C : public ABase_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buffy_Shotgun_Weapon.Buffy_Shotgun_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
