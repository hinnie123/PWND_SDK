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

// BlueprintGeneratedClass Ninja_Sword_DamageType_Slash.Ninja_Sword_DamageType_Slash_C
// 0x0000 (0x0050 - 0x0050)
class UNinja_Sword_DamageType_Slash_C : public UPwndDamageType_Direct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_DamageType_Slash.Ninja_Sword_DamageType_Slash_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
