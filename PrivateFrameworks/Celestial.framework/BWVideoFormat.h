/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWVideoFormat : BWFormat {
    unsigned long _bytesPerRowAlignment;
    unsigned int _cacheMode;
    unsigned long _extendedHeight;
    unsigned long _extendedWidth;
    unsigned long _height;
    NSDictionary *_pixelBufferAttributes;
    unsigned long _pixelFormat;
    unsigned long _planeAlignment;
    BOOL _prewireBuffers;
    unsigned long _width;
}

@property unsigned long bytesPerRowAlignment;
@property unsigned int cacheMode;
@property unsigned long extendedHeight;
@property unsigned long extendedWidth;
@property unsigned long height;
@property(readonly) NSDictionary * pixelBufferAttributes;
@property unsigned long pixelFormat;
@property unsigned long planeAlignment;
@property BOOL prewireBuffers;
@property unsigned long width;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;

- (id)_initWithResolvedPixelBufferAttributes:(id)arg1;
- (unsigned long)bytesPerRowAlignment;
- (unsigned int)cacheMode;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long)extendedHeight;
- (unsigned long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long)height;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)mediaType;
- (id)pixelBufferAttributes;
- (unsigned long)pixelFormat;
- (unsigned long)planeAlignment;
- (BOOL)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long)arg1;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long)arg1;
- (void)setExtendedWidth:(unsigned long)arg1;
- (void)setHeight:(unsigned long)arg1;
- (void)setPixelFormat:(unsigned long)arg1;
- (void)setPlaneAlignment:(unsigned long)arg1;
- (void)setPrewireBuffers:(BOOL)arg1;
- (void)setWidth:(unsigned long)arg1;
- (unsigned long)width;

@end
