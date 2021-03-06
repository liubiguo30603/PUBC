//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WXOMTADataConfig;

@interface WXOMTADataConfigHolder : NSObject
{
    struct dispatch_queue_s *task_queue;	// 8 = 0x8
    struct sqlite3 *db;	// 16 = 0x10
    WXOMTADataConfig *_sdkCfg;	// 24 = 0x18
    WXOMTADataConfig *_appCfg;	// 32 = 0x20
    NSMutableDictionary *_appProperties;	// 40 = 0x28
}

+ (id)getInstance;	// IMP=0x000000010152232c
+ (id)initSingleton:(CDUnknownBlockType)arg1;	// IMP=0x0000000101522208
@property(retain, nonatomic) NSMutableDictionary *appProperties; // @synthesize appProperties=_appProperties;
@property(retain, nonatomic) WXOMTADataConfig *appCfg; // @synthesize appCfg=_appCfg;
@property(retain, nonatomic) WXOMTADataConfig *sdkCfg; // @synthesize sdkCfg=_sdkCfg;
- (void).cxx_destruct;	// IMP=0x0000000101523498
- (void)updateOnlineConfig:(id)arg1;	// IMP=0x0000000101523200
- (void)updateConfig:(id)arg1 Type:(unsigned int)arg2;	// IMP=0x0000000101522fe0
- (id)getConfig:(unsigned int)arg1;	// IMP=0x0000000101522f90
- (void)encode:(id)arg1;	// IMP=0x0000000101522e00
- (void)setConfig:(id)arg1;	// IMP=0x00000001015223c0
- (id)getAppProperty:(id)arg1;	// IMP=0x0000000101522338
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001015220c8

@end

