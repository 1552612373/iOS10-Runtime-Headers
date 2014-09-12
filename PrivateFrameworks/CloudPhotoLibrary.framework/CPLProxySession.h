/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString;

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;

- (id)proxyLibraryManager;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg1;
- (id)proxyWithErrorHandler:(id)arg1;
- (void)finalizeWithCompletionHandler:(id)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)tearDownWithCompletionHandler:(id)arg1;

@end