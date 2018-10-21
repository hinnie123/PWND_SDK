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

// BlueprintGeneratedClass PwnBot_MonkeyBrain_WanderState.PwnBot_MonkeyBrain_WanderState_C
// 0x0000 (0x0440 - 0x0440)
class UPwnBot_MonkeyBrain_WanderState_C : public UPwndAIMonkeyBrainPlayer_StateWander
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwnBot_MonkeyBrain_WanderState.PwnBot_MonkeyBrain_WanderState_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
