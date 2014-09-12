/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, GKTextStyle;

@interface GKLabel : UILabel <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    bool_usingAttributedText;
    bool_shouldInhibitReplay;
    double _actualFontShrinkageFactor;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) GKTextStyle * baseStyle;
@property(readonly) bool usingAttributedText;
@property bool shouldInhibitReplay;
@property double actualFontShrinkageFactor;
@property double minimumScaleFactor;
@property(retain) GKTextStyle * appliedStyle;

+ (void)initialize;

- (id)baseStyle;
- (void)setAppliedStyle:(id)arg1;
- (id)appliedStyle;
- (void)setShouldInhibitReplay:(bool)arg1;
- (void)shrinkFontToFitWidth;
- (double)actualFontShrinkageFactor;
- (void)applyTextStyle:(id)arg1;
- (void)setActualFontShrinkageFactor:(double)arg1;
- (struct CGSize { double x1; double x2; })shrinkFontToFitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBaseStyle:(id)arg1;
- (void)replayAndApplyStyleUnlessInhibited;
- (bool)usingAttributedText;
- (void)replayAndApplyStyleWithSystemContentChange:(bool)arg1;
- (bool)shouldInhibitReplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;

@end