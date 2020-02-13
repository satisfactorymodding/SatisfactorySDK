// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_UEOS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UEOS.EOSAuthentication.Update
// (Final, Native, Public, BlueprintCallable)

void UEOSAuthentication::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSAuthentication.Update");

	UEOSAuthentication_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UEOS.EOSAuthentication.Logout
// (Final, Native, Public, BlueprintCallable)

void UEOSAuthentication::Logout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSAuthentication.Logout");

	UEOSAuthentication_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UEOS.EOSAuthentication.Login
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELoginMode*                    LoginMode                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 UserId                         (Parm, ZeroConstructor)
// class FString*                 UserToken                      (Parm, ZeroConstructor)

void UEOSAuthentication::Login(ELoginMode* LoginMode, class FString* UserId, class FString* UserToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSAuthentication.Login");

	UEOSAuthentication_Login_Params params;
	params.LoginMode = LoginMode;
	params.UserId = UserId;
	params.UserToken = UserToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UEOS.EOSAuthentication.GetAuthorised
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSAuthentication::GetAuthorised()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSAuthentication.GetAuthorised");

	UEOSAuthentication_GetAuthorised_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSMetrics.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSMetrics::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSMetrics.IsValid");

	UEOSMetrics_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSMetrics.InitMetric
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSMetrics::InitMetric()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSMetrics.InitMetric");

	UEOSMetrics_InitMetric_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSMetrics.EndPlayerSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 DisplayName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSMetrics::EndPlayerSession(class FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSMetrics.EndPlayerSession");

	UEOSMetrics_EndPlayerSession_Params params;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSMetrics.BeginPlayerSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 DisplayName                    (Parm, ZeroConstructor)
// ESupportedAccountType*         TargetAccountType              (Parm, ZeroConstructor, IsPlainOldData)
// EInputControllerType*          ControllerType                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSMetrics::BeginPlayerSession(class FString* DisplayName, ESupportedAccountType* TargetAccountType, EInputControllerType* ControllerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSMetrics.BeginPlayerSession");

	UEOSMetrics_BeginPlayerSession_Params params;
	params.DisplayName = DisplayName;
	params.TargetAccountType = TargetAccountType;
	params.ControllerType = ControllerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.UpdateEOS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSManager::UpdateEOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.UpdateEOS");

	UEOSManager_UpdateEOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.ShutdownEOS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSManager::ShutdownEOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.ShutdownEOS");

	UEOSManager_ShutdownEOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.IsEOSInitialized
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSManager::STATIC_IsEOSInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.IsEOSInitialized");

	UEOSManager_IsEOSInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.InitEOS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEOSManager::InitEOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.InitEOS");

	UEOSManager_InitEOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.GetMetrics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEOSMetrics*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEOSMetrics* UEOSManager::STATIC_GetMetrics()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.GetMetrics");

	UEOSManager_GetMetrics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.GetEOSManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEOSManager*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEOSManager* UEOSManager::STATIC_GetEOSManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.GetEOSManager");

	UEOSManager_GetEOSManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.GetAuthentication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEOSAuthentication*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEOSAuthentication* UEOSManager::STATIC_GetAuthentication()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.GetAuthentication");

	UEOSManager_GetAuthentication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UEOS.EOSManager.Cleanup
// (Final, Native, Static, Public, BlueprintCallable)

void UEOSManager::STATIC_Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function UEOS.EOSManager.Cleanup");

	UEOSManager_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
