//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WCPayNewPaidOrderDetailViewDelegate <NSObject>
- (void)onNewDetailViewClickH5Activity:(NSString *)arg1;
- (void)onNewDetailViewClickH5ActivityOpenWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewClickNativeActicity;
- (void)onNewDetailViewClickTinyAppActivityWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewDoneBtnClickWithBrandUsername:(NSString *)arg1;
- (void)onNewDetailViewOpenTinyAppWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
@end

