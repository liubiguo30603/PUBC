//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSCategoryTagsFilter, HSConfigPlist, UIColor;

@interface HSConfigController : NSObject
{
    short _addFaqsToSearchOption;	// 8 = 0x8
    _Bool _disableHelpshiftBranding;	// 10 = 0xa
    _Bool _helpshiftLogo;	// 11 = 0xb
    _Bool _disableAppLaunchEvent;	// 12 = 0xc
    HSConfigPlist *_pListConfig;	// 16 = 0x10
}

+ (id)stringForContactUs;	// IMP=0x000000010144a03c
+ (id)sharedInstance;	// IMP=0x0000000101449ca8
@property(nonatomic) _Bool disableAppLaunchEvent; // @synthesize disableAppLaunchEvent=_disableAppLaunchEvent;
@property(nonatomic) _Bool helpshiftLogo; // @synthesize helpshiftLogo=_helpshiftLogo;
@property(nonatomic) _Bool disableHelpshiftBranding; // @synthesize disableHelpshiftBranding=_disableHelpshiftBranding;
@property(retain, nonatomic) HSConfigPlist *pListConfig; // @synthesize pListConfig=_pListConfig;
- (void).cxx_destruct;	// IMP=0x000000010144a2b4
@property(nonatomic) _Bool enableEntryExitAnimations;
@property(readonly, nonatomic) HSCategoryTagsFilter *filterTagsConfig;
@property(readonly, nonatomic) _Bool showHelpshiftLogo;
@property(readonly, nonatomic) _Bool useLightContentForStatusBar;
@property(readonly, nonatomic) UIColor *searchHighlightColor;
@property(readonly, nonatomic) _Bool isSDKSessionActive;
@property(readonly, nonatomic) _Bool presentFullScreenOniPad;
- (id)init;	// IMP=0x0000000101449c20

@end

