//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPUserInfo, MidasIapOrderInfo;

@interface MidasIPReporter : NSObject
{
    MidasIapOrderInfo *_orderInfo;	// 8 = 0x8
    MidasIAPUserInfo *_userInfo;	// 16 = 0x10
}

@property(retain, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;	// IMP=0x00000001005de070
- (void)reportIPSpeed:(id)arg1 qDiaoType:(id)arg2 delay:(double)arg3;	// IMP=0x00000001005dde30
- (id)initWithOrderInfo:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001005ddd78

@end

