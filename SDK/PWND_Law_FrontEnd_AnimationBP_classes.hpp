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

// AnimBlueprintGeneratedClass Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C
// 0x0120 (0x0498 - 0x0378)
class ULaw_FrontEnd_AnimationBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E783010E415563C51DDDE99FE9664DE9;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_72F1D0204FBC9452B17B8CA86E0A4F07;      // 0x03C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC850CA64B45B74F43DAB68E46478B0C;// 0x0428(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Law_FrontEnd_AnimationBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
