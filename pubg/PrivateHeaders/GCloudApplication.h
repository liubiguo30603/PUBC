//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABaseApplicationObserver.h"

@interface GCloudApplication : ABaseApplicationObserver
{
}

- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;	// IMP=0x0000000100062df4
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x0000000100062d74
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x0000000100062cf4
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100062bac
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100062b60
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100062a88
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000629b0
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100062964
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100062918
- (_Bool)handleOpenURL:(id)arg1;	// IMP=0x0000000100062884
- (void)initialize;	// IMP=0x0000000100062870

@end

