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

// BlueprintGeneratedClass Base_CPP_Projectile.Base_CPP_Projectile_C
// 0x0030 (0x11A0 - 0x1170)
class ABase_CPP_Projectile_C : public APwndProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1170(0x0008) (Transient, DuplicateTransient)
	float                                              DamageRadiusPreMul;                                       // 0x1178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadiusAdd;                                          // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountPreMul;                                       // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountAdd;                                          // 0x1184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MomentumAmountPreMul;                                     // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MomentumAmountAdd;                                        // 0x118C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealAmountPreMul;                                         // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealAmountAdd;                                            // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealRadiusPreMul;                                         // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealRadiusAdd;                                            // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_CPP_Projectile.Base_CPP_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTuneProjectile();
	void ExecuteUbergraph_Base_CPP_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
