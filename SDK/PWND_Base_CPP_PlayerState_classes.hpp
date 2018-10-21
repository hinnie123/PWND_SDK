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

// BlueprintGeneratedClass Base_CPP_PlayerState.Base_CPP_PlayerState_C
// 0x0008 (0x0760 - 0x0758)
class ABase_CPP_PlayerState_C : public APwndPlayerState
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_CPP_PlayerState.Base_CPP_PlayerState_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
