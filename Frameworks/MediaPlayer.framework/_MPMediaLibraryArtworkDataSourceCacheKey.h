/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkCatalog;

@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject  {
    MPArtworkCatalog *_catalog;
    struct CGSize { 
        double width; 
        double height; 
    } _representationSize;
}

@property(retain) MPArtworkCatalog * catalog;
@property struct CGSize { double x1; double x2; } representationSize;


- (void)setCatalog:(id)arg1;
- (id)catalog;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })representationSize;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end