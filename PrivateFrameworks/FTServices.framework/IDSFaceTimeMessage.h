/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying> {
    NSData *_sessionToken;
}

@property(copy) NSData * sessionToken;


- (id)requiredKeys;
- (id)messageBody;
- (bool)hasRequiredKeys:(id*)arg1;
- (bool)isValidMessage;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end