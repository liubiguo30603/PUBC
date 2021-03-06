//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPPayOperationDelegate.h"

@class MidasIAPReprovideOperation, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MidasOperationLoop : NSObject <MidasIAPPayOperationDelegate>
{
    NSMutableDictionary *_operations;	// 8 = 0x8
    NSMutableArray *_sortOperations;	// 16 = 0x10
    id <MidasIAPOperationProtocol> _runningOp;	// 24 = 0x18
    MidasIAPReprovideOperation *_reprovideOp;	// 32 = 0x20
}

@property(readonly, nonatomic) NSDictionary *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;	// IMP=0x000000010055a8c4
- (void)onOperationFinished:(id)arg1;	// IMP=0x000000010055a67c
- (void)checkRunning;	// IMP=0x000000010055a50c
- (void)syncRemoveOperations:(id)arg1;	// IMP=0x000000010055a298
- (void)syncAddOperations:(id)arg1;	// IMP=0x000000010055a108
- (void)reset;	// IMP=0x000000010055a098
- (void)addOperation:(id)arg1;	// IMP=0x00000001005597e8
- (id)init;	// IMP=0x0000000100559734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

