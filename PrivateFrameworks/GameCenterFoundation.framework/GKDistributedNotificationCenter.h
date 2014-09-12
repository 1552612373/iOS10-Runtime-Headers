/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class CPDistributedNotificationCenter, NSString;

@interface GKDistributedNotificationCenter : NSObject <NSXPCListenerDelegate> {
    id _internal;
}

@property(retain) CPDistributedNotificationCenter * notificationCenter;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultCenter;

- (id)notificationCenter;
- (void)setNotificationCenter:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)dealloc;

@end