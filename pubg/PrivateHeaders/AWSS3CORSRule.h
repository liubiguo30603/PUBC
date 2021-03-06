//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber;

@interface AWSS3CORSRule : AWSModel
{
    NSArray *_allowedHeaders;	// 8 = 0x8
    NSArray *_allowedMethods;	// 16 = 0x10
    NSArray *_allowedOrigins;	// 24 = 0x18
    NSArray *_exposeHeaders;	// 32 = 0x20
    NSNumber *_maxAgeSeconds;	// 40 = 0x28
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf7698
@property(retain, nonatomic) NSNumber *maxAgeSeconds; // @synthesize maxAgeSeconds=_maxAgeSeconds;
@property(retain, nonatomic) NSArray *exposeHeaders; // @synthesize exposeHeaders=_exposeHeaders;
@property(retain, nonatomic) NSArray *allowedOrigins; // @synthesize allowedOrigins=_allowedOrigins;
@property(retain, nonatomic) NSArray *allowedMethods; // @synthesize allowedMethods=_allowedMethods;
@property(retain, nonatomic) NSArray *allowedHeaders; // @synthesize allowedHeaders=_allowedHeaders;
- (void).cxx_destruct;	// IMP=0x0000000100bf7828

@end

