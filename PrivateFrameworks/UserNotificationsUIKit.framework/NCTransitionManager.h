/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCTransitionManager : NSObject <NCLongLookTransitionDelegateObserver, UIGestureRecognizerDelegate> {
    long long  _activeTransitionInitiator;
    <NCTransitionManagerDelegate> * _delegate;
    NCLongLookTransitionDelegate * _longLookTransitionDelegate;
    id /* block */  _pendingCompletion;
    NCNotificationViewController * _presentedLongLookViewController;
    NCPreviewInteractionGestureRecognizer * _previewInteractionGestureRecognizer;
    NCNotificationViewController * _shortLookViewController;
    NSObject<OS_dispatch_group> * _transitionDidBeginGroup;
    NSObject<OS_dispatch_group> * _transitionInProgressGroup;
}

@property (getter=hasCommittedToPresentingLongLookViewController, nonatomic, readonly) bool committedToPresentingLongLookViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCTransitionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (nonatomic, readonly) NCPreviewInteractionGestureRecognizer *previewInteractionGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginInteractivePresentation:(bool)arg1 animated:(bool)arg2 ifPossibleForInitiator:(long long)arg3 completion:(id /* block */)arg4;
- (void)_configureViewController:(id)arg1 forInteractivePresentation:(bool)arg2;
- (void)_configureViewControllerForPresentation:(id)arg1;
- (void)_endPresentationIfPossible:(bool)arg1;
- (void)_handleTransitionProgress:(id)arg1;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasCommittedToPresentingLongLookViewController;
- (void)hintLongLookDismissalWithProgress:(double)arg1;
- (id)initWithShortLookViewController:(id)arg1;
- (void)longLookTransitionDelegate:(id)arg1 didBeginTransitionWithAnimator:(id)arg2;
- (void)longLookTransitionDelegate:(id)arg1 didEndTransitionWithAnimator:(id)arg2 completed:(bool)arg3;
- (void)notificationViewControllerViewDidLoad;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentedLongLookViewController;
- (id)previewInteractionGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)transitioningDelegate:(id)arg1 animatorDidCommitToTransitionWithCoordinator:(id)arg2;

@end