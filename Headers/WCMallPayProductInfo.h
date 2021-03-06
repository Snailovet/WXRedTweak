//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface WCMallPayProductInfo : NSObject
{
    unsigned int m_uiProductId;
    NSString *m_nsAppId;
    NSString *m_nsProductName;
    NSString *m_nsProductDescrible;
    unsigned int m_uiProductMinPrice;
    unsigned int m_uiProductMaxPrice;
    unsigned int m_uiDiscount;
    _Bool m_bIsInfinite;
    unsigned int m_uiLeftCount;
    _Bool m_bIsShelved;
    _Bool m_bIsDefaultChoose;
    _Bool m_bNeedGetLatestInfo;
    _Bool m_bNeedGetAttribute;
    NSMutableArray *m_arrAttributeList;
    unsigned long long m_uiProductType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrAttributeList; // @synthesize m_arrAttributeList;
@property(nonatomic) _Bool m_bIsDefaultChoose; // @synthesize m_bIsDefaultChoose;
@property(nonatomic) _Bool m_bIsInfinite; // @synthesize m_bIsInfinite;
@property(nonatomic) _Bool m_bIsShelved; // @synthesize m_bIsShelved;
@property(nonatomic) _Bool m_bNeedGetAttribute; // @synthesize m_bNeedGetAttribute;
@property(nonatomic) _Bool m_bNeedGetLatestInfo; // @synthesize m_bNeedGetLatestInfo;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(retain, nonatomic) NSString *m_nsProductDescrible; // @synthesize m_nsProductDescrible;
@property(retain, nonatomic) NSString *m_nsProductName; // @synthesize m_nsProductName;
@property(nonatomic) unsigned int m_uiDiscount; // @synthesize m_uiDiscount;
@property(nonatomic) unsigned int m_uiLeftCount; // @synthesize m_uiLeftCount;
@property(nonatomic) unsigned int m_uiProductId; // @synthesize m_uiProductId;
@property(nonatomic) unsigned int m_uiProductMaxPrice; // @synthesize m_uiProductMaxPrice;
@property(nonatomic) unsigned int m_uiProductMinPrice; // @synthesize m_uiProductMinPrice;
@property(nonatomic) unsigned long long m_uiProductType; // @synthesize m_uiProductType;

@end

