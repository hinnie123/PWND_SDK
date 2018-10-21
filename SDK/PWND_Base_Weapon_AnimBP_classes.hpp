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

// AnimBlueprintGeneratedClass Base_Weapon_AnimBP.Base_Weapon_AnimBP_C
// 0x0F98 (0x13C0 - 0x0428)
class UBase_Weapon_AnimBP_C : public UPwndAnimInstanceWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_628CBC99466F267A15D3479C8B6EFD7D;      // 0x0430(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FFABC274052DB1DAA7AD2A8CE829DCC;// 0x0480(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F30710E343635701D08135A9C0BD7447;// 0x0500(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_113E0585441E4BB623EC7CABF8B061EF;// 0x0580(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6229BD234F21C5D0F38F0FB0A1700AFF;      // 0x05F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_754CE0F141DCA860BF396BA859CDD7C4;// 0x0650(0x0048)
	struct FPwndAnimNode_SequencePlayer                PwndAnimGraphNode_SequencePlayer_C91B60214E1AEA9EF20983ADCA8A80D5;// 0x0698(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_A84ACA0C46D98BC3ABFD9882A91BFF34;// 0x0710(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C17088B4E6A98DA33C7EEB1A51B2BDB;// 0x0868(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A380A76447B2C4AB7CB0CB96239951F1;// 0x0938(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17FD0DB14CE9631652DCA39CF78E02D0;// 0x09A8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_457BCAF84947E97F9F5A108B09FB1E61;// 0x0AD0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A0598ECE47122D2865037B8AFA0D5861;// 0x0BA0(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_73C9AE714834211C509820B3BF56C670;// 0x0C70(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_295F102B4FC4C97AE4348DACB6EBB023;// 0x0CB8(0x0048)
	struct FPwndAnimNode_WeaponRetraction              PwndAnimGraphNode_WeaponRetraction_315AA748432D30609A963D8C8FAFC846;// 0x0D00(0x01A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_968483334C82B6B461361F938043F075;// 0x0EA0(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A987CFEC4833878D8B7CED832D5A494D;// 0x0FC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16D68E9C4B9B323A8D7F4191A5C1F2E7;// 0x1040(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F32F08904C20E78E3415BC87B0125662;// 0x10B0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D4B00E2743898354048F1883CF3D2479;// 0x1120(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9B5201F46C1DD6D276080A13027A7D9;      // 0x11F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EEC9E26E4D6D227622F3AE8606B67B98;// 0x1250(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_71D1E6C342CD91F7E9C09F81B7C8F1A1;// 0x1298(0x00D8)
	float                                              Speed;                                                    // 0x1370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sprint;                                                   // 0x1374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Falling;                                                  // 0x1375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1376(0x0002) MISSED OFFSET
	struct FRotator                                    BaseAimRot;                                               // 0x1378(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastBaseAimRot;                                           // 0x1384(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BaseAimRotDelta;                                          // 0x1390(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnRot;                                                  // 0x139C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LastServerTimeStamp;                                      // 0x13A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFallingTime;                                          // 0x13AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastNotFallingTime;                                       // 0x13B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFallingDuration;                                      // 0x13B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseIdleTurnAimOffset;                                     // 0x13B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x13B9(0x0003) MISSED OFFSET
	float                                              Turn_Interp_Speed;                                        // 0x13BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Base_Weapon_AnimBP.Base_Weapon_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_PwndAnimGraphNode_SequencePlayer_C91B60214E1AEA9EF20983ADCA8A80D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_A84ACA0C46D98BC3ABFD9882A91BFF34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendListByBool_0C17088B4E6A98DA33C7EEB1A51B2BDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_SequencePlayer_A380A76447B2C4AB7CB0CB96239951F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendSpacePlayer_17FD0DB14CE9631652DCA39CF78E02D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendListByBool_457BCAF84947E97F9F5A108B09FB1E61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendListByBool_A0598ECE47122D2865037B8AFA0D5861();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendSpacePlayer_968483334C82B6B461361F938043F075();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_TwoWayBlend_A987CFEC4833878D8B7CED832D5A494D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_SequencePlayer_16D68E9C4B9B323A8D7F4191A5C1F2E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_SequencePlayer_F32F08904C20E78E3415BC87B0125662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_BlendListByBool_D4B00E2743898354048F1883CF3D2479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_TransitionResult_F30710E343635701D08135A9C0BD7447();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_TransitionResult_3FFABC274052DB1DAA7AD2A8CE829DCC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_Weapon_AnimBP_AnimGraphNode_SequencePlayer_113E0585441E4BB623EC7CABF8B061EF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Cam_Shake();
	void ExecuteUbergraph_Base_Weapon_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
