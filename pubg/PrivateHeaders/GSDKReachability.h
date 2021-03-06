//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDKReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x0000000100503d64
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000100503cbc
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0000000100503be8
- (long long)currentReachabilityStatus;	// IMP=0x0000000100504178
- (_Bool)connectionRequired;	// IMP=0x0000000100504140
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000100503fb0
- (void)dealloc;	// IMP=0x0000000100503f1c
- (void)stopNotifier;	// IMP=0x0000000100503ed0
- (_Bool)startNotifier;	// IMP=0x0000000100503dc4

@end

