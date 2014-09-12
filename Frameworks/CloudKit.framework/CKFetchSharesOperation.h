/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKFetchSharesOperation : CKOperation  {
    bool_isFetchAllSharesOperation;
    NSArray *_shareIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchSharesCompletionBlock;

    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_shareIDErrors;
}

@property(copy) NSArray * shareIDs;
@property(copy) id fetchSharesCompletionBlock;
@property(retain) NSMutableDictionary * sharesByShareID;
@property bool isFetchAllSharesOperation;
@property(retain) NSMutableDictionary * shareIDErrors;

+ (id)fetchAllSharesOperation;

- (void)setShareIDs:(id)arg1;
- (id)fetchSharesCompletionBlock;
- (void)setShareIDErrors:(id)arg1;
- (id)shareIDErrors;
- (bool)isFetchAllSharesOperation;
- (id)shareIDs;
- (void)setIsFetchAllSharesOperation:(bool)arg1;
- (void)setSharesByShareID:(id)arg1;
- (id)sharesByShareID;
- (void)setFetchSharesCompletionBlock:(id)arg1;
- (id)initWithShareIDs:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void).cxx_destruct;

@end