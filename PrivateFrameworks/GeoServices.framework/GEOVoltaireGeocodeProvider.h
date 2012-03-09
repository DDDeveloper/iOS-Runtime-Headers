/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class PBRequester;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
    PBRequester *_requester;
}

+ (id)reverseGeocoderURL;
+ (id)forwardGeocoderURL;
+ (unsigned short)provider;
+ (id)providerName;

- (void)cancel;
- (void)dealloc;
- (id)newRequester:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;

@end