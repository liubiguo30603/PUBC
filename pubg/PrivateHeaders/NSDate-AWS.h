//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (AWS)
+ (double)aws_getRuntimeClockSkew;	// IMP=0x0000000100ba9228
+ (void)aws_setRuntimeClockSkew:(double)arg1;	// IMP=0x0000000100ba91f0
+ (id)aws_ShortDateFormat2Formatter;	// IMP=0x0000000100ba90c4
+ (id)aws_ShortDateFormat1Formatter;	// IMP=0x0000000100ba8f98
+ (id)aws_ISO8601Date3Formatter;	// IMP=0x0000000100ba8e6c
+ (id)aws_ISO8601Date2Formatter;	// IMP=0x0000000100ba8d40
+ (id)aws_ISO8601Date1Formatter;	// IMP=0x0000000100ba8c14
+ (id)aws_RFC822Date1Formatter;	// IMP=0x0000000100ba8ae8
+ (id)aws_dateFromString:(id)arg1 format:(id)arg2;	// IMP=0x0000000100ba84dc
+ (id)aws_dateFromString:(id)arg1;	// IMP=0x0000000100ba8338
+ (id)aws_clockSkewFixedDate;	// IMP=0x0000000100ba82d0
- (id)aws_stringValue:(id)arg1;	// IMP=0x0000000100ba87ec
@end

