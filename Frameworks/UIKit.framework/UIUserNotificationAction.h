/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long _activationMode;
    NSString *_activationModeString;
    NSString *_identifier;
    NSString *_title;
    bool_authenticationRequired;
    bool_destructive;
}

@property unsigned long long activationMode;
@property(readonly) NSString * activationModeString;
@property(getter=isAuthenticationRequired) bool authenticationRequired;
@property(getter=isDestructive) bool destructive;
@property(copy) NSString * identifier;
@property(copy) NSString * title;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 activationMode:(unsigned long long)arg3 isAuthenticationRequired:(bool)arg4;
+ (bool)supportsSecureCoding;

- (unsigned long long)activationMode;
- (id)activationModeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 activationMode:(unsigned long long)arg3 isAuthenticationRequired:(bool)arg4 isDestructive:(bool)arg5;
- (bool)isAuthenticationRequired;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActivationMode:(unsigned long long)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)validatedAction;

@end