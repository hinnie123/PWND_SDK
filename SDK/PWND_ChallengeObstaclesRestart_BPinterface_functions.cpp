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

// Function ChallengeObstaclesRestart_BPinterface.ChallengeObstaclesRestart_BPinterface_C.RestartChallengeItem
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeObstaclesRestart_BPinterface_C::RestartChallengeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeObstaclesRestart_BPinterface.ChallengeObstaclesRestart_BPinterface_C.RestartChallengeItem");

	UChallengeObstaclesRestart_BPinterface_C_RestartChallengeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
