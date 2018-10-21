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

// BlueprintGeneratedClass GrappleHook_Base_Rope.GrappleHook_Base_Rope_C
// 0x0020 (0x03D8 - 0x03B8)
class AGrappleHook_Base_Rope_C : public APwndRopeActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      TempTeamNum;                                              // 0x03C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UMaterialInterface*                          AllyMaterial;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          EnemyMaterial;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleHook_Base_Rope.GrappleHook_Base_Rope_C");
		return ptr;
	}


	void OnRep_TempTeamNum();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrappleHook_Base_Rope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
