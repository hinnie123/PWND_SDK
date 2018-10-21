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

// BlueprintGeneratedClass Base_Ability_Grenade_Trail_FX.Base_Ability_Grenade_Trail_FX_C
// 0x0000 (0x03C9 - 0x03C9)
class ABase_Ability_Grenade_Trail_FX_C : public ABase_FX_Trail_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ability_Grenade_Trail_FX.Base_Ability_Grenade_Trail_FX_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
