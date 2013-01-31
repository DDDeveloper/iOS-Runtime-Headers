/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject  {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (id)chartLabelFont;
+ (id)sharedLabelInfoManager;
+ (struct __CFString { }*)_CFDateFormatterPropertyForMonthLabelLength:(int)arg1;
+ (void)clearSharedManager;

- (void)resetLocale;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)monthLabelInfoArrayForLabelLength:(int)arg1;
- (BOOL)use24hrTime;
- (id)labelInfoWithUnsignedInteger:(unsigned int)arg1;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)arg1;

@end