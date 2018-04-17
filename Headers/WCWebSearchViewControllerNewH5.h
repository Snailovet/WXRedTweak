//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebSearchViewDelegate.h"
#import "SGTopEntryViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "WSSuggestionTableViewCellDelegate.h"
#import "WSTagSearchDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, MMTagTextField, MMTitleView, MMUILabel, MMWebSearchController, NSDictionary, NSMutableArray, NSString, SGTopEntryView, UIButton, UIImageView, UIView, UIView<YYWebViewInterface>, WCStatTimerHelper, WSLabelIconButton, WSTagSearchLogic;

@interface WCWebSearchViewControllerNewH5 : MMUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, SGTopEntryViewDelegate, MMWebSearchViewDelegate, WSTagSearchDelegate, WSSuggestionTableViewCellDelegate>
{
    NSString *_lastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_navBarBkg;
    UIView *_navBarShadowView;
    UIView *_navBarSwitchContentBackView;
    UIView *_navBarSwitchContentView;
    SGTopEntryView *_navBarSwitchPanel;
    UIButton *_navBarSwitchAllButton;
    unsigned long long _currentSwitchBusinessType;
    MMTitleView *_titleView;
    UIView *_navContentView;
    UIView *_navContentRightDivideView;
    WSLabelIconButton *_navSwitchButton;
    MMTagTextField *_navSearchTextField;
    UIImageView *_navSearchLeftView;
    MMUILabel *_navTitleLabel;
    UIView *_blurView;
    UIView *_cornerWrapView;
    UIView *_cornerClipView;
    UIView *_contentSearchTextFieldWrapView;
    MMTagTextField *_contentSearchTextField;
    UIImageView *_contentSearchLeftView;
    MMTableView *_suggestionTableView;
    UIButton *_contentSearchHitBtn;
    UIView *_dynamicContentWrapView;
    SGTopEntryView *_guideEntryView;
    MMWebSearchController *_webSearchController;
    WSTagSearchLogic *_tagSearchLogic;
    NSMutableArray *_arrSugData;
    _Bool _isAnimatingToWebSearch;
    int _sugOpStat;
    _Bool _vertSearchMayHasData;
    _Bool _isFirstPage;
    UIView<YYWebViewInterface> *_firstPageWebView;
    _Bool _isSencondPageFromVerticalEntrance;
    _Bool _bTextFieldShouldReturn;
    _Bool _hasFirstWebviewJsbridgeReady;
    int _initScene;
    _Bool _needSendOnFocusEventAfterJsbridgeReady;
    _Bool _needSendSwitchTabAfterJsbridgeReady;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool _hasInitContainerView;
    unsigned long long _beginPreloadTime;
    _Bool _hasSendOnUiInitEvent;
    int _VCType;
    NSDictionary *_initedUrlParams;
    id <WCWebSearchViewControllerDelegate> _delegate;
    NSString *_fromUrlString;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
- (void)addBlurEffect;
- (void)adjustContentTopMargin:(double)arg1;
- (id)baseNativeSugReportParams;
- (void)beginWebSearchAnimation;
- (void)dealloc;
@property(nonatomic) __weak id <WCWebSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didBeginWebSearch;
- (void)didEndWebSearch;
- (void)didFinishLoadWebView:(id)arg1;
- (void)endWebSearchAnimation;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (void)forceSetSwitchButtonHidden:(_Bool)arg1;
@property(retain, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (id)getMixSearchPlaceHolder;
- (id)getNativeHeight;
- (id)getPlaceHolderForBusinessType:(unsigned long long)arg1;
- (id)getSearchMarkImageForBusinesstype:(unsigned long long)arg1;
- (void)handlePanGestureRecognizerForBlurView:(id)arg1;
- (void)handleTapGestureRecognizerForBlurView:(id)arg1;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)initNavBarSwitchContent;
- (void)initNavigationBar;
- (void)initView;
- (void)initWebSearchControllerWithScene:(int)arg1;
- (id)initWithScene:(int)arg1;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (_Bool)isDetailSearch;
- (_Bool)isDisplayingSwitchPanel;
- (_Bool)isKeyboardShowAtBegin;
- (_Bool)isMixSearch;
- (_Bool)isRightBarButtonItemHidden;
- (_Bool)isVertSearh;
- (void)layoutContent;
- (void)layoutNavBarSwitchContent;
- (void)layoutNavContent;
- (void)layoutNavContentForEditStatus;
- (void)layoutNavContentForNormalStatus;
- (void)layoutNavContentWithBizType:(unsigned long long)arg1;
- (void)layoutSwitchButton;
- (void)onClickNavSwitchButton:(id)arg1;
- (void)onClickSuggestionRightButton:(id)arg1;
- (void)onClickWithData:(id)arg1;
- (void)onContentSearchHitBtnClick;
- (void)onJsbridgeReady:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onNavigationCancelItemClick:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchBackToPreviousView;
- (void)onSearchHotWord:(id)arg1;
- (void)onSearchInputSetPlaceHolder:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onSwitchSearchContext:(int)arg1 andType:(unsigned long long)arg2 andQuery:(id)arg3;
- (void)onSwitchSearchTypeForDefault:(id)arg1;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)onTapNavSwitchContentBackView:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)onUpdateNativeSuggestion;
- (void)onViewTypeChanged;
- (void)preInitContainerView;
- (void)registerTagSearchLogic;
- (void)removeBlurEffect;
- (void)removeHistorySuggestion:(id)arg1;
- (void)reportGuideEntryViewExposure;
- (void)resetContentSearch;
- (void)resetFromWebSearch;
- (void)resetNavSearch;
- (void)resetTableView;
- (void)setContentSearchUIForType:(unsigned long long)arg1;
- (void)setFakeNavBarHidden:(_Bool)arg1 slideAnimated:(_Bool)arg2;
- (void)setNavCancelButtonHidden:(_Bool)arg1;
- (void)setNavLeftBarItemHidden:(_Bool)arg1;
- (void)setPlaceImage:(id)arg1;
- (void)setSuggestionModel:(id)arg1;
- (void)setSwitchButtonText:(id)arg1;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tryInitContainerView;
- (void)updateNavBarShadow;
- (void)updateNavBarSwitchAllButtonColorWithText:(id)arg1;
- (void)updateSwitchButtonSize;
- (void)updateSwitchIndicator;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)webSearchViewPosY;
- (void)willBeginWebSearch;
- (void)willDisappear;
- (void)willEndWebSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
