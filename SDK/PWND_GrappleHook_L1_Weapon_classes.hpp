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

// BlueprintGeneratedClass GrappleHook_L1_Weapon.GrappleHook_L1_Weapon_C
// 0x0000 (0x09E0 - 0x09E0)
class AGrappleHook_L1_Weapon_C : public AGrappleHook_Base_Weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleHook_L1_Weapon.GrappleHook_L1_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
