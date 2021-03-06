//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

#import "VKApiObject.h"

@class NSDictionary, NSString;

@interface VKApiObject : VKObject <VKApiObject>
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (id)createWithArray:(id)arg1;	// IMP=0x0000000100b4b83c
+ (id)createWithDictionary:(id)arg1;	// IMP=0x0000000100b4b7d8
@property(retain, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;	// IMP=0x0000000100b4b86c
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000100b4b844
- (id)serialize;	// IMP=0x0000000100b4b454
- (id)ignoredProperties;	// IMP=0x0000000100b4b3e0
- (void)enumPropertiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b4b22c
- (void)parse:(id)arg1;	// IMP=0x0000000100b4aaa4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100b4a998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

