/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSString *_connectionID;
    unsigned int _mediaType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    bool_enabled;
}

@property(copy) NSString * connectionID;
@property unsigned int mediaType;
@property(retain) FigCaptureSourceConfiguration * sourceConfiguration;
@property(retain) FigCaptureSinkConfiguration * sinkConfiguration;
@property bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;

- (void)setSinkConfiguration:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setConnectionID:(id)arg1;
- (bool)enabled;
- (id)connectionID;
- (id)sinkConfiguration;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)sourceConfiguration;
- (void)setEnabled:(bool)arg1;
- (unsigned int)mediaType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end