//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface FavImageDataManager : MMService <MMService>
{
}

- (id)CopyFileFromOriginPath:(id)arg1;
- (void)DeleteImageFromFile:(id)arg1;
- (id)UIImageDataWriteToFile:(id)arg1;
- (id)UIImageWriteToFile:(id)arg1;
- (id)UIThumbImageWriteToFile:(id)arg1;
- (id)getTempFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

