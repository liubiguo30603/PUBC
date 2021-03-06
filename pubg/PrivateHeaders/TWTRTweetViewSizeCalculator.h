//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TWTRTweetView;

@interface TWTRTweetViewSizeCalculator : NSObject
{
    TWTRTweetView *_regularTweetView;	// 8 = 0x8
    TWTRTweetView *_compactTweetView;	// 16 = 0x10
}

+ (double)heightForTweet:(id)arg1 style:(unsigned long long)arg2 fittingWidth:(double)arg3 showingActions:(_Bool)arg4;	// IMP=0x000000010081a2d8
+ (double)calculatedHeightForTweet:(id)arg1 style:(unsigned long long)arg2 fittingWidth:(double)arg3 showingActions:(_Bool)arg4;	// IMP=0x000000010081a210
+ (id)heightCache;	// IMP=0x000000010081a194
+ (id)compactTweetView;	// IMP=0x000000010081a0f0
+ (id)regularTweetView;	// IMP=0x000000010081a04c
+ (id)cachedTweetViewForStyle:(unsigned long long)arg1;	// IMP=0x000000010081a00c
@property(retain, nonatomic) TWTRTweetView *compactTweetView; // @synthesize compactTweetView=_compactTweetView;
@property(retain, nonatomic) TWTRTweetView *regularTweetView; // @synthesize regularTweetView=_regularTweetView;
- (void).cxx_destruct;	// IMP=0x000000010081a4f8

@end

