/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class <FBSUIApplicationSystemServiceDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface FBSUIApplicationSystemService : NSObject {
    <FBSUIApplicationSystemServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly) double backgroundTimeRemaining;
@property long long badgeNumber;
@property(copy) NSString * badgeString;
@property double currentBacklightLevel;
@property <FBSUIApplicationSystemServiceDelegate> * delegate;

- (id)_getBadgeValue;
- (double)backgroundTimeRemaining;
- (long long)badgeNumber;
- (id)badgeString;
- (double)currentBacklightLevel;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setBadgeNumber:(long long)arg1;
- (void)setBadgeString:(id)arg1;
- (void)setCurrentBacklightLevel:(double)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setNextWakeInterval:(double)arg1;

@end