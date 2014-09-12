/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl  {
    NSArray *_buttons;
    long long _selectedTitleIndex;
}

@property long long selectedTitleIndex;
@property(copy) NSArray * titles;


- (void)_buttonAction:(id)arg1;
- (long long)selectedTitleIndex;
- (void)setSelectedTitleIndex:(long long)arg1;
- (void)_reloadSelectedButton;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titles;
- (void)setTitles:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;

@end