//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VNGPersistenceManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0000000100aa4b9c
- (_Bool)moveFileFrom:(id)arg1 toChannel:(long long)arg2 category:(id)arg3 key:(id)arg4 overwrite:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000100aa6c38
- (id)errorWithPersistenceError:(long long)arg1 description:(id)arg2;	// IMP=0x0000000100aa6b3c
- (id)URLForChannel:(long long)arg1 category:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100aa67b8
- (id)URLForObject:(id)arg1;	// IMP=0x0000000100aa66dc
- (_Bool)removeAllObjects:(id *)arg1;	// IMP=0x0000000100aa65c0
- (_Bool)removeAllObjectsInChannel:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000100aa6478
- (_Bool)removeAllObjectsInChannel:(long long)arg1 category:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100aa6314
- (_Bool)removeObjectWithChannel:(long long)arg1 category:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100aa6240
- (_Bool)removeObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aa6018
- (id)loadObjectsWithURLs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aa5db0
- (id)loadObjectURLsAtChannel:(long long)arg1 category:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100aa5cd4
- (id)loadObjectsAtChannel:(long long)arg1 category:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100aa5a60
- (id)loadObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aa598c
- (id)loadObjectWithChannel:(long long)arg1 category:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100aa5768
- (id)loadURLsForObjectsWithClass:(Class)arg1 error:(id *)arg2;	// IMP=0x0000000100aa55fc
- (id)loadObjectsWithClass:(Class)arg1 error:(id *)arg2;	// IMP=0x0000000100aa5490
- (id)loadObjectWithClass:(Class)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100aa5380
- (_Bool)saveObject:(id)arg1 channel:(long long)arg2 category:(id)arg3 key:(id)arg4 overwrite:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000100aa51d0
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aa505c
- (_Bool)saveObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aa4c60

@end

