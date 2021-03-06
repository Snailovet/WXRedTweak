//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IQQMailExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAttach, MMLoadingView, MMTableView, NSArray, NSString;

@interface ZipViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IQQMailExt>
{
    NSString *m_nsPath;
    NSString *m_nsCompressXml;
    unsigned int m_uiViewType;
    MMTableView *m_tableView;
    MMLoadingView *m_loadingView;
    NSArray *m_arrAttachList;
    CAttach *m_loadingAttach;
}

- (void).cxx_destruct;
- (void)OnViewCompress:(id)arg1 ErrNo:(int)arg2;
- (void)OnViewImage:(id)arg1 ErrNo:(int)arg2;
- (void)ReloadTableView;
- (void)dealloc;
- (void)didAppear;
- (id)init;
@property(retain, nonatomic) NSArray *m_arrAttachList; // @synthesize m_arrAttachList;
@property(retain, nonatomic) CAttach *m_loadingAttach; // @synthesize m_loadingAttach;
@property(retain, nonatomic) NSString *m_nsCompressXml; // @synthesize m_nsCompressXml;
@property(retain, nonatomic) NSString *m_nsPath; // @synthesize m_nsPath;
@property(nonatomic) unsigned int m_uiViewType; // @synthesize m_uiViewType;
- (void)makeAttachCell:(id)arg1 Index:(unsigned int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

