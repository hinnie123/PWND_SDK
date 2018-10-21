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

// BlueprintGeneratedClass PauseChallengeObject_BPInterface.PauseChallengeObject_BPInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPauseChallengeObject_BPInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PauseChallengeObject_BPInterface.PauseChallengeObject_BPInterface_C");
		return ptr;
	}


	void PauseChallengeObject();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
