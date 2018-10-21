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

// BlueprintGeneratedClass ChallengeObstaclesRestart_BPinterface.ChallengeObstaclesRestart_BPinterface_C
// 0x0000 (0x0028 - 0x0028)
class UChallengeObstaclesRestart_BPinterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeObstaclesRestart_BPinterface.ChallengeObstaclesRestart_BPinterface_C");
		return ptr;
	}


	void RestartChallengeItem();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
