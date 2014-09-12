/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore> {
    SKUIClientContext *_clientContext;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)sendOnXEventWithDictionary:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)setPreviewOverlay:(id)arg1 :(id)arg2;
- (bool)resourceExists:(id)arg1;
- (void)loadGratisContent:(id)arg1;
- (void)launchICloudFamilySettings;
- (void)getBookSample:(id)arg1;
- (void)findLibraryItems:(id)arg1 :(id)arg2 :(id)arg3;
- (void)findApps:(id)arg1 :(id)arg2 :(id)arg3;
- (void)exit:(id)arg1;
- (void)download:(id)arg1;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (void)approveInPerson:(id)arg1 :(id)arg2;
- (void)buy:(id)arg1;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)log:(id)arg1;

@end