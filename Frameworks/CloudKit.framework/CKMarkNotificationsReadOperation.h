/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation  {
    NSArray *_notificationIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _markNotificationsReadCompletionBlock;

    NSMutableArray *_notificationIDsMarkedRead;
    NSMutableDictionary *_errorsByNotificationID;
}

@property(copy) NSArray * notificationIDs;
@property(copy) id markNotificationsReadCompletionBlock;
@property(retain) NSMutableArray * notificationIDsMarkedRead;
@property(retain) NSMutableDictionary * errorsByNotificationID;


- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (void)setMarkNotificationsReadCompletionBlock:(id)arg1;
- (id)markNotificationsReadCompletionBlock;
- (void)setNotificationIDsMarkedRead:(id)arg1;
- (id)notificationIDsMarkedRead;
- (void)setErrorsByNotificationID:(id)arg1;
- (id)errorsByNotificationID;
- (void)setNotificationIDs:(id)arg1;
- (id)notificationIDs;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end