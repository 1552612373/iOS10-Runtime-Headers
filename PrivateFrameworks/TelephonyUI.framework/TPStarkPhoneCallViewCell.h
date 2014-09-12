/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UILabel, NSLayoutConstraint;

@interface TPStarkPhoneCallViewCell : UIControl  {
    NSLayoutConstraint *_containerSpecificLeftConstraint;
    NSLayoutConstraint *_containerSpecificRightConstraint;
    UILabel *_mainLabel;
    UILabel *_subtitleLabel;
}

@property(retain) NSLayoutConstraint * containerSpecificLeftConstraint;
@property(retain) NSLayoutConstraint * containerSpecificRightConstraint;
@property(retain) UILabel * mainLabel;
@property(retain) UILabel * subtitleLabel;


- (void)setMainLabel:(id)arg1;
- (void)setContainerSpecificRightConstraint:(id)arg1;
- (id)containerSpecificRightConstraint;
- (void)setContainerSpecificLeftConstraint:(id)arg1;
- (id)containerSpecificLeftConstraint;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (id)mainLabel;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setSubtitleLabel:(id)arg1;
- (id)subtitleLabel;

@end