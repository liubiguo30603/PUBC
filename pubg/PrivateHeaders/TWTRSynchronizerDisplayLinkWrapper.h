//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

@interface TWTRSynchronizerDisplayLinkWrapper : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    CDUnknownBlockType _actionBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;	// IMP=0x000000010081fe48
- (void)invalidate;	// IMP=0x000000010081fdc4
- (void)displayLinkDidFire:(id)arg1;	// IMP=0x000000010081fd48
- (id)init;	// IMP=0x000000010081fc54

@end

