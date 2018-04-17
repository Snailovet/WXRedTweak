//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class CContact, MMScrollView, NSArray, NSString, UIPageControl;

@interface EnterpriseBrandSelectSheetView : MMUIView <UIScrollViewDelegate>
{
    unsigned int _scene;
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    MMScrollView *_scrollView;
    UIPageControl *_pageControl;
    unsigned int _rowCount;
    unsigned int _colCount;
    unsigned int _pageCount;
    double _topMargin;
    double _rowMargin;
    double _colMargin;
    double _pageControlMargin;
    double _cellWidth;
    double _cellHeight;
    id <EnterpriseBrandSelectSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseBrandSelectSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initData;
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)onIconClicked:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
