/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSData, NSString;

@interface SYChange : PBCodable <NSCopying> {
    NSData *_data;
    NSString *_objectId;
    int _type;
    unsigned long long _version;
}

@property(retain) NSData * data;
@property(readonly) BOOL hasData;
@property(retain) NSString * objectId;
@property int type;
@property unsigned long long version;

+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectForStore:(id)arg1;
- (id)objectId;
- (BOOL)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (int)type;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
