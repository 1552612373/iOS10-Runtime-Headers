/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairAckMessage : IDSSocketPairMessage  {
    unsigned int _sequenceNumber;
}

@property(readonly) unsigned int sequenceNumber;


- (id)initWithSequenceNumber:(unsigned int)arg1;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (unsigned char)command;
- (unsigned int)sequenceNumber;

@end