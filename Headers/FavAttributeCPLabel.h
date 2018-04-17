//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AttributeLabel.h"

@class NSString, UIColor, UIFont;

@interface FavAttributeCPLabel : AttributeLabel
{
    UIFont *m_font;
    UIColor *m_textColor;
    NSString *m_cpKey;
    double _lineSpace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=m_cpKey;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)formAttributedString;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalSetLineSpace;
- (void)internalSetText;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)setTextColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;

@end
