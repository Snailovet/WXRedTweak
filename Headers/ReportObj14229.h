//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ReportObj14229 : NSObject
{
    _Bool _isRange;
    int _errorCode;
    NSString *_pkgId;
    NSString *_pkgVersion;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
- (id)init;
@property(nonatomic) _Bool isRange; // @synthesize isRange=_isRange;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *pkgVersion; // @synthesize pkgVersion=_pkgVersion;
- (id)toLogExt;

@end
