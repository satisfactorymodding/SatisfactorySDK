#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_UEOS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UEOS.EOSAuthentication
// 0x00C8 (0x00F0 - 0x0028)
class UEOSAuthentication : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnUserLoggedIn;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserLoggedOut;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserLoginRequiresMFA;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserLoginFail;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0068(0x0080) MISSED OFFSET
	bool                                               bAuthorised;                                              // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UEOS.EOSAuthentication");
		return ptr;
	}


	void Update();
	void Logout();
	void Login(ELoginMode* LoginMode, class FString* UserId, class FString* UserToken);
	bool GetAuthorised();
};


// Class UEOS.EOSMetrics
// 0x0010 (0x0038 - 0x0028)
class UEOSMetrics : public UObject
{
public:
	ESupportedAccountType                              AccountType;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0029(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UEOS.EOSMetrics");
		return ptr;
	}


	bool IsValid();
	bool InitMetric();
	bool EndPlayerSession(class FString* DisplayName);
	bool BeginPlayerSession(class FString* DisplayName, ESupportedAccountType* TargetAccountType, EInputControllerType* ControllerType);
};


// Class UEOS.EOSConfig
// 0x0048 (0x0080 - 0x0038)
class UEOSConfig : public UDeveloperSettings
{
public:
	class FString                                      ProductId;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SandboxId;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientId;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientSecret;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bIsServer;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowReservedPlatforms;                                  // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ELogLevel                                          LogLevel;                                                 // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UEOS.EOSConfig");
		return ptr;
	}

};


// Class UEOS.EOSManager
// 0x0018 (0x0040 - 0x0028)
class UEOSManager : public UObject
{
public:
	bool                                               bEOSInitialized;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UEOSAuthentication*                          Authentication;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEOSMetrics*                                 Metrics;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UEOS.EOSManager");
		return ptr;
	}


	bool UpdateEOS();
	bool ShutdownEOS();
	bool STATIC_IsEOSInitialized();
	bool InitEOS();
	class UEOSMetrics* STATIC_GetMetrics();
	class UEOSManager* STATIC_GetEOSManager();
	class UEOSAuthentication* STATIC_GetAuthentication();
	void STATIC_Cleanup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
