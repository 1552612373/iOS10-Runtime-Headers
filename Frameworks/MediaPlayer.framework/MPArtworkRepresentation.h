/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage;

@interface MPArtworkRepresentation : NSObject  {
    UIImage *_image;
    struct CGSize { 
        double width; 
        double height; 
    } _representationSize;
}

@property(retain) UIImage * image;
@property struct CGSize { double x1; double x2; } representationSize;

+ (id)representationWithSize:(struct CGSize { double x1; double x2; })arg1 image:(id)arg2;

- (struct CGSize { double x1; double x2; })representationSize;
- (id)debugQuickLookObject;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void).cxx_destruct;

@end