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

// BlueprintGeneratedClass Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C
// 0x0017 (0x0438 - 0x0421)
class ANinja_Sword_Impact_FX_C : public ABase_FX_Explosion_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FName                                       NewVar_0_1;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_Impact_FX.Ninja_Sword_Impact_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Ninja_Sword_Impact_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
