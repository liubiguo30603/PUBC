//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKAppEventsUtility : NSObject
{
}

+ (long long)unixTimeNow;	// IMP=0x00000001006d18f4
+ (id)tokenStringToUseFor:(id)arg1;	// IMP=0x00000001006d16c8
+ (id)retrievePersistedAnonymousID;	// IMP=0x00000001006d1574
+ (id)persistenceFilePath:(id)arg1;	// IMP=0x00000001006d14d4
+ (void)persistAnonymousID:(id)arg1;	// IMP=0x00000001006d132c
+ (_Bool)validateIdentifier:(id)arg1;	// IMP=0x00000001006d1228
+ (_Bool)regexValidateIdentifier:(id)arg1;	// IMP=0x00000001006d1040
+ (_Bool)matchString:(id)arg1 firstCharacterSet:(id)arg2 restOfStringCharacterSet:(id)arg3;	// IMP=0x00000001006d0f2c
+ (void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(_Bool)arg2;	// IMP=0x00000001006d0dd4
+ (void)logAndNotify:(id)arg1;	// IMP=0x00000001006d0d78
+ (id)flushReasonToString:(unsigned long long)arg1;	// IMP=0x00000001006d0cbc
+ (void)ensureOnMainThread:(id)arg1 className:(id)arg2;	// IMP=0x00000001006d0bfc
+ (void)clearLibraryFiles;	// IMP=0x00000001006d0adc
+ (id)attributionID;	// IMP=0x00000001006d0a74
+ (id)anonymousID;	// IMP=0x00000001006d097c
+ (unsigned long long)advertisingTrackingStatus;	// IMP=0x00000001006d08b8
+ (id)advertiserID;	// IMP=0x00000001006d0818
+ (id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(_Bool)arg2 shouldAccessAdvertisingID:(_Bool)arg3;	// IMP=0x00000001006d0304
- (id)init;	// IMP=0x00000001006d1948

@end

