//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIRInstanceIDLogger : NSObject
{
}

+ (id)formatMessageCode:(long long)arg1;	// IMP=0x000000010091d518
- (void)logFuncError:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;	// IMP=0x000000010091d7b0
- (void)logFuncWarning:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;	// IMP=0x000000010091d718
- (void)logFuncNotice:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;	// IMP=0x000000010091d680
- (void)logFuncInfo:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;	// IMP=0x000000010091d5e8
- (void)logFuncDebug:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;	// IMP=0x000000010091d550

@end

