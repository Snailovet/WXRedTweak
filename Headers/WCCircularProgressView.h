//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, CAShapeLayer, NSString, UILabel;

@interface WCCircularProgressView : UIView
{
    double _progressStepForFinishingAnimation;
    double _lastTappedTime;
    _Bool _enable;
    double _progress;
    id <WCCircularProgressViewDelegate> _delegate;
    NSString *_successTipText;
    CAShapeLayer *_unfinishedShapeLayer;
    CAShapeLayer *_finishedShapeLayer;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_tickLayer;
    UILabel *_successTipsLabel;
    CADisplayLink *_displayLink;
    double _realProgress;
    double _radius;
}

- (void).cxx_destruct;
- (void)applyFinishAnimation;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
- (void)commonInit;
- (void)dealloc;
@property(nonatomic) __weak id <WCCircularProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) CAShapeLayer *finishedShapeLayer; // @synthesize finishedShapeLayer=_finishedShapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double realProgress; // @synthesize realProgress=_realProgress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *successTipText; // @synthesize successTipText=_successTipText;
@property(retain, nonatomic) UILabel *successTipsLabel; // @synthesize successTipsLabel=_successTipsLabel;
@property(retain, nonatomic) CAShapeLayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property(retain, nonatomic) CAShapeLayer *unfinishedShapeLayer; // @synthesize unfinishedShapeLayer=_unfinishedShapeLayer;
- (void)startFinishAnimation;
- (void)stopFinishAnimation;
- (void)updateAnimation;
- (void)updateArrowWithProgress:(double)arg1;
- (void)updateCircularWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)updateTextTipWithProgress:(double)arg1;
- (void)updateTickWithProgress:(double)arg1;
- (void)viewDidTapped:(id)arg1;

@end

