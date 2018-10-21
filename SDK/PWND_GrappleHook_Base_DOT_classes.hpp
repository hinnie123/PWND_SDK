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

// BlueprintGeneratedClass GrappleHook_Base_DOT.GrappleHook_Base_DOT_C
// 0x0010 (0x1568 - 0x1558)
class UGrappleHook_Base_DOT_C : public UBase_AbilityDOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1558(0x0008) (Transient, DuplicateTransient)
	class UGrappled_Widget_C*                          GrappledWidget;                                           // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleHook_Base_DOT.GrappleHook_Base_DOT_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_GrappleHook_Base_DOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
