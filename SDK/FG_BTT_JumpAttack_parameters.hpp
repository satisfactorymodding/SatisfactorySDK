#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BTT_JumpAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_JumpAttack.BTT_JumpAttack_C.mOnJumpAttackFailed_2B6962824822751FCAD482A8789ABE88
struct UBTT_JumpAttack_C_mOnJumpAttackFailed_2B6962824822751FCAD482A8789ABE88_Params
{
};

// Function BTT_JumpAttack.BTT_JumpAttack_C.mOnJumpAttackFinished_2B6962824822751FCAD482A8789ABE88
struct UBTT_JumpAttack_C_mOnJumpAttackFinished_2B6962824822751FCAD482A8789ABE88_Params
{
};

// Function BTT_JumpAttack.BTT_JumpAttack_C.ReceiveExecuteAI
struct UBTT_JumpAttack_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_JumpAttack.BTT_JumpAttack_C.ReceiveAbortAI
struct UBTT_JumpAttack_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_JumpAttack.BTT_JumpAttack_C.ExecuteUbergraph_BTT_JumpAttack
struct UBTT_JumpAttack_C_ExecuteUbergraph_BTT_JumpAttack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
