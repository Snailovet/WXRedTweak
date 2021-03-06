//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioSenderExt.h"
#import "IMsgExt.h"
#import "IRemoteControlCheckExt.h"

@class MMTimer;

@interface RecordController : MMObject <IAudioSenderExt, IRemoteControlCheckExt, IMsgExt>
{
    MMTimer *m_TimeoutTimer;
    id <RecordControllerDelegate> m_delegate;
    _Bool m_bRecording;
    _Bool m_bRecordEnabled;
    unsigned int m_uiTmpRecordID;
    _Bool m_bRemoteControl;
    unsigned int m_currentTmpFormat;
    double m_iLastMsgSentTime;
    _Bool m_isShowPreparing;
}

- (void).cxx_destruct;
- (void)CancelRecording;
- (void)CheckIfButtonPressing:(id)arg1;
- (void)OnAddMsg:(id)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnMsgSent:(id)arg1;
- (void)OnSendError:(id)arg1 ErrNo:(int)arg2;
- (void)RecordingTimeOut;
- (void)RecordingTimeOutCounting;
- (void)Register;
- (void)Reset;
- (void)ResetTips;
- (void)StartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2 UserInfo:(id)arg3;
- (void)StartRecordingInternal:(id)arg1;
- (void)StartTmpRecordInternal;
- (void)StartTmpRecording;
- (void)StartTmpRecording:(unsigned int)arg1;
- (void)StopRecording;
- (void)StopRecordingInternal;
- (void)TooLongTips;
- (void)TooShortTips;
- (void)UnRegister;
- (_Bool)canRemoteRecord;
- (void)dealloc;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckShouldFinishRecord;
- (id)init;
- (_Bool)isRecording;
@property(nonatomic) __weak id <RecordControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_isShowPreparing; // @synthesize m_isShowPreparing;
@property(nonatomic) unsigned int m_uiTmpRecordID; // @synthesize m_uiTmpRecordID;
- (void)onVoiceMsgSent:(id)arg1;
- (void)setButtonHighlighted:(_Bool)arg1;
- (void)stopRecording_notification:(id)arg1;

@end

