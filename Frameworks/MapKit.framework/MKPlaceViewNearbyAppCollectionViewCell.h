/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UILabel, UIImageView, NSDictionary;

@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell  {
    UILabel *_titleLabel;
    UILabel *_categoryLabel;
    UILabel *_priceLabel;
    UIImageView *_icon;
    NSDictionary *_storeData;
}

@property(retain) NSDictionary * storeData;

+ (double)heightWithIconSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)reuseIdentifier;

- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setStoreData:(id)arg1;
- (id)storeData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)tintColorDidChange;

@end