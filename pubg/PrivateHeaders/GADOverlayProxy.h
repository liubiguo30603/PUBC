//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADIntermitting.h"

@class GADIntermission, GADOpener, GADSlot, NSString, UIViewController;

@interface GADOverlayProxy : NSObject <GADIntermitting>
{
    GADIntermission *_intermission;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    GADSlot *_slot;	// 24 = 0x18
    GADOpener *_opener;	// 32 = 0x20
}

+ (id)overlayProxyForViewController:(id)arg1;	// IMP=0x0000000100a25fb4
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) GADIntermission *intermission; // @synthesize intermission=_intermission;
- (void).cxx_destruct;	// IMP=0x0000000100a26474
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a26234
- (_Bool)shouldDismissOnApplicationEnteringForeground;	// IMP=0x0000000100a2622c
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a260c0
- (id)init;	// IMP=0x0000000100a260a8
- (id)initWithViewController:(id)arg1;	// IMP=0x0000000100a25fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

