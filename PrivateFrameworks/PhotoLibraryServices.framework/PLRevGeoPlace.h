/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary;

@interface PLRevGeoPlace : NSObject  {
    NSMutableDictionary *_placeTypeInfoMap;
    bool_isHome;
}

@property bool isHome;
@property(readonly) NSMutableDictionary * placeTypeInfoMap;

+ (id)sortedAdditionalPlaceInfoComparator;

- (id)placeTypeInfoMap;
- (void)mergeCommonDataForGEOMapItem:(id)arg1 updateExisting:(bool)arg2;
- (void)removePlacesInPlaceInfoSet:(id)arg1 fromOrderType:(unsigned long long)arg2;
- (unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2;
- (void)addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3 updateExisting:(bool)arg4;
- (void)mergeGEOMapItem:(id)arg1 updateExisting:(bool)arg2;
- (void)setIsHome:(bool)arg1;
- (bool)isHome;
- (id)placeInfoSetForOrderType:(unsigned long long)arg1;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (id)initWithGEOMapItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end