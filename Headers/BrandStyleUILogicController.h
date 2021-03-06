//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CContact;

@interface BrandStyleUILogicController : MMObject
{
    CContact *m_contact;
    id <BrandStyleUILogicControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)addMsgForUsr:(id)arg1;
- (void)addSessionToTop;
- (void)adjustToolViewComponent;
- (void)dealloc;
- (id)getBrandContact;
- (id)getBrandLogicController;
- (id)getBrandViewController;
- (double)getCustomizedAreaWidth;
- (id)getInnerToolView;
- (_Bool)getLastMenuMode;
- (id)getOutterToolView;
- (id)getWholeView;
- (id)initWithContact:(id)arg1 WithDelegate:(id)arg2;
- (_Bool)isNoNeedShowNormalToolView;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (void)processLocationDidFinish;
- (void)removeCustomToolView;
- (void)saveAchievedImageMd5:(id)arg1;
- (void)setLastMenuMode:(_Bool)arg1;
- (_Bool)shouldHideOrginInputToolView;
- (_Bool)shouldSaveAchievedImageMd5;
- (void)showAlertViewForMenuUpdated;
- (void)updateIfCreateToolView:(id)arg1;
- (void)updateIfViewDidAppear;
- (void)updateIfViewDidInit;
- (void)updateIfViewWillAppear;
- (void)updateIfViewWillDisappear;
- (void)updateIfViewWillInit;

@end

