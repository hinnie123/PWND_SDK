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

// WidgetBlueprintGeneratedClass BP_OptionsType_Slider.BP_OptionsType_Slider_C
// 0x0038 (0x0268 - 0x0230)
class UBP_OptionsType_Slider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class USlider*                                     Slider_161;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text_SliderValue;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     Index;                                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    SelectionMade;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsType_Slider.BP_OptionsType_Slider_C");
		return ptr;
	}


	void BndEvt__Slider_160_K2Node_ComponentBoundEvent_28_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_160_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__Slider_160_K2Node_ComponentBoundEvent_18_OnControllerCaptureEndEvent__DelegateSignature();
	void Set_Slider_Index(const struct FString& Index);
	void Change_Value(int Slider_Value);
	void Toggle();
	void LeftFunctionality();
	void RightFunctionality();
	void ExecuteUbergraph_BP_OptionsType_Slider(int EntryPoint);
	void SelectionMade__DelegateSignature(const struct FString& Index, int Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
