//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QRecyclableView.h"
#import "QSMCalloutViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, QSMCalloutView, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface QAnnotationView : UIView <UIGestureRecognizerDelegate, QRecyclableView, QSMCalloutViewDelegate>
{
    _Bool highlighted;
    _Bool _selected;
    _Bool selectedBeforeStarting;
    _Bool canShowCallout;
    _Bool draggable;
    int _dragState;
    NSString *_reuseIdentifier;
    id <QAnnotation> _annotation;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    QSMCalloutView *tip;
    UITapGestureRecognizer *tapGestureGecognizer;
    UILongPressGestureRecognizer *longPressGestureGecognizer;
    UITapGestureRecognizer *_tapTwiceGestureGecognizer;
    struct CGPoint _centerOffset;
    struct CGPoint calloutOffset;
}

- (void).cxx_destruct;
- (void)addObserverForAnnotation:(id)arg1;
- (void)addTargetForControl:(id)arg1;
- (void)animationWithDuration:(double)arg1 delay:(double)arg2 coordinates:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
- (id)annotationFloor;
- (void)calloutAccessoryAction:(id)arg1;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
- (id)container;
- (struct CLLocationCoordinate2D)coordinateForPoint:(struct CGPoint)arg1;
- (void)dealloc;
@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideTipAnimated:(_Bool)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)initGestureRecognizers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
- (void)longPressGesture:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureGecognizer; // @synthesize longPressGestureGecognizer;
- (id)mapView;
- (void)notifyCalloutAccessoryControlTapped:(id)arg1;
- (void)notifyDidChangeDragState:(int)arg1 fromOldState:(int)arg2;
- (void)notifyDidDeselect;
- (void)notifyDidSelect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)removeFromSuperview;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(nonatomic) _Bool selectedBeforeStarting; // @synthesize selectedBeforeStarting;
- (void)setDragState:(int)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureGecognizer; // @synthesize tapGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapTwiceGestureGecognizer; // @synthesize tapTwiceGestureGecognizer=_tapTwiceGestureGecognizer;
@property(retain, nonatomic) QSMCalloutView *tip; // @synthesize tip;
- (void)showTipAnimated:(_Bool)arg1;
- (_Bool)supportDragOperation;
- (void)tapGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)updateCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
