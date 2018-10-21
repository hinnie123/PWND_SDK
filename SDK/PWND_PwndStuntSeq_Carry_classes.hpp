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

// BlueprintGeneratedClass PwndStuntSeq_Carry.PwndStuntSeq_Carry_C
// 0x0010 (0x0090 - 0x0080)
class UPwndStuntSeq_Carry_C : public UBase_StuntSequence_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	float                                              CarryTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CarryTimeInterval;                                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndStuntSeq_Carry.PwndStuntSeq_Carry_C");
		return ptr;
	}


	void OnTick(float* DeltaSeconds);
	void ExecuteUbergraph_PwndStuntSeq_Carry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
