/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal_FigRecorder : NSObject  {
    boolhasRollAngle;
    boolhasYawAngle;
    long long faceID;
    double rollAngle;
    double yawAngle;
}

@property long long faceID;
@property bool hasRollAngle;
@property double rollAngle;
@property bool hasYawAngle;
@property double yawAngle;


- (void)setFaceID:(long long)arg1;
- (long long)faceID;
- (void)setYawAngle:(double)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (double)yawAngle;
- (bool)hasYawAngle;
- (double)rollAngle;
- (bool)hasRollAngle;

@end