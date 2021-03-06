/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WPZoneTrackerDelegate>, NSString, XPCClient;

@interface WPZoneTracker : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WPZoneTrackerDelegate> *_delegate;
    int _state;
    BOOL _wantEntry;
    BOOL _wantExit;
}

@property(retain) XPCClient * connection;
@property(copy,readonly) NSString * debugDescription;
@property <WPZoneTrackerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property int state;
@property(readonly) Class superclass;
@property BOOL wantEntry;
@property BOOL wantExit;

- (void).cxx_destruct;
- (void)changeState:(int)arg1;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)getCurrentTrackedZones;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)messageArrived:(id)arg1;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)registerZonesFailed:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(int)arg1;
- (void)setWantEntry:(BOOL)arg1;
- (void)setWantExit:(BOOL)arg1;
- (int)state;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)arg1;
- (BOOL)wantEntry;
- (BOOL)wantExit;
- (void)zonesEntered:(id)arg1;
- (void)zonesExited:(id)arg1;

@end
