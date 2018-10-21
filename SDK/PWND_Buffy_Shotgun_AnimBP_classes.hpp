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

// AnimBlueprintGeneratedClass Buffy_Shotgun_AnimBP.Buffy_Shotgun_AnimBP_C
// 0x0000 (0x13C0 - 0x13C0)
class UBuffy_Shotgun_AnimBP_C : public UBase_Weapon_AnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Buffy_Shotgun_AnimBP.Buffy_Shotgun_AnimBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
