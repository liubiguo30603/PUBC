//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFAppLinkReturnToRefererViewDelegate.h"

@class BFAppLinkReturnToRefererView, NSString, UINavigationController;

@interface BFAppLinkReturnToRefererController : NSObject <BFAppLinkReturnToRefererViewDelegate>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    BFAppLinkReturnToRefererView *_view;	// 16 = 0x10
    id <BFAppLinkReturnToRefererControllerDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <BFAppLinkReturnToRefererControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001006a75d8
- (void)openRefererAppLink:(id)arg1;	// IMP=0x00000001006a7494
- (void)closeViewAnimated:(_Bool)arg1 explicitlyClosed:(_Bool)arg2;	// IMP=0x00000001006a724c
- (void)closeViewAnimated:(_Bool)arg1;	// IMP=0x00000001006a723c
- (void)updateNavigationBarY:(double)arg1;	// IMP=0x00000001006a70dc
- (void)moveNavigationBar;	// IMP=0x00000001006a7048
- (void)orientationDidChange:(id)arg1;	// IMP=0x00000001006a6f50
- (void)statusBarFrameDidChange:(id)arg1;	// IMP=0x00000001006a6db8
- (void)statusBarFrameWillChange:(id)arg1;	// IMP=0x00000001006a6c0c
- (void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2;	// IMP=0x00000001006a6bcc
- (void)returnToRefererViewDidTapInsideCloseButton:(id)arg1;	// IMP=0x00000001006a6bb8
- (void)removeFromNavController;	// IMP=0x00000001006a6b60
- (void)showViewForRefererURL:(id)arg1;	// IMP=0x00000001006a6ae4
- (void)showViewForRefererAppLink:(id)arg1;	// IMP=0x00000001006a69c0
@property(retain, nonatomic) BFAppLinkReturnToRefererView *view;
- (void)dealloc;	// IMP=0x00000001006a67a4
- (id)initForDisplayAboveNavController:(id)arg1;	// IMP=0x00000001006a6670
- (id)init;	// IMP=0x00000001006a6660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

