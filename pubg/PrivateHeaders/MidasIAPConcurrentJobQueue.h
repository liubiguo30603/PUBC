//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPConcurrentJobDelegate.h"

@class NSMutableArray, NSString;

@interface MidasIAPConcurrentJobQueue : NSObject <MidasIAPConcurrentJobDelegate>
{
    id <MidasIAPConcurrentJobQueueDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_jobQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001005dd728
- (void)onFinish:(id)arg1;	// IMP=0x00000001005dd3d4
- (void)onStart:(id)arg1;	// IMP=0x00000001005dd2dc
- (void)enqueue:(id)arg1 runImmediately:(_Bool)arg2;	// IMP=0x00000001005dcfc0
- (void)dealloc;	// IMP=0x00000001005dce80
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001005dcdd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

