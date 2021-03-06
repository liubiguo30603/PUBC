//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleMRAIDViewController.h"

#import "VungleMRAIDControllerDelegate.h"

@class NSString, UIView, UIViewController, VungleMRAIDController, VungleNetworkManager, VunglePlacement, VungleProductViewProvider, VunglePublisherInformation, VungleReportIncentivizedController;

@interface VungleInternalMRAIDViewController : VungleMRAIDViewController <VungleMRAIDControllerDelegate>
{
    _Bool _loadingProductView;	// 8 = 0x8
    id <VungleAdDelegate> _delegate;	// 16 = 0x10
    VunglePublisherInformation *_publisherInformation;	// 24 = 0x18
    VunglePlacement *_placement;	// 32 = 0x20
    VungleMRAIDController *_MRAIDController;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    UIView *_container;	// 56 = 0x38
    VungleNetworkManager *_networkManager;	// 64 = 0x40
    VungleReportIncentivizedController *_reportIncentivizedController;	// 72 = 0x48
    VungleProductViewProvider *_productViewProvider;	// 80 = 0x50
    UIViewController *_productViewController;	// 88 = 0x58
}

@property(nonatomic, getter=isLoadingProductView) _Bool loadingProductView; // @synthesize loadingProductView=_loadingProductView;
@property(retain, nonatomic) UIViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(retain, nonatomic) VungleProductViewProvider *productViewProvider; // @synthesize productViewProvider=_productViewProvider;
@property(nonatomic) __weak VungleReportIncentivizedController *reportIncentivizedController; // @synthesize reportIncentivizedController=_reportIncentivizedController;
@property(nonatomic) __weak VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) VungleMRAIDController *MRAIDController; // @synthesize MRAIDController=_MRAIDController;
@property(retain, nonatomic) VunglePlacement *placement; // @synthesize placement=_placement;
@property(copy, nonatomic) VunglePublisherInformation *publisherInformation; // @synthesize publisherInformation=_publisherInformation;
@property(nonatomic) __weak id <VungleAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100ad2220
- (void)vungleMRAIDControllerIsEnteringBackgroundWithReportable:(id)arg1;	// IMP=0x0000000100ad1fa0
- (void)vungleMRAIDControllerDidCloseAdExperienceWithReportable:(id)arg1;	// IMP=0x0000000100ad1ed8
- (void)vungleMRAIDControllerSuccessfulView:(_Bool)arg1 reportable:(id)arg2;	// IMP=0x0000000100ad1dcc
- (void)vungleMRAIDControllerWillCloseAdExperienceWithReportable:(id)arg1;	// IMP=0x0000000100ad1d04
- (void)vungleMRAIDControllerWillStartAdExperienceWithReportable:(id)arg1;	// IMP=0x0000000100ad1c3c
- (void)vungleMRAIDControllerPresentStoreViewController;	// IMP=0x0000000100ad1bac
- (void)vungleMRAIDControllerPresentStoreView;	// IMP=0x0000000100ad1b1c
- (void)vungleMRAIDController:(id)arg1 prepareStoreViewWithAppStoreID:(id)arg2;	// IMP=0x0000000100ad18a8
- (void)vungleMRAIDController:(id)arg1 executeRequestWithTPATURLArray:(id)arg2;	// IMP=0x0000000100ad1560
- (unsigned long long)vungleMRAIDControllerOrientationMask;	// IMP=0x0000000100ad1554
- (void)applyInterfaceOrientationCorrectionWithMask:(unsigned long long)arg1;	// IMP=0x0000000100ad14ac
- (void)vungleMRAIDController:(id)arg1 setOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;	// IMP=0x0000000100ad1458
- (void)vungleMRAIDController:(id)arg1 didFailToLoadAd:(id)arg2 error:(id)arg3;	// IMP=0x0000000100ad137c
- (void)vungleMRAIDController:(id)arg1 didLoadAdInContainerView:(id)arg2;	// IMP=0x0000000100ad1270
- (id)controllerToPresentModalAdView;	// IMP=0x0000000100ad126c
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100ad1264
- (void)didPresentInterstitialAd;	// IMP=0x0000000100ad11d8
- (void)deviceOrientationChangeNotification:(id)arg1;	// IMP=0x0000000100ad1164
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100ad1050
- (void)appWillEnterForeground:(id)arg1;	// IMP=0x0000000100ad1034
- (void)appWillEnterBackground:(id)arg1;	// IMP=0x0000000100ad1018
- (void)appDidBecomeActive:(id)arg1;	// IMP=0x0000000100ad0ffc
- (void)appWillResignActive:(id)arg1;	// IMP=0x0000000100ad0fe0
- (void)setupAutoLayoutConstraintsForAdContainer:(id)arg1;	// IMP=0x0000000100ad0b7c
- (void)loadAdWithPlayOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100ad0b04
- (void)dealloc;	// IMP=0x0000000100ad0a88
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100ad0a50
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100ad09d4
- (void)viewDidLoad;	// IMP=0x0000000100ad099c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100ad08ac
- (void)updateViewConstraints;	// IMP=0x0000000100ad0838
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100ad0704
- (id)initWithPlacement:(id)arg1 networkManager:(id)arg2 cacheManager:(id)arg3 reportIncentivizedController:(id)arg4;	// IMP=0x0000000100ad0344
- (void)resumeAdExperience;	// IMP=0x0000000100ad0300
- (void)pauseAdExperience:(_Bool)arg1;	// IMP=0x0000000100ad0268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

