//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSEAccount.h"

@class NSString;

@interface TWTRComposerAccount : NSObject <TSEAccount>
{
    long long _userID;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;	// IMP=0x0000000100874fac
- (id)userIDString;	// IMP=0x0000000100874f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

