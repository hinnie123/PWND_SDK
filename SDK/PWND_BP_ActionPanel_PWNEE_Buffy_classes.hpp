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

// WidgetBlueprintGeneratedClass BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C
// 0x0008 (0x0250 - 0x0248)
class UBP_ActionPanel_PWNEE_Buffy_C : public UBP_ActionPanel_PWNEE_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_BP_ActionPanel_PWNEE_Buffy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
