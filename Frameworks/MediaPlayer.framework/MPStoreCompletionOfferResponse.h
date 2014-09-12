/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, NSDictionary;

@interface MPStoreCompletionOfferResponse : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemsByVariant;
    NSDictionary *_responseDictionary;
}

@property(readonly) NSDictionary * responseDictionary;


- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (id)mediaItemsWithStoreOfferVariant:(long long)arg1;
- (void).cxx_destruct;

@end