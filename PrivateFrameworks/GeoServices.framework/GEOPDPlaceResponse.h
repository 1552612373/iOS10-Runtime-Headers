/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDPlaceGlobalResult, NSMutableArray;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_placeResults;
    int _requestType;
    int _status;
    struct { 
        unsigned int requestType : 1; 
        unsigned int status : 1; 
    } _has;
}

@property bool hasStatus;
@property int status;
@property bool hasRequestType;
@property int requestType;
@property(readonly) bool hasGlobalResult;
@property(retain) GEOPDPlaceGlobalResult * globalResult;
@property(retain) NSMutableArray * placeResults;


- (bool)hasStatus;
- (void)setGlobalResult:(id)arg1;
- (id)globalResult;
- (bool)hasGlobalResult;
- (id)initWithGeocoderPlace:(id)arg1;
- (id)placeResults;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (void)clearPlaceResults;
- (unsigned long long)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (id)_disambiguationLabels;
- (bool)hasRequestType;
- (void)setHasRequestType:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setRequestType:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)requestType;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end