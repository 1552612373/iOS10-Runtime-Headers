/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSData, QLZipArchive, NSError, NSURL;

@interface QLZipArchiveEntry : NSObject  {
    struct archive_entry { } *_entry;
    QLZipArchive *_archive;
    NSData *_data;
    NSError *_error;
    NSURL *_url;
}

@property NSURL * url;
@property struct archive_entry { }* entry;
@property QLZipArchive * archive;
@property NSData * data;


- (void)setEntry:(struct archive_entry { }*)arg1;
- (struct archive_entry { }*)entry;
- (id)readDataWithError:(id*)arg1;
- (id)url;
- (void)setArchive:(id)arg1;
- (id)archive;
- (void)setUrl:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)setData:(id)arg1;

@end