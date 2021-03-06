//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayCardTypeItem, WCPayPhoneTextItem, WCPayTenpaySecureCtrlItem;

@interface WCPayFillCardAndPhoneNumberViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpaySecureCtrlItem *m_cardNumberTextFieldItem;
    WCPayCardTypeItem *m_pickerCardTypeItem;
    WCPayPhoneTextItem *m_phoneNumberTextFieldItem;
    WCBizInfoGroup *m_group;
    _Bool m_hadGetCardBin;
    id <WCPayFillCardAndPhoneNumberViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)initTextFieldItem;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

