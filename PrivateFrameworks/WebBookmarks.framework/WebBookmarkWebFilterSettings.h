/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject  {
    WFUserSettings *_userSettings;
}

@property(readonly) WFUserSettings * userSettings;
@property(getter=isWebFilterEnabled,readonly) bool webFilterEnabled;
@property(getter=isWebFilterWhiteListOnlyModeEnabled,readonly) bool webFilterWhiteListOnlyModeEnabled;

+ (id)sharedWebFilterSettings;

- (bool)isWebFilterEnabled;
- (void)reloadSettings;
- (bool)isWebFilterWhiteListOnlyModeEnabled;
- (id)userSettings;
- (id)init;
- (void)dealloc;

@end