//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface VungleBackoffIdentifierOperation : NSOperation
{
    CDUnknownBlockType _identifierBlock;	// 24 = 0x18
    CDUnknownBlockType _resultBlock;	// 32 = 0x20
    double _timeInterval;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

+ (id)operationWithIdentifierBlock:(CDUnknownBlockType)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100ab67dc
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) CDUnknownBlockType identifierBlock; // @synthesize identifierBlock=_identifierBlock;
- (void).cxx_destruct;	// IMP=0x0000000100ab6c24
- (void)startIncrementalBackOff;	// IMP=0x0000000100ab6a1c
- (id)getIdentifier;	// IMP=0x0000000100ab69ec
- (void)executeResultBlock;	// IMP=0x0000000100ab6998
- (void)main;	// IMP=0x0000000100ab692c
- (id)initWithIdentifierBlock:(CDUnknownBlockType)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100ab6868

@end

