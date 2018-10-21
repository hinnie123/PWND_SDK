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

// BlueprintGeneratedClass StunGun_Base_ExplosionFX.StunGun_Base_ExplosionFX_C
// 0x0000 (0x0421 - 0x0421)
class AStunGun_Base_ExplosionFX_C : public ABase_FX_Explosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StunGun_Base_ExplosionFX.StunGun_Base_ExplosionFX_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
