/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, CKRecordID;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {
    unsigned long long _referenceAction;
    CKRecordID *_recordID;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long referenceAction;
@property(copy) CKRecordID * recordID;

+ (bool)supportsSecureCoding;
+ (id)weakStructureRefForItemID:(id)arg1 zoneName:(id)arg2 forType:(BOOL)arg3;
+ (id)parentStructureRefForItemID:(id)arg1 zoneName:(id)arg2;

- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (unsigned long long)referenceAction;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (id)_initBare;
- (void)setRecordID:(id)arg1;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (id)recordID;
- (id)init;
- (id)debugDescription;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end