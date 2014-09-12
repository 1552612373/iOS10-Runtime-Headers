/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVirtualResizeAction : BSAction  {
}

@property(readonly) struct CGSize { double x1; double x2; } virtualSize;
@property(readonly) long long virtualHorizontalSizeClass;
@property(readonly) long long virtualVerticalSizeClass;


- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithVirtualSize:(struct CGSize { double x1; double x2; })arg1 virtualHorizontalSizeClass:(long long)arg2 virtualVerticalSizeClass:(long long)arg3;
- (long long)virtualVerticalSizeClass;
- (long long)virtualHorizontalSizeClass;
- (struct CGSize { double x1; double x2; })virtualSize;
- (long long)UIActionType;

@end