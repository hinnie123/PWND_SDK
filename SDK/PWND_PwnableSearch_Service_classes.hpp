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

// BlueprintGeneratedClass PwnableSearch_Service.PwnableSearch_Service_C
// 0x0060 (0x00F8 - 0x0098)
class UPwnableSearch_Service_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                           // 0x00C8(0x0028) (Edit, BlueprintVisible)
	class APwndCharacter*                              FinalTarget;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwnableSearch_Service.PwnableSearch_Service_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_PwnableSearch_Service(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
