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

// BlueprintGeneratedClass GameState_Pwn.GameState_Pwn_C
// 0x0008 (0x0610 - 0x0608)
class AGameState_Pwn_C : public APwndGameState_Pwn
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameState_Pwn.GameState_Pwn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
