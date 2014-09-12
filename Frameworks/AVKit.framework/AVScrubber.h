/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVKit.framework/AVKit
 */

@class NSArray, UIImageView, NSString, AVLoadedTimeRangesView;

@interface AVScrubber : UISlider  {
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    UIImageView *_thumbView;
    double _touchLocationOffsetFromThumbViewCenter;
    double _beginTouchLocationInViewY;
    long long _scrubbingSpeed;
}

@property(retain) NSArray * loadedTimeRanges;
@property(getter=isPreciseScrubbingFeasible,readonly) bool preciseScrubbingFeasible;
@property(readonly) NSString * localizedScrubbingSpeedName;
@property long long scrubbingSpeed;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;

- (void)setScrubbingSpeed:(long long)arg1;
- (long long)scrubbingSpeed;
- (bool)isPreciseScrubbingFeasible;
- (id)localizedScrubbingSpeedName;
- (void)setLoadedTimeRanges:(id)arg1;
- (id)loadedTimeRanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)_initSubviews;
- (void)_layoutSubviewsForBoundsChange:(bool)arg1;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end