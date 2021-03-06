//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconJceObjectV2.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface BeaconRequestPacket : BeaconJceObjectV2
{
    NSNumber *_iVersion;	// 8 = 0x8
    NSNumber *_cPacketType;	// 16 = 0x10
    NSNumber *_iMessageType;	// 24 = 0x18
    NSNumber *_iRequestId;	// 32 = 0x20
    NSString *_sServantName;	// 40 = 0x28
    NSString *_sFuncName;	// 48 = 0x30
    NSData *_sBuffer;	// 56 = 0x38
    NSNumber *_iTimeout;	// 64 = 0x40
    NSDictionary *_context;	// 72 = 0x48
    NSDictionary *_status;	// 80 = 0x50
}

@property(retain, nonatomic) NSDictionary *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSNumber *iTimeout; // @synthesize iTimeout=_iTimeout;
@property(retain, nonatomic) NSData *sBuffer; // @synthesize sBuffer=_sBuffer;
@property(retain, nonatomic) NSString *sFuncName; // @synthesize sFuncName=_sFuncName;
@property(retain, nonatomic) NSString *sServantName; // @synthesize sServantName=_sServantName;
@property(retain, nonatomic) NSNumber *iRequestId; // @synthesize iRequestId=_iRequestId;
@property(retain, nonatomic) NSNumber *iMessageType; // @synthesize iMessageType=_iMessageType;
@property(retain, nonatomic) NSNumber *cPacketType; // @synthesize cPacketType=_cPacketType;
@property(retain, nonatomic) NSNumber *iVersion; // @synthesize iVersion=_iVersion;
- (void).cxx_destruct;	// IMP=0x00000001007984d4
- (void)__unpack:(id)arg1;	// IMP=0x0000000100797e84
- (void)__pack:(id)arg1;	// IMP=0x0000000100797bfc
- (id)init;	// IMP=0x000000010079796c

@end

