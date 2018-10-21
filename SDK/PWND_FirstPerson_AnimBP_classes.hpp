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

// AnimBlueprintGeneratedClass FirstPerson_AnimBP.FirstPerson_AnimBP_C
// 0x08AA (0x0C22 - 0x0378)
class UFirstPerson_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1DF598784F4A087A4ED10A805C775AC8;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA3192DC415202A934CDF598A41EFCDE;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C413F41496E16A9E28BB6886E13325E;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3E5D0514472C54EE7856B9AD4BDD068;// 0x0650(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7;// 0x06D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC6F51DD47C7BDF0925AB6BC839E834B;// 0x0750(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D916F73945F6040112B2C1AAD24BA05E;// 0x07C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6185C6CD492FBBA77199998F8E64BA49;// 0x0808(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_22EFEF3344C16D03398133927FDEB383;// 0x0878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6641E0144D1F470927AA89C762FE920;// 0x08C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7193846E40FEA5A17832388CFB6D5ECA;// 0x0930(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFF64F4B46D7BCDA664E36A93E4AC4AA;// 0x0978(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DEFCC83E421E50B38F25819E1EB93A5B;// 0x09E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4869ECD8456855570F8CB5A7ECB06A59;// 0x0A30(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ADB52C394181B8382543E7B06CC0E78F;// 0x0AA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_885684DE4B0E2CE3646364873E1871B5;// 0x0AE8(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3BF6EDDF4D71635E122E509C22B58E95;      // 0x0BC0(0x0060)
	bool                                               IsMoving;                                                 // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0C21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FirstPerson_AnimBP.FirstPerson_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_A3E5D0514472C54EE7856B9AD4BDD068();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_2C413F41496E16A9E28BB6886E13325E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DA3192DC415202A934CDF598A41EFCDE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B();
	void ExecuteUbergraph_FirstPerson_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
