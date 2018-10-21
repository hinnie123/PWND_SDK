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

// BlueprintGeneratedClass GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C
// 0x0044 (0x04F4 - 0x04B0)
class AGameMode_Tutorial_HUD_C : public ABase_CPP_HUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	struct FString                                     HUDText;                                                  // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRenderHUDText;                                           // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	struct FVector2D                                   HUDTextPos;                                               // 0x04CC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UFont*                                       HUDTextFont;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDTextScale;                                             // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor;                                             // 0x04E4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDrawHUD(int* SizeX, int* SizeY);
	void SetTutorialHUDText(const struct FString& Text, const struct FLinearColor& Color, const struct FVector2D& Position, class UFont* Font, float Scale);
	void ClearTutorialHUDText();
	void ExecuteUbergraph_GameMode_Tutorial_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
