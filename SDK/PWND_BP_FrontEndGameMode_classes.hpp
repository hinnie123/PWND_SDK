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

// BlueprintGeneratedClass BP_FrontEndGameMode.BP_FrontEndGameMode_C
// 0x0008 (0x0460 - 0x0458)
class ABP_FrontEndGameMode_C : public AFrontEndGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontEndGameMode.BP_FrontEndGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
