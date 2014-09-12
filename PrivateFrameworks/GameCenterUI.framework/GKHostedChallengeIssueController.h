/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, GKChallenge;

@interface GKHostedChallengeIssueController : GKHostedViewController  {
    bool_forcePicker;
    NSArray *_players;
    NSString *_defaultMessage;
    GKChallenge *_challenge;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissCompletionHandler;

}

@property(retain) NSArray * players;
@property(copy) NSString * defaultMessage;
@property(retain) GKChallenge * challenge;
@property bool forcePicker;
@property(copy) id completionHandler;
@property(copy) id dismissCompletionHandler;

+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
+ (id)presentationQueue;
+ (bool)_preventsAppearanceProxyCustomization;

- (bool)forcePicker;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (void)setForcePicker:(bool)arg1;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
- (void)setPlayers:(id)arg1;
- (id)_remote;
- (void)setDefaultMessage:(id)arg1;
- (id)defaultMessage;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (id)players;
- (void)setChallenge:(id)arg1;
- (id)challenge;
- (void)dealloc;
- (void)setDismissCompletionHandler:(id)arg1;
- (id)dismissCompletionHandler;
- (void)setCompletionHandler:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (id)completionHandler;

@end