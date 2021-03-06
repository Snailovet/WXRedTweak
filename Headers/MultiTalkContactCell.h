//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MultiTalkContactCellExt.h"
#import "MultiTalkContactCellWaittingTimerExt.h"

@class CContact, MMTimer, MultiTalkHDHeadView, NSMutableArray, NSString, UIImageView, UILabel, WCVideoRender;

@interface MultiTalkContactCell : UIView <MultiTalkContactCellExt, MultiTalkContactCellWaittingTimerExt>
{
    _Bool m_hasShowTipsView;
    _Bool m_showBigview;
    _Bool m_needRefresh;
    _Bool _m_highlighted;
    _Bool _m_renderDisplay;
    _Bool _m_highlightAnimating;
    _Bool _m_hasHighlightAnimationTodo;
    UILabel *m_userNameLabel;
    CContact *m_contact;
    MultiTalkHDHeadView *m_headImageView;
    WCVideoRender *m_render;
    UIImageView *m_talkingImageView;
    UIImageView *m_netQualityImageView;
    id <MultiTalkContactCellDelegate> m_delegate;
    UIView *m_videoTipsView;
    UIView *_m_backgroundMaskView;
    UIImageView *_m_waittingImageView;
    NSMutableArray *_m_waittingImageList;
    UILabel *_m_busyLabel;
    MMTimer *_m_videoTipsVideoTimer;
}

+ (struct CGSize)MultiTalkContactCellSize;
+ (struct CGSize)imageSize;
+ (double)labelHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideBusyLabel;
- (void)hideRender;
- (void)initBackgroundMaskView;
- (void)initBusyLabel;
- (void)initHeadImageView;
- (void)initNetQualityImageView;
- (void)initTalkingImageView;
- (void)initUserNameLabel;
- (void)initVideoTipsView;
- (void)initWaittingImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalHighlightStautsUpdate;
@property(retain, nonatomic) UIView *m_backgroundMaskView; // @synthesize m_backgroundMaskView=_m_backgroundMaskView;
@property(retain, nonatomic) UILabel *m_busyLabel; // @synthesize m_busyLabel=_m_busyLabel;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <MultiTalkContactCellDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasHighlightAnimationTodo; // @synthesize m_hasHighlightAnimationTodo=_m_hasHighlightAnimationTodo;
@property(nonatomic) _Bool m_hasShowTipsView; // @synthesize m_hasShowTipsView;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(nonatomic) _Bool m_highlightAnimating; // @synthesize m_highlightAnimating=_m_highlightAnimating;
@property(nonatomic) _Bool m_highlighted; // @synthesize m_highlighted=_m_highlighted;
@property(nonatomic) _Bool m_needRefresh; // @synthesize m_needRefresh;
@property(retain, nonatomic) UIImageView *m_netQualityImageView; // @synthesize m_netQualityImageView;
@property(retain, nonatomic) WCVideoRender *m_render; // @synthesize m_render;
@property(nonatomic) _Bool m_renderDisplay; // @synthesize m_renderDisplay=_m_renderDisplay;
@property(nonatomic) _Bool m_showBigview; // @synthesize m_showBigview;
@property(retain, nonatomic) UIImageView *m_talkingImageView; // @synthesize m_talkingImageView;
@property(retain, nonatomic) UILabel *m_userNameLabel; // @synthesize m_userNameLabel;
@property(retain, nonatomic) MMTimer *m_videoTipsVideoTimer; // @synthesize m_videoTipsVideoTimer=_m_videoTipsVideoTimer;
@property(retain, nonatomic) UIView *m_videoTipsView; // @synthesize m_videoTipsView;
@property(retain, nonatomic) NSMutableArray *m_waittingImageList; // @synthesize m_waittingImageList=_m_waittingImageList;
@property(retain, nonatomic) UIImageView *m_waittingImageView; // @synthesize m_waittingImageView=_m_waittingImageView;
- (void)onMultiTalkContactCellQualityChange:(unsigned int)arg1;
- (void)onMultiTalkContactCellSilent;
- (void)onMultiTalkContactCellTalking;
- (void)onMultiTalkContactCellWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)onSingleTap;
- (void)onVideoTipViewShouldEnd;
- (void)setFrame:(struct CGRect)arg1;
- (void)showBusyLabel;
- (void)showRenderView:(id)arg1;
- (void)statusHighlighted:(_Bool)arg1;
- (void)updateContact:(id)arg1;
- (void)updateRender:(id)arg1;
- (void)updateRenderDisplayStatus:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

