//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSAppLifeCycleEventsObserver.h"

@class HSUserManagerDM, HsDomain, NSDictionary, NSString;

@interface HsConversationInboxManagerDM : NSObject <HSAppLifeCycleEventsObserver>
{
    id <HsPlatform> _platform;	// 8 = 0x8
    HsDomain *_domain;	// 16 = 0x10
    HSUserManagerDM *_userManagerDM;	// 24 = 0x18
    NSDictionary *_activeUserToInboxMapping;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001013722ec
- (id)buildConversationInboxDM:(id)arg1;	// IMP=0x0000000101372218
- (void)applicationWillEnterForeground;	// IMP=0x00000001013721c4
- (void)deleteConversations:(id)arg1;	// IMP=0x0000000101372094
- (id)conversationInboxDM:(id)arg1;	// IMP=0x0000000101371fd8
- (id)activeConversationInboxDM;	// IMP=0x0000000101371e58
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 userManagerDM:(id)arg3;	// IMP=0x0000000101371cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

