/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SCNAnimationEvent : NSObject  {
    id _reserved;
    double _eventTime;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventBlock;

}

+ (id)animationEventWithKeyTime:(double)arg1 block:(id)arg2;
+ (id)SCNJSExportProtocol;

- (void)setEventBlock:(id)arg1;
- (id)eventBlock;
- (void)setTime:(double)arg1;
- (double)time;
- (id)init;
- (void)dealloc;

@end