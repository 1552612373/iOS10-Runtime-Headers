/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOStructuredAddress, GEOPDViewportInfo;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    struct { 
        unsigned int maxResults : 1; 
    } _has;
}

@property(readonly) bool hasQueryString;
@property(retain) NSString * queryString;
@property bool hasMaxResults;
@property unsigned int maxResults;
@property(readonly) bool hasViewportInfo;
@property(retain) GEOPDViewportInfo * viewportInfo;
@property(readonly) bool hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;


- (id)viewportInfo;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (bool)hasViewportInfo;
- (void)setViewportInfo:(id)arg1;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (bool)hasQueryString;
- (bool)hasMaxResults;
- (void)setHasMaxResults:(bool)arg1;
- (id)structuredAddress;
- (bool)hasStructuredAddress;
- (void)setStructuredAddress:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (unsigned int)maxResults;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)queryString;
- (void)setQueryString:(id)arg1;

@end