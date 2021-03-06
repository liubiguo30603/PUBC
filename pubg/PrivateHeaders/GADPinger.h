//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADScheduler, GADWebViewPinger, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface GADPinger : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    GADScheduler *_scheduler;	// 16 = 0x10
    long long _maximumRetryURLCount;	// 24 = 0x18
    long long _URLRetryCount;	// 32 = 0x20
    NSMutableArray *_retryGroupKeys;	// 40 = 0x28
    NSMutableSet *_pingedURLs;	// 48 = 0x30
    GADWebViewPinger *_webViewPinger;	// 56 = 0x38
    _Bool _reloadRequired;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00000001009b7e60
- (void).cxx_destruct;	// IMP=0x00000001009b9b5c
- (void)removeRetryURLString:(id)arg1 retryGroupKey:(id)arg2;	// IMP=0x00000001009b9a70
- (void)storeRetryURLString:(id)arg1 retryGroupKey:(id)arg2;	// IMP=0x00000001009b9794
- (void)start;	// IMP=0x00000001009b9304
- (void)pingWithRetryGroupKey:(id)arg1 URL:(id)arg2 retryURLString:(id)arg3;	// IMP=0x00000001009b9004
- (void)pingRetryURLs;	// IMP=0x00000001009b8a80
- (void)sendPing:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001009b8768
- (void)pingURLString:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001009b8164
- (id)init;	// IMP=0x00000001009b7ee0

@end

