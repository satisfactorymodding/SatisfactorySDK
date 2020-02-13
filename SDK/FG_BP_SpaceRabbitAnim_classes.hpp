#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SpaceRabbitAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C
// 0x2C68 (0x2FF8 - 0x0390)
class UBP_SpaceRabbitAnim_C : public UFGCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4EFAE999406617D7827CB7AB5E1E9E5D;      // 0x0398(0x0020)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_9B1061534F03F92CC11686A9AA65C1E0;// 0x03B8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_95143CBA4AA82224BDEA069875123FF4;// 0x0458(0x0188)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_86B4A5F94509BB124B254A81AACF19C4;// 0x05E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_74B0663646EB566916DA4DB49D8C8F12;// 0x0600(0x0020)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6749118F4EC959615B06C8A9911F4098;// 0x0620(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F05E496F497128835F8787BB063D3B8D;// 0x07A8(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_85D1071B4BA16210D9A1218DC3F0149A;// 0x0848(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EA1A3E0A48E7040B3465848AE914E2D6;// 0x0950(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CDE46D0E406C2C7B115217B442C3B1EB;// 0x0A58(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CAEBC6244740D231DA8600A6DF649D5C;// 0x0AF8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_746C410649357AF7B893AAB93311F297;// 0x0B18(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3C3A5D5745F9CA1DAF7F168023036918;// 0x0BD0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_078DC2244AF468AAD0E69DA378FD77E0;// 0x0BF8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_212E75224E3813307B39D4AAD82834A7;// 0x0C18(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_84B780E64CBFA8741764ECA4EDF40103;// 0x0D20(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B5E4C83A40E33645B0DD30B86A1F26E8;// 0x0D40(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A8BDFAEE47DBDD00F7F9CE9E532D4D82;// 0x0D60(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8E08F6D7426B48816BB0C2BE09DC6319;// 0x0E18(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB1637D24815A519B95A599B09E1DF04;// 0x0E40(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21C046014858272F36ACD99CC2B91637;// 0x0E68(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A5CA0404E2B1E50234BE081DC7C5118;// 0x0F70(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_811F7E1D43EFBA21A826F2AD726F5233;// 0x1078(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3ED3A5234C290E7670FA09ACB16AB009;// 0x1098(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9224B5EF420FD68C640B08A07533A2A7;// 0x1138(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1FCB3E2C44FF345FA71D5094816EFE28;// 0x1158(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F67EE56B400615DCA9A4908EA720E465;// 0x1210(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EF85DFC4E8BBDA3E4BC86AEC40232B3;// 0x1238(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB7A84DB40E9B8B9EC0FA9A676CA87C1;// 0x1260(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F28B95014E4ADEAF5E19A3B63949184C;// 0x1288(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E78CF619465F9C321B545384E19CCB02;// 0x12B0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8A233E6D4BFDAEF4FCBB0AAF799A8E38;// 0x1390(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_505D84144AD4D2C6545D8DB9D2D3459B;// 0x13B0(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3FC58800486597416390EF81FFA1A16D;// 0x13C8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD504B0440E929EA0AEA72867D5E9FB2;// 0x13E8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E6D78DA043D177E7B3680987F92F2C2C;// 0x1498(0x00C8)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_729A82F844DB4C2F0019789EB3B04067; // 0x1560(0x0550)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFC24A3341A01FC2A0BB85AB340CE23F;// 0x1AB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECAE384A48840A166AE91DA38AB6D368;// 0x1AD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CA7EB434AE691EEB602DE9A79024A23;// 0x1B00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6879EA29462D1CDF51F250AE98905900;// 0x1B28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B38A16EF497AE10F2F3B1BA14159D8B6;// 0x1B50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05345F29433C77E9EABDC0BE4B937A12;// 0x1B78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DA227DC453491367B1B2B8E98CF9575;// 0x1BA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6D642C14A20575B54FBE899C1714391;// 0x1BC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCC677D946EF69862AE703A42591159D;// 0x1BF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F4251AD48D878FDD82A498E418BA270;// 0x1C18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F5FFFBF48CEAC7871D8BD962E09D99B;// 0x1C40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC94D5694403857CB8DEDDA029F68D74;// 0x1C68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95C9B5D44BCDA4CEF670EBB734C4A8F4;// 0x1C90(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B70C3B394D875E3A599C998FDDC94B8A;// 0x1CB8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_781AC0DC405D8083662E4BB5B2EB8514;// 0x1D30(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B3FCBE4483C33A717C5C2B1E82581FA;// 0x1D50(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_739D785A407CBAA4E4FDA9B079168322;// 0x1DC8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB433EF54C1D6BA536C0E399D1C52D52;// 0x1DE8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_722AEE3448DB44A5C2CCF2AD4871DF0E;// 0x1E60(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E7CD9FB4C16CD648D14C8BFD84A080C;// 0x1E80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3ABE92444DBDEFC4AE09F68B8604F309;// 0x1EA8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDBEC44C48474F11724A45937FCCE736;// 0x1ED0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_75ED5482467AC0DD9B5CFCAB2E2B21E4;// 0x1F48(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_817C520440CB3D9786434FAD175D86A9;// 0x1F68(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CED978104690386D304C32936D7A1681;// 0x1FD0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8EB7BB8345AB6BF96CC1D5A9C614C082;// 0x1FF0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8878169B4F9BCC82DE1B06A7F9F77C1F;// 0x20A0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58B0ED0E4D27F26D4FE2AA9A07A02528;// 0x20C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B80A8A354AA03D0F6BFD6D86D7388DC3;// 0x20E8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43B3EAFD4F87F786DE07419EE69FB884;// 0x2110(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA80B7CE4A292C7C00D8C89966E046E8;// 0x21B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8627BF1C4D021765D15D2AB4BD650F9D;// 0x2228(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A1FAD2AE45A8E2B4F2EE45B87F2DCEF0;// 0x22A0(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_26A69BF040DEA67F42434988BE919922;// 0x22C0(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F15A1E54444B366DFADC9C8CB6317F91;// 0x2328(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_0E437D0045711F474027C9A379A01829;// 0x23C8(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CBB105FA4F0DFB59A1C5DDB6917A866B;// 0x2430(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F17C1071413F5BD961BE239A6787F5BD;// 0x2450(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0931346D437FFC80235BF4B5EB255529;// 0x2500(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_244FEFEC4E26E94FE5EEC6AE3BB595D2;// 0x2520(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAE2038E400AEC56D18DC09CDB719F8A;// 0x25D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11E8210B4F2EB87DF2914DA75048E67F;// 0x25F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B41F8DD40D8915E5B51338C0E7A6CC8;// 0x2620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43A53F9C494FCBCB2CEFBE86C56DE89C;// 0x2648(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8FFBF204DA6861069E9149F01F9FF43;// 0x2670(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E42E47E45FF613C112A249ED5554D59;// 0x2698(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BB219974AC2DFDD753F66B1CF15890B;// 0x26C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B45377442C26E72DA2C7EB657B4E0DC;// 0x26E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_092F9AF94E24A21B36AA7082D432EBFD;// 0x2710(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A25F8AD8405BFDC59F296B96B4D71D57;// 0x2738(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BF3DF26F4672A28D471E1C9A93C2AA3B;// 0x27B0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CD351EC4D9C62F69F304AAF6439A58A;// 0x27D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A34500264D247E4753397086CF09B69C;// 0x2848(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9AE603004D8B3DB9BA893ABD85FFA566;// 0x2868(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_803AD7714B024767C4AA47807BD1A905;// 0x28E0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E6A3E864E0E84F1FCCD7EBE86D3A980;// 0x2900(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C69A4C14ED82AD71302CBA6837321AF;// 0x2928(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_AEEF7859404C21BA0304C4A20346C1F9;// 0x2950(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8D14DF114E7C48D1859611B075D0C31C;// 0x29B8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8ED847C4F474495BEB6A4BA249CAF8B;// 0x29D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8B365104452F7C221FDC7E93B70EC630;// 0x2A50(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4F83DCF14FDC7C7054C56D80164FD1C0;// 0x2A70(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BC8C3CE547DBBD2ECB2FBDACE4DB10A1;// 0x2B20(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1FE1C9DC4FB45226ADBE8CA2EFB7D025;// 0x2B40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC89C93641EBDE9C6096D298D7E0B5D5;// 0x2B68(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3FF68DC3411887D0D0C166AF34AE965F;// 0x2B90(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63450C124C25051220BF81BAF5A4DF24;// 0x2C08(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D3F216B442CB73EBF63688C95740B8C;// 0x2CA8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7F98D09A4A005B90EEEE0FA95985478B;// 0x2D20(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_F6353B974AACA167F52ED98432D92392;// 0x2D40(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A5DC84794957E82A82ADC7ADA56C3BBC;// 0x2DA8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C56F5C7A4600DB0892849EA6E376DC85;// 0x2DC8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3D04CC6D413A322D6B385DB7C2387258;// 0x2E78(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_19FA70674CF4A4EAD7CBBF92A47567A5;// 0x2E98(0x00B0)
	float                                              mDeltaTime;                                               // 0x2F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mRadialDmgTaken;                                          // 0x2F4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2F4D(0x0003) MISSED OFFSET
	float                                              mHitDirection;                                            // 0x2F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPointDmgTaken;                                           // 0x2F54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2F55(0x0003) MISSED OFFSET
	class AChar_SpaceRabbit_C*                         mRabbitPawn;                                              // 0x2F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsFriend;                                                // 0x2F60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsWalkingBackwards;                                      // 0x2F61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsThreatened;                                            // 0x2F62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x2F63(0x0005) MISSED OFFSET
	TArray<struct FEnemyFootstepStruct>                RunSoundMap;                                              // 0x2F68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEnemyFootstepStruct>                JumpSoundMap;                                             // 0x2F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEnemyFootstepStruct>                LandSoundMap;                                             // 0x2F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEnemyFootstepStruct>                WalkSoundMap;                                             // 0x2F98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               mAG_WalkToRunTransition;                                  // 0x2FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_RunToWalkTransition;                                  // 0x2FA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsFalling;                                            // 0x2FAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IdleToWalkTransition;                                 // 0x2FAB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_WalkToIdleTransition;                                 // 0x2FAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_FallingToWalkTransition;                              // 0x2FAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsWalking;                                            // 0x2FAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_WalkingBwdToWalkingTransition;                        // 0x2FAF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_WalkingBwdToIdleTransition;                           // 0x2FB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2FB1(0x0003) MISSED OFFSET
	float                                              mAG_InvertedAimYaw;                                       // 0x2FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_SurfaceRotationClamp;                                 // 0x2FB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsRunning;                                            // 0x2FC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_WalkingBwdLean;                                       // 0x2FC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2FC6(0x0002) MISSED OFFSET
	struct FRotator                                    mAG_WalkBwdLeanRotationHead;                              // 0x2FC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_WalkBwdLeanRotationSpine;                             // 0x2FD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_RunLeanRotationSpine;                                 // 0x2FE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_RunLeanRotationPelvis;                                // 0x2FEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C");
		return ptr;
	}


	void CalculateAnimGraphValues();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void OnRadialDamageTaken();
	void OnPointDamageTaken(struct FVector* shootDIrection);
	void AnimNotify_AudioNotify_SpaceBunny_RTPC_2();
	void AnimNotify_AudioNotify_SpaceBunny_RTPC_3();
	void AnimNotify_AudioNotify_SpaceBunny_RTPC_4();
	void AnimNotify_AudioNotify_SpaceBunny_SupressBreath();
	void AnimNotify_AudioNotify_SpaceBunny_ReleaseBreath();
	void ExecuteUbergraph_BP_SpaceRabbitAnim(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
