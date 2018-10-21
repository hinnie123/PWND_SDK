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

// BlueprintGeneratedClass Base_AIController.Base_AIController_C
// 0x0020 (0x0648 - 0x0628)
class ABase_AIController_C : public ABase_CPP_AIController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (Transient, DuplicateTransient)
	class UBlackboardData*                             InitialBlackBoard;                                        // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               InitialBehaviorTree;                                      // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       bIsInteracting;                                           // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_AIController.Base_AIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Base_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
