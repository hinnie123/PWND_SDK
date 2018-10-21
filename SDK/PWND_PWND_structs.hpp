#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PWND.eCharacterRole
enum class EeCharacterRole : uint8_t
{
	Assault                        = 0,
	Defender                       = 1,
	Specialist                     = 2,
	Support                        = 3,
	Unknown                        = 4,
	eCharacterRole_MAX             = 5
};


// Enum PWND.eItemRarity
enum class EeItemRarity : uint8_t
{
	NoRarity                       = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Epic                           = 4,
	Unknown                        = 5,
	eItemRarity_MAX                = 6
};


// Enum PWND.ePawnActionState
enum class EePawnActionState : uint8_t
{
	Normal                         = 0,
	Carrier                        = 1,
	Pwner                          = 2,
	RemotePwner                    = 3,
	Reviver                        = 4,
	Humiliater                     = 5,
	Interacting                    = 6,
	Pwnable                        = 7,
	Carried                        = 8,
	Pwnee                          = 9,
	RemotePwnee                    = 10,
	Revivee                        = 11,
	Humiliated                     = 12,
	Respawning                     = 13,
	TornOff                        = 14,
	MAX                            = 15,
	ePawnActionState_MAX           = 16
};


// Enum PWND.eEventTrigger
enum class EeEventTrigger : uint8_t
{
	None                           = 0,
	Acquired                       = 1,
	Activated                      = 2,
	Deactivated                    = 3,
	Timer                          = 4,
	Damage                         = 5,
	Damage_Heat                    = 6,
	Kill                           = 7,
	KillAssist                     = 8,
	RocketJump                     = 9,
	RocketJumpWallH                = 10,
	RocketJumpWallV                = 11,
	RocketJumpFloorH               = 12,
	RocketJumpFloorV               = 13,
	RocketJumpDown                 = 14,
	RocketJumpAir                  = 15,
	RocketJumpSuper                = 16,
	SpecialMovement                = 17,
	PhysicsChange                  = 18,
	EnemyTeamDown                  = 19,
	PwnParty                       = 20,
	Overheated                     = 21,
	Overheat_CooledOff             = 22,
	Pickup_Health                  = 23,
	Pickup_GamePlayItem            = 24,
	Revive_Self                    = 25,
	Heal                           = 26,
	Revive_Started                 = 27,
	Revive_Completed               = 28,
	Revive_Denied                  = 29,
	Revive_Denied_Assist           = 30,
	Revive_Cancelled               = 31,
	PWN_Started                    = 32,
	PWN_Started_Stack              = 33,
	PWN_Completed                  = 34,
	PWN_Completed_Stack            = 35,
	PWN_Denied                     = 36,
	PWN_Denied_Assist              = 37,
	PWN_Denied_Stack               = 38,
	PWN_Cancelled                  = 39,
	PWN_Cancelled_Stack            = 40,
	PWN_Instant                    = 41,
	PWN_Instant_Stack              = 42,
	ScorePoints                    = 43,
	Carry_Pickup                   = 44,
	Carry_Drop                     = 45,
	Carry_Denied                   = 46,
	Entered_PwnZone                = 47,
	Exited_PwnZone                 = 48,
	Spawned_Shield                 = 49,
	Spawned_Shield_Encompass       = 50,
	Spawned_Shield_Replaced        = 51,
	Entered_Shield                 = 52,
	Exited_Shield                  = 53,
	Shield_Damaged                 = 54,
	Shield_Protected               = 55,
	Shield_PanelDestroyed          = 56,
	Shield_Destroyed               = 57,
	Shield_Deactivated             = 58,
	Mantle                         = 59,
	MAX                            = 60,
	eEventTrigger_MAX              = 61
};


// Enum PWND.EndGameReason
enum class EndGameReason : uint8_t
{
	None                           = 0,
	Unknown                        = 1,
	ScoreLimit                     = 2,
	TimeLimit                      = 3,
	ImbalancedTeam                 = 4,
	LowTeamCount                   = 5,
	EmptyTeam                      = 6,
	Empty                          = 7,
	PartialConnect                 = 8,
	NoConnect                      = 9,
	CheatEndGame                   = 10,
	EndGameReason_MAX              = 11
};


// Enum PWND.ePawnWeapon
enum class EePawnWeapon : uint8_t
{
	Main                           = 0,
	PrimaryAbility                 = 1,
	SecondaryAbility               = 2,
	AllAbilities                   = 3,
	AllWeapons                     = 4,
	ePawnWeapon_MAX                = 5
};


// Enum PWND.eRJDir
enum class EeRJDir : uint8_t
{
	RJ_Vertical                    = 0,
	RJ_Forward                     = 1,
	RJ_ForwardRight                = 2,
	RJ_Right                       = 3,
	RJ_BackRight                   = 4,
	RJ_Back                        = 5,
	RJ_BackLeft                    = 6,
	RJ_Left                        = 7,
	RJ_ForwardLeft                 = 8,
	RJ_DIR_MAX                     = 9,
	RJ_MAX                         = 10
};


// Enum PWND.eBotDifficulty
enum class EeBotDifficulty : uint8_t
{
	Easy                           = 0,
	Medium                         = 1,
	Hard                           = 2,
	Dynamic                        = 3,
	Random                         = 4,
	RandomEverySpawn               = 5,
	MAX                            = 6,
	eBotDifficulty_MAX             = 7
};


// Enum PWND.eTeamDesc
enum class EeTeamDesc : uint8_t
{
	Self                           = 0,
	Ally                           = 1,
	Neutral                        = 2,
	Enemy                          = 3,
	MAX                            = 4,
	eTeamDesc_MAX                  = 5
};


// Enum PWND.eCaptureState
enum class EeCaptureState : uint8_t
{
	Empty                          = 0,
	Capturing                      = 1,
	Contested                      = 2,
	Breaking                       = 3,
	LockedDown                     = 4,
	Custom                         = 5,
	eCaptureState_MAX              = 6
};


// Enum PWND.RewardId
enum class ERewardId : uint8_t
{
	HighestRating                  = 0,
	HighestPwnScore                = 1,
	HighestDamageDealt             = 2,
	HighestKDR                     = 3,
	HighestSaveScore               = 4,
	LeastDamageTaken               = 5,
	RewardId_MAX                   = 6
};


// Enum PWND.ePwndAnimCondition
enum class EePwndAnimCondition : uint8_t
{
	Idle                           = 0,
	Strafing                       = 1,
	Falling                        = 2,
	MAX                            = 3,
	ePwndAnimCondition_MAX         = 4
};


// Enum PWND.ePwndAttackMontageType
enum class EePwndAttackMontageType : uint8_t
{
	Air                            = 0,
	Ground                         = 1,
	GroundIdle                     = 2,
	ePwndAttackMontageType_MAX     = 3
};


// Enum PWND.eHitReactDir
enum class EeHitReactDir : uint8_t
{
	Forward                        = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	eHitReactDir_MAX               = 4
};


// Enum PWND.eHeatStatus
enum class EeHeatStatus : uint8_t
{
	Normal                         = 0,
	Warning                        = 1,
	Overheated                     = 2,
	OverheatedCooling              = 3,
	MAX                            = 4,
	eHeatStatus_MAX                = 5
};


// Enum PWND.eRocketJumpControlType
enum class EeRocketJumpControlType : uint8_t
{
	ChargeAutoRelease              = 0,
	ChargeBinary                   = 1,
	ChargeLinear                   = 2,
	ChargeLinearExtraVert          = 3,
	ChargeLinearFourWay            = 4,
	AccelBinary                    = 5,
	GroundVerticalAirHorizontal    = 6,
	AccelLinear                    = 7,
	VelocityBinary                 = 8,
	VelocityLinear                 = 9,
	GroundVelocityBinaryAirAccelBinary = 10,
	GroundVelocityBinaryAirAccelLinear = 11,
	GroundVelocityLinearAirAccelBinary = 12,
	GroundVelocityLinearAirAccelLinear = 13,
	AccelLinearDecay               = 14,
	AccelLinearDigitalDecay        = 15,
	DoubleTapVertical              = 16,
	DoubleTapHorizontal            = 17,
	AccelBinaryDoubleTapVertical   = 18,
	MAX                            = 19,
	eRocketJumpControlType_MAX     = 20
};


// Enum PWND.eCustomMovement
enum class EeCustomMovement : uint8_t
{
	CUSTOM_MOVE_None               = 0,
	CUSTOM_MOVE_GrindRail          = 1,
	CUSTOM_MOVE_GrappleHook        = 2,
	CUSTOM_MOVE_GrappleHookExternal = 3,
	CUSTOM_MOVE_RocketJump         = 4,
	CUSTOM_MOVE_Carried            = 5,
	CUSTOM_MOVE_SkyDash            = 6,
	CUSTOM_MOVE_Katamari           = 7,
	CUSTOM_MOVE_Mantle             = 8,
	CUSTOM_MOVE_AirHover           = 9,
	CUSTOM_MOVE_BodyStack          = 10,
	CUSTOM_MOVE_PwnerReviver       = 11,
	CUSTOM_MOVE_WallRun            = 12,
	CUSTOM_MOVE_PassiveWallRun     = 13,
	CUSTOM_MOVE_GroundSlam         = 14,
	CUSTOM_MOVE_MoveToExternal     = 15,
	CUSTOM_MOVE_HoldPositionExternal = 16,
	CUSTOM_MOVE_CharacterPullInAttacker = 17,
	CUSTOM_MOVE_CharacterPullInTarget = 18,
	CUSTOM_MOVE_TankMode_Walking   = 19,
	CUSTOM_MOVE_TankMode_Falling   = 20,
	CUSTOM_MOVE_MAX                = 21
};


// Enum PWND.eDamageElement
enum class EeDamageElement : uint8_t
{
	None                           = 0,
	Physical                       = 1,
	Fire                           = 2,
	Ice                            = 3,
	Electric                       = 4,
	eDamageElement_MAX             = 5
};


// Enum PWND.EEndOfMatchPwningAnimStage
enum class EEndOfMatchPwningAnimStage : uint8_t
{
	ReadyToPlay                    = 0,
	IntroPlaying                   = 1,
	LoopPlaying                    = 2,
	OutroPlaying                   = 3,
	Done                           = 4,
	EEndOfMatchPwningAnimStage_MAX = 5
};


// Enum PWND.EEndOfMatchSequenceStage
enum class EEndOfMatchSequenceStage : uint8_t
{
	Initial                        = 0,
	WinningPwn                     = 1,
	ShowRankings                   = 2,
	ShowLoadouts                   = 3,
	Done                           = 4,
	EEndOfMatchSequenceStage_MAX   = 5
};


// Enum PWND.eFieldTagType
enum class EeFieldTagType : uint8_t
{
	PawnNameplate                  = 0,
	PawnPwnable                    = 1,
	PawnPwning                     = 2,
	PawnReviving                   = 3,
	PawnCarrying                   = 4,
	PawnReviveDenied               = 5,
	PawnPwned                      = 6,
	PawnPwnDenied                  = 7,
	Generic                        = 8,
	PwnBall                        = 9,
	PwnFlag                        = 10,
	HealthPack                     = 11,
	CapturePoint                   = 12,
	CapturePointField              = 13,
	PawnPrePwnstack                = 14,
	PawnPwnstack                   = 15,
	Basic                          = 16,
	Projectile                     = 17,
	Respawn                        = 18,
	NumFieldTagTypes               = 19,
	eFieldTagType_MAX              = 20
};


// Enum PWND.ePwndGameplayEvent
enum class EePwndGameplayEvent : uint8_t
{
	Invalid                        = 0,
	Location                       = 1,
	Damage                         = 2,
	Kill                           = 3,
	PwnStart                       = 4,
	PwnCancel                      = 5,
	PwnComplete                    = 6,
	ReviveStart                    = 7,
	ReviveCancel                   = 8,
	ReviveComplete                 = 9,
	ReviveSelf                     = 10,
	Heal                           = 11,
	RocketJump                     = 12,
	RocketJumpFailed               = 13,
	SpecialMovement                = 14,
	SpecialMovementFailed          = 15,
	MantleAuto                     = 16,
	MantleManual                   = 17,
	FireWeapon                     = 18,
	ProjectileLaunch               = 19,
	ProjectileDetonate             = 20,
	HeadBonk                       = 21,
	SuddenStop                     = 22,
	HiSpeedImpact                  = 23,
	Score                          = 24,
	RankUp                         = 25,
	SpawnShield                    = 26,
	ShutdownShield                 = 27,
	DamageShieldPanel              = 28,
	ShutdownShieldPanel            = 29,
	ePwndGameplayEvent_MAX         = 30
};


// Enum PWND.EInteractionSegmentType
enum class EInteractionSegmentType : uint8_t
{
	Intro                          = 0,
	Outro                          = 1,
	Loop                           = 2,
	Surf                           = 3,
	MAX                            = 4,
	EInteractionSegmentType_MAX    = 5
};


// Enum PWND.ECancelMatchmakingReason
enum class ECancelMatchmakingReason : uint8_t
{
	UserCancelled                  = 0,
	Lost                           = 1,
	PartyMemberIgnoreLost          = 2,
	ECancelMatchmakingReason_MAX   = 3
};


// Enum PWND.ERewardType
enum class ERewardType : uint8_t
{
	MatchComplete                  = 0,
	Victory                        = 1,
	FirstPlace                     = 2,
	SecondPlace                    = 3,
	ThirdPlace                     = 4,
	FirstWinOfTheDay               = 5,
	AccoladeFirst                  = 6,
	AccoladeSecond                 = 7,
	AccoladeThird                  = 8,
	ERewardType_MAX                = 9
};


// Enum PWND.EShieldBuckyBall
enum class EShieldBuckyBall : uint8_t
{
	SBBT_Goldberg_1                = 0,
	SBBT_Goldberg_101              = 1,
	SBBT_Goldberg_2                = 2,
	SBBT_Goldberg_MAX              = 3
};


// Enum PWND.ESpectateCameraMode
enum class ESpectateCameraMode : uint8_t
{
	SM_Free                        = 0,
	SM_Follow                      = 1,
	SM_Smart                       = 2,
	SM_COUNT                       = 3,
	SM_MAX                         = 4
};


// Enum PWND.eTelemetryClass
enum class EeTelemetryClass : uint8_t
{
	Tutorial                       = 0,
	Challenge                      = 1,
	Client                         = 2,
	GameEnd                        = 3,
	eTelemetryClass_MAX            = 4
};


// Enum PWND.ePwndMeshMaterialParamType
enum class EePwndMeshMaterialParamType : uint8_t
{
	None                           = 0,
	Scalar                         = 1,
	Vector                         = 2,
	Texture                        = 3,
	Material                       = 4,
	ePwndMeshMaterialParamType_MAX = 5
};


// Enum PWND.eTimeDilationEffect
enum class EeTimeDilationEffect : uint8_t
{
	Normal                         = 0,
	Action                         = 1,
	Movement                       = 2,
	Aiming                         = 3,
	eTimeDilationEffect_MAX        = 4
};


// Enum PWND.eVelocityInheritance
enum class EeVelocityInheritance : uint8_t
{
	None                           = 0,
	Full                           = 1,
	Parallel                       = 2,
	ParallelForward                = 3,
	ParallelReverse                = 4,
	Horizontal                     = 5,
	Vertical                       = 6,
	Horizontal_Parallel            = 7,
	Horizontal_ParallelForward     = 8,
	Horizontal_ParallelReverse     = 9,
	Vertical_Parallel              = 10,
	Vertical_ParallelForward       = 11,
	Vertical_ParallelReverse       = 12,
	eVelocityInheritance_MAX       = 13
};


// Enum PWND.eRatingType
enum class EeRatingType : uint8_t
{
	Unknown                        = 0,
	Pwn                            = 1,
	Damage                         = 2,
	Kill                           = 3,
	Assist                         = 4,
	Deny                           = 5,
	Revive                         = 6,
	Defend                         = 7,
	MAX                            = 8,
	eRatingType_MAX                = 9
};


// Enum PWND.eEventTriggerState
enum class EeEventTriggerState : uint8_t
{
	None                           = 0,
	AI                             = 1,
	Player                         = 2,
	Self                           = 3,
	OwnedAI                        = 4,
	Ally                           = 5,
	Enemy                          = 6,
	KillerOf                       = 7,
	Alive                          = 8,
	Pwnable                        = 9,
	Stacked                        = 10,
	Respawning                     = 11,
	Over0PctHeat                   = 12,
	Over25PctHeat                  = 13,
	Over50PctHeat                  = 14,
	Over75PctHeat                  = 15,
	Overheated                     = 16,
	RocketJumpDisabled             = 17,
	WeaponDisabled                 = 18,
	SkillDisabled                  = 19,
	AimingOffset                   = 20,
	Idle                           = 21,
	Dashing                        = 22,
	InAir                          = 23,
	Pwner                          = 24,
	Reviver                        = 25,
	Carrier                        = 26,
	Pwnee                          = 27,
	Revivee                        = 28,
	Carriee                        = 29,
	Surfing                        = 30,
	InShield                       = 31,
	InAShield                      = 32,
	InOwnShield                    = 33,
	InOthersShield                 = 34,
	InAllyShield                   = 35,
	InEnemyShield                  = 36,
	InPwnZone                      = 37,
	InAPwnZone                     = 38,
	PrevOther1                     = 39,
	PrevOther2                     = 40,
	PrevOther3                     = 41,
	PrevOther4                     = 42,
	PrevOther5                     = 43,
	MAX                            = 44,
	eEventTriggerState_MAX         = 45
};


// Enum PWND.eMathOperation
enum class EeMathOperation : uint8_t
{
	Max                            = 0,
	Min                            = 1,
	Average                        = 2,
	Multiply                       = 3,
	Add                            = 4,
	Subtract                       = 5,
	SubtractSwapped                = 6,
	Divide                         = 7,
	DivideSwapped                  = 8,
	Power                          = 9,
	PowerSwapped                   = 10,
	UseFirst                       = 11,
	UseSecond                      = 12,
	One                            = 13,
	Zero                           = 14,
	eMathOperation_MAX             = 15
};


// Enum PWND.EChatChannelType
enum class EChatChannelType : uint8_t
{
	Global                         = 0,
	Match                          = 1,
	Team                           = 2,
	Party                          = 3,
	System                         = 4,
	Announcement                   = 5,
	EChatChannelType_MAX           = 6
};


// Enum PWND.eRealm
enum class EeRealm : uint8_t
{
	Unknown                        = 0,
	Local                          = 1,
	Prototype                      = 2,
	Dev                            = 3,
	QA                             = 4,
	Stage                          = 5,
	Live                           = 6,
	eRealm_MAX                     = 7
};


// Enum PWND.eInGameTipsTrigger
enum class EeInGameTipsTrigger : uint8_t
{
	PreMatchWarmup                 = 0,
	CarryingEnemy                  = 1,
	DeadEnemyProximity             = 2,
	DeadAllyProximity              = 3,
	PwnDoublerProximity            = 4,
	GameTime                       = 5,
	MatchCount                     = 6,
	PrimaryAbilityUsedCount        = 7,
	SecondaryAbilityUsedCount      = 8,
	PwnCount                       = 9,
	PwnDoublerUseCount             = 10,
	ReviveCount                    = 11,
	CarryCount                     = 12,
	CarryPwnCount                  = 13,
	VerticalJumpCount              = 14,
	MovementAbilityUsedCount       = 15,
	eInGameTipsTrigger_MAX         = 16
};


// Enum PWND.EHostRelevantTeamButtonState
enum class EHostRelevantTeamButtonState : uint8_t
{
	HRTBS_EMPTY                    = 0,
	HRTBS_PENDING                  = 1,
	HRTBS_OCCUPIED                 = 2,
	HRTBS_READY                    = 3,
	HRTBS_MAX                      = 4
};


// Enum PWND.EBackendUserRole
enum class EBackendUserRole : uint8_t
{
	BUR_DEVELOPER                  = 0,
	BUR_USER                       = 1,
	BUR_PLAYER                     = 2,
	BUR_CUSTOMER_SERVICE           = 3,
	BUR_GAME_MODERATOR             = 4,
	BUR_GAME_ADMIN                 = 5,
	BUR_GAME_SERVER                = 6,
	BUR_MAX                        = 7
};


// Enum PWND.EPopUpSpawnType
enum class EPopUpSpawnType : uint8_t
{
	PUSPT_CONFIRMATION             = 0,
	PUSPT_ERROR_POPUP              = 1,
	PUSPT_LOADING_TRAINING         = 2,
	PUSPT_MAX                      = 3
};


// Enum PWND.eAimType
enum class EeAimType : uint8_t
{
	Reticle                        = 0,
	ReticleMuzzleBlend             = 1,
	Muzzle                         = 2,
	eAimType_MAX                   = 3
};


// Enum PWND.eWeaponAttachPoint
enum class EeWeaponAttachPoint : uint8_t
{
	None                           = 0,
	Holster                        = 1,
	Hands                          = 2,
	Loadout                        = 3,
	Weapon                         = 4,
	Weapon01                       = 5,
	Weapon02                       = 6,
	eWeaponAttachPoint_MAX         = 7
};


// Enum PWND.eWeaponArrayIndexMode
enum class EeWeaponArrayIndexMode : uint8_t
{
	Default                        = 0,
	ShotCount                      = 1,
	AmmoCountRemaining             = 2,
	AmmoPercentRemaining           = 3,
	ChargePct                      = 4,
	Distance                       = 5,
	eWeaponArrayIndexMode_MAX      = 6
};


// Enum PWND.eWeaponFireType
enum class EeWeaponFireType : uint8_t
{
	Projectile                     = 0,
	InstantHit                     = 1,
	Arc                            = 2,
	Beam                           = 3,
	Custom                         = 4,
	eWeaponFireType_MAX            = 5
};


// Enum PWND.eSpreadType
enum class EeSpreadType : uint8_t
{
	Random                         = 0,
	Fixed_H                        = 1,
	Fixed_V                        = 2,
	Circle                         = 3,
	Circle01                       = 4,
	Larson_H                       = 5,
	Larson_V                       = 6,
	BullsEye                       = 7,
	BullsEye01                     = 8,
	Spiral                         = 9,
	Spiral01                       = 10,
	DualSpiral                     = 11,
	CustomFixed                    = 12,
	eSpreadType_MAX                = 13
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PWND.PwndLoadout
// 0x00B0
struct FPwndLoadout
{
	struct FGuid                                       Character;                                                // 0x0000(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       CharacterSkin;                                            // 0x0010(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       Weapon;                                                   // 0x0020(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       WeaponSkin;                                               // 0x0030(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       PrimaryAbility;                                           // 0x0040(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       SecondaryAbility;                                         // 0x0050(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       Perk;                                                     // 0x0060(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       PWN;                                                      // 0x0070(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       PwnStamp;                                                 // 0x0080(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       Revive;                                                   // 0x0090(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FGuid                                       CustomPwnLine;                                            // 0x00A0(0x0010) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct PWND.rontEnd_LoadoutButtonCharacterReferences
// 0x00C0
struct FrontEnd_LoadoutButtonCharacterReferences
{
	class UFrontEnd_UIButton*                          pFrontEndButton;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPwndLoadout                                Loadout;                                                  // 0x0008(0x00B0)
	bool                                               bIsValid;                                                 // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.FrontEnd_LoadoutCharacterSpawn
// 0x0040
struct FFrontEnd_LoadoutCharacterSpawn
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Transient, IsPlainOldData)
	TArray<struct FTransform>                          BuddyTransforms;                                          // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PurchasableEquipItem
// 0x0018
struct FPurchasableEquipItem
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bAlreadyOwned;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                cost;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.OnlineFriendBPData
// 0x0038
struct FOnlineFriendBPData
{
	class UTexture2D*                                  pAvatarImage;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                progressionLevel;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PlayerId;                                                 // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
};

// ScriptStruct PWND.GuidInventoryItem
// 0x0014
struct FGuidInventoryItem
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.MissionInfo
// 0x0058
struct FMissionInfo
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ProgressType;                                             // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentProgress;                                          // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxProgress;                                              // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CoinQuantity;                                             // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExpQuantity;                                              // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.ActionMappings
// 0x0030
struct FActionMappings
{
	struct FInputActionKeyMapping                      Data;                                                     // 0x0000(0x0028)
	bool                                               bOverrided;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.AxisMappings
// 0x0030
struct FAxisMappings
{
	struct FInputAxisKeyMapping                        Data;                                                     // 0x0000(0x0028)
	bool                                               bOverrided;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.SettingFloatData
// 0x000C
struct FSettingFloatData
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Min;                                                      // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Max;                                                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.CharacterSettings
// 0x0058
struct FCharacterSettings
{
	TArray<struct FActionMappings>                     ActionMappings;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAxisMappings>                       AxisMappings;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FSettingFloatData                           MouseSensitivity;                                         // 0x0020(0x000C) (IsPlainOldData)
	bool                                               MouseSensitivityOverrided;                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMouseInverted;                                           // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMouseInvertedOverrided;                                  // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FSettingFloatData                           ControllerHorizontalSensitivity;                          // 0x0030(0x000C) (IsPlainOldData)
	bool                                               ControllerHorizontalSensitivityOverrided;                 // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FSettingFloatData                           ControllerVerticalSensitivity;                            // 0x0040(0x000C) (IsPlainOldData)
	bool                                               ControllerVerticalSensitivityOverrided;                   // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bControllerHorizontalInverted;                            // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bControllerHorizontalInvertedOverrided;                   // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bControllerVerticalInverted;                              // 0x004F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bControllerVerticalInvertedOverrided;                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.OptionsCache
// 0x0128
struct FOptionsCache
{
	class UPwndGameUserSettings*                       Settings;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayMode;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   WindowedResolution;                                       // 0x000C(0x0008) (IsPlainOldData)
	struct FIntPoint                                   FullScreenResolution;                                     // 0x0014(0x0008) (IsPlainOldData)
	int                                                Gamma;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ContrastMultiplier;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GraphicsQuality;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bVSync;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                Bloom;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DepthOfField;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AmbientOcclusion;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MotionBlur;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MasterVolume;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SFXVolume;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MusicVolume;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InGameVoiceVolume;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LobbyCharacterQuality;                                    // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VoiceActivationMode;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VoiceActivationThreshold;                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoVoiceActivation;                                     // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFilterChatEnabled;                                       // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                FOV;                                                      // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FrameRate;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TMap<struct FGuid, struct FCharacterSettings>      CharacterSettingsData;                                    // 0x0080(0x0050) (ZeroConstructor)
	struct FCharacterSettings                          AllCharacterSettingsData;                                 // 0x00D0(0x0058)
};

// ScriptStruct PWND.ArrayOfInputWidgets
// 0x0010
struct FArrayOfInputWidgets
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct PWND.OnlineFriendSocialBPData
// 0x0038
struct FOnlineFriendSocialBPData
{
	class UTexture2D*                                  pAvatarImage;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                progressionLevel;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnline;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	struct FGuid                                       PlayerId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct PWND.PwndStatAccumulator
// 0x0014
struct FPwndStatAccumulator
{
	int                                                Count;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Total;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Current;                                                  // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinVal;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxVal;                                                   // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PostMatchAccoladeData
// 0x000C
struct FPostMatchAccoladeData
{
	int                                                Type;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.GUTSAttribute
// 0x0010
struct FGUTSAttribute
{
	struct FName                                       AttributeName;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSubAttributes;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.GUTSAttributeModifier
// 0x0038
struct FGUTSAttributeModifier
{
	struct FGUTSAttribute                              Attribute;                                                // 0x0000(0x0010) (Transient)
	class UObject*                                     OwnerDef;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	class UProperty*                                   Property;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreMul;                                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Add;                                                      // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PostMul;                                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.GUTSAttributeModifierAccumulator
// 0x0020
struct FGUTSAttributeModifierAccumulator
{
	TArray<struct FGUTSAttributeModifier>              Modifiers;                                                // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsTuning;                                                // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                TuningCount;                                              // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TuningApplications;                                       // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PostedEventTrigger
// 0x0018
struct FPostedEventTrigger
{
	TEnumAsByte<EeEventTrigger>                        Trigger;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UObject*>                             Others;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndWeaponRepNonFiring
// 0x0008
struct FPwndWeaponRepNonFiring
{
	bool                                               bDetonateLiveProjectilesOnDrop;                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetonateLiveProjectilesOnDeath;                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MaxLiveProjectiles;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.RFloat
// 0x000C
struct FRFloat
{
	float                                              MinVal;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnFiring
// 0x004C
struct FPwndWeaponRepOwnFiring
{
	float                                              FireInterval;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireIntervalDeltaPerShot;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     FireIntervalRange;                                        // 0x0008(0x000C) (Edit, BlueprintVisible)
	float                                              Heat;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFiringAllowRocketJump;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopFiringOnRocketJump;                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFiringWhenWeaponDisabled;                           // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFireWhenOverheated;                                 // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeatResetCoolDelay;                                      // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeatResetCoolRate;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSingleFireEvent;                                      // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireOnRelease;                                           // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FiringMovementSpeedModifier;                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopDashOnFire;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableRefireOnHold;                                     // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FRotator                                    FiringMaxAimSpeed;                                        // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EeWeaponFireType>                      WeaponFireType;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              FireIntervalForgiveness;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLiveProjectilesForFiring;                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     CombatEffectiveRange;                                     // 0x0040(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.QInt
// 0x0014
struct FQInt
{
	bool                                               bQueried;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MinVal;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxVal;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.QIntExp
// 0x0004 (0x0018 - 0x0014)
struct FQIntExp : public FQInt
{
	float                                              Exp;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.QFloat
// 0x0014
struct FQFloat
{
	bool                                               bQueried;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinVal;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVal;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.QFloatExp
// 0x0004 (0x0018 - 0x0014)
struct FQFloatExp : public FQFloat
{
	float                                              Exp;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.TimeDilationEffect
// 0x00A8
struct FTimeDilationEffect
{
	struct FQFloatExp                                  Dilation;                                                 // 0x0000(0x0018) (Edit)
	struct FQFloatExp                                  ActionDilation;                                           // 0x0018(0x0018) (Edit)
	struct FQFloatExp                                  MovementDilation;                                         // 0x0030(0x0018) (Edit)
	struct FQFloatExp                                  AimingDilation;                                           // 0x0048(0x0018) (Edit)
	struct FQFloatExp                                  Duration;                                                 // 0x0060(0x0018) (Edit)
	struct FQFloatExp                                  EaseInTime;                                               // 0x0078(0x0018) (Edit)
	struct FQFloatExp                                  EaseOutTime;                                              // 0x0090(0x0018) (Edit)
};

// ScriptStruct PWND.PwndActorClassFilter
// 0x0020
struct FPwndActorClassFilter
{
	TArray<TAssetPtr<class UClass>>                    AffectsFilter;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    IgnoresFilter;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndDamageEvent
// 0x03C0 (0x0468 - 0x00A8)
struct FPwndDamageEvent : public FPointDamageEvent
{
	struct FQIntExp                                    DamageAmount;                                             // 0x00A8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  MomentumAmount;                                           // 0x00C0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  DamageTgtHeatMul;                                         // 0x00D8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  DamageAttHeatMul;                                         // 0x00F0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  DamageAttSpecialMovementCapacityMul;                      // 0x0108(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  HeatAmount;                                               // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  RJDelayTime;                                              // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  RJDisableTime;                                            // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  SpecialMovementDisableTime;                               // 0x0168(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  MovementDisableTime;                                      // 0x0180(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  WeapDisableTime;                                          // 0x0198(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AbilityDisableTime;                                       // 0x01B0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AimOffsetTime;                                            // 0x01C8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AimOffsetDeg;                                             // 0x01E0(0x0018) (Edit, BlueprintVisible)
	struct FTimeDilationEffect                         TimeDilationEffect;                                       // 0x01F8(0x00A8) (Edit, BlueprintVisible)
	struct FQFloatExp                                  PwnTimerAdd;                                              // 0x02A0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  ReviveTimerAdd;                                           // 0x02B8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  RespawnTimerAdd;                                          // 0x02D0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  HealthEffectiveness;                                      // 0x02E8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  ArmorEffectiveness;                                       // 0x0300(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  ShieldEffectiveness;                                      // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  DamageReductionEffectiveness;                             // 0x0330(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  MinMomentumZPercent;                                      // 0x0348(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  MinMomentumZ;                                             // 0x0360(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  TargetVelocityMod;                                        // 0x0378(0x0018) (Edit, BlueprintVisible)
	float                                              MaxPostMomentumVelocityXY;                                // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPostMomentumVelocityZ;                                 // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropCarry;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrthogonalMomentum;                                      // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMomentumCancelVelInDirection;                            // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMomentumCancelAllVel;                                    // 0x039B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSphericalMomentum;                                       // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetVelocityModXYOnly;                                 // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	class UClass*                                      DotEffect;                                                // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPwndActorClassFilter                       ActorFilter;                                              // 0x03A8(0x0020) (Edit, BlueprintVisible)
	struct FRadialDamageEvent                          EngineRadialDamageEvent;                                  // 0x03C8(0x0040) (BlueprintVisible, BlueprintReadOnly, Transient)
	class AActor*                                      DamagedActor;                                             // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     DamageCauserObject;                                       // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0428(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     MomentumVec;                                              // 0x0434(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	int                                                Ring;                                                     // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RingPct;                                                  // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HitDistance;                                              // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireDistance;                                             // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForcedDamageAmountPct;                                    // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForcedMomentumAmountPct;                                  // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForcedHeatAmountPct;                                      // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerTimeStamp;                                          // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
};

// ScriptStruct PWND.PwndHealEvent
// 0x0008 (0x0470 - 0x0468)
struct FPwndHealEvent : public FPwndDamageEvent
{
	bool                                               bAllowRevive;                                             // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepNonInstantHit
// 0x0030
struct FPwndWeaponRepNonInstantHit
{
	TArray<struct FPwndDamageEvent>                    InstantHitDamages;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndHealEvent>                      InstantHitHeals;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EeWeaponArrayIndexMode>                InstantHitDamageIndexMode;                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponArrayIndexMode>                InstantHitHealIndexMode;                                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateInstantHitDamageIndex;                        // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateInstantHitHealIndex;                          // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateInstantHitDamageIndexExp;                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateInstantHitHealIndexExp;                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnInstantHit
// 0x000C
struct FPwndWeaponRepOwnInstantHit
{
	bool                                               bClientSideHitDetection;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireLockon;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              InstantHitDistance;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstantHitRadius;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepNonArc
// 0x0030
struct FPwndWeaponRepNonArc
{
	TArray<struct FPwndDamageEvent>                    ArcDamages;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndHealEvent>                      ArcHeals;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EeWeaponArrayIndexMode>                ArcDamageIndexMode;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponArrayIndexMode>                ArcHealIndexMode;                                         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateArcDamageIndex;                               // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateArcHealIndex;                                 // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateArcDamageIndexExp;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateArcHealIndexExp;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMomentumInAimDirection;                                  // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMomentumInAimDirectionXYOnly;                            // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.RFloatExp
// 0x0004 (0x0010 - 0x000C)
struct FRFloatExp : public FRFloat
{
	float                                              Exp;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepOwnArc
// 0x0084
struct FPwndWeaponRepOwnArc
{
	struct FRFloatExp                                  ArcRadius;                                                // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcHalfHeight;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcStartWidth;                                            // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcStartHeight;                                           // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcDistance;                                              // 0x0040(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcHalfArcDeg;                                            // 0x0050(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  VerticalArcHalfArcDeg;                                    // 0x0060(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ArcDuration;                                              // 0x0070(0x0010) (Edit, BlueprintVisible)
	bool                                               bArcIsConeShaped;                                         // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimatedArc;                                             // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePrevHitsForTrace;                                  // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientSideHitDetection;                                  // 0x0083(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepNonBeam
// 0x0030
struct FPwndWeaponRepNonBeam
{
	TArray<struct FPwndDamageEvent>                    BeamDamages;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndHealEvent>                      BeamHeals;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EeWeaponArrayIndexMode>                BeamDamageIndexMode;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponArrayIndexMode>                BeamHealIndexMode;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateBeamDamageIndex;                              // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateBeamHealIndex;                                // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateBeamDamageIndexExp;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateBeamHealIndexExp;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnBeam
// 0x000C
struct FPwndWeaponRepOwnBeam
{
	bool                                               bRequireLockon;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BeamLength;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamRadius;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepNonLockon
// 0x0010
struct FPwndWeaponRepNonLockon
{
	bool                                               bLockonToEnemies;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockonToAllies;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockonToCrawling;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockonToCloak;                                           // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSwitchLockonWhileFiring;                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowNewLockonsWhileFiring;                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              NoLOSDisengageTime;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonSwitchTime;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepOwnLockon
// 0x0068
struct FPwndWeaponRepOwnLockon
{
	int                                                MaxLockons;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     LockonTime;                                               // 0x0004(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     LockonRange;                                              // 0x0010(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     LockonHalfArcH;                                           // 0x001C(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     LockonHalfArcV;                                           // 0x0028(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     LockonNearDistH;                                          // 0x0034(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     LockonNearDistV;                                          // 0x0040(0x000C) (Edit, BlueprintVisible)
	bool                                               bFiringRequireLockon;                                     // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowLockonWhenNotAllowFire;                             // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	class UCurveFloat*                                 LockonStrength_Angle;                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LockonStrength_Distance;                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeMathOperation>                       LockonStrength_CombineMathOp;                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNearestCollisionPointForLockon;                       // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnProjectile
// 0x0018
struct FPwndWeaponRepOwnProjectile
{
	TArray<class UClass*>                              ProjectileArchetypes;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EeWeaponArrayIndexMode>                ArchetypeIndexMode;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnSpread
// 0x0028
struct FPwndWeaponRepOwnSpread
{
	TEnumAsByte<EeSpreadType>                          SpreadType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Spread;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadOffset;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadIncPerShot;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxShotSpread;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FRotator>                            FixedSpreadAngles;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndWeaponRepNonReload
// 0x0008
struct FPwndWeaponRepNonReload
{
	float                                              MinReloadTimeOnGiven;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinReloadTimePctOnMatchStart;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepOwnReload
// 0x0038
struct FPwndWeaponRepOwnReload
{
	float                                              ReloadTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoReloadDelay;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReload;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowInterimReload;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReloadSingleShots;                                       // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReloadOnFire;                                      // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFireDuringReload;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFireOnPartialClip;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReloadOnEmpty;                                       // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReloadDelayOnEmpty;                                  // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistentReloadTimer;                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UClass*                                      SharedAmmoWeaponClass;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AmmoCosts;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EeWeaponArrayIndexMode>                AmmoCostIndexMode;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepAllReload
// 0x0008
struct FPwndWeaponRepAllReload
{
	int                                                ClipSize;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHaltReloadForSpawnedActors;                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHaltReloadWhileDown;                                     // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHaltReloadWhileInteracting;                              // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHaltReloadWhileCarrying;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepOwnCharge
// 0x0028
struct FPwndWeaponRepOwnCharge
{
	float                                              ChargeTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAtFullCharge;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeForcedFireTime;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeSpreadIncPerShot;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxChargeShotSpread;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeHeatPerSecond;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeHeatPerSecondIncPerShot;                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxChargeHeatPerSecond;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFireBeforeFullCharge;                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeAutoLoadFirstShot;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeMultiShot;                                         // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeFirstShotOnly;                                     // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeForceFireOnOverheat;                               // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeHeatResetCoolDelay;                                // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeHeatResetCoolRate;                                 // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnBurst
// 0x0014
struct FPwndWeaponRepOwnBurst
{
	int                                                BurstCount;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstFireInterval;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstSpreadIncPerShot;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBurstShotSpread;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBurstUseMultiShotSpread;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBurstInvertMultiShotSpread;                              // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBurstShotConsumesSingleAmmo;                             // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBurstShotAddsSingleHeat;                                 // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponRepOwnMultiShot
// 0x0010
struct FPwndWeaponRepOwnMultiShot
{
	int                                                MultiShotCount;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiSpreadIncPerShot;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMultiShotSpread;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiShotConsumesSingleAmmo;                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiShotAddsSingleHeat;                                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponRepOwnSpreadAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnSpreadAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnReloadAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnReloadAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnProjectileAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnProjectileAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnMultiShotAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnMultiShotAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnLockonAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnLockonAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnInstantHitAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnInstantHitAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnFiringAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnFiringAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnChargeAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnChargeAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnBurstAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnBurstAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnBeamAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnBeamAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepOwnArcAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepOwnArcAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonReloadAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonReloadAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonLockonAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonLockonAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonInstantHitAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonInstantHitAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonFiringAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonFiringAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonBeamAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonBeamAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepNonArcAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepNonArcAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponRepAllReloadAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndWeaponRepAllReloadAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndWeaponAttachPoint
// 0x0010
struct FPwndWeaponAttachPoint
{
	class APwndWeapon*                                 ParentWeapon;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeWeaponAttachPoint>                   AttachPoint;                                              // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndWeaponReplicatedLockon
// 0x0010
struct FPwndWeaponReplicatedLockon
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumLockons;                                               // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LostLOSTimeStamp;                                         // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponLockon
// 0x0010 (0x0020 - 0x0010)
struct FPwndWeaponLockon : public FPwndWeaponReplicatedLockon
{
	float                                              Strength;                                                 // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bValidForLockon;                                          // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LockonSwitchTimeStamp;                                    // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndWeaponArcFire
// 0x0040
struct FPwndWeaponArcFire
{
	float                                              ChargePct;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartWidth;                                               // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartHeight;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HalfArcDeg;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VerticalArcHalfArcDeg;                                    // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bArcIsConeShaped;                                         // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimated;                                                // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnorePrevHitsForTrace;                                  // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	TArray<struct FHitResult>                          HitResults;                                               // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndWeaponRetractionNodeParams
// 0x0018
struct FPwndWeaponRetractionNodeParams
{
	float                                              TranslateOnXAxisMaxUnits;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslateOnXAxisStepUnits;                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangePitchMaxAngle;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangePitchStepAngle;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangeYawCWMaxAngle;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangeYawCCWMaxAngle;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndDebugWeaponFire
// 0x00C8
struct FPwndDebugWeaponFire
{
	struct FVector                                     StartTrace;                                               // 0x0000(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    AimRot;                                                   // 0x000C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Start;                                                    // 0x0018(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0024(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0030(0x000C) (Transient, IsPlainOldData)
	float                                              Spread;                                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0040(0x0088) (Transient, IsPlainOldData)
};

// ScriptStruct PWND.ReplicatedRocketJump
// 0x0040
struct FReplicatedRocketJump
{
	TEnumAsByte<EeEventTrigger>                        Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FVector_NetQuantize10                       Impulse;                                                  // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bWasStanding;                                             // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMantle;                                                  // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	class AActor*                                      HitActor;                                                 // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndReplicatedDamageEvent
// 0x0088
struct FPwndReplicatedDamageEvent
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APlayerState*                                DamagedActorPS;                                           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     DamageCauserObject;                                       // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APlayerState*                                EventInstigatorPS;                                        // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       EventInstigatorPawn;                                      // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	int                                                IntendedDamage;                                           // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                DamageInflicted;                                          // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HeatAmount;                                               // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize10                       MomentumVec;                                              // 0x0050(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UClass*                                      DotEffect;                                                // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WeaponArchetype;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerTimeStamp;                                          // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDelayedRJ;                                               // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabledRJ;                                              // 0x0075(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabledSpecialMovement;                                 // 0x0076(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabledMovement;                                        // 0x0077(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabledWeapon;                                          // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabledAbilities;                                       // 0x0079(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOffsetAim;                                               // 0x007A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSlowedTimeDilation;                                      // 0x007B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpedUpTimeDilation;                                      // 0x007C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncreasedPwnTime;                                        // 0x007D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncreasedReviveTime;                                     // 0x007E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncreasedRespawnTime;                                    // 0x007F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDecreasedPwnTime;                                        // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDecreasedReviveTime;                                     // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDecreasedRespawnTime;                                    // 0x0082(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDropCarry;                                               // 0x0083(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndReplicatedHealEvent
// 0x0000 (0x0088 - 0x0088)
struct FPwndReplicatedHealEvent : public FPwndReplicatedDamageEvent
{

};

// ScriptStruct PWND.PwndCharacterActionCompletion
// 0x0028
struct FPwndCharacterActionCompletion
{
	TEnumAsByte<EePawnActionState>                     ActionState;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class APwndCharacter*                              ActionPawn;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndCharacter*                              ActionStopPawn;                                           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActionSuccess;                                           // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ActionParam;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ActionValue;                                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PersistentReloadTimer
// 0x0010
struct FPersistentReloadTimer
{
	class UClass*                                      WeapArchetype;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndAIMonkeyBrain_AimSettings
// 0x0010
struct FPwndAIMonkeyBrain_AimSettings
{
	float                                              SpringK;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamp;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringMaxVel;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOvershoot;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.SpringFloat
// 0x003C
struct FSpringFloat
{
	float                                              Target;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Current;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpringK;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamp;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     VelocityClamp;                                            // 0x0014(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     TargetRange;                                              // 0x0020(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     ValueRange;                                               // 0x002C(0x000C) (Edit, BlueprintVisible)
	bool                                               bAllowOvershoot;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_Action
// 0x0020
struct FPwndAIMonkeyBrain_Action
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     MovementAcceleration;                                     // 0x0010(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrainButtonMasher_ActionDef
// 0x0040
struct FPwndAIMonkeyBrainButtonMasher_ActionDef
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  PressInterval;                                            // 0x0008(0x0010) (Edit)
	struct FRFloatExp                                  ReleaseInterval;                                          // 0x0018(0x0010) (Edit)
	float                                              DoubleTapChance;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  DoubleTapInterval;                                        // 0x002C(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.FloatOscillator
// 0x0030
struct FFloatOscillator
{
	float                                              Time;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Current;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FQFloatExp                                  Frequency;                                                // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Amplitude;                                                // 0x0020(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndAIMonkeyBrainButtonMasher_AxisDef
// 0x0038
struct FPwndAIMonkeyBrainButtonMasher_AxisDef
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatOscillator                            Oscillator;                                               // 0x0008(0x0030) (Edit)
};

// ScriptStruct PWND.PwndAIMonkeyBrainButtonMasher_Axis
// 0x0040
struct FPwndAIMonkeyBrainButtonMasher_Axis
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FFloatOscillator                            Oscillator;                                               // 0x0008(0x0030) (Transient)
	float                                              LastOscillatorTime;                                       // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_TargetEntryLocation
// 0x003C
struct FPwndAIMonkeyBrain_TargetEntryLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     Delta;                                                    // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     NormDelta;                                                // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              ViewAngleDeg;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Distance;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Distance2D;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LOSTime;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LostLOSTime;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHadLOS;                                                  // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasLOS;                                                  // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasUpdated;                                              // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_TargetEntry
// 0x0104
struct FPwndAIMonkeyBrain_TargetEntry
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Priority;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      Location;                                                 // 0x0010(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      LastKnownLocation;                                        // 0x004C(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      GroundLocation;                                           // 0x0088(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      LastKnownGroundLocation;                                  // 0x00C4(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	TEnumAsByte<EeTeamDesc>                            TeamDesc;                                                 // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForced;                                                  // 0x0101(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocationBased;                                           // 0x0102(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0103(0x0001) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_TargetList
// 0x0038
struct FPwndAIMonkeyBrain_TargetList
{
	TArray<struct FPwndAIMonkeyBrain_TargetEntry>      Targets;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FRFloat                                     Distance;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FRFloat                                     Distance2D;                                               // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FRFloat                                     ViewAngleDeg;                                             // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_MovementTarget
// 0x0108
struct FPwndAIMonkeyBrain_MovementTarget
{
	struct FPwndAIMonkeyBrain_TargetEntry              Target;                                                   // 0x0000(0x0104) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bChangedTarget;                                           // 0x0104(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_Timer
// 0x0018
struct FPwndAIMonkeyBrain_Timer
{
	TArray<struct FRFloatExp>                          Times_PerDifficulty;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Timer;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_Target
// 0x0180
struct FPwndAIMonkeyBrain_Target
{
	struct FRFloatExp                                  MaintainTime;                                             // 0x0000(0x0010) (Edit)
	float                                              PriorityForceSwitchThreshold;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPwndAIMonkeyBrain_TargetEntry              CachedTarget;                                             // 0x0014(0x0104) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              Timer;                                                    // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChangedTarget;                                           // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               IgnoredTargets;                                           // 0x0120(0x0010) (ZeroConstructor, Transient)
	class UPwndAIMonkeyBrainPlayer*                    Owner;                                                    // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0138(0x0048) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_Chance
// 0x0010
struct FPwndAIMonkeyBrain_Chance
{
	TArray<float>                                      Chances_PerDifficulty;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimActionAnimEntry
// 0x0020
struct FPwndAnimActionAnimEntry
{
	class UAnimSequence*                               AnimSeq;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndRocketJumpCharAnimDirection
// 0x0008
struct FPwndRocketJumpCharAnimDirection
{
	float                                              Forward;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Side;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndAttackMontageInfo
// 0x0018
struct FPwndAttackMontageInfo
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EePwndAttackMontageType>               Type;                                                     // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              EndTime;                                                  // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAnnouncerVO
// 0x0018
struct FPwndAnnouncerVO
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Cue;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAOERepNonDamage
// 0x11E0
struct FPwndAOERepNonDamage
{
	struct FPwndDamageEvent                            EntryDamageEvent;                                         // 0x0000(0x0468) (Edit, BlueprintVisible)
	struct FPwndDamageEvent                            IntervalDamageEvent;                                      // 0x0468(0x0468) (Edit, BlueprintVisible)
	struct FPwndHealEvent                              EntryHealEvent;                                           // 0x08D0(0x0470) (Edit, BlueprintVisible)
	struct FPwndHealEvent                              IntervalHealEvent;                                        // 0x0D40(0x0470) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Duration;                                                 // 0x11B0(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Interval;                                                 // 0x11C0(0x0010) (Edit, BlueprintVisible)
	int                                                MaxEntries;                                               // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MomentumDir;                                              // 0x11D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct PWND.PwndAOERepAllDamage
// 0x0024
struct FPwndAOERepAllDamage
{
	float                                              EnemyDamageMul;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerDamageMul;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyDamageMul;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedDamageMul;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyHealMul;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerHealMul;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyHealMul;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedHealMul;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasDamage;                                               // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasHeal;                                                 // 0x0021(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.PwndAOERepAllBase
// 0x0010
struct FPwndAOERepAllBase
{
	int                                                MaxHealth;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedSingleEntry;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainAffectedAfterExit;                               // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                OverlapPriority;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverlapOpposingCancelLower;                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverlapOpposingCancelEqual;                              // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverlapOpposingCancel;                                   // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct PWND.PwndPostProcessEffect
// 0x0040
struct FPwndPostProcessEffect
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FadeInCurve;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FadeOutCurve;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FadeParam;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RefObject;                                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UPwndCameraComponent*                        AttachedCameraComp;                                       // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInst;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFadingOut;                                               // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.AoeAffectedActor
// 0x0018
struct FAoeAffectedActor
{
	float                                              IntervalTimer;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RealTotalTime;                                            // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndAOERepNonDamageAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndAOERepNonDamageAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndAOERepAllDamageAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndAOERepAllDamageAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndActorClassFilterAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndActorClassFilterAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndAOERepAllBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndAOERepAllBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndAssetDatabaseReference
// 0x0038
struct FPwndAssetDatabaseReference
{
	TAssetPtr<class UClass>                            Asset;                                                    // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGuid                                       Guid;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bValidated;                                               // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndFieldTagComponentMaterialGroup
// 0x0058
struct FPwndFieldTagComponentMaterialGroup
{
	class UFont*                                       Font;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       NumberFont;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       NameFont;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumberScale;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NameScale;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  WorldMaterials;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          UIMaterial;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OffscreenMaterial;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ValueToSizeCurveOnscreen;                                 // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ValueToSizeCurveOffscreen;                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct PWND.PwnZoneSettingsOverTime
// 0x0014
struct FPwnZoneSettingsOverTime
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnScoreMultiplier;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdditivePwnScore;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnDurationModifier;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAddedDuration;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwnZoneSettings
// 0x0060
struct FPwnZoneSettings
{
	unsigned char                                      TeamNum;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ZoneOrder;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ZoneIdentifier;                                           // 0x0008(0x0018) (Edit, BlueprintVisible)
	float                                              PwnScoreMultiplier;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdditivePwnScore;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnDurationModifier;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAddedDuration;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPwnZoneSettingsOverTime>            SettingsOverTime;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseCustomRenderTargetForPwnMultiplier;                    // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UFont*                                       RenderTexturePwnMultiplierFont;                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RenderTexturePwnMultiplierFontSize;                       // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RenderTexturePwnMultiplierFontSizeXletter;                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialActive;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.CaptureZoneSettings
// 0x0044
struct FCaptureZoneSettings
{
	float                                              DecayDelay;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecayRate;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointsPerSecond;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPointsGranted;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerAdditionalCapturedVolumePointMultiplier;               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerAdditionalPersonCaptureSpeed;                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CaptureTransitionTime;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BreakTransitionTime;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxCaptureTime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCaptureWhenUncontested;                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwnableCanCapture;                                       // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwnableCanContest;                                       // 0x0026(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwneeCanCapture;                                         // 0x0027(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwneeCanContest;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwnerCanCapture;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPwnerCanContest;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireLanding;                                          // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CaptureXP;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CaptureXPTeam;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChangeoverCaptureXP;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChangeoverCaptureXPTeam;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CapturingXPPerSecond;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CapturingXPTeamPerSecond;                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.CaptureTeamInfo
// 0x0030
struct FCaptureTeamInfo
{
	unsigned char                                      TeamNum;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class APwndCharacter*>                      ActivePawns;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndCharacter*>                      PwnablePawns;                                             // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                CaptureStrength;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ContestStrength;                                          // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonBase
// 0x0010
struct FPwndCharacterRepNonBase
{
	float                                              DamageTakenMultiplier;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExtraDamageTaken;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealTakenMultiplier;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExtraHealTaken;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllBase
// 0x0018
struct FPwndCharacterRepAllBase
{
	float                                              PwnRespawnFallingActionTimerMultiplier;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnActionTimerMultiplier;                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActionTimerMultiplier;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseTimeDilation;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositiveTimeDilationMultiplier;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NegativeTimeDilationMultiplier;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonHeat
// 0x0004
struct FPwndCharacterRepNonHeat
{
	float                                              HealthPickupCoolantTransferPct;                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnHeat
// 0x0020
struct FPwndCharacterRepOwnHeat
{
	float                                              HeatMax;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CoolingDuration;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CoolingDelay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CoolingInitialRate;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatCoolingTargetPct;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatCoolingDelay;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryHeatRate;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatWarningPct;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonRespawn
// 0x004C
struct FPwndCharacterRepNonRespawn
{
	float                                              PwnRespawnTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimeStack;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimeNeutralStack;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimePerPoint;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimePerPointStack;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimePerPointNeutralStack;                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimePerStackSize;                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimePerNeutralStackSize;                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnTimeMultiplier;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnRespawnAdditionalTime;                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillRespawnTimeMultiplier;                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillRespawnAdditionalTime;                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwndRespawnDelay;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedRespawnDelay;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeutralStackRespawnDelay;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeutralStackRespawnDelayPerPoint;                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeutralStackRespawnDelayPerStackSize;                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveFailRespawnDelay;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetainedBountyDecayRate;                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonPwn
// 0x0048
struct FPwndCharacterRepNonPwn
{
	float                                              PwnageDuration;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationStack;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationNeutralStack;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationPerPoint;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationPerPointStack;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationPerPointNeutralStack;                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationPerStackSize;                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnageDurationPerNeutralStackSize;                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnerDurationMultiplier;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwneeDurationMultiplier;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnerAdditionalDuration;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwneeAdditionalDuration;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnerScoreMultiplier;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwneeScoreMultiplier;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PwnerAdditionalScore;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PwneeAdditionalScore;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnInvulnerableTime;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSuccessHealthPct;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnPwn
// 0x0020
struct FPwndCharacterRepOwnPwn
{
	float                                              PwnEnterRangeXY;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnEnterRangeZ;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnExitRangeXY;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnExitRangeZ;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAirEnterRangeXY;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAirEnterRangeZ;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAirExitRangeXY;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnAirExitRangeZ;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllPwn
// 0x0028
struct FPwndCharacterRepAllPwn
{
	float                                              PwnSurfAirSpeedDecel;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfGroundFrictionMul;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfGroundSpeedDecel;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfAirActionTimerMultiplier;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfGroundActionTimerMultiplier;                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemotePwnAirActionTimerMultiplier;                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfActionTimerMultiplierStartPct;                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfActionTimerMaxPct;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnActionTimerMultiplier;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemotePwnActionTimerMultiplier;                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnRemotePwn
// 0x0014
struct FPwndCharacterRepOwnRemotePwn
{
	bool                                               bRemotePwnEnabled;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemotePwnAllowMovement;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemotePwnAllowRocketJump;                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              RemotePwnRangeXY;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemotePwnRangeZ;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemotePwnCancelRangeXY;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemotePwnCancelRangeZ;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonRevive
// 0x0028
struct FPwndCharacterRepNonRevive
{
	float                                              ReviveDuration;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveDurationPerPoint;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveDurationPerStackSize;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviverDurationMultiplier;                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveeDurationMultiplier;                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviverAdditionalDuration;                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveeAdditionalDuration;                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveHealthPct;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfReviveInvulnerableTime;                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveInvulnerableTime;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnRevive
// 0x0024
struct FPwndCharacterRepOwnRevive
{
	bool                                               bCanRevive;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReviveStack;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ReviveEnterRangeXY;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveEnterRangeZ;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveExitRangeXY;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveExitRangeZ;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveAirEnterRangeXY;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveAirEnterRangeZ;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveAirExitRangeXY;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveAirExitRangeZ;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllRevive
// 0x0014
struct FPwndCharacterRepAllRevive
{
	float                                              ReviveSurfAirActionTimerMultiplier;                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveSurfGroundActionTimerMultiplier;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveSurfActionTimerMultiplierStartPct;                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveSurfActionTimerMaxPct;                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviveActionTimerMultiplier;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepNonCarry
// 0x002C
struct FPwndCharacterRepNonCarry
{
	struct FRFloatExp                                  ThrowVel;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ThrowVelZ;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EeVelocityInheritance>                 ThrowVelocityInheritance;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ThrowVelocityInheritancePct;                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyThrowVelZAfterInheritance;                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterRepOwnCarry
// 0x0044
struct FPwndCharacterRepOwnCarry
{
	bool                                               bCanCarry;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CarryEnterRangeXY;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryEnterRangeZ;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryExitRangeXY;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryExitRangeZ;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryAirEnterRangeXY;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryAirEnterRangeZ;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryAirExitRangeXY;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryAirExitRangeZ;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowVelExp;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowChargeRate;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRocketJumpMod;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRocketJumpModPerMultiplier;                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryMinRocketJumpMod;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRocketJumpAddedHeat;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRocketJumpHeatMod;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRocketJumpHeatModPerMultiplier;                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllCarry
// 0x0030
struct FPwndCharacterRepAllCarry
{
	float                                              CarryActionTimerMultiplier;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRunSpeedMod;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryRunSpeedModPerMultiplier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarryMinRunSpeedMod;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRunSpeedMod;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRunSpeedModPerMultiplier;                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRocketJumpMod;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRocketJumpModPerMultiplier;                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRocketJumpAddedHeat;                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRocketJumpHeatMod;                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedRocketJumpHeatModPerMultiplier;                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CarriedActionTimerMultiplier;                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnRank
// 0x001C
struct FPwndCharacterRepOwnRank
{
	int                                                MaxRank;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseRankUpRating;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankUpRatingPct_Lvl2;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankUpRatingPct_Lvl3;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankUpRatingPct_Lvl4;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankUpRatingPct_Lvl5;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankUpRatingPct_Lvl6;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllDash
// 0x0004
struct FPwndCharacterRepAllDash
{
	float                                              DashActionTimerMultiplier;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.RocketJumpTuningAttribute
// 0x0000 (0x0010 - 0x0010)
struct FRocketJumpTuningAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.DynamicAttributeComponentTuningAttribute
// 0x0000 (0x0010 - 0x0010)
struct FDynamicAttributeComponentTuningAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnWallRunAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnWallRunAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnWallGrindAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnWallGrindAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnTankModeAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnTankModeAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnSkyDashAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnSkyDashAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnRocketJumpAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnRocketJumpAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnReviveAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnReviveAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnRemotePwnAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnRemotePwnAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnRankAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnRankAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnPwnAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnPwnAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnCustomAbilityAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnCustomAbilityAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnHeatAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnHeatAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnGroundSlamAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnGroundSlamAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnGrappleHookAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnGrappleHookAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnDashAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnDashAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnCarryAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnCarryAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepOwnAirHoverAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepOwnAirHoverAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonReviveAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonReviveAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonRespawnAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonRespawnAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonPwnAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonPwnAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonHeatAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonHeatAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonGroundSlamAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonGroundSlamAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonCarryAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonCarryAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepNonBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepNonBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllWallRunAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllWallRunAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterMovementRepAllTankModeAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterMovementRepAllTankModeAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllReviveAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllReviveAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllPwnAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllPwnAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterMovementRepAllBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterMovementRepAllBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllGravityAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllGravityAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllDashAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllDashAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllCarryAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllCarryAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndCharacterRepAllBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndCharacterRepAllBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndGUIDAssetLookupTable_ExtraInfo
// 0x0060
struct FPwndGUIDAssetLookupTable_ExtraInfo
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              Number;                                                   // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndCollisionModifiers
// 0x0008
struct FPwndCollisionModifiers
{
	bool                                               bIgnoreCharacters;                                        // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreProjectiles;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreStuckProjectiles;                                  // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreShields;                                           // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreAOE;                                               // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDeflectProjectiles;                                      // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDeflectProjectilesInNormalDir;                           // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReflectProjectiles;                                      // 0x0007(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndMeshMaterialParam
// 0x0030
struct FPwndMeshMaterialParam
{
	TEnumAsByte<EePwndMeshMaterialParamType>           Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       Param;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndMeshMaterialParamArray
// 0x0020
struct FPwndMeshMaterialParamArray
{
	struct FString                                     DebugOwnerName;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwndMeshMaterialParam>              ParamArr;                                                 // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndMeshMaterialParamMap
// 0x0078
struct FPwndMeshMaterialParamMap
{
	TMap<class UObject*, struct FPwndMeshMaterialParamArray> ParamMap;                                                 // 0x0000(0x0050) (ZeroConstructor, Transient)
	TArray<struct FPwndMeshMaterialParamArray>         OriginalParams;                                           // 0x0050(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwndMeshMaterialParam>              ChangedValues;                                            // 0x0060(0x0010) (ZeroConstructor, Transient)
	bool                                               bFullReset;                                               // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndMeshMaterialParamMultiMap
// 0x0050
struct FPwndMeshMaterialParamMultiMap
{
	TMap<class UMeshComponent*, struct FPwndMeshMaterialParamMap> CompParamMap;                                             // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndCharacterWeaponSet
// 0x0018
struct FPwndCharacterWeaponSet
{
	class APwndWeapon*                                 Weapon;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndAbilityWeapon*                          WeaponPrimaryAbility;                                     // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndAbilityWeapon*                          WeaponSecondaryAbility;                                   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterAction
// 0x0010
struct FPwndCharacterAction
{
	TEnumAsByte<EePawnActionState>                     ActionState;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class APwndCharacter*                              ActionPawn;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.AttachedCameraFX
// 0x0010
struct FAttachedCameraFX
{
	class UObject*                                     FX;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFirstPerson;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bThirdPerson;                                             // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.AttachedBodyFX
// 0x0008
struct FAttachedBodyFX
{
	class UObject*                                     FX;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.CachedInteractionAnimSyncInfo
// 0x000C
struct FCachedInteractionAnimSyncInfo
{
	TEnumAsByte<EInteractionSegmentType>               SegmentType;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SequenceIndex;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.AimOffsetTimeEntry
// 0x000C
struct FAimOffsetTimeEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimOffsetDeg;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.TimeDilationEffectEntry
// 0x0030
struct FTimeDilationEffectEntry
{
	class UObject*                                     Affector;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Dilation;                                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ActionDilation;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MovementDilation;                                         // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimingDilation;                                           // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EaseInTime;                                               // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EaseOutTime;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUsingAffector;                                           // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.TimeDilationEffects
// 0x0020
struct FTimeDilationEffects
{
	TArray<struct FTimeDilationEffectEntry>            Effects;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              CurrentDilation;                                          // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentActionDilation;                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentMovementDilation;                                  // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentAimingDilation;                                    // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwnAffector
// 0x0020
struct FPwnAffector
{
	class AActor*                                      Act;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPwnerAffector;                                           // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              BountyMultiplier;                                         // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PwnAddedBounty;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PwnDurationMultiplier;                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PwnAddedDuration;                                         // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.OverlappingPhysicsComp
// 0x0018
struct FOverlappingPhysicsComp
{
	class UPrimitiveComponent*                         Comp;                                                     // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              InitialOverlapTimeStamp;                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastOverlapTimeStamp;                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverlapping;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndFXDatabaseEntry
// 0x0030
struct FPwndFXDatabaseEntry
{
	class UObject*                                     Key;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PwndFX;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleSys;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExactMatch;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.DotLerpFloatStruct
// 0x0018
struct FDotLerpFloatStruct
{
	float                                              Reverse;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Side;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Forward;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Side_to_Reverse_Exp;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Side_to_Forward_Exp;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAngularLerp;                                             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.RocketJumpTuning
// 0x0068
struct FRocketJumpTuning
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SameSurfaceInterval;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Heat;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverHeatModifier;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOverHeatModifier;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatedHeat;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatedInterval;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatedIntervalPerJump;                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingVelTransfer;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDotLerpFloatStruct                         VelTransfer;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FDotLerpFloatStruct                         VelTransferMax;                                           // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              MaxVelXY;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelZ;                                                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnBase
// 0x0058
struct FPwndCharacterRepOwnBase
{
	float                                              AccelRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControl;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlMaxVelocity;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirAccelRate;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PwnSurfGroundAccelRate;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZHeight;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelSimilarMomentumDuration;                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpecialMovements;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMovementRechargeRate;                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMovementRechargeDelay;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWallRJResetSpecialMoveCount;                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGroundRJResetSpecialMoveCount;                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLandResetSpecialMoveCount;                               // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementResetRecharge;                            // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementCapacityResetSpecialMoveCount;            // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementRechargeOnlyOnEmptyCapacity;              // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              MaxSpecialMovementCapacity;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMovementCapacityRechargeRate;                      // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMovementCapacityRechargeDelay;                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMovementCapacityEmptyRechargeDelay;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpecialMovementCapacityRechargeRateCurve_Capacity;        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpecialMovementCapacityRechargeRateCurve_Time;            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeMathOperation>                       SpecialMovementCapacityRechargeRateCurve_CombineMathOp;   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeMathOperation>                       SpecialMovementCapacityRechargeRateCurve_ApplyMathOp;     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterMovementRepAllBase
// 0x002C
struct FPwndCharacterMovementRepAllBase
{
	float                                              GroundSpeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrawlSpeed;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DashSpeedMul;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDotLerpFloatStruct                         MovementSpeedLerp;                                        // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               bApplyMovementSpeedLerpWhenCrawling;                      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterRepAllGravity
// 0x0024
struct FPwndCharacterRepAllGravity
{
	float                                              GravityMultiplier;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RisingGravityMultiplierMin;                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RisingGravityMultiplierMax;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RisingGravityVelocityFactor;                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RisingGravityVelocityFactorExp;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingGravityMultiplierMin;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingGravityMultiplierMax;                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingGravityVelocityFactor;                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingGravityVelocityFactorExp;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnRocketJump
// 0x00A8
struct FPwndCharacterRepOwnRocketJump
{
	float                                              RJAirControlDelay;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RJVerticalColTestDist;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RJHorizontalColTestDist;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RJMaxLastStandingDuration;                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpMomentumCancelDuration;                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpMomentumCancelAmount;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     RocketJumpLandFrictionJumpTime;                           // 0x0018(0x000C) (Edit, BlueprintVisible)
	float                                              RocketJumpLandFrictionModifier;                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpLandFrictionModifierDelay;                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpLandFrictionModifierDuration;                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpLandFrictionModifierExp;                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDotLerpFloatStruct                         RocketJumpLandFrictionModifierSpeed;                      // 0x0034(0x0018) (Edit, BlueprintVisible)
	float                                              GroundVerticalAirHorizontal_MovementLerpGround;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundVerticalAirHorizontal_MovementLerpAir;              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpMomentumPreservationDecaySpeed;                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRocketJumpMomentumPreservationWhenWalking;            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRocketJumpMomentumPreservationWhenFalling;            // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              AccelBinary_Threshold;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityBinary_GroundThreshold;                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityBinary_AirThreshold;                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  VelocityLinear_GroundRange;                               // 0x0068(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  VelocityLinear_AirRange;                                  // 0x0078(0x0010) (Edit, BlueprintVisible)
	float                                              AnalogInputModifierPreservationDecaySpeed;                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  AccelLinearDecay_Range;                                   // 0x008C(0x0010) (Edit, BlueprintVisible)
	float                                              DoubleTapRocketJumpTime;                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InvertedForwardRocketJumpAvoidanceControlAngle;           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InvertedForwardRocketJumpAvoidanceNormalAngle;            // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnDash
// 0x0028
struct FPwndCharacterRepOwnDash
{
	bool                                               bEnableDash;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DashHeatRate;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DashMaxAimSpeed;                                          // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DashHorizontalHeightMultiplier;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DashHorizontalDistanceMultiplier;                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     DashMultiplierTime;                                       // 0x001C(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.FloatSimpleCurve
// 0x0014
struct FFloatSimpleCurve
{
	float                                              RangeStart;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangeEnd;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputStart;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputEnd;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Exp;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnAirHover
// 0x00E4
struct FPwndCharacterRepOwnAirHover
{
	bool                                               bAirHoverEnabled;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReentrantAirHover;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReentrantAirHoverOnEmpty;                           // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirHoverUseInitialZVel;                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReentrantAirHoverUseInitialZVel;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAirHoverOnGround;                                   // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirHoverUseThrustCurves;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirHoverUseInitialImpulse;                               // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirHoverUseInitialThrust;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirHoverFullyUseInitialThrust;                           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              AirHoverExecuteCost;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverReentrantCost;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverCostRate;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverInitialZVel;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverThrust;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverEmptyInitialZVel;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverEmptyThrust;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverGravityMultiplier;                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverXYVelDecel;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverControl;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverControlMaxVelocity;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverAccelRate;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverMaxVelXY;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirHoverMaxVelZ;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatSimpleCurve                           AirHoverThrustGoingUp;                                    // 0x0044(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverThrustGoingDown;                                  // 0x0058(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverEmptyThrustGoingUp;                               // 0x006C(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverEmptyThrustGoingDown;                             // 0x0080(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverInitialImpulseGoingUp;                            // 0x0094(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverInitialImpulseGoingDown;                          // 0x00A8(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverInitialThrustMultiplier;                          // 0x00BC(0x0014) (Edit, BlueprintVisible)
	struct FFloatSimpleCurve                           AirHoverInitialThrustMaxVelZ;                             // 0x00D0(0x0014) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndCharacterRepOwnGrappleHook
// 0x0054
struct FPwndCharacterRepOwnGrappleHook
{
	bool                                               bGrappleHookEnabled;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookAutoReelInSlack;                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookAutoReelInSlackOnGround;                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookAutoReelInSlackOnCollision;                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookReelInAddVel;                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookReelInCancelParallelVel;                      // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrappleHookReelInOnlyOnAttachment;                       // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              GrappleHookReelInNonParallelDecel;                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookHeat;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookHeatRate;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookGravityMultiplier;                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookReelInGravityMultiplier;                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookControl;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookControlMaxVelocity;                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleIdleDecel;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookAccelRate;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookFireRange;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookLineCheckRadius;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookReelInAcc;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookReelInDecay;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookReelInFloorCheckDistance;                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookSnapDelta;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleHookReleaseMinZVel;                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     GrappleHookReelInSpeed;                                   // 0x0048(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndCharacterRepOwnWallGrind
// 0x0018
struct FPwndCharacterRepOwnWallGrind
{
	bool                                               bEnableWallGrind;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WallGrindZVel;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallGrindZDecel;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallGrindXYVel;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallGrindXYDecel;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallGrindCheckDistance;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnSkyDash
// 0x004C
struct FPwndCharacterRepOwnSkyDash
{
	bool                                               bEnableSkyDash;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashAllowDirectional;                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSkyDashOnGround;                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SkyDashHeat;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashVertUpPower;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashVertUpPowerExp;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashVertDownPower;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashVertDownPowerExp;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashDistance;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashDuration;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashMaxPostXYVel;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyDashMaxPostZVel;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashLockon;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              SkyDashLockonAccelForwardHalfAngle;                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SkyDashLockonAngleExtents;                                // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SkyDashLockonNearExtents;                                 // 0x003C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSkyDashLockonAllowEnemies;                               // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashLockonAllowAllies;                                // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashLockonAllowCrawling;                              // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashLockonAllowCloak;                                 // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkyDashLockonUseMovementDirection;                       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterRepOwnWallRun
// 0x0024
struct FPwndCharacterRepOwnWallRun
{
	bool                                               bEnableWallRun;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReentrantWallRun;                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveWallRunFromGround;                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveWallRunFromAir;                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveWallRunOnlyForward;                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveWallRunForceVertical;                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              PassiveWallRunIntervalFromAir;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveWallRunIntervalFromGround;                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveWallRunDuration;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveWallRunMaxExitZVelocity;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallRunExecuteCost;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallRunReentrantCost;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallRunCostRate;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepAllWallRun
// 0x0010
struct FPwndCharacterRepAllWallRun
{
	struct FRFloat                                     WallRunSpeed;                                             // 0x0000(0x000C) (Edit, BlueprintVisible)
	float                                              WallRunCheckDistance;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnGroundSlam
// 0x0074
struct FPwndCharacterRepOwnGroundSlam
{
	bool                                               bGroundSlamEnabled;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRFloatExp                                  GroundSlamZVel;                                           // 0x0004(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  GroundSlamXYImpulse;                                      // 0x0014(0x0010) (Edit, BlueprintVisible)
	struct FRFloat                                     GroundSlamTime;                                           // 0x0024(0x000C) (Edit, BlueprintVisible)
	float                                              GroundSlamAirControl;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundSlamAirControlMaxVelocity;                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundSlamAccelRate;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundSlamMinPostZVel;                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundSlamMinHeight;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDotLerpFloatStruct                         VelTransfer;                                              // 0x0044(0x0018) (Edit, BlueprintVisible)
	struct FDotLerpFloatStruct                         VelTransferMax;                                           // 0x005C(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndCharacterRepNonGroundSlam
// 0x0480
struct FPwndCharacterRepNonGroundSlam
{
	struct FPwndDamageEvent                            DamageEvent;                                              // 0x0000(0x0468) (Edit, BlueprintVisible)
	struct FRFloatExp                                  DamageRadius;                                             // 0x0468(0x0010) (Edit, BlueprintVisible)
	float                                              WrapAroundGridRadius;                                     // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WrapAroundRangeDeltaExp;                                  // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterRepOwnCustomAbility
// 0x0018
struct FPwndCharacterRepOwnCustomAbility
{
	bool                                               bCustomAbilityEnabled;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      WeaponClass;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomAbilityRequireButtonHeld;                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomAbilityIsTwoStage;                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterRepOwnTankMode
// 0x0028
struct FPwndCharacterRepOwnTankMode
{
	bool                                               bTankModeEnabled;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TankModeAirControl;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeAirControlMaxVelocity;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeAccelRate;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeAirAccelRate;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeReentrantCost;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeExecuteCost;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeCostRate;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TankModePerk;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndCharacterMovementRepAllTankMode
// 0x003C
struct FPwndCharacterMovementRepAllTankMode
{
	float                                              TankModeGroundSpeed;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TankModeAirSpeed;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  TankModeGroundFriction;                                   // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  TankModeGroundBrakingDeceleration;                        // 0x0018(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseTankModeTurnRate;                                     // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FRFloatExp                                  TankModeTurnRate;                                         // 0x002C(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.SavedMove_PwndCharacter_ServerMoveData
// 0x00A0
struct FSavedMove_PwndCharacter_ServerMoveData
{
	struct FHitResult                                  MoveHit;                                                  // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeCustomMovement>                      CustomMovementMode;                                       // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FVector_NetQuantize                         ClientSideImpulse;                                        // 0x008C(0x000C) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bCancelVelocity;                                          // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.CharacterImpactEntry
// 0x00A8
struct FCharacterImpactEntry
{
	struct FHitResult                                  Hit;                                                      // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MoveDelta;                                                // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0094(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              TimeSlice;                                                // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x00A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.NetworkPredictionData_Server_PwndCharacter_Adjustment
// 0x00C0
struct FNetworkPredictionData_Server_PwndCharacter_Adjustment
{
	struct FHitResult                                  SpecialMoveHit;                                           // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              GrappleHookLength;                                        // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   MoveToDirection;                                          // 0x008C(0x000C) (BlueprintVisible, BlueprintReadOnly)
	float                                              MoveToDistance;                                           // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveToDuration;                                           // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveToMatchTargetActorVelocityPctOnExit;                  // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveToMaxVelocityOnExit;                                  // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveToTargetActorRange;                                   // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class AActor*                                      MoveToTargetActor;                                        // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveToFaceTargetYaw;                                     // 0x00B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveToFaceTargetPitch;                                   // 0x00B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.PwndCharacterSkinMesh
// 0x0018
struct FPwndCharacterSkinMesh
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndCharacterSkinAttachment
// 0x0038
struct FPwndCharacterSkinAttachment
{
	class UClass*                                      Attachment;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Scale3D;                                                  // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndCurrencyEntry
// 0x0020
struct FPwndCurrencyEntry
{
	class UClass*                                      PaymentType;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       CurrencyAssetGuid;                                        // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndCostTableEntry
// 0x0018
struct FPwndCostTableEntry
{
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FPwndCurrencyEntry>                  Prices;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct PWND.PwndCostTableOverrideEntry
// 0x0020
struct FPwndCostTableOverrideEntry
{
	struct FGuid                                       AssetGuid;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<struct FPwndCurrencyEntry>                  Prices;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct PWND.DamageHistoryEntry
// 0x0020
struct FDamageHistoryEntry
{
	class AActor*                                      TheActor;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPwndReplicatedDamageEvent>          Events;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              LatestServerTimeStamp;                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.HealHistoryEntry
// 0x0020
struct FHealHistoryEntry
{
	class AActor*                                      TheActor;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPwndReplicatedHealEvent>            Events;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              LatestServerTimeStamp;                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndDOTRepNonDamage
// 0x1238
struct FPwndDOTRepNonDamage
{
	struct FPwndDamageEvent                            DamageEvent;                                              // 0x0000(0x0468) (Edit, BlueprintVisible)
	struct FPwndHealEvent                              HealEvent;                                                // 0x0468(0x0470) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Delay;                                                    // 0x08D8(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Duration;                                                 // 0x08E8(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  Interval;                                                 // 0x08F8(0x0010) (Edit, BlueprintVisible)
	bool                                               bChangeDamageOverTime;                                    // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	struct FPwndDamageEvent                            EndDamageEvent;                                           // 0x0910(0x0468) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ChangeDamageOverTimeCurve;                                // 0x0D78(0x0010) (Edit, BlueprintVisible)
	bool                                               bChangeHealOverTime;                                      // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D89(0x0007) MISSED OFFSET
	struct FPwndHealEvent                              EndHealEvent;                                             // 0x0D90(0x0470) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ChangeHealOverTimeCurve;                                  // 0x1200(0x0010) (Edit, BlueprintVisible)
	float                                              EnemyDurationMul;                                         // 0x1210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerDurationMul;                                         // 0x1214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyDurationMul;                                          // 0x1218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyDamageMul;                                           // 0x121C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerDamageMul;                                           // 0x1220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyDamageMul;                                            // 0x1224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyHealMul;                                             // 0x1228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerHealMul;                                             // 0x122C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyHealMul;                                              // 0x1230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByTimeDilation;                                  // 0x1234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnDeath;                                           // 0x1235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1236(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.PwndDOTThirdPersonFX
// 0x0010
struct FPwndDOTThirdPersonFX
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPoint;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndDOTFirstPersonFX
// 0x0018
struct FPwndDOTFirstPersonFX
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndDOTRepNonDamageAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndDOTRepNonDamageAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.DynamicAttributeComponentTuning
// 0x0020
struct FDynamicAttributeComponentTuning
{
	int                                                InitialValue;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBoost;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenDelay;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenRate;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenPercent;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RegenMinPerInterval;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenOutOfCombatTime;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.DecayINT
// 0x0038
struct FDecayINT
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acc;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      ClassReference;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeResetDelay;                                         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeAddDuration;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeResetDuration;                                      // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeResetAcc;                                           // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     FXObject;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fraction;                                                 // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.InteractionChainEntry
// 0x0070
struct FInteractionChainEntry
{
	TEnumAsByte<EInteractionSegmentType>               SegmentType;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SequenceIndex;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeDilation;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0010(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              ScaledElapsedTime;                                        // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedAnimLength;                                         // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ComputedAnimLengthMin;                                    // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLoopUntilInterrupted;                                    // 0x005C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInterrupted;                                             // 0x005D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x12];                                      // 0x005E(0x0012) MISSED OFFSET
};

// ScriptStruct PWND.RVector2D
// 0x0014
struct FRVector2D
{
	struct FVector2D                                   MinVal;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaxVal;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.RVector2DExp
// 0x0004 (0x0018 - 0x0014)
struct FRVector2DExp : public FRVector2D
{
	float                                              Exp;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndFXDatabaseEntryArr
// 0x0010
struct FPwndFXDatabaseEntryArr
{
	TArray<struct FPwndFXDatabaseEntry>                Arr;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct PWND.PlayerInfoDynamicLinkage
// 0x02E8
struct FPlayerInfoDynamicLinkage
{
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x0000(0x02E8) MISSED OFFSET
};

// ScriptStruct PWND.PwndPendingRespawn
// 0x0018
struct FPwndPendingRespawn
{
	class AController*                                 Ctrl;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Delay;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStartupSpawn;                                            // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwnStackEntry
// 0x0018
struct FPwnStackEntry
{
	class APwndCharacter*                              Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwnStackHistoryEntry
// 0x0050
struct FPwnStackHistoryEntry
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // 0x0000(0x0018) (Transient)
	struct FUniqueNetIdRepl                            AIInstigatorPlayerID;                                     // 0x0018(0x0018) (Transient)
	int                                                Bounty;                                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0038(0x0010) (ZeroConstructor, Transient)
	float                                              Timestamp;                                                // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwnStack
// 0x0038
struct FPwnStack
{
	int                                                PwnBodyStackId;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FPwnStackEntry>                      Entries;                                                  // 0x0008(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwnStackHistoryEntry>               History;                                                  // 0x0018(0x0010) (ZeroConstructor, Transient)
	class APwndBodyStackActor*                         BodyStackActor;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedCreationVO;                                        // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedTransitionVO;                                      // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.PendingReward
// 0x0010
struct FPendingReward
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PlayerInfo
// 0x0108
struct FPlayerInfo
{
	struct FGuid                                       PlayerId;                                                 // 0x0000(0x0010) (Transient, IsPlainOldData)
	struct FGuid                                       UserID;                                                   // 0x0010(0x0010) (Transient, IsPlainOldData)
	struct FGuid                                       LobbyID;                                                  // 0x0020(0x0010) (Transient, IsPlainOldData)
	struct FGuid                                       PartyID;                                                  // 0x0030(0x0010) (Transient, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0040(0x0010) (ZeroConstructor, Transient)
	struct FPwndLoadout                                Loadout;                                                  // 0x0050(0x00B0) (Transient)
	uint32_t                                           Slot;                                                     // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      Team;                                                     // 0x0104(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndAmazonS3
// 0x0030
struct FPwndAmazonS3
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct PWND.ServerOption
// 0x00B0
struct FServerOption
{
	struct FString                                     PlatformUsername;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     PlatformPassword;                                         // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FGuid                                       PlatformLobby;                                            // 0x0020(0x0010) (Transient, IsPlainOldData)
	struct FGuid                                       PlatformGameServer;                                       // 0x0030(0x0010) (Transient, IsPlainOldData)
	int                                                Port;                                                     // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       MatchGuid;                                                // 0x0044(0x0010) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     AmazonS3Id;                                               // 0x0058(0x0010) (ZeroConstructor, Transient)
	struct FString                                     AmazonS3Key;                                              // 0x0068(0x0010) (ZeroConstructor, Transient)
	struct FString                                     Realm;                                                    // 0x0078(0x0010) (ZeroConstructor, Transient)
	struct FString                                     MapName;                                                  // 0x0088(0x0010) (ZeroConstructor, Transient)
	struct FGuid                                       MapGuid;                                                  // 0x0098(0x0010) (Transient, IsPlainOldData)
	bool                                               bIsCustomMatch;                                           // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndTelemetryEvent
// 0x0038
struct FPwndTelemetryEvent
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct PWND.PopUpFloatingText
// 0x0058
struct FPopUpFloatingText
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      TextColor;                                                // 0x0010(0x0004) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UFont*                                       TextFont;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Pos;                                                      // 0x0020(0x000C) (Transient, IsPlainOldData)
	struct FVector2D                                   vel;                                                      // 0x002C(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   Acc;                                                      // 0x0034(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x003C(0x0008) (Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeDelay;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               b3DText;                                                  // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndProjectileRing
// 0x001C
struct FPwndProjectileRing
{
	struct FQFloatExp                                  Radius;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              InterpExp;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileDamageRing
// 0x046C (0x0488 - 0x001C)
struct FPwndProjectileDamageRing : public FPwndProjectileRing
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FPwndDamageEvent                            DamageEvent;                                              // 0x0020(0x0468) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndProjectileHealRing
// 0x0474 (0x0490 - 0x001C)
struct FPwndProjectileHealRing : public FPwndProjectileRing
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FPwndHealEvent                              HealEvent;                                                // 0x0020(0x0470) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.ProjectileDebugExplosion
// 0x0990
struct FProjectileDebugExplosion
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // 0x0008(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Timer;                                                    // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FPwndDamageEvent                            DirectHitDamage;                                          // 0x0098(0x0468) (BlueprintVisible, BlueprintReadOnly)
	struct FPwndHealEvent                              DirectHitHeal;                                            // 0x0500(0x0470) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FPwndProjectileDamageRing>           DamageRings;                                              // 0x0970(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPwndProjectileHealRing>             HealRings;                                                // 0x0980(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.InteractionCameraEntry
// 0x00A4
struct FInteractionCameraEntry
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FQFloatExp                                  Speed;                                                    // 0x0004(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AngleSpeed;                                               // 0x001C(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  Angle;                                                    // 0x0034(0x0018) (Edit, BlueprintVisible)
	struct FVector                                     Focus;                                                    // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQFloatExp                                  Distance;                                                 // 0x0058(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  DistanceSpeed;                                            // 0x0070(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  FOV;                                                      // 0x0088(0x0018) (Edit, BlueprintVisible)
	int                                                NumChecks;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.InteractionSegment
// 0x0058
struct FInteractionSegment
{
	TArray<class UAnimSequence*>                       Sequences;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0010(0x0038) (Edit, BlueprintVisible)
	TArray<struct FRFloat>                             Speed;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndPerkRepOwnerBase
// 0x0008
struct FPwndPerkRepOwnerBase
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnDeath;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndPerkRepOwnerBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndPerkRepOwnerBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.RInt
// 0x000C
struct FRInt
{
	int                                                MinVal;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.LoadoutVisualizerActorAndReflection
// 0x0010
struct FLoadoutVisualizerActorAndReflection
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Reflection;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndMusicTrack
// 0x0020
struct FPwndMusicTrack
{
	class UCurveFloat*                                 VolumeCurve;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinaleIntensity;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VictoryNearIntensity;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Track;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Comp;                                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct PWND.PwndValueToIntensity
// 0x0008
struct FPwndValueToIntensity
{
	int                                                MinPwnValue;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndMusic
// 0x0088
struct FPwndMusic
{
	TArray<struct FPwndMusicTrack>                     Tracks;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndValueToIntensity>               PwnValueIntensities;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              IntensityIncreaseSpeed;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntensityDecreaseSpeed;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntensityDecreaseSpeedInterrupted;                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class USoundCue*                                   WarmupWaitLoop;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   WarmupCountdownLoop;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupCountdownLoopDuration;                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTransitionSpeed;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   EnemyPwnLoop;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     EnemyPwnLoopPitch;                                        // 0x0050(0x000C) (Edit, BlueprintVisible)
	float                                              EnemyPwnLoopPitchSpeed;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   AllyPwnLoop;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     AllyPwnLoopPitch;                                         // 0x0068(0x000C) (Edit, BlueprintVisible)
	float                                              AllyPwnLoopPitchSpeed;                                    // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   CrawlLoop;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrawlLoopVolumeSpeed;                                     // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndPawnFieldTagComponentMaterialSet
// 0x02C0
struct FPwndPawnFieldTagComponentMaterialSet
{
	struct FPwndFieldTagComponentMaterialGroup         NamePlate;                                                // 0x0000(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         Pwnable;                                                  // 0x0058(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         PwnablePreStack;                                          // 0x00B0(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         PwnableStack;                                             // 0x0108(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         Pwning;                                                   // 0x0160(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         Reviving;                                                 // 0x01B8(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         Carry;                                                    // 0x0210(0x0058) (Edit, DisableEditOnInstance)
	struct FPwndFieldTagComponentMaterialGroup         Limbo;                                                    // 0x0268(0x0058) (Edit, DisableEditOnInstance)
};

// ScriptStruct PWND.PwndPawnFieldTagComponentCachedInfo
// 0x0020
struct FPwndPawnFieldTagComponentCachedInfo
{
	TEnumAsByte<EeFieldTagType>                        TagType;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeTeamDesc>                            TeamDesc;                                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
	int                                                Rank;                                                     // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Bounty;                                                   // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndPickupDroppedFrom
// 0x0010
struct FPwndPickupDroppedFrom
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndPickupFactoryRepNonBase
// 0x001C
struct FPwndPickupFactoryRepNonBase
{
	bool                                               bResetNumSpawnedOnToggle;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearRespawnTimerOnToggle;                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FQFloatExp                                  RespawnTime;                                              // 0x0004(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndPickupFactoryRepAllBase
// 0x0010
struct FPwndPickupFactoryRepAllBase
{
	class UClass*                                      PickupToSpawn;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxInventorySpawned;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.RIntExp
// 0x0004 (0x0010 - 0x000C)
struct FRIntExp : public FRInt
{
	float                                              Exp;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.DynamicInteractionCameraEntry
// 0x005C (0x0100 - 0x00A4)
struct FDynamicInteractionCameraEntry : public FInteractionCameraEntry
{
	int                                                ArcIndex;                                                 // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              vel;                                                      // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Vec;                                                      // 0x00AC(0x000C) (Transient, IsPlainOldData)
	TArray<struct FHitResult>                          ArcImpactInfo;                                            // 0x00B8(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      ArcDistances;                                             // 0x00C8(0x0010) (ZeroConstructor, Transient)
	float                                              Time;                                                     // 0x00D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HAngle;                                                   // 0x00DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VAngle;                                                   // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DistAngle;                                                // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumBounceReversals;                                       // 0x00E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReversalCount;                                            // 0x00EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReversing;                                               // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              ReverseAngle;                                             // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReverseVelDir;                                            // 0x00F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndInventorySetEntry
// 0x0028
struct FPwndInventorySetEntry
{
	TAssetPtr<class UClass>                            Asset;                                                    // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	int                                                Quantity;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Odds;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct PWND.MetaProgressionLevelEntry
// 0x0018
struct FMetaProgressionLevelEntry
{
	float                                              ExpToNextLevel;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CumulativeExpForLevel;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FPwndInventorySetEntry>              LevelAwards;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndLoadoutInst
// 0x0058
struct FPwndLoadoutInst
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CharacterSkin;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Weapon;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponSkin;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PrimaryAbility;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SecondaryAbility;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Perk;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PWN;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PwnStamp;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Revive;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CustomPwnLine;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndStatSingle
// 0x0004
struct FPwndStatSingle
{
	float                                              Total;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndStatMap
// 0x00A0
struct FPwndStatMap
{
	TMap<struct FName, struct FPwndStatAccumulator>    StatAccumulatorMap;                                       // 0x0000(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, struct FPwndStatSingle>         StatSingleMap;                                            // 0x0050(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndPerItemStats
// 0x00A8
struct FPwndPerItemStats
{
	bool                                               bEquipped;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPwndStatMap                                StatMap;                                                  // 0x0008(0x00A0) (Transient)
};

// ScriptStruct PWND.PwndPlayerStateReplicatedStats
// 0x0024
struct FPwndPlayerStateReplicatedStats
{
	int                                                Kills;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                KillAssists;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Pwns;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TimesPwnd;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PwndScore;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Saves;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                SaveScore;                                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Revives;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonSpeed
// 0x002C
struct FPwndProjectileRepNonSpeed
{
	struct FRFloatExp                                  ProjectileSpeed;                                          // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  TossZ;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EeVelocityInheritance>                 LaunchVelocityInheritance;                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              LaunchVelocityInheritancePct;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyTossVelZAfterInheritance;                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndProjectileRepAllSpeed
// 0x0008
struct FPwndProjectileRepAllSpeed
{
	float                                              ProjectileSpeedMax;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomGravityScaling;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonBounce
// 0x0020
struct FPwndProjectileRepNonBounce
{
	struct FRIntExp                                    NumBounces;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              DamagePctPerBounce;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     BounceDamagePctRange;                                     // 0x0014(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndProjectileRepAllBounce
// 0x0040
struct FPwndProjectileRepAllBounce
{
	float                                              BounceRestitution;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceFriction;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceRollFriction;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceDetonateRadius;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceVisualRadius;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceRotationRateDecel;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBounceZ;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBounceVel;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusPctPerBounce;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloat                                     BounceRadiusPctRange;                                     // 0x0024(0x000C) (Edit, BlueprintVisible)
	bool                                               bBounceInDirOfNormal;                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffWalls;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffCeilings;                                       // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffFloors;                                         // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffPawns;                                          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffAllyPawns;                                      // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffEnemyPawns;                                     // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffShields;                                        // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffAllyShields;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffEnemyShields;                                   // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceOffDestructible;                                   // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceExplosion;                                         // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBounceRadiusPctAffectsFX;                                // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndProjectileRepNonSticky
// 0x0028
struct FPwndProjectileRepNonSticky
{
	bool                                               bStuckCrawlDetonate;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStuckTouchDamageDetonate;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStuckTouchHealDetonate;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FRFloatExp                                  PawnStickExplodeTimer;                                    // 0x0004(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  StickExplodeTimer;                                        // 0x0014(0x0010) (Edit, BlueprintVisible)
	float                                              StuckTouchExplodeTimer;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepAllSticky
// 0x0018
struct FPwndProjectileRepAllSticky
{
	bool                                               bStickToWalls;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToCeilings;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToFloors;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToPawns;                                            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToAllyPawns;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToEnemyPawns;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToShields;                                          // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToAllyShields;                                      // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToEnemyShields;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickToDestructible;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickOrientToSurface;                                    // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStickKillTrailFX;                                        // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckOffset;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckDetonationRadius;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StuckHealth;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonGuidance
// 0x0002
struct FPwndProjectileRepNonGuidance
{
	bool                                               bAutoAcquireTarget;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUpdateTarget;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepAllGuidance
// 0x001C
struct FPwndProjectileRepAllGuidance
{
	bool                                               bGuidanceEnabled;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TrackingTurnRateDeg;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrackingVelocityPrediction;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrackingDelay;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTrackingTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrackingAccelRate;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTrackingSpeed;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepAllFlightPath
// 0x001C
struct FPwndProjectileRepAllFlightPath
{
	bool                                               bFlightPathEnabled;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FlightPathTimeDilation;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightPathTurnRateDeg;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightPathTurnMaxDelay;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FlightPathAxisBias;                                       // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonCollision
// 0x0010
struct FPwndProjectileRepNonCollision
{
	bool                                               bAllowBleedThrough;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExplodeSearchGridRadius;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplodeSearchGridResolution;                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplodeSearchRadiusOffsetMul;                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepAllCollision
// 0x0003
struct FPwndProjectileRepAllCollision
{
	bool                                               bIgnoreShield;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimeBubble;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreKatamari;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonRange
// 0x002C
struct FPwndProjectileRepNonRange
{
	struct FRFloatExp                                  ExplodeRange;                                             // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  ExplodeTime;                                              // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              WrapAroundGridRadius;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WrapAroundRangeDeltaExp;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetonateOnDeath;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.PwndProjectileRepNonCharge
// 0x0012
struct FPwndProjectileRepNonCharge
{
	bool                                               bExplodeTimerUsesCharge;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeExplodeTimer;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExplodeRangeUsesCharge;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeExplodeRange;                                // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeedUsesCharge;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeSpeed;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageUsesCharge;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeDamage;                                      // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeatUsesCharge;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeHeat;                                        // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMomentumUsesCharge;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeMomentum;                                    // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRadiusUsesCharge;                                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeRadius;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTossUsesCharge;                                          // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeToss;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNumBouncesUsesCharge;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChargeNumBounces;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonSpawnProj
// 0x00F0
struct FPwndProjectileRepNonSpawnProj
{
	class UClass*                                      SpawnProjArchetype;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRFloatExp                                  SpawnProjDelay;                                           // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  SpawnProjInterval;                                        // 0x0018(0x0010) (Edit, BlueprintVisible)
	struct FRIntExp                                    SpawnProjNumPerInterval;                                  // 0x0028(0x0010) (Edit, BlueprintVisible)
	struct FQIntExp                                    SpawnProjMaxSpawned;                                      // 0x0038(0x0018) (Edit, BlueprintVisible)
	bool                                               bSpawnProjSearchGeomUseStickyDim;                         // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRequiresTarget;                                 // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjOnDetonation;                                   // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjOnBounce;                                       // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjOnStick;                                        // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjWhenStuck;                                      // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjWhenNotStuck;                                   // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	struct FVector                                     SpawnProjOrigin;                                          // 0x0058(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnProjLaunchDir;                                       // 0x0064(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRFloatExp                                  SpawnProjLaunchDirTargetLead;                             // 0x0070(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  SpawnProjInitialLaunchDirAngleOffsetDeg;                  // 0x0080(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  SpawnProjLaunchDirAngleOffsetDeg;                         // 0x0090(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  SpawnProjSpreadArcDeg;                                    // 0x00A0(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     SpawnProjSpreadAxis;                                      // 0x00B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSpawnProjLaunchDirUseTarget;                             // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRelativeForceUprightOrient;                     // 0x00BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRelativeForceHitNormalOrient;                   // 0x00BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRelativeOrigin;                                 // 0x00BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRelativeLaunchDir;                              // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnProjRelativeSpreadAxis;                             // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	struct FRFloatExp                                  SpawnProjOverrideGravityDuration;                         // 0x00C4(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  SpawnProjOverrideGravityRevertTime;                       // 0x00D4(0x0010) (Edit, BlueprintVisible)
	float                                              SpeedPctDeltaPerSpawn;                                    // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedPctDeltaPerSpawnInterval;                            // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndProjectileRepNonArming
// 0x0008
struct FPwndProjectileRepNonArming
{
	bool                                               bArmOnStick;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bArmOnBounce;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ArmDuration;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepAllArming
// 0x000A
struct FPwndProjectileRepAllArming
{
	bool                                               bUnArmedBounceOffWalls;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffCeilings;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffFloors;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffPawns;                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffAllyPawns;                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffEnemyPawns;                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffShields;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffAllyShields;                             // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffEnemyShields;                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnArmedBounceOffDestructible;                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndProjectileRepNonStickyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonStickyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonSpeedAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonSpeedAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonSpawnProjAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonSpawnProjAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonRangeAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonRangeAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileHealRingAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileHealRingAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonGuidanceAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonGuidanceAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndHealEventAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndHealEventAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndDamageEventAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndDamageEventAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileDamageRingAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileDamageRingAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonCollisionAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonCollisionAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonChargeAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonChargeAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonBounceAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonBounceAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepNonArmingAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepNonArmingAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllStickyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllStickyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllSpeedAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllSpeedAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllGuidanceAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllGuidanceAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllFlightPathAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllFlightPathAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllCollisionAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllCollisionAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllBounceAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllBounceAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndProjectileRepAllArmingAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndProjectileRepAllArmingAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.ProjectileStuckInfo
// 0x0030
struct FProjectileStuckInfo
{
	bool                                               bStuck;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StuckLoc;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     StuckNorm;                                                // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      StuckActor;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         StuckComponent;                                           // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct PWND.ExternalTimeDilation
// 0x0010
struct FExternalTimeDilation
{
	class UObject*                                     Affector;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Dilation;                                                 // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.QVector
// 0x002C
struct FQVector
{
	bool                                               bQueried;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Value;                                                    // 0x0004(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     MinVal;                                                   // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaxVal;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.QVectorExp
// 0x0004 (0x0030 - 0x002C)
struct FQVectorExp : public FQVector
{
	float                                              Exp;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.QRotator
// 0x002C
struct FQRotator
{
	bool                                               bQueried;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    Value;                                                    // 0x0004(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    MinVal;                                                   // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    MaxVal;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.DecalCreationInfo
// 0x0028
struct FDecalCreationInfo
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DecalLifespan;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AttachedComponent;                                        // 0x0018(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachedBoneName;                                         // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonBase
// 0x005C
struct FPwndShieldRepNonBase
{
	int                                                Health;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDecayHealthOverDuration;                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MinHealthDecay;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageTakenMul;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorDamageTakenMul;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldScale;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldNormalSinkAmount;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldPanelCollisionForgiveness;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldDestructionShutdownDelay;                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSpawnCollision;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptimizeSpawnLocationRotation;                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FVector                                     SpawnOffset;                                              // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RegenPerSecond;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenDelay;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRegenPercent;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRegenDestroyedPanels;                                    // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              MinRegenPercentForDestroyedPanel;                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShieldWallDim;                                            // 0x004C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ShieldWallPanelCurvature;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShutdownOverlappingAllyShields;                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShutdownOverlappingEnemyShields;                         // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.PwndShieldRepAllCollisionEnemy
// 0x0006
struct FPwndShieldRepAllCollisionEnemy
{
	bool                                               bBlockEnemy;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockCrawlingEnemy;                                      // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockEnemyProjectiles;                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeflectEnemyProjectiles;                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeflectEnemyProjectilesInNormalDir;                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReflectEnemyProjectiles;                                 // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonCollisionEnemy
// 0x0001
struct FPwndShieldRepNonCollisionEnemy
{
	bool                                               bDamagedByEnemy;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepAllCollisionAlly
// 0x0006
struct FPwndShieldRepAllCollisionAlly
{
	bool                                               bBlockAlly;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockCrawlingAlly;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockAllyProjectiles;                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeflectAllyProjectiles;                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeflectAllyProjectilesInNormalDir;                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReflectAllyProjectiles;                                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonCollisionAlly
// 0x0001
struct FPwndShieldRepNonCollisionAlly
{
	bool                                               bDamagedByAlly;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonDPS
// 0x000C
struct FPwndShieldRepNonDPS
{
	float                                              EnemyDPS;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyDamageHealthConversion;                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinEnemyDamage;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonHPS
// 0x0014
struct FPwndShieldRepNonHPS
{
	float                                              AllyHPS;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyHealHealthConversion;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinAllyHeal;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyReviveTime;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllyReviveHealthPct;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonDamageRamp
// 0x0014
struct FPwndShieldRepNonDamageRamp
{
	float                                              DamageRampStart;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRampEnd;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRampDelay;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRampDuration;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRampExp;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonPanel
// 0x0028
struct FPwndShieldRepNonPanel
{
	TArray<float>                                      AdjacentPanelDamageBleedPct;                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MissingAdjacentPanelDamageIncreasePct;                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MissingAdjacentPanelDamageBleedReflectPct;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjacentPanelDamageBleedDelay;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndShieldRepNonPanelAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonPanelAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonHPSAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonHPSAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonDPSAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonDPSAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonDamageRampAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonDamageRampAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonCollisionEnemyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonCollisionEnemyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonCollisionAllyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonCollisionAllyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepNonBaseAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepNonBaseAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepAllCollisionEnemyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepAllCollisionEnemyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PwndShieldRepAllCollisionAllyAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndShieldRepAllCollisionAllyAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.PawnTouchEntry
// 0x0018
struct FPawnTouchEntry
{
	class APwndCharacter*                              Pawn;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPwnable;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreBlocking;                                          // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Accumulator;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.ProjectileTouchEntry
// 0x0010
struct FProjectileTouchEntry
{
	class APwndProjectile*                             Proj;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreBlocking;                                          // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.ShieldImpactEntry
// 0x0030
struct FShieldImpactEntry
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0014(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0020(0x000C) (Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.ShieldPanel
// 0x0068
struct FShieldPanel
{
	class UClass*                                      ShieldPanelComponentClass;                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FBoxSphereBounds                            PanelBounds;                                              // 0x0020(0x001C) (Transient, IsPlainOldData)
	int                                                SpawnStatus;                                              // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PanelNormal;                                              // 0x0040(0x000C) (Transient, IsPlainOldData)
	float                                              PanelDeltaDist;                                           // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ClosestCollisionDist;                                     // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ClosestCollision;                                         // 0x0054(0x000C) (Transient, IsPlainOldData)
	class UPwndShieldPanelComponent*                   PanelComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct PWND.DelayedShieldPanelDamage
// 0x0480
struct FDelayedShieldPanelDamage
{
	class UPwndShieldPanelComponent*                   Comp;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPwndDamageEvent                            OrigDmgEvent;                                             // 0x0010(0x0468) (Transient)
	float                                              Delay;                                                    // 0x0478(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x047C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndStuntSequenceAwardText
// 0x0020
struct FPwndStuntSequenceAwardText
{
	struct FName                                       StuntType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       AwardText;                                                // 0x0008(0x0018) (Edit)
};

// ScriptStruct PWND.TimeStampedValue
// 0x0008
struct FTimeStampedValue
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndTimeBubbleRepAllDilation
// 0x0300
struct FPwndTimeBubbleRepAllDilation
{
	struct FTimeDilationEffect                         EnemyCharacterTimeDilationEffect;                         // 0x0000(0x00A8) (Edit, BlueprintVisible)
	struct FRFloatExp                                  EnemyProjectileTimeDilation;                              // 0x00A8(0x0010) (Edit, BlueprintVisible)
	struct FTimeDilationEffect                         AllyCharacterTimeDilationEffect;                          // 0x00B8(0x00A8) (Edit, BlueprintVisible)
	struct FRFloatExp                                  AllyProjectileTimeDilation;                               // 0x0160(0x0010) (Edit, BlueprintVisible)
	struct FTimeDilationEffect                         OwnerCharacterTimeDilationEffect;                         // 0x0170(0x00A8) (Edit, BlueprintVisible)
	struct FRFloatExp                                  OwnerProjectileTimeDilation;                              // 0x0218(0x0010) (Edit, BlueprintVisible)
	struct FTimeDilationEffect                         AttachedCharacterTimeDilationEffect;                      // 0x0228(0x00A8) (Edit, BlueprintVisible)
	struct FRFloatExp                                  AttachedProjectileTimeDilation;                           // 0x02D0(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  PickupTimeDilation;                                       // 0x02E0(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  OtherTimeDilation;                                        // 0x02F0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct PWND.PwndTimeBubbleRepAllDilationAttribute
// 0x0000 (0x0010 - 0x0010)
struct FPwndTimeBubbleRepAllDilationAttribute : public FGUTSAttribute
{

};

// ScriptStruct PWND.QVector2D
// 0x0020
struct FQVector2D
{
	bool                                               bQueried;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Value;                                                    // 0x0004(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   MinVal;                                                   // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaxVal;                                                   // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.QVector2DExp
// 0x0004 (0x0024 - 0x0020)
struct FQVector2DExp : public FQVector2D
{
	float                                              Exp;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.QRotatorExp
// 0x0004 (0x0030 - 0x002C)
struct FQRotatorExp : public FQRotator
{
	float                                              Exp;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.RVector
// 0x001C
struct FRVector
{
	struct FVector                                     MinVal;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaxVal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.RVectorExp
// 0x0004 (0x0020 - 0x001C)
struct FRVectorExp : public FRVector
{
	float                                              Exp;                                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.RRotator
// 0x001C
struct FRRotator
{
	struct FRotator                                    MinVal;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    MaxVal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.RRotatorExp
// 0x0004 (0x0020 - 0x001C)
struct FRRotatorExp : public FRRotator
{
	float                                              Exp;                                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndSplashDamageTarget
// 0x00A8
struct FPwndSplashDamageTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DeltaNormal;                                              // 0x0008(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              DirectDistance;                                           // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WrapAroundDistance;                                       // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitInfo;                                                  // 0x0020(0x0088) (BlueprintVisible, Transient, IsPlainOldData)
};

// ScriptStruct PWND.ObjectIsA
// 0x0010
struct FObjectIsA
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExactMatch;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNot;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct PWND.EventTriggerStateIsA
// 0x0020
struct FEventTriggerStateIsA
{
	TArray<struct FObjectIsA>                          AnyOf;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FObjectIsA>                          AllOf;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.VocalizationEntry
// 0x0010
struct FVocalizationEntry
{
	class USoundBase*                                  SoundCue;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentProbability;                                       // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.Vocalization
// 0x0020
struct FVocalization
{
	TArray<struct FVocalizationEntry>                  Entries;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              SilenceChance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenInstances;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LastPlayedTimestamp;                                      // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasMerged;                                               // 0x001C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct PWND.VocalizationSet
// 0x0070
struct FVocalizationSet
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVocalization                               Vocalization;                                             // 0x0010(0x0020) (Edit)
	struct FVocalization                               AllyReply;                                                // 0x0030(0x0020) (Edit)
	struct FVocalization                               EnemyReply;                                               // 0x0050(0x0020) (Edit)
};

// ScriptStruct PWND.PwndWeaponSkinMesh
// 0x0018
struct FPwndWeaponSkinMesh
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndWeaponSkinAttachment
// 0x0038
struct FPwndWeaponSkinAttachment
{
	class UClass*                                      Attachment;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Scale3D;                                                  // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.ChatMessageStruct
// 0x0038
struct FChatMessageStruct
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EChatChannelType                                   ChannelType;                                              // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.DropDownElement
// 0x0028
struct FDropDownElement
{
	int                                                Index;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       ButtonText;                                               // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct PWND.PlayerVoipInfo
// 0x0018
struct FPlayerVoipInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               isMuted;                                                  // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndAIMonkeyBrain_FRFloatExp
// 0x0010
struct FPwndAIMonkeyBrain_FRFloatExp
{
	TArray<struct FRFloatExp>                          RFloats_PerDifficulty;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndAIMonkeyBrain_Float
// 0x0010
struct FPwndAIMonkeyBrain_Float
{
	TArray<float>                                      Floats_PerDifficulty;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndAmazonS3CompressionHeader
// 0x0010
struct FPwndAmazonS3CompressionHeader
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct PWND.PwndPhysicsBlendWeightBonePair
// 0x0010
struct FPwndPhysicsBlendWeightBonePair
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAnimNode_CrawlingChain
// 0x0010
struct FPwndAnimNode_CrawlingChain
{
	TArray<struct FBoneReference>                      Bones;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimNode_AlternateChain
// 0x0010
struct FPwndAnimNode_AlternateChain
{
	TArray<struct FName>                               Bones;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimNode_AlternateSkeleton
// 0x0018
struct FPwndAnimNode_AlternateSkeleton
{
	struct FName                                       RootBone;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPwndAnimNode_AlternateChain>        Chains;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimNode_CrawlingSkeleton
// 0x0028
struct FPwndAnimNode_CrawlingSkeleton
{
	struct FBoneReference                              RootBone;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPwndAnimNode_CrawlingChain>         Chains;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimNode_Crawling
// 0x01A8 (0x0218 - 0x0070)
struct FPwndAnimNode_Crawling : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 // 0x0070(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPwndAnimNode_CrawlingChain>         Chains;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndAnimNode_AlternateSkeleton>     AlternateSkeletons;                                       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPwndAnimNode_CrawlingSkeleton              CachedSkeleton;                                           // 0x00A8(0x0028) (BlueprintVisible, Transient)
	struct FHitResult                                  Floor;                                                    // 0x00D0(0x0088) (Transient, IsPlainOldData)
	bool                                               bIsCrawlingOnFloor;                                       // 0x0158(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FVector                                     ForwardVec;                                               // 0x015C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     RightVec;                                                 // 0x0168(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x0174(0x00A4) MISSED OFFSET
};

// ScriptStruct PWND.PwndAnimHandIKBoneSet
// 0x0028
struct FPwndAnimHandIKBoneSet
{
	TArray<struct FName>                               ForearmBoneNames;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               UpperArmBoneNames;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       HandBoneName;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndAnimNode_HandIK
// 0x0030 (0x0110 - 0x00E0)
struct FPwndAnimNode_HandIK : public FAnimNode_TwoBoneIK
{
	TArray<struct FPwndAnimHandIKBoneSet>              OverrideIKBoneSets;                                       // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneReference>                      UpperArmIKBones;                                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneReference>                      ForearmIKBones;                                           // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.PwndAnimNode_InteractionPlayer
// 0x0040 (0x0070 - 0x0030)
struct FPwndAnimNode_InteractionPlayer : public FAnimNode_Base
{
	TArray<struct FInteractionChainEntry>              InteractionChain;                                         // 0x0030(0x0010) (ZeroConstructor, Transient)
	float                                              InteractionDuration;                                      // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInteracting;                                           // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              InteractionTimeStamp;                                     // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastComputeInteractionTimeStamp;                          // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class APwndFX*                                     InteractionFX;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndInteraction*                            CachedInteraction;                                        // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APwndCharacter*                              CachedInteractionTarget;                                  // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPwnSurfing;                                            // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.PwndAnimNode_InteractionPWNPlayer
// 0x0000 (0x0070 - 0x0070)
struct FPwndAnimNode_InteractionPWNPlayer : public FPwndAnimNode_InteractionPlayer
{

};

// ScriptStruct PWND.PwndAnimNode_InteractionRevivePlayer
// 0x0000 (0x0070 - 0x0070)
struct FPwndAnimNode_InteractionRevivePlayer : public FPwndAnimNode_InteractionPlayer
{

};

// ScriptStruct PWND.PwndAnimNode_RotationOffsetBlendSpace
// 0x0008 (0x0160 - 0x0158)
struct FPwndAnimNode_RotationOffsetBlendSpace : public FAnimNode_RotationOffsetBlendSpace
{
	float                                              BlendAlpha;                                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndAnimNode_SequencePlayer
// 0x0008 (0x0078 - 0x0070)
struct FPwndAnimNode_SequencePlayer : public FAnimNode_SequencePlayer
{
	float                                              RestartTime;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetCheckInterval;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PWND.PwndAnimNode_WeaponRetraction
// 0x0130 (0x01A0 - 0x0070)
struct FPwndAnimNode_WeaponRetraction : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  CurPivotTransform;                                        // 0x0070(0x0030) (Transient, IsPlainOldData)
	float                                              bInitCurPivotTransform;                                   // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndWeaponRetractionNodeParams             Params;                                                   // 0x00A4(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FTransform                                  CapsuleTransform;                                         // 0x00C0(0x0030) (Transient, IsPlainOldData)
	bool                                               bRetractionInfoValid;                                     // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAF];                                      // 0x00F1(0x00AF) MISSED OFFSET
};

// ScriptStruct PWND.PwndGUIDAssetLookupTable_GuidReferences
// 0x0018
struct FPwndGUIDAssetLookupTable_GuidReferences
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               Guids;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndGUIDAssetLookupTable
// 0x00E0 (0x00E8 - 0x0008)
struct FPwndGUIDAssetLookupTable : public FTableRowBase
{
	bool                                               bAllowSelection;                                          // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	int                                                Group;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Name;                                                     // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0058(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            Class;                                                    // 0x0078(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            Asset;                                                    // 0x0098(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGuid                                       ParentGuid;                                               // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FPwndGUIDAssetLookupTable_GuidReferences> GuidReferences;                                           // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPwndGUIDAssetLookupTable_ExtraInfo> ExtraInfo;                                                // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct PWND.PwndFieldTagComponentRenderEntry
// 0x0010
struct FPwndFieldTagComponentRenderEntry
{
	class UPwndFieldTagComponent*                      Comp;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndTelemetry
// 0x0090
struct FPwndTelemetry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Class;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Version;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               bIsValid;                                                 // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ValidationErrorString;                                    // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
};

// ScriptStruct PWND.PwndTeamInfoStruct
// 0x0070
struct FPwndTeamInfoStruct
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TeamSize;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Score;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWinningTeam;                                             // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x53];                                      // 0x000D(0x0053) MISSED OFFSET
	TArray<struct FTimeStampedValue>                   ScoresOverTime;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct PWND.PwndGameEndTelemetry
// 0x0098 (0x0128 - 0x0090)
struct FPwndGameEndTelemetry : public FPwndTelemetry
{
	struct FGuid                                       MatchGuid;                                                // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FString                                     GameModeClass;                                            // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FGuid                                       GameModeGuid;                                             // 0x00B0(0x0010) (Transient, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FGuid                                       MapGuid;                                                  // 0x00D0(0x0010) (Transient, IsPlainOldData)
	bool                                               bIsCustomMatch;                                           // 0x00E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              MatchDuration;                                            // 0x00E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchTimeElapsed;                                         // 0x00E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                GoalScore;                                                // 0x00EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ReasonForEndGame;                                         // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                WinningTeam;                                              // 0x0100(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       WinningPlayer;                                            // 0x0104(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FPwndTeamInfoStruct>                 Teams;                                                    // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct PWND.RatedPlayerStart
// 0x0010
struct FRatedPlayerStart
{
	class APlayerStart*                                Start;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Rating;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.AccoladeRating
// 0x0010
struct FAccoladeRating
{
	class APwndPlayerState*                            PS;                                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Rating;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndGameplayEvent
// 0x0080
struct FPwndGameplayEvent
{
	TEnumAsByte<EePwndGameplayEvent>                   Event;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0020(0x0060) MISSED OFFSET
};

// ScriptStruct PWND.TimeStampedInteraction
// 0x0048 (0x0050 - 0x0008)
struct FTimeStampedInteraction : public FTimeStampedValue
{
	struct FUniqueNetIdRepl                            InstigatorId;                                             // 0x0008(0x0018) (BlueprintVisible, Transient)
	struct FUniqueNetIdRepl                            TargetId;                                                 // 0x0020(0x0018) (BlueprintVisible, Transient)
	class UObject*                                     Other;                                                    // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value2;                                                   // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value3;                                                   // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value4;                                                   // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Value5;                                                   // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndLockBoxRarity
// 0x0030
struct FPwndLockBoxRarity
{
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Odds;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            DupeAward;                                                // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                DupeAwardCount;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndLockBoxPityTimerEntry
// 0x0014
struct FPwndLockBoxPityTimerEntry
{
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Start;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRInt                                       Range;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct PWND.PwndPlayerInfoStruct
// 0x01E0
struct FPwndPlayerInfoStruct
{
	struct FGuid                                       PlayerGuid;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              Score;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TeamNum;                                                  // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPlayerBot;                                             // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsReplacementPlayerBot;                                  // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMonkey;                                                // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	struct FPwndLoadout                                Loadout;                                                  // 0x002C(0x00B0) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<float>                                      RankUpTimes;                                              // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FPwndStatMap                                Stats;                                                    // 0x00F0(0x00A0) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0190(0x0050) MISSED OFFSET
};

// ScriptStruct PWND.PanelTakeHitInfo
// 0x001C
struct FPanelTakeHitInfo
{
	int                                                PanelIndex;                                               // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0010(0x000C) (Transient, IsPlainOldData)
};

// ScriptStruct PWND.PwndPhysicsBlendWeightGroup
// 0x0028
struct FPwndPhysicsBlendWeightGroup
{
	float                                              PhysicsBlendWeight;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       StartBoneName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEndBoneName;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       EndBoneName;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int16_t                                            CachedStartBoneIndex;                                     // 0x0020(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            CachedEndBoneIndex;                                       // 0x0022(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.PwndTeamMemberInfoStruct
// 0x0028
struct FPwndTeamMemberInfoStruct
{
	struct FGuid                                       PlayerGuid;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              Score;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.EventTriggerStateAllOf
// 0x0020
struct FEventTriggerStateAllOf
{
	TArray<TEnumAsByte<EeEventTriggerState>>           AllOf;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EeEventTriggerState>>           NoneOf;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.EventTriggerStateAnyOf
// 0x0010
struct FEventTriggerStateAnyOf
{
	TArray<struct FEventTriggerStateAllOf>             AnyOf;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.EventTriggerStates
// 0x0030
struct FEventTriggerStates
{
	struct FEventTriggerStateAnyOf                     SelfTriggerStates;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FEventTriggerStateAnyOf>             OthersTriggerStates;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEventTriggerStateIsA>               OthersIsA;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.EventTrigger
// 0x0088
struct FEventTrigger
{
	TArray<TEnumAsByte<EeEventTrigger>>                Triggers;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FEventTriggerStateAnyOf                     SelfTriggerStates;                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FEventTriggerStateAnyOf>             OthersTriggerStates;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEventTriggerStateIsA>               OthersIsA;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Count;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Instances;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FEventTriggerStates                         ClearStates;                                              // 0x0050(0x0030) (Edit, BlueprintVisible)
	bool                                               bClearEvents;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct PWND.GameObjectTypeRequirementElement
// 0x0010
struct FGameObjectTypeRequirementElement
{
	class UObject*                                     Asset;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNegate;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddAsLevelUpHint;                                        // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct PWND.GameObjectTypeRequirementsAND
// 0x0010
struct FGameObjectTypeRequirementsAND
{
	TArray<struct FGameObjectTypeRequirementElement>   AllOf;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.GameObjectTypeRequirementsOR
// 0x0010
struct FGameObjectTypeRequirementsOR
{
	TArray<struct FGameObjectTypeRequirementsAND>      AnyOf;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct PWND.RangedFloat
// 0x001C
struct FRangedFloat
{
	float                                              Start;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Exp;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeedIsTime;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLarsonScanner;                                           // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEaseIn;                                                  // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEaseOut;                                                 // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasForward;                                              // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForward;                                                 // 0x0015(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              Pct;                                                      // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PWND.CustomMatchHostButtonData
// 0x0028
struct FCustomMatchHostButtonData
{
	TEnumAsByte<EHostRelevantTeamButtonState>          slotState;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct PWND.OnlineFriendLocalCache
// 0x0030
struct FOnlineFriendLocalCache
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct PWND.CustomMatch_Option
// 0x0020 (0x0028 - 0x0008)
struct FCustomMatch_Option : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                ActualValue;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.XP_Curve
// 0x0008 (0x0010 - 0x0008)
struct FXP_Curve : public FTableRowBase
{
	float                                              XPToLevel;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PWND.TableRowTextOnly
// 0x0018 (0x0020 - 0x0008)
struct FTableRowTextOnly : public FTableRowBase
{
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
