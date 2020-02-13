#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_OnlineHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OnlineHelpers.BP_OnlineHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_OnlineHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineHelpers.BP_OnlineHelpers_C");
		return ptr;
	}


	void STATIC_InsertionAddButton(class UPanelWidget** NewParam, class UObject** __WorldContext);
	void STATIC_GetSessionFromFriendNetId(class UObject** WorldContext, struct FUniqueNetIdRepl* friendNetId, class UObject** __WorldContext, struct FBlueprintSessionResult* session);
	void STATIC_IsHost(class APlayerState** PlayerState, class APlayerController** OwningPlayer, class UObject** __WorldContext, bool* isOurself);
	void STATIC_CanJoinInvite(class UObject** WorldContext, struct FPendingInvite* invite, class UObject** __WorldContext, TEnumAsByte<ECanJoinInviteResult>* Result);
	void STATIC_IsInThisGame(class UObject** WorldContext, class UObject** __WorldContext, struct FFGOnlineFriend* onlineFriend, bool* inThisGame);
	void STATIC_CanSendInvite(class UObject** WorldContext, struct FFGOnlineFriend* _friend, class UObject** __WorldContext, TEnumAsByte<ECantInviteResult>* canSend);
	void STATIC_IsFriendInOnlineSession(class UObject** WorldContext, class UObject** __WorldContext, struct FFGOnlineFriend* frriend, bool* inSession);
	void STATIC_GetCompactPresence(struct FOnlinePresence* presence, class UObject** __WorldContext, struct FFCompactPresence* compactPresence);
	void STATIC_GetFriendSession(struct FFGOnlineFriend* _friend, class UObject** WorldContext, class UObject** __WorldContext, struct FBlueprintSessionResult* session);
	void STATIC_GetInvitePresence(class UObject** WorldContext, struct FPendingInvite* invite, class UObject** __WorldContext, struct FOnlinePresence* presence);
	struct FOnlinePresence STATIC_GetFriendPresence(struct FFGOnlineFriend* onlineFriend, class UObject** WorldContext, class UObject** __WorldContext);
	void STATIC_SessionVisibilityStringToEnum(class FString* String, class UObject** __WorldContext, TEnumAsByte<ESessionVisibility>* Enum);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
