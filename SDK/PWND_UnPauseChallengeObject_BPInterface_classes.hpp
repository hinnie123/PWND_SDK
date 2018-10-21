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

// BlueprintGeneratedClass UnPauseChallengeObject_BPInterface.UnPauseChallengeObject_BPInterface_C
// 0x0000 (0x0028 - 0x0028)
class UUnPauseChallengeObject_BPInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UnPauseChallengeObject_BPInterface.UnPauseChallengeObject_BPInterface_C");
		return ptr;
	}


	void UnpauseChallengeObject();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
