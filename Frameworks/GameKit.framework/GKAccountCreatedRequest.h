/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKAccountCreatedRequest : GKDataRequest 
{
    NSString *_playerID;
    NSString *_authToken;
    NSString *_accountName;
}

@property(retain) NSString *accountName;
@property(retain) NSString *authToken;
@property(retain) NSString *playerID;


- (BOOL)authenticationRequired;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (id)key;
- (id)request;
- (void)dealloc;
- (void)setAccountName:(id)arg1;
- (id)accountName;

@end