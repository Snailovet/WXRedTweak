//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioDataRead.h"

@class NSData, NSString;

@interface AudioData : NSObject <AudioDataRead>
{
    NSData *_m_data;
}

- (void).cxx_destruct;
- (unsigned int)getLength;
- (id)initWithData:(id)arg1;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data=_m_data;
- (_Bool)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

