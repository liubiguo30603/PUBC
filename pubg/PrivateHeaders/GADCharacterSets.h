//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSObject<OS_dispatch_queue>;

@interface GADCharacterSets : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    NSCharacterSet *_characterDelimitedSet;	// 16 = 0x10
    NSCharacterSet *_spaceDelimitedSet;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100953f54
- (void).cxx_destruct;	// IMP=0x0000000100954844
- (void)updateCharacterSets;	// IMP=0x000000010095436c
@property(readonly, copy) NSCharacterSet *spaceDelimitedSet;
@property(readonly, copy) NSCharacterSet *characterDelimitedSet;
- (id)init;	// IMP=0x0000000100953fd4

@end

