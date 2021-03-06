//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADLoadable.h"
#import "GADMediatedNativeAppInstallAd.h"
#import "GADNativeAdMediaDisplaying.h"
#import "GADNativeAdSourceAttributing.h"
#import "GADOverlayViewSource.h"

@class GADNativeAdAttribution, GADNativeAdImage, GADOverlayView, GADVideoController, NSArray, NSDecimalNumber, NSMutableArray, NSString, UIView;

@interface GADNativeAppInstallAd : GADNativeAd <GADMediatedNativeAppInstallAd, GADLoadable, GADNativeAdMediaDisplaying, GADNativeAdSourceAttributing, GADOverlayViewSource>
{
    _Bool _disableImageLoading;	// 89 = 0x59
    NSArray *_nativeAdImages;	// 96 = 0x60
    NSMutableArray *_availableNativeAdImages;	// 104 = 0x68
    GADOverlayView *_overlayView;	// 112 = 0x70
    GADVideoController *_videoController;	// 120 = 0x78
    GADNativeAdAttribution *_attribution;	// 128 = 0x80
    NSString *_headline;	// 136 = 0x88
    NSString *_callToAction;	// 144 = 0x90
    GADNativeAdImage *_icon;	// 152 = 0x98
    NSString *_body;	// 160 = 0xa0
    NSString *_store;	// 168 = 0xa8
    NSString *_price;	// 176 = 0xb0
    NSDecimalNumber *_starRating;	// 184 = 0xb8
    _Bool _publisherOwnedAdViewAllowed;	// 192 = 0xc0
    GADNativeAdImage *_adChoicesIcon;	// 200 = 0xc8
    id <GADMediaContentDisplaying> _mediaContent;	// 208 = 0xd0
    UIView *_adChoicesContentView;	// 216 = 0xd8
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;	// IMP=0x000000010096ed50
+ (id)requestParametersForAdLoader:(id)arg1;	// IMP=0x000000010096eba0
+ (id)requiredDelegateProtocol;	// IMP=0x000000010096eb94
@property(retain, nonatomic) UIView *adChoicesContentView; // @synthesize adChoicesContentView=_adChoicesContentView;
@property(retain, nonatomic) id <GADMediaContentDisplaying> mediaContent; // @synthesize mediaContent=_mediaContent;
@property(readonly, nonatomic) GADNativeAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;	// IMP=0x000000010096ee98
- (id)overlayView;	// IMP=0x000000010096edf0
- (void)adLoaderDidReceiveAd:(id)arg1;	// IMP=0x000000010096ed58
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010096e3b4
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
- (id)requiredAssets;	// IMP=0x000000010096e1c8
- (void)unregisterAdView;	// IMP=0x000000010096e0e8
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;	// IMP=0x000000010096dd98
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;	// IMP=0x000000010096dce0
- (_Bool)recordImpressionWithData:(id)arg1;	// IMP=0x000000010096dcac
- (void)reportTouchEventWithData:(id)arg1;	// IMP=0x000000010096dc78
- (void)performClickWithData:(id)arg1;	// IMP=0x000000010096dc44
- (id)adFormatTemplateID;	// IMP=0x000000010096dc34
- (void)setSlot:(id)arg1;	// IMP=0x000000010096db88
- (id)initWithMediatedUnifiedNativeAd:(id)arg1 mediatedNativeAd:(id)arg2 options:(id)arg3;	// IMP=0x000000010096d6d8
- (id)initWithMediatedNativeAppInstallAd:(id)arg1 mediatedNativeAd:(id)arg2 options:(id)arg3;	// IMP=0x000000010096d2b0
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;	// IMP=0x000000010096d1b8
- (id)initWithDictionary:(id)arg1 options:(id)arg2;	// IMP=0x000000010096ca3c
- (void)GADNativeAppInstallAd_category;	// IMP=0x000000010096ca38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

