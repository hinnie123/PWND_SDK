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

// BlueprintGeneratedClass FrontEnd_LootCrate.FrontEnd_LootCrate_C
// 0x0070 (0x0400 - 0x0390)
class AFrontEnd_LootCrate_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_1_Lerp_Value_593D43384BDCE28375410C94E4A2D395;   // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_593D43384BDCE28375410C94E4A2D395;   // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Lerp_Value_78FA79494617F251CE16C2ADF0CFA423;   // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_78FA79494617F251CE16C2ADF0CFA423;   // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        LevelSeq;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LightBeam_RarityEmissiveColor;                            // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CrateLight_RarityEmissiveColor;                           // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                Camera_LootCrate_ExecuteUbergraph_FrontEnd_LootCrate_RefProperty;// 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CameraMid_ExecuteUbergraph_FrontEnd_LootCrate_RefProperty;// 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraLootcrate_BP_C*                       CameraLootcrate_BP_227_ExecuteUbergraph_FrontEnd_LootCrate_RefProperty;// 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          LootCrateStandIn_ExecuteUbergraph_FrontEnd_LootCrate_RefProperty;// 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          LootCrate2_7_ExecuteUbergraph_FrontEnd_LootCrate_RefProperty;// 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontEnd_LootCrate.FrontEnd_LootCrate_C");
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void CamMove(const struct FTransform& Position, class AActor* ActorRef);
	void NoCrates();
	void HasCrate();
	void Set_Crate_Rarity(TEnumAsByte<EeItemRarity> Highest_Rarity);
	void RE_Set_Loot_Camera();
	void ExecuteUbergraph_FrontEnd_LootCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
