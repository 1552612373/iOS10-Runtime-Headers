/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement  {
    NSString *_targetIndexBarEntryID;
    long long _visibilityPriority;
}

@property(readonly) SKUIViewElement * childElement;
@property(copy,readonly) NSString * targetIndexBarEntryID;
@property(readonly) long long visibilityPriority;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)visibilityPriority;
- (id)targetIndexBarEntryID;
- (id)childElement;
- (void).cxx_destruct;

@end