//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class AsyncImageView, CAGradientLayer, CALayer, ImageReaderMessageViewModel, RichTextView, UIImageView;

@interface ImageReaderMessageCellView : ReaderMessageCellView
{
    CALayer *m_hightlightLayer;
    UIImageView *m_imageIcon;
    RichTextView *m_imageNumLabel;
    AsyncImageView *m_coverImageView;
    CAGradientLayer *m_coverMaskLayer;
    CAGradientLayer *m_gradientLayer;
}

- (void).cxx_destruct;
- (void)layoutContentView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) ImageReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end
