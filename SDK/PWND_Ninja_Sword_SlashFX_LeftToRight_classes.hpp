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

// BlueprintGeneratedClass Ninja_Sword_SlashFX_LeftToRight.Ninja_Sword_SlashFX_LeftToRight_C
// 0x0008 (0x0398 - 0x0390)
class ANinja_Sword_SlashFX_LeftToRight_C : public ABase_FX_C
{
public:
	class UParticleSystemComponent*                    PS_Ninja_Sword_Slash;                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_SlashFX_LeftToRight.Ninja_Sword_SlashFX_LeftToRight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
