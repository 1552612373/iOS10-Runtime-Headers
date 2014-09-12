/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSXPCConnection, NSLock;

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _publishingHandler;

    NSString *_subscriberID;
    NSMutableDictionary *_proxiesByPublisherID;
    NSXPCConnection *_connection;
    NSLock *_lock;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)stop;
- (void)dealloc;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(bool)arg4;
- (void)startForCategory:(id)arg1;
- (void)startForFileURL:(id)arg1;
- (id)initWithPublishingHandler:(id)arg1;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(bool)arg4;

@end