/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<OS_dispatch_queue>, OITSUProgressContext;

@interface OITSUProgressContextProgress : OITSUProgress  {
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    boolhasAddedProgressContextObserver;
}


- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (id)initWithProgressContext:(id)arg1;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (double)maxValue;
- (double)value;
- (id)init;
- (void)dealloc;
- (bool)isIndeterminate;

@end