//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol CheckQRCodeLoginDelegate <NSObject>
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2 nickName:(NSString *)arg3 headImageURL:(NSString *)arg4;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginScaned:(NSString *)arg1 nickName:(NSString *)arg2;
- (void)OnCheckQRCodeLoginUUIDExpired;
@end
