/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIFamilyInvitationAcceptanceDelegate>, NSString, AAFamilyInvite, NSOperationQueue, AAGrandSlamSigner, ACAccount, RemoteUIController, NSMutableURLRequest, ACAccountStore;

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    RemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

@property <AAUIFamilyInvitationAcceptanceDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (id)initWithInvite:(id)arg1 grandSlamSigner:(id)arg2;
- (void)_showErrorAlert;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_sendUserToiTunesSettings;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end