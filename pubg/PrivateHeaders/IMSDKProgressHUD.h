//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIColor, UIFont, UILabel;

@interface IMSDKProgressHUD : UIView
{
    _Bool useAnimation;	// 8 = 0x8
    SEL methodForExecution;	// 16 = 0x10
    id targetForExecution;	// 24 = 0x18
    id objectForExecution;	// 32 = 0x20
    UILabel *label;	// 40 = 0x28
    UILabel *detailsLabel;	// 48 = 0x30
    _Bool isFinished;	// 56 = 0x38
    struct CGAffineTransform rotationTransform;	// 64 = 0x40
    _Bool square;	// 112 = 0x70
    _Bool dimBackground;	// 113 = 0x71
    _Bool taskInProgress;	// 114 = 0x72
    _Bool removeFromSuperViewOnHide;	// 115 = 0x73
    float opacity;	// 116 = 0x74
    float xOffset;	// 120 = 0x78
    float yOffset;	// 124 = 0x7c
    float margin;	// 128 = 0x80
    float graceTime;	// 132 = 0x84
    float minShowTime;	// 136 = 0x88
    float progress;	// 140 = 0x8c
    float _cornerRadius;	// 144 = 0x90
    long long animationType;	// 152 = 0x98
    id <IMSDKProgressHUDDelegate> delegate;	// 160 = 0xa0
    UIColor *color;	// 168 = 0xa8
    UIFont *labelFont;	// 176 = 0xb0
    UIColor *labelColor;	// 184 = 0xb8
    UIFont *detailsLabelFont;	// 192 = 0xc0
    UIColor *detailsLabelColor;	// 200 = 0xc8
    UIView *indicator;	// 208 = 0xd0
    NSTimer *graceTimer;	// 216 = 0xd8
    NSTimer *minShowTimer;	// 224 = 0xe0
    UIView *customView;	// 232 = 0xe8
    NSDate *showStarted;	// 240 = 0xf0
    long long mode;	// 248 = 0xf8
    NSString *labelText;	// 256 = 0x100
    NSString *detailsLabelText;	// 264 = 0x108
    UIColor *activityIndicatorColor;	// 272 = 0x110
    CDUnknownBlockType completionBlock;	// 280 = 0x118
    struct CGSize minSize;	// 288 = 0x120
    struct CGSize size;	// 304 = 0x130
}

+ (id)allHUDsForView:(id)arg1;	// IMP=0x000000010068c1e8
+ (id)HUDForView:(id)arg1;	// IMP=0x000000010068c058
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010068beec
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010068be6c
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010068bdc0
@property float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(retain) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor;
@property(readonly) struct CGSize size; // @synthesize size;
@property float progress; // @synthesize progress;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy) NSString *labelText; // @synthesize labelText;
@property long long mode; // @synthesize mode;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property _Bool dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property(getter=isSquare) _Bool square; // @synthesize square;
@property struct CGSize minSize; // @synthesize minSize;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIColor *detailsLabelColor; // @synthesize detailsLabelColor;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIColor *labelColor; // @synthesize labelColor;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(retain) UIColor *color; // @synthesize color;
@property float opacity; // @synthesize opacity;
@property __weak id <IMSDKProgressHUDDelegate> delegate; // @synthesize delegate;
@property long long animationType; // @synthesize animationType;
- (void).cxx_destruct;	// IMP=0x000000010068f5a8
- (void)updateForCurrentOrientationAnimated:(_Bool)arg1;	// IMP=0x000000010068ee8c
- (void)statusBarOrientationDidChange:(id)arg1;	// IMP=0x000000010068ee3c
- (void)unregisterFromNotifications;	// IMP=0x000000010068eddc
- (void)registerForNotifications;	// IMP=0x000000010068ed74
- (void)updateUIForKeypath:(id)arg1;	// IMP=0x000000010068ea84
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010068ea0c
- (id)observableKeypaths;	// IMP=0x000000010068e97c
- (void)unregisterFromKVO;	// IMP=0x000000010068e848
- (void)registerForKVO;	// IMP=0x000000010068e70c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010068e2ec
- (void)layoutSubviews;	// IMP=0x000000010068dd98
- (void)updateIndicators;	// IMP=0x000000010068da88
- (void)setupLabels;	// IMP=0x000000010068d6d4
- (void)cleanUp;	// IMP=0x000000010068d66c
- (void)launchExecution;	// IMP=0x000000010068d5f4
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010068d3d4
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x000000010068d378
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010068d2dc
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010068d25c
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000010068d160
- (void)done;	// IMP=0x000000010068cffc
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;	// IMP=0x000000010068cff0
- (void)hideUsingAnimation:(_Bool)arg1;	// IMP=0x000000010068cdf8
- (void)showUsingAnimation:(_Bool)arg1;	// IMP=0x000000010068cb74
- (void)didMoveToSuperview;	// IMP=0x000000010068cb64
- (void)handleMinShowTimer:(id)arg1;	// IMP=0x000000010068cb4c
- (void)handleGraceTimer:(id)arg1;	// IMP=0x000000010068cb20
- (void)hideDelayed:(id)arg1;	// IMP=0x000000010068cae4
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;	// IMP=0x000000010068ca6c
- (void)hide:(_Bool)arg1;	// IMP=0x000000010068c924
- (void)show:(_Bool)arg1;	// IMP=0x000000010068c818
- (void)dealloc;	// IMP=0x000000010068c7b8
- (id)initWithWindow:(id)arg1;	// IMP=0x000000010068c7ac
- (id)initWithView:(id)arg1;	// IMP=0x000000010068c774
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010068c3b0

@end

