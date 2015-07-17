/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotes;
- (BOOL)supportsVisibilityTestingType:(int)arg1;

@end