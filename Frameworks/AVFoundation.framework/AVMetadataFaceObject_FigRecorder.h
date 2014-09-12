/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal_FigRecorder;

@interface AVMetadataFaceObject_FigRecorder : AVMetadataObject_FigRecorder  {
    AVMetadataFaceObjectInternal_FigRecorder *_internal;
}

@property(readonly) long long faceID;
@property(readonly) bool hasRollAngle;
@property(readonly) double rollAngle;
@property(readonly) bool hasYawAngle;
@property(readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (long long)faceID;
- (double)yawAngle;
- (bool)hasYawAngle;
- (double)rollAngle;
- (bool)hasRollAngle;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)description;

@end