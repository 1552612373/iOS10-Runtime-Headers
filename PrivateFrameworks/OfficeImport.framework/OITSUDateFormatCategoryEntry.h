/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject  {
    unsigned short mSeparator;
    struct __CFArray { } *mFormatters;
    NSMutableSet *mFormatStrings;
}


- (void)addFormat:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (id)initWithSeparator:(unsigned short)arg1;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 forceAllowAMPM:(bool)arg2 successfulFormatString:(const struct __CFString {}**)arg3 perfect:(bool*)arg4;
- (unsigned short)separator;
- (void)dealloc;

@end