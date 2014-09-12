/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CXNamespace, NSString;

@interface OCXState : NSObject  {
    int mXMLFormat;
    CXNamespace *mOCXRelationshipsNamespace;
    CXNamespace *mOCXDrawingNamespace;
}

@property(readonly) int xmlFormat;
@property(retain) CXNamespace * OCXRelationshipsNamespace;
@property(retain) CXNamespace * OCXDrawingNamespace;
@property(copy,readonly) NSString * OCXThemeRelationshipType;


- (void)setXmlFormat:(int)arg1;
- (id)OCXDrawingNamespace;
- (id)OCXRelationshipsNamespace;
- (id)OCXSettingsRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXThemeRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXDrawingRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXStylesRelationshipType;
- (void)setOCXDrawingNamespace:(id)arg1;
- (void)setOCXRelationshipsNamespace:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (int)xmlFormat;
- (id)init;
- (void)dealloc;

@end