/* Generated by RuntimeBrowser.
 */

@protocol ICSearchLegacyContext <NSObject>

@required

- (NSArray *)legacyAllSearchIndexableObjects;
- (NSManagedObjectContext *)legacyManagedObjectContext;
- (<ICSearchIndexable> *)legacyNoteForIdentifier:(NSString *)arg1 includeDeleted:(BOOL)arg2;
- (<ICSearchIndexableNote> *)legacyNoteForIntegerID:(NSNumber *)arg1;

@end