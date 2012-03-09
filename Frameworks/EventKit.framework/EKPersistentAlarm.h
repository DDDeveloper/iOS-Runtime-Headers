/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentLocation, NSString, NSData, NSDate, NSTimeZone;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying> {
}

@property(copy) NSDate * absoluteDate;
@property(copy) NSTimeZone * timeZone;
@property double relativeOffset;
@property(readonly) BOOL isAbsolute;
@property int alarmType;
@property(copy) NSString * externalID;
@property(copy) NSData * externalData;
@property(readonly) NSString * UUID;
@property(copy) EKPersistentLocation * location;
@property int proximity;

+ (id)relations;

- (void)setExternalID:(id)arg1;
- (id)externalID;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlarmType:(int)arg1;
- (int)alarmType;
- (void)setProximity:(int)arg1;
- (int)proximity;
- (id)absoluteDate;
- (void)setRelativeOffset:(double)arg1;
- (void)setAbsoluteDate:(id)arg1;
- (double)relativeOffset;
- (BOOL)isAbsolute;
- (int)entityType;
- (BOOL)validate:(id*)arg1;
- (id)location;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)owner;
- (id)externalData;
- (void)setExternalData:(id)arg1;
- (id)UUID;

@end