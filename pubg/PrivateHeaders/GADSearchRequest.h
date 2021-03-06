//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADRequest.h"

@class NSString, UIColor;

@interface GADSearchRequest : GADRequest
{
    NSString *_query;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    UIColor *_gradientFrom;	// 32 = 0x20
    UIColor *_gradientTo;	// 40 = 0x28
    UIColor *_headerColor;	// 48 = 0x30
    UIColor *_descriptionTextColor;	// 56 = 0x38
    UIColor *_anchorTextColor;	// 64 = 0x40
    NSString *_fontFamily;	// 72 = 0x48
    unsigned long long _headerTextSize;	// 80 = 0x50
    UIColor *_borderColor;	// 88 = 0x58
    unsigned long long _borderType;	// 96 = 0x60
    unsigned long long _borderThickness;	// 104 = 0x68
    NSString *_customChannels;	// 112 = 0x70
    unsigned long long _callButtonColor;	// 120 = 0x78
}

@property(nonatomic) unsigned long long callButtonColor; // @synthesize callButtonColor=_callButtonColor;
@property(copy, nonatomic) NSString *customChannels; // @synthesize customChannels=_customChannels;
@property(nonatomic) unsigned long long borderThickness; // @synthesize borderThickness=_borderThickness;
@property(nonatomic) unsigned long long borderType; // @synthesize borderType=_borderType;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long headerTextSize; // @synthesize headerTextSize=_headerTextSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(copy, nonatomic) UIColor *anchorTextColor; // @synthesize anchorTextColor=_anchorTextColor;
@property(copy, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(copy, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(copy, nonatomic) UIColor *gradientTo; // @synthesize gradientTo=_gradientTo;
@property(copy, nonatomic) UIColor *gradientFrom; // @synthesize gradientFrom=_gradientFrom;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;	// IMP=0x00000001009e7800
- (_Bool)cacheable;	// IMP=0x00000001009e7660
- (void)setBackgroundGradientFrom:(id)arg1 toColor:(id)arg2;	// IMP=0x00000001009e75cc
- (void)setBackgroundSolid:(id)arg1;	// IMP=0x00000001009e7580
- (id)threadSafeParameters;	// IMP=0x00000001009e6f94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009e6dc8
- (id)initWithParameters:(id)arg1;	// IMP=0x00000001009e6674

@end

