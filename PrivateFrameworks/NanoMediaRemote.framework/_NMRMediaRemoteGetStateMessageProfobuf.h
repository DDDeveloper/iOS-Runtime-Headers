/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    NSData *_applicationInfoDigest;
    } _has;
    NSData *_knownDigest;
    NSData *_nowPlayingInfoDigest;
    int _state;
    NSData *_supportedCommandsDigest;
    double _timestamp;
}

@property(retain) NSData * applicationInfoDigest;
@property(readonly) BOOL hasApplicationInfoDigest;
@property(readonly) BOOL hasKnownDigest;
@property(readonly) BOOL hasNowPlayingInfoDigest;
@property BOOL hasState;
@property(readonly) BOOL hasSupportedCommandsDigest;
@property BOOL hasTimestamp;
@property(retain) NSData * knownDigest;
@property(retain) NSData * nowPlayingInfoDigest;
@property int state;
@property(retain) NSData * supportedCommandsDigest;
@property double timestamp;

- (void).cxx_destruct;
- (id)applicationInfoDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApplicationInfoDigest;
- (BOOL)hasKnownDigest;
- (BOOL)hasNowPlayingInfoDigest;
- (BOOL)hasState;
- (BOOL)hasSupportedCommandsDigest;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)knownDigest;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfoDigest;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationInfoDigest:(id)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setKnownDigest:(id)arg1;
- (void)setNowPlayingInfoDigest:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommandsDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommandsDigest;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
