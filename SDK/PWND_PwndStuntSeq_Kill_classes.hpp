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

// BlueprintGeneratedClass PwndStuntSeq_Kill.PwndStuntSeq_Kill_C
// 0x0008 (0x0088 - 0x0080)
class UPwndStuntSeq_Kill_C : public UBase_StuntSequence_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndStuntSeq_Kill.PwndStuntSeq_Kill_C");
		return ptr;
	}


	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others);
	void ExecuteUbergraph_PwndStuntSeq_Kill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
