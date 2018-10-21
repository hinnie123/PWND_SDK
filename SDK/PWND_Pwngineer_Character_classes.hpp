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

// BlueprintGeneratedClass Pwngineer_Character.Pwngineer_Character_C
// 0x0021 (0x12F9 - 0x12D8)
class APwngineer_Character_C : public ABase_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12D8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             HoverEmpty;                                               // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HoverLoop;                                                // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Pwngineer_Hover_Thruster;                               // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayedEmpty;                                             // 0x12F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pwngineer_Character.Pwngineer_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Pwngineer_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
