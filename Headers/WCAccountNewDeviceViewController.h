//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@class NSString;

@interface WCAccountNewDeviceViewController : WCAccountBaseViewController
{
    NSString *m_nsHeaderTip;
    id <WCAccountNewDeviceViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (void)jumpToUnProtectPage;
- (void)onCloseLink;
- (void)onNewDeviceVerifyPhone;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)viewDidLoad;

@end

