/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSString;

@interface WBUFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    NSArray *_framesForAllForms;
    NSArray *_metadataForAllForms;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int formCount;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2;

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(id)arg1;
- (unsigned int)formCount;
- (id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2;

@end
