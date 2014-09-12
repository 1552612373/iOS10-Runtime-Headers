/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUICardLayout, UIView, SKUISizeValue, NSString, SKUICardViewElement, NSMapTable, SKUIViewElement;

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView> {
    SKUISizeValue *_artworkBoundingSize;
    SKUICardViewElement *_cardElement;
    SKUICardLayout *_layout;
    UIView *_programmedCardBackgroundView;
    SKUIViewElement *_productImageElement;
    NSMapTable *_viewElements;
}

@property(copy) SKUISizeValue * artworkBoundingSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct CGSize { double x1; double x2; })artworkBoundingSizeWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)_defaultWidthForLockupWithContext:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;

- (void)_buttonAction:(id)arg1;
- (id)artworkBoundingSize;
- (void)_performDefaultActionForViewElement:(id)arg1;
- (void)setArtworkBoundingSize:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end