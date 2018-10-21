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

// BlueprintGeneratedClass Base_FX_PwnBot_Gibbed.Base_FX_PwnBot_Gibbed_C
// 0x0030 (0x03F0 - 0x03C0)
class ABase_FX_PwnBot_Gibbed_C : public ABase_FX_Gibbed_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Pwnbot_Destruction_Remote;                              // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Pwnbot_Destruction_Local;                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PwnbotTempTexture;                                        // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NewVar_1;                                                 // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PwnbotCurrentSkinTexture;                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_FX_PwnBot_Gibbed.Base_FX_PwnBot_Gibbed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Base_FX_PwnBot_Gibbed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
