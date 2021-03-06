//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MemoryMappedKV;

@interface MMHeavyUserDataSource : NSObject
{
    MemoryMappedKV *m_memoryMappedKV;
    unsigned long long m_heavyUserType;
    unsigned long long m_heavyUserPoint;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterdayDumpCount;
    id <MMHeavyUserDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addDumpCount;
- (void)beginStackReport;
- (_Bool)checkIfNeedRetryStackReport;
- (void)clearAll;
- (id)currentUserMemmoryMappedKey;
@property(nonatomic) __weak id <MMHeavyUserDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishStackReport;
- (id)get14606KVString;
- (unsigned long long)getContactCount;
- (unsigned long long)getDumpCount;
- (unsigned long long)getHeavyUserPoint;
- (unsigned long long)getHeavyUserType;
- (unsigned long long)getLastReportHeavyUserType;
- (unsigned long long)getSessionCount;
- (unsigned long long)getWeChatSize;
- (id)init;
- (_Bool)isFirstReportHeavyUserPointToday;
- (_Bool)isFirstReportHeavyUserTypeToday;
- (_Bool)isFirstScanThisWeek;
- (void)loadData;
- (unsigned long long)p_getYesterDayDumpCount;
- (void)saveLastReportHeavyUserPointTime;
- (void)saveLastReportHeavyUserType:(unsigned long long)arg1;
- (void)saveTodayHasScanned;
- (void)updateContactCount:(unsigned long long)arg1;
- (void)updateHeavyUserPoint:(unsigned long long)arg1;
- (void)updateHeavyUserType:(unsigned long long)arg1;
- (void)updateSessionCount:(unsigned long long)arg1;
- (void)updateWeChatSize:(unsigned long long)arg1;

@end

