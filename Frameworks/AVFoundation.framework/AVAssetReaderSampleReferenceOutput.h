/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput  {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property(readonly) AVAssetTrack * track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;

- (id)initWithTrack:(id)arg1;
- (id)track;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (bool)_trimsSampleDurations;
- (id)_asset;
- (id)mediaType;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end