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

// BlueprintGeneratedClass LootItem_BP.LootItem_BP_C
// 0x00A8 (0x0430 - 0x0388)
class ALootItem_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            LootSummaryWidget;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot1;                                        // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    LootSelected;                                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Hovered;                                                  // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnHovered;                                                // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Selected;                                                 // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FGuid                                       myGUID;                                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Move;                                                     // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UCameraComponent*                            LevelCamera;                                              // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                LevelCamera02;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IntialLocation;                                           // 0x0418(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationToTravel;                                         // 0x0424(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItem_BP.LootItem_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Update_Actor_Loot_Summary(bool Duplicate, int Value, const struct FGuid& Guid);
	void Assign_Button(class UButton* Button);
	void Clicked();
	void OnUnhovered_Event_1();
	void ResetCam();
	void OnHovered_Event_1();
	void Assign_GeneralUseCaseButton(class UUI_GeneralUseCaseButton* GeneralUseCaseButton);
	void OnButtonPressed();
	void ExecuteUbergraph_LootItem_BP(int EntryPoint);
	void Move__DelegateSignature();
	void Selected__DelegateSignature();
	void UnHovered__DelegateSignature();
	void Hovered__DelegateSignature();
	void LootSelected__DelegateSignature(const struct FGuid& Guid, bool Duplicate, int Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
