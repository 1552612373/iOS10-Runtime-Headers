/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSSet, SKUIIndexBarEntryListViewElement, IKViewElementStyle;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController  {
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}


- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;
- (long long)numberOfEntryDescriptors;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (void)reloadViewElementData;
- (void).cxx_destruct;

@end