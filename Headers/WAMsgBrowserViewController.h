//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WAMsgBrowserDataLogicDelegate.h"

@class CContact, MMTableView, NSArray, NSMutableDictionary, NSString, WAMsgBrowserDataLogic, WCTimeLineFooterView;

@interface WAMsgBrowserViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WAMsgBrowserDataLogicDelegate, MMRefreshTableFooterDelegate>
{
    unsigned long long _msgBrowserType;
    CContact *_contact;
    WAMsgBrowserDataLogic *_dataLogic;
    MMTableView *_tableView;
    WCTimeLineFooterView *_loadingView;
    NSMutableDictionary *_cellViewCache;
    NSArray *_msgArr;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *cellViewCache; // @synthesize cellViewCache=_cellViewCache;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAMsgBrowserDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genNormalCellView:(id)arg1;
- (void)initData;
- (void)initNavigationBar;
- (void)initView;
@property(retain, nonatomic) WCTimeLineFooterView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSArray *msgArr; // @synthesize msgArr=_msgArr;
@property(nonatomic) unsigned long long msgBrowserType; // @synthesize msgBrowserType=_msgBrowserType;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onWAMsgDataLogicLoadOK;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)openWeApp:(id)arg1;
- (void)report;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

