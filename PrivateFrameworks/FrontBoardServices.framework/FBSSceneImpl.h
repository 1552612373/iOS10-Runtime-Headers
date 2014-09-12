/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString, FBSSceneSettings, <FBSSceneUpdater>, CADisplay, <FBSSceneDelegate>, FBSSerialQueue, NSObject<OS_dispatch_queue>, FBSDisplay, FBSSceneClientSettings, NSMutableArray;

@interface FBSSceneImpl : FBSScene  {
    <FBSSceneDelegate> *_delegate;
    NSString *_identifier;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    <FBSSceneUpdater> *_updater;
    CADisplay *_display;
    FBSDisplay *_fbsDisplay;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
    bool_shouldObserveContexts;
}


- (id)settings;
- (id)identifier;
- (id)display;
- (void)sendActions:(id)arg1;
- (void)sceneContextDidInvalidate:(id)arg1;
- (void)sceneContextDidUpdate:(id)arg1;
- (bool)sceneContextShouldObserveUpdates:(id)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (void)_queue_invalidate;
- (id)_initWithCallOutQueue:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (id)_initWithWorkspace:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (void)_updateContext:(id)arg1;
- (id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 display:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7;
- (id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)contexts;
- (id)clientSettings;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)_performDelegateCallOut:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (void)updateClientSettingsWithBlock:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (id)fbsDisplay;

@end