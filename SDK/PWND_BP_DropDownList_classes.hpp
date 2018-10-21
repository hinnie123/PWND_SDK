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

// WidgetBlueprintGeneratedClass BP_DropDownList.BP_DropDownList_C
// 0x0028 (0x0258 - 0x0230)
class UBP_DropDownList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalPanel_DropDownList;                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_DropDownBase_C*                          DropDownBase;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrValue;                                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UFrontEnd_BaseScreen*                        OwningScreen;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DropDownList.BP_DropDownList_C");
		return ptr;
	}


	void DoesListElementHaveAttention(bool* bResult);
	void Create_List(TArray<struct FText> Contents);
	void Option_Selected(int Index);
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void Pass_Front_End_Screen_Reference(class UFrontEnd_BaseScreen* OwningScreen);
	void ProvideAttentionToTopElement();
	void ExecuteUbergraph_BP_DropDownList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
