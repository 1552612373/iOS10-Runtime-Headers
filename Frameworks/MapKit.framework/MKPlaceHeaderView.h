/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStarRatingView, UIView, MKMapItem, NSArray, MKPlaceHeaderBackgroundView, UIImageView, NSString, <MKPlaceHeaderViewDelegate>, NSLayoutConstraint, MKDistanceDetailProvider;

@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate> {
    MKPlaceHeaderBackgroundView *_background;
    UIView *_screen;
    UIImageView *_vignette;
    MKDistanceDetailProvider *_distanceMonitor;
    bool_showBusinessDetails;
    MKStarRatingView *_ratingView;
    struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 5; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 2; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 1; unsigned int x_11_1_71 : 2; unsigned int x_11_1_72 : 1; unsigned int x_11_1_73 : 3; unsigned int x_11_1_74 : 1; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; } x11; } *_titleLabel;
    struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 5; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 2; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 1; unsigned int x_11_1_71 : 2; unsigned int x_11_1_72 : 1; unsigned int x_11_1_73 : 3; unsigned int x_11_1_74 : 1; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; } x11; } *_distanceToPlaceLabel;
    struct { 
        unsigned int isPresenting; 
    } _headerViewFlags;
    bool_needsToUpdateTitleLabel;
    MKMapItem *_mapItem;
    long long _backgroundTypeOverride;
    <MKPlaceHeaderViewDelegate> *_delegate;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSArray *_labelWidthConstraints;
}

@property(retain) MKMapItem * mapItem;
@property long long backgroundTypeOverride;
@property(copy) NSString * title;
@property(copy) NSString * subTitle;
@property double rating;
@property <MKPlaceHeaderViewDelegate> * delegate;
@property bool needsToUpdateTitleLabel;
@property(retain) NSLayoutConstraint * titleLabelBaselineConstraint;
@property(retain) NSArray * labelWidthConstraints;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2;
- (void)resetVignette;
- (id)viewsForPresentation;
- (void)updateTitleLabel;
- (bool)needsToUpdateTitleLabel;
- (void)setLabelWidthConstraints:(id)arg1;
- (id)labelWidthConstraints;
- (long long)backgroundTypeOverride;
- (id)subTitle;
- (void)fadeOutScreen;
- (void)presentBackgroundIfNeeded;
- (void)setTitleLabelBaselineConstraint:(id)arg1;
- (struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 5; unsigned int x_11_1_65 : 1; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 2; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 1; unsigned int x_11_1_71 : 2; unsigned int x_11_1_72 : 1; unsigned int x_11_1_73 : 3; unsigned int x_11_1_74 : 1; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; } x11; }*)newInfoLabel;
- (void)_configureLabelForHeader:(id)arg1;
- (void)setNeedsToUpdateTitleLabel:(bool)arg1;
- (id)titleLabelBaselineConstraint;
- (void)addConstraints;
- (void)addContent;
- (void)refreshContent;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (void)prepareForPresentation;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setBackgroundViewTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)restartAnimations;
- (void)resetAnimations;
- (void)setBackgroundTypeOverride:(long long)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (double)rating;
- (void)setRating:(double)arg1;
- (void)resume;
- (void)pause;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (void)present;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end