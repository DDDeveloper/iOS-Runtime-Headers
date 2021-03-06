/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface FigCaptureClientSessionMonitor : NSObject {
    int _applicationState;
    id _applicationStateChangeNotificationToken;
    id _applicationStateHandler;
    int _clientType;
    BOOL _haveExternalCMSession;
    id _interruptionHandler;
    int _interruptionState;
    id _interruptionStateChangeNotificationToken;
    BOOL _invalid;
    int _pid;
    struct opaqueCMSession { } *_session;
    BOOL _stateChangeCallbacksEnabled;
    struct OpaqueFigSimpleMutex { } *_stateChangeLock;
}

@property(readonly) struct opaqueCMSession { }* session;

+ (id)_stringForCMSessionState:(unsigned int)arg1;
+ (void)initialize;
+ (void)startPrewarmingMonitor;
+ (void)stopPrewarmingMonitor;

- (long)_createAndObserveCMSession;
- (void)_deregisterAndReleaseCMSession;
- (void)_handleApplicationStateChange:(unsigned int)arg1;
- (void)_handleAudioInterruptionChange:(int)arg1;
- (void)_handleCMSessionManagerNofification:(id)arg1;
- (int)_queryClientType;
- (long)_registerCMSessionForObservation;
- (long)_updateApplicationState;
- (void)dealloc;
- (id)init;
- (id)initWithPID:(int)arg1 applicationStateHandler:(id)arg2 interruptionHandler:(id)arg3;
- (void)invalidate;
- (long)observeSession:(struct opaqueCMSession { }*)arg1;
- (struct opaqueCMSession { }*)session;

@end
