//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLYLoggerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BLYAbstraceLogger : NSObject <BLYLoggerDelegate>
{
    NSObject<OS_dispatch_queue> *_loggerQueue;	// 8 = 0x8
    _Bool _onGlobalLoggingQueue;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=isOnGlobalLoggingQueue) _Bool onGlobalLoggingQueue; // @synthesize onGlobalLoggingQueue=_onGlobalLoggingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
- (void).cxx_destruct;	// IMP=0x0000000100728c44
- (void)logMessage:(id)arg1;	// IMP=0x0000000100728c1c
@property(readonly, nonatomic, getter=isOnInternalLoggerQueue) _Bool onInternalLoggerQueue;
@property(readonly, nonatomic) NSString *loggerName;
- (id)init;	// IMP=0x0000000100728b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

