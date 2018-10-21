// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnPauseChallengeObject_BPInterface.UnPauseChallengeObject_BPInterface_C.UnpauseChallengeObject
// (Public, BlueprintCallable, BlueprintEvent)

void UUnPauseChallengeObject_BPInterface_C::UnpauseChallengeObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnPauseChallengeObject_BPInterface.UnPauseChallengeObject_BPInterface_C.UnpauseChallengeObject");

	UUnPauseChallengeObject_BPInterface_C_UnpauseChallengeObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
