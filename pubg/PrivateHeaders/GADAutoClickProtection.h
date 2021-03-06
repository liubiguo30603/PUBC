//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GADAutoClickProtection : NSObject
{
    NSArray *_reportingURLStringTemplates;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;	// IMP=0x000000010093ebc8
- (void)reportSpamOpenActionWithNavigationURLString:(id)arg1;	// IMP=0x000000010093e9f0
- (void)reportSpamOpenActionWithAdDebugDialogString:(id)arg1 navigationURLString:(id)arg2;	// IMP=0x000000010093e8d0
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010093e7b0
- (id)initWithAutoClickProtectionEnabled:(_Bool)arg1;	// IMP=0x000000010093e760

@end

