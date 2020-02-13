// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.DismantleGolfCart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGWheeledVehicle**      GolfCart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::DismantleGolfCart(class AFGWheeledVehicle** GolfCart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DismantleGolfCart");

	ABP_PlayerController_C_DismantleGolfCart_Params params;
	params.GolfCart = GolfCart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnSetupMovementWind
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* ABP_PlayerController_C::OnSetupMovementWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnSetupMovementWind");

	ABP_PlayerController_C_OnSetupMovementWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnDisabledInputChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputChanged");

	ABP_PlayerController_C_OnDisabledInputChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ToggleMiniMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::ToggleMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ToggleMiniMap");

	ABP_PlayerController_C_ToggleMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.DismantlePortableMiner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPortableMiner**       PortableMiner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::DismantlePortableMiner(class AFGPortableMiner** PortableMiner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DismantlePortableMiner");

	ABP_PlayerController_C_DismantlePortableMiner_Params params;
	params.PortableMiner = PortableMiner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Chat_K2Node_InputActionEvent_17(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_17");

	ABP_PlayerController_C_InpActEvt_Chat_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut1_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut1_K2Node_InputActionEvent_16(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut1_K2Node_InputActionEvent_16");

	ABP_PlayerController_C_InpActEvt_Shortcut1_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut2_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut2_K2Node_InputActionEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut2_K2Node_InputActionEvent_15");

	ABP_PlayerController_C_InpActEvt_Shortcut2_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut3_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut3_K2Node_InputActionEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut3_K2Node_InputActionEvent_14");

	ABP_PlayerController_C_InpActEvt_Shortcut3_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut4_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut4_K2Node_InputActionEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut4_K2Node_InputActionEvent_13");

	ABP_PlayerController_C_InpActEvt_Shortcut4_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut5_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut5_K2Node_InputActionEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut5_K2Node_InputActionEvent_12");

	ABP_PlayerController_C_InpActEvt_Shortcut5_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut6_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut6_K2Node_InputActionEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut6_K2Node_InputActionEvent_11");

	ABP_PlayerController_C_InpActEvt_Shortcut6_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut7_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut7_K2Node_InputActionEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut7_K2Node_InputActionEvent_10");

	ABP_PlayerController_C_InpActEvt_Shortcut7_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut8_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut8_K2Node_InputActionEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut8_K2Node_InputActionEvent_9");

	ABP_PlayerController_C_InpActEvt_Shortcut8_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut9_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut9_K2Node_InputActionEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut9_K2Node_InputActionEvent_8");

	ABP_PlayerController_C_InpActEvt_Shortcut9_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut10_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Shortcut10_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shortcut10_K2Node_InputActionEvent_7");

	ABP_PlayerController_C_InpActEvt_Shortcut10_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PhotoMode_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_PhotoMode_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PhotoMode_K2Node_InputActionEvent_6");

	ABP_PlayerController_C_InpActEvt_PhotoMode_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleMap_BuildGunNoSnapMode_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_ToggleMap_BuildGunNoSnapMode_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleMap_BuildGunNoSnapMode_K2Node_InputActionEvent_5");

	ABP_PlayerController_C_InpActEvt_ToggleMap_BuildGunNoSnapMode_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Prototype_RagdollPlayer_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Prototype_RagdollPlayer_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Prototype_RagdollPlayer_K2Node_InputActionEvent_4");

	ABP_PlayerController_C_InpActEvt_Prototype_RagdollPlayer_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_SecondaryFire_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_3");

	ABP_PlayerController_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_TogglePhotoModeUIVisibility_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_TogglePhotoModeUIVisibility_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_TogglePhotoModeUIVisibility_K2Node_InputActionEvent_2");

	ABP_PlayerController_C_InpActEvt_TogglePhotoModeUIVisibility_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PauseGame_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_PauseGame_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PauseGame_K2Node_InputActionEvent_1");

	ABP_PlayerController_C_InpActEvt_PauseGame_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveTick");

	ABP_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnStartRespawn
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isJoining                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnStartRespawn(bool* isJoining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnStartRespawn");

	ABP_PlayerController_C_OnStartRespawn_Params params;
	params.isJoining = isJoining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnFinishRespawn
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::OnFinishRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnFinishRespawn");

	ABP_PlayerController_C_OnFinishRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");

	ABP_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.CheckAndUpdateGamepad
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::CheckAndUpdateGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CheckAndUpdateGamepad");

	ABP_PlayerController_C_CheckAndUpdateGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Server_ForceRagdoll
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::Server_ForceRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_ForceRagdoll");

	ABP_PlayerController_C_Server_ForceRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputGateChanged
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::OnDisabledInputGateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputGateChanged");

	ABP_PlayerController_C_OnDisabledInputGateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.CreateSequenceList
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::CreateSequenceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CreateSequenceList");

	ABP_PlayerController_C_CreateSequenceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidget
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::TogglePhotoModeInstructionsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidget");

	ABP_PlayerController_C_TogglePhotoModeInstructionsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.PlayPhotoSound
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::PlayPhotoSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.PlayPhotoSound");

	ABP_PlayerController_C_PlayPhotoSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.TakePhoto
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::TakePhoto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TakePhoto");

	ABP_PlayerController_C_TakePhoto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.DoPause
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::DoPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DoPause");

	ABP_PlayerController_C_DoPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnDismantlePortableMiner
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPortableMiner**       PortableMiner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnDismantlePortableMiner(class AFGPortableMiner** PortableMiner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDismantlePortableMiner");

	ABP_PlayerController_C_OnDismantlePortableMiner_Params params;
	params.PortableMiner = PortableMiner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnDismantleGolfCart
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGWheeledVehicle**      inGolfCart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnDismantleGolfCart(class AFGWheeledVehicle** inGolfCart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDismantleGolfCart");

	ABP_PlayerController_C_OnDismantleGolfCart_Params params;
	params.inGolfCart = inGolfCart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnRespawnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnRespawnEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnRespawnEnd__DelegateSignature");

	ABP_PlayerController_C_OnRespawnEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnBeginTypeChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnBeginTypeChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnBeginTypeChat__DelegateSignature");

	ABP_PlayerController_C_OnBeginTypeChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
