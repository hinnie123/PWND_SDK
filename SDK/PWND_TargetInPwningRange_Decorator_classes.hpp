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

// BlueprintGeneratedClass TargetInPwningRange_Decorator.TargetInPwningRange_Decorator_C
// 0x0030 (0x00D0 - 0x00A0)
class UTargetInPwningRange_Decorator_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               RetVal;                                                   // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      Target;                                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TargetInPwningRange_Decorator.TargetInPwningRange_Decorator_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
