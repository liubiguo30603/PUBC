//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKFriendDelegate.h"
#import "VKSdkDelegate.h"
#import "VKSdkUIDelegate.h"

@class NSString;

@interface IMSDKFriendVKManager : NSObject <VKSdkDelegate, VKSdkUIDelegate, IMSDKFriendDelegate>
{
    CDUnknownBlockType _completeBlock;	// 8 = 0x8
    CDUnknownBlockType _friendBlock;	// 16 = 0x10
}

+ (id)shareInstance;	// IMP=0x0000000100b425a4
@property(copy, nonatomic) CDUnknownBlockType friendBlock; // @synthesize friendBlock=_friendBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;	// IMP=0x0000000100b442ac
- (void)vkSdkNeedCaptchaEnter:(id)arg1;	// IMP=0x0000000100b44270
- (void)vkSdkShouldPresentViewController:(id)arg1;	// IMP=0x0000000100b4426c
- (void)vkSdkUserAuthorizationFailed;	// IMP=0x0000000100b44268
- (void)vkSdkAccessAuthorizationFinishedWithResult:(id)arg1;	// IMP=0x0000000100b44264
- (void)share:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b43c90
- (void)sendMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b43770
- (void)inviteWithContent:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b43250
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b42740
- (id)initSigleton;	// IMP=0x0000000100b42624
- (id)init;	// IMP=0x0000000100b42548

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

