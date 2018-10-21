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

// WidgetBlueprintGeneratedClass BP_Options_VideoOptions.BP_Options_VideoOptions_C
// 0x0020 (0x0250 - 0x0230)
class UBP_Options_VideoOptions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_Contents;                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_Selectable_Group_C*                      UI_Selectable_Group;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_OptionsScreen_C*                         OwnerScreen;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Options_VideoOptions.BP_Options_VideoOptions_C");
		return ptr;
	}


	void ScrollWidgetIntoView(class UUI_MenuNavigable* WidgetInQuestion, bool* Result);
	void CloseSetting(int widgetIndex);
	void isSettingOpen(bool* bResult, int* Index);
	void GetFirstNonTitleOptionButton(class UWidget** outputWidget, bool* bIsValid);
	void GetPreviousNonTitleOptionButton(int Index, class UWidget** outputWidget, bool* bIsValid);
	void Populate(class UBP_OptionsScreen_C* Options_Screen);
	void Change_Value(int Option_button_index, int Value);
	void SetAttentionOnTopElementOfPage();
	void ExecuteUbergraph_BP_Options_VideoOptions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
