//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TWTRBaseSession.h"

@class NSDate, NSString;

@interface TWTRGuestSession : NSObject <TWTRBaseSession>
{
    NSString *_accessToken;	// 8 = 0x8
    NSString *_guestToken;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *guestToken; // @synthesize guestToken=_guestToken;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;	// IMP=0x00000001008182b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100818178
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100818080
@property(readonly, nonatomic) _Bool probablyNeedsRefreshing;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqualToGuestSession:(id)arg1;	// IMP=0x0000000100817e54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100817dd4
@property(readonly) unsigned long long hash;
- (id)initWithAccessToken:(id)arg1 guestToken:(id)arg2 creationDate:(id)arg3;	// IMP=0x0000000100817bc0
- (id)initWithAccessToken:(id)arg1 guestToken:(id)arg2;	// IMP=0x0000000100817b60
- (id)initWithSessionDictionary:(id)arg1 creationDate:(id)arg2;	// IMP=0x0000000100817a28
- (id)initWithSessionDictionary:(id)arg1;	// IMP=0x0000000100817a18

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

