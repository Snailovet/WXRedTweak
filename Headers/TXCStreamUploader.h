//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCModule.h"

#import "IntelligentRouteDelegate.h"
#import "TXIUploader.h"

@class NSLock, NSMutableArray, NSObject<OS_dispatch_source>, NSString, TXCIntelligentRoute, TXSUploadParam, UploadStats;

@interface TXCStreamUploader : TXCModule <IntelligentRouteDelegate, TXIUploader>
{
    struct CTXRtmpSendThread *_pusher;
    NSLock *_pusherLock;
    _Bool _pushing;
    long long _pushStartTS;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _isCollecting;
    long long _lastTimestamp;
    UploadStats *_lastUploadStats;
    NSMutableArray *_arrayPendingNAL;
    _Bool _quicChannel;
    id <TXINotifyDelegate> _notifyDelegate;
    NSString *_pushUrl;
    TXSUploadParam *_param;
    NSMutableArray *_ipList;
    long long _currentIPRecordIndex;
    long long _networkType;
    NSString *_realUrl;
    TXCIntelligentRoute *_ir;
    long long _retryCount;
    long long _connectSuccessTimeStamp;
    long long _goodPushTime;
}

- (void).cxx_destruct;
- (void)applyVideoDropParams;
- (void)collectStatus;
@property(nonatomic) long long connectSuccessTimeStamp; // @synthesize connectSuccessTimeStamp=_connectSuccessTimeStamp;
@property(nonatomic) long long currentIPRecordIndex; // @synthesize currentIPRecordIndex=_currentIPRecordIndex;
- (id)getDNSServers;
- (id)getRealRtmpUrlInfo;
- (long long)getSpeed:(long long)arg1 currValue:(long long)arg2 interval:(long long)arg3;
- (id)getUploadStats;
@property(nonatomic) long long goodPushTime; // @synthesize goodPushTime=_goodPushTime;
- (id)initWithParam:(id)arg1;
- (void)internalPushNAL:(id)arg1;
@property(retain, nonatomic) NSMutableArray *ipList; // @synthesize ipList=_ipList;
@property(retain, nonatomic) TXCIntelligentRoute *ir; // @synthesize ir=_ir;
- (_Bool)isIpV6;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
- (_Bool)nextRecordIdx:(_Bool)arg1;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)onFetchDone:(long long)arg1 IpList:(id)arg2;
@property(retain, nonatomic) TXSUploadParam *param; // @synthesize param=_param;
- (void)pushAAC:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)pushNAL:(id)arg1;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(nonatomic) _Bool quicChannel; // @synthesize quicChannel=_quicChannel;
@property(retain, nonatomic) NSString *realUrl; // @synthesize realUrl=_realUrl;
- (void)reconnect:(_Bool)arg1;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void)sendNotifyEvent:(unsigned long long)arg1;
- (void)sendNotifyEvent:(unsigned long long)arg1 msg:(id)arg2;
- (void)setDropEnable:(_Bool)arg1;
- (void)setReconnectCount:(int)arg1 reconnectInterval:(int)arg2;
- (void)setSendStrategy:(_Bool)arg1;
- (void)setVideoDropParams:(_Bool)arg1 maxVideoCount:(int)arg2 maxVideoCacheTime:(int)arg3;
- (void)start:(id)arg1;
- (void)startCollectStatus;
- (void)startPushTask:(id)arg1 QuicChannel:(_Bool)arg2 Delay:(double)arg3;
- (void)stop;
- (void)stopCollectStatus;
- (void)stopPushTask;
- (void)tryResetRetryCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
