//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSETweet, TSETweetShareViewController;

@protocol TSETweetShareViewControllerDelegate <NSObject>
- (void)shareViewControllerPresentedWithNoAccounts:(TSETweetShareViewController *)arg1;
- (void)shareViewControllerWantsToCancelComposer:(TSETweetShareViewController *)arg1 partiallyComposedTweet:(TSETweet *)arg2;
- (void)shareViewControllerDidFinishSendingTweet:(TSETweetShareViewController *)arg1;

@optional
- (void)shareViewController:(TSETweetShareViewController *)arg1 didSelectAccount:(id <TSEAccount>)arg2;
@end

