/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSMutableDictionary, IDSMessageContext;

@interface IDSProtobuf : NSObject <NSCoding> {
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

@property(retain) NSData * data;
@property(retain) NSData * uncompressedData;
@property unsigned short type;
@property bool isResponse;
@property(retain) IDSMessageContext * context;

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(bool)arg2;

- (void)setUncompressedData:(id)arg1;
- (id)uncompressedData;
- (void)setIsResponse:(bool)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(bool)arg3;
- (bool)isResponse;
- (id)context;
- (void)setContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)data;
- (void)setType:(unsigned short)arg1;
- (unsigned short)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setData:(id)arg1;

@end