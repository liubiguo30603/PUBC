//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol IMSDKBindDelegate <NSObject>
- (void)recover:(NSString *)arg1 code:(NSString *)arg2 extraDict:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg4;
- (void)connect:(NSString *)arg1 code:(NSString *)arg2 extraDict:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg4;
- (void)sendCode:(NSString *)arg1 bindType:(int)arg2 extraDict:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg4;
- (NSString *)channelId;
@end

