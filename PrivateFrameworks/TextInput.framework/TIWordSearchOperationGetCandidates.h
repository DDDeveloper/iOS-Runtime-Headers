/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, NSArray;



@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation 
{
    NSString *_inputString;
    NSArray *_results;
    id _target;
    SEL _action;
    BOOL _withPrediction;
}

@property(readonly) BOOL withPrediction;
@property(readonly) SEL action;
@property(retain,readonly) id target;
@property(retain) NSArray *results;
@property(readonly) NSString *inputString;


- (void)completeSearchOnMainThread;
- (void)perform;
- (void)setResults:(id)arg1;
- (id)initWithTIWordSearch:(id)arg1 inputString:(id)arg2 withPrediction:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5;
- (BOOL)withPrediction;
- (id)inputString;
- (SEL)action;
- (id)target;
- (void)dealloc;
- (id)results;

@end