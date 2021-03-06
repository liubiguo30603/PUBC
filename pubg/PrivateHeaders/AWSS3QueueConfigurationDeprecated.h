//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSS3QueueConfigurationDeprecated : AWSModel
{
    long long _event;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_queue;	// 32 = 0x20
}

+ (id)eventJSONTransformer;	// IMP=0x0000000100c10a28
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c10964
@property(retain, nonatomic) NSString *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) long long event; // @synthesize event=_event;
- (void).cxx_destruct;	// IMP=0x0000000100c10e08

@end

