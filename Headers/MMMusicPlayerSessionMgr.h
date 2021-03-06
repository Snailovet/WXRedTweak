//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IRemoteControlCheckExt.h"

@interface MMMusicPlayerSessionMgr : NSObject <IRemoteControlCheckExt>
{
}

+ (id)sharedMusicPlayerSessionMgr;
- (void)beginMusicPlayerAudioSession:(id)arg1;
- (void)beginNewMusicPlayerAudioSession:(id)arg1;
- (void)dealloc;
- (void)endMusicPlayerAudioSession:(id)arg1;
- (void)endNewMusicPlayerAudioSession:(id)arg1;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldPrevTrack;
- (void)iRemoteControlCheckShouldStop;
- (id)init;
- (void)notifyNewPlayStateChange:(id)arg1;
- (void)notifyPlayStateChange:(id)arg1;

@end

