/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSString, ACAccount, SSAccount;

@interface AAUIMyPhotoRequest : AARequest  {
    ACAccount *_account;
    NSString *_serverCacheTag;
    SSAccount *_iTunesAccount;
}

@property(copy) NSString * serverCacheTag;
@property(setter=setiTunesAccount:,retain) SSAccount * iTunesAccount;

+ (Class)responseClass;

- (void)setiTunesAccount:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (id)serverCacheTag;
- (id)iTunesAccount;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1;
- (void).cxx_destruct;

@end