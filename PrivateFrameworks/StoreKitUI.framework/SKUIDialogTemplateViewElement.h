/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUILabelViewElement;

@interface SKUIDialogTemplateViewElement : SKUIViewElement  {
    long long _dialogType;
}

@property(readonly) long long dialogType;
@property(readonly) SKUILabelViewElement * message;
@property(readonly) SKUILabelViewElement * title;
@property(readonly) NSArray * buttons;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)dialogType;
- (id)message;
- (id)title;
- (id)buttons;

@end