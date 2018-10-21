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

// BlueprintGeneratedClass FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C
// 0x0538 (0x08C8 - 0x0390)
class AFrontEnd_LootCrate_ART_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x03A0(0x0520) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APostProcessVolume*                          PostProcessVolume2_0_ExecuteUbergraph_FrontEnd_LootCrate_ART_RefProperty;// 0x08C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_FrontEnd_LootCrate_ART(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
