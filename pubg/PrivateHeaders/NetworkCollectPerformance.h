//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TApmCollectPerformance.h"

@interface NetworkCollectPerformance : TApmCollectPerformance
{
    unsigned long long _currentNetworkType;	// 8 = 0x8
    unsigned long long _preWifiSend;	// 16 = 0x10
    unsigned long long _preWifiReceieved;	// 24 = 0x18
    unsigned long long _preWWANSend;	// 32 = 0x20
    unsigned long long _preWWANReceieved;	// 40 = 0x28
    unsigned long long _diffWifiSend;	// 48 = 0x30
    unsigned long long _diffWifiReceieved;	// 56 = 0x38
    unsigned long long _diffWWANSend;	// 64 = 0x40
    unsigned long long _diffWWANReceieved;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000101135070
- (void)stopMonitor;	// IMP=0x0000000101135864
- (void)getNetworkTraffic;	// IMP=0x000000010113551c
- (short)getNetworkType;	// IMP=0x000000010113539c
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010113522c
- (void)collectionDatas;	// IMP=0x00000001011351cc
- (void)startMonitor;	// IMP=0x0000000101135198
- (id)init;	// IMP=0x00000001011350f0

@end

