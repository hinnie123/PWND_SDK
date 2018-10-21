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

// BlueprintGeneratedClass PopGun_Projectile_Explosion_FX.PopGun_Projectile_Explosion_FX_C
// 0x0000 (0x0421 - 0x0421)
class APopGun_Projectile_Explosion_FX_C : public ABase_FX_Explosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PopGun_Projectile_Explosion_FX.PopGun_Projectile_Explosion_FX_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
