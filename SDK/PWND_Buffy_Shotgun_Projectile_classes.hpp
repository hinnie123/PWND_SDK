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

// BlueprintGeneratedClass Buffy_Shotgun_Projectile.Buffy_Shotgun_Projectile_C
// 0x0000 (0x11A8 - 0x11A8)
class ABuffy_Shotgun_Projectile_C : public ABase_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buffy_Shotgun_Projectile.Buffy_Shotgun_Projectile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
