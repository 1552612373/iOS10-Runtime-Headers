/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {
    bool_certifiedText;
    id _byteStream;
    NSString *_stringData;
    NSString *_encoding;
}

@property(retain) id byteStream;
@property(retain) NSString * stringData;
@property(retain) NSString * encoding;
@property bool certifiedText;


- (void)setCertifiedText:(bool)arg1;
- (bool)certifiedText;
- (void)setStringData:(id)arg1;
- (void)setByteStream:(id)arg1;
- (id)byteStream;
- (id)stringData;
- (void)setEncoding:(id)arg1;
- (id)encoding;
- (void).cxx_destruct;

@end