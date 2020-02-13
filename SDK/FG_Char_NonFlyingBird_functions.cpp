// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_NonFlyingBird_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnRep_mIsLuring
// (BlueprintCallable, BlueprintEvent)

void AChar_NonFlyingBird_C::OnRep_mIsLuring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnRep_mIsLuring");

	AChar_NonFlyingBird_C_OnRep_mIsLuring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.SetLuring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isLuring                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::SetLuring(bool* isLuring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.SetLuring");

	AChar_NonFlyingBird_C_SetLuring_Params params;
	params.isLuring = isLuring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChar_NonFlyingBird_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveBeginPlay");

	AChar_NonFlyingBird_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveTick");

	AChar_NonFlyingBird_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.TryToJump
// (BlueprintCallable, BlueprintEvent)

void AChar_NonFlyingBird_C::TryToJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.TryToJump");

	AChar_NonFlyingBird_C_TryToJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChar_NonFlyingBird_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLanded");

	AChar_NonFlyingBird_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveDied
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChar_NonFlyingBird_C::ReceiveDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveDied");

	AChar_NonFlyingBird_C_ReceiveDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.NotifyOnTakeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::NotifyOnTakeDamage(class AActor** DamagedActor, float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.NotifyOnTakeDamage");

	AChar_NonFlyingBird_C_NotifyOnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.damageAmount = damageAmount;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveEndPlay");

	AChar_NonFlyingBird_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void AChar_NonFlyingBird_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.GainedSignificance");

	AChar_NonFlyingBird_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.LostSignificance
// (Event, Public, BlueprintEvent)

void AChar_NonFlyingBird_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.LostSignificance");

	AChar_NonFlyingBird_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ExecuteUbergraph_Char_NonFlyingBird
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::ExecuteUbergraph_Char_NonFlyingBird(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.ExecuteUbergraph_Char_NonFlyingBird");

	AChar_NonFlyingBird_C_ExecuteUbergraph_Char_NonFlyingBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLandedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AChar_NonFlyingBird_C**  selfPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_NonFlyingBird_C::OnLandedDelegate__DelegateSignature(class AChar_NonFlyingBird_C** selfPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLandedDelegate__DelegateSignature");

	AChar_NonFlyingBird_C_OnLandedDelegate__DelegateSignature_Params params;
	params.selfPawn = selfPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
