//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HSSearch : NSObject
{
}

+ (void)addDataCoreSpotlight:(id)arg1;	// IMP=0x00000001013d43e0
+ (long long)smallestOf:(long long)arg1 andOf:(long long)arg2;	// IMP=0x00000001013d43d4
+ (long long)smallestOf:(long long)arg1 andOf:(long long)arg2 andOf:(long long)arg3;	// IMP=0x00000001013d43c0
+ (float)compareString:(id)arg1 withString:(id)arg2;	// IMP=0x00000001013d4040
+ (id)searchQueryTFIDF:(id)arg1 withSearchOptions:(int)arg2;	// IMP=0x00000001013d34b0
+ (_Bool)isMetaTypeMatchingWithFirstType:(int)arg1 secondType:(int)arg2;	// IMP=0x00000001013d348c
+ (id)getFuzzyMatchesForString:(id)arg1 fromIndex:(id)arg2;	// IMP=0x00000001013d2ddc
+ (id)filterQuery:(id)arg1 forSearchOptions:(int)arg2;	// IMP=0x00000001013d2c18
+ (float)getTypeWeightForType:(int)arg1;	// IMP=0x00000001013d2bf8
+ (id)getNeighbourCharacter:(id)arg1;	// IMP=0x00000001013d2330

@end

