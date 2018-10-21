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

// WidgetBlueprintGeneratedClass VerticalProgressBarGraph.VerticalProgressBarGraph_C
// 0x0008 (0x0250 - 0x0248)
class UVerticalProgressBarGraph_C : public UUI_VerticalBarGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VerticalProgressBarGraph.VerticalProgressBarGraph_C");
		return ptr;
	}


	void OnBarAdded(class UUserWidget** newBarWidget, int* teamAffiliationIndex);
	void ExecuteUbergraph_VerticalProgressBarGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
