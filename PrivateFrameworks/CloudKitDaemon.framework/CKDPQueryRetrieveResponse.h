/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property(retain) NSMutableArray * queryResults;
@property(readonly) bool hasContinuationMarker;
@property(retain) NSData * continuationMarker;


- (void)setQueryResults:(id)arg1;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (void)clearQueryResults;
- (unsigned long long)queryResultsCount;
- (void)addQueryResults:(id)arg1;
- (id)continuationMarker;
- (bool)hasContinuationMarker;
- (id)queryResults;
- (void)setContinuationMarker:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end