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

// BlueprintGeneratedClass GameMode_Pwn.GameMode_Pwn_C
// 0x0008 (0x08E0 - 0x08D8)
class AGameMode_Pwn_C : public APwndGameMode_Pwn
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMode_Pwn.GameMode_Pwn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
