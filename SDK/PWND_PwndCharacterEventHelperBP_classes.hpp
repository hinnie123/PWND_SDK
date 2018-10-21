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

// BlueprintGeneratedClass PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C
// 0x0010 (0x03A0 - 0x0390)
class APwndCharacterEventHelperBP_C : public APwndCharacterEventHelper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_1(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger);
	void ExecuteUbergraph_PwndCharacterEventHelperBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
