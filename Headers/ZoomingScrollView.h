//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIImageView;

@interface ZoomingScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <ZoomingScrollViewDelegate> _zoomViewDelegate;
    UIImageView *_photoImageView;
}

- (void).cxx_destruct;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)setPhotoImageView:(id)arg1;
@property(nonatomic) id <ZoomingScrollViewDelegate> zoomViewDelegate; // @synthesize zoomViewDelegate=_zoomViewDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

