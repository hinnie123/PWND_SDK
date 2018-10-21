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

// BlueprintGeneratedClass Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C
// 0x0008 (0x09E8 - 0x09E0)
class AGamemode_Challenge_NormalTimer_C : public AGamemode_Challenge_BaseGame_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Gamemode_Challenge_NormalTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
