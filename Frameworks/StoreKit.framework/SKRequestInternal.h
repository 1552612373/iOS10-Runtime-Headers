/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKPaymentQueueClient, <SKRequestDelegate>, SKXPCConnection;

@interface SKRequestInternal : NSObject  {
    int _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    <SKRequestDelegate> *_delegate;
    int _state;
}


- (void)dealloc;

@end