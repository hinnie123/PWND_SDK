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

// BlueprintGeneratedClass Base_CPP_AIControllerPlayer.Base_CPP_AIControllerPlayer_C
// 0x0000 (0x0640 - 0x0640)
class ABase_CPP_AIControllerPlayer_C : public APwndAIControllerPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_CPP_AIControllerPlayer.Base_CPP_AIControllerPlayer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
