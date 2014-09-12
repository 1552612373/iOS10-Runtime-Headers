/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {
    NSString *_minimumVersionEtag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
}

@property(readonly) bool hasRecordIdentifier;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(readonly) bool hasRequestedFields;
@property(retain) CKDPRequestedFields * requestedFields;
@property(readonly) bool hasMinimumVersionEtag;
@property(retain) NSString * minimumVersionEtag;

+ (id)options;

- (id)minimumVersionEtag;
- (bool)hasMinimumVersionEtag;
- (void)setMinimumVersionEtag:(id)arg1;
- (id)requestedFields;
- (id)recordIdentifier;
- (bool)hasRequestedFields;
- (bool)hasRecordIdentifier;
- (void)setRequestedFields:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end