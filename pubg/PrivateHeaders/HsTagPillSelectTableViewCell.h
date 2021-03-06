//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsMessageTableViewCell.h"

#import "HsPillTagsLabelDelegate.h"

@class HSAutoAdjustLabel, HsBorderedButton, HsPillTagsLabel, NSLayoutConstraint, NSString, UIView;

@interface HsTagPillSelectTableViewCell : HsMessageTableViewCell <HsPillTagsLabelDelegate>
{
    _Bool _skippable;	// 8 = 0x8
    _Bool _didSkip;	// 9 = 0x9
    HSAutoAdjustLabel *_titleLabel;	// 16 = 0x10
    NSLayoutConstraint *_titleCOntainerHeightConstrain;	// 24 = 0x18
    HsPillTagsLabel *_tagLabel;	// 32 = 0x20
    UIView *_skipContainerView;	// 40 = 0x28
    HsBorderedButton *_skipButton;	// 48 = 0x30
    NSLayoutConstraint *_skipContainerHeightConstrain;	// 56 = 0x38
}

@property(nonatomic) _Bool didSkip; // @synthesize didSkip=_didSkip;
@property(retain, nonatomic) NSLayoutConstraint *skipContainerHeightConstrain; // @synthesize skipContainerHeightConstrain=_skipContainerHeightConstrain;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property(nonatomic) __weak HsBorderedButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UIView *skipContainerView; // @synthesize skipContainerView=_skipContainerView;
@property(nonatomic) __weak HsPillTagsLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) NSLayoutConstraint *titleCOntainerHeightConstrain; // @synthesize titleCOntainerHeightConstrain=_titleCOntainerHeightConstrain;
@property(nonatomic) __weak HSAutoAdjustLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000101360944
- (void)didTapItemAtIndex:(long long)arg1;	// IMP=0x0000000101360720
- (void)skipButtonTapped:(id)arg1;	// IMP=0x0000000101360624
- (void)initialiseViewsDefaults;	// IMP=0x00000001013603a8
- (void)prepareForReuse;	// IMP=0x00000001013602d4
- (void)updateWithDM:(id)arg1;	// IMP=0x000000010135ffe0
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010135ffac
- (void)awakeFromNib;	// IMP=0x000000010135ff5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

