/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDWiFiMetricNetworkPrefs : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _adhocNetsCount;
    unsigned int _applePersHotspotNetsCount;
    unsigned int _atjCanceledCount;
    unsigned int _atjUsedCount;
    unsigned int _captiveNetsCount;
    unsigned int _eapNetsCount;
    unsigned int _hiddenNetsCount;
    unsigned int _mostUsedCount;
    NSMutableArray *_mostUsedNetworks;
    unsigned int _openNonCaptiveNetsCount;
    unsigned int _prefNetsCount;
    unsigned int _wapiNetsCount;
    unsigned int _wepNetsCount;
    unsigned int _wpaNetsCount;
    bool_atjEnabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int adhocNetsCount : 1; 
        unsigned int applePersHotspotNetsCount : 1; 
        unsigned int atjCanceledCount : 1; 
        unsigned int atjUsedCount : 1; 
        unsigned int captiveNetsCount : 1; 
        unsigned int eapNetsCount : 1; 
        unsigned int hiddenNetsCount : 1; 
        unsigned int mostUsedCount : 1; 
        unsigned int openNonCaptiveNetsCount : 1; 
        unsigned int prefNetsCount : 1; 
        unsigned int wapiNetsCount : 1; 
        unsigned int wepNetsCount : 1; 
        unsigned int wpaNetsCount : 1; 
        unsigned int atjEnabled : 1; 
    } _has;
}

@property bool hasAtjEnabled;
@property bool atjEnabled;
@property bool hasAtjCanceledCount;
@property unsigned int atjCanceledCount;
@property bool hasAtjUsedCount;
@property unsigned int atjUsedCount;
@property bool hasAdhocNetsCount;
@property unsigned int adhocNetsCount;
@property bool hasPrefNetsCount;
@property unsigned int prefNetsCount;
@property bool hasCaptiveNetsCount;
@property unsigned int captiveNetsCount;
@property bool hasApplePersHotspotNetsCount;
@property unsigned int applePersHotspotNetsCount;
@property bool hasWapiNetsCount;
@property unsigned int wapiNetsCount;
@property bool hasMostUsedCount;
@property unsigned int mostUsedCount;
@property(retain) NSMutableArray * mostUsedNetworks;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasHiddenNetsCount;
@property unsigned int hiddenNetsCount;
@property bool hasWepNetsCount;
@property unsigned int wepNetsCount;
@property bool hasWpaNetsCount;
@property unsigned int wpaNetsCount;
@property bool hasEapNetsCount;
@property unsigned int eapNetsCount;
@property bool hasOpenNonCaptiveNetsCount;
@property unsigned int openNonCaptiveNetsCount;


- (unsigned int)openNonCaptiveNetsCount;
- (unsigned int)eapNetsCount;
- (unsigned int)wpaNetsCount;
- (unsigned int)wepNetsCount;
- (unsigned int)hiddenNetsCount;
- (id)mostUsedNetworks;
- (unsigned int)mostUsedCount;
- (unsigned int)wapiNetsCount;
- (unsigned int)applePersHotspotNetsCount;
- (unsigned int)captiveNetsCount;
- (unsigned int)prefNetsCount;
- (unsigned int)adhocNetsCount;
- (unsigned int)atjUsedCount;
- (unsigned int)atjCanceledCount;
- (bool)atjEnabled;
- (bool)hasOpenNonCaptiveNetsCount;
- (void)setHasOpenNonCaptiveNetsCount:(bool)arg1;
- (void)setOpenNonCaptiveNetsCount:(unsigned int)arg1;
- (bool)hasEapNetsCount;
- (void)setHasEapNetsCount:(bool)arg1;
- (void)setEapNetsCount:(unsigned int)arg1;
- (bool)hasWpaNetsCount;
- (void)setHasWpaNetsCount:(bool)arg1;
- (void)setWpaNetsCount:(unsigned int)arg1;
- (bool)hasWepNetsCount;
- (void)setHasWepNetsCount:(bool)arg1;
- (void)setWepNetsCount:(unsigned int)arg1;
- (bool)hasHiddenNetsCount;
- (void)setHasHiddenNetsCount:(bool)arg1;
- (void)setHiddenNetsCount:(unsigned int)arg1;
- (bool)hasMostUsedCount;
- (void)setHasMostUsedCount:(bool)arg1;
- (void)setMostUsedCount:(unsigned int)arg1;
- (bool)hasWapiNetsCount;
- (void)setHasWapiNetsCount:(bool)arg1;
- (void)setWapiNetsCount:(unsigned int)arg1;
- (bool)hasApplePersHotspotNetsCount;
- (void)setHasApplePersHotspotNetsCount:(bool)arg1;
- (void)setApplePersHotspotNetsCount:(unsigned int)arg1;
- (bool)hasCaptiveNetsCount;
- (void)setHasCaptiveNetsCount:(bool)arg1;
- (void)setCaptiveNetsCount:(unsigned int)arg1;
- (bool)hasPrefNetsCount;
- (void)setHasPrefNetsCount:(bool)arg1;
- (void)setPrefNetsCount:(unsigned int)arg1;
- (bool)hasAdhocNetsCount;
- (void)setHasAdhocNetsCount:(bool)arg1;
- (void)setAdhocNetsCount:(unsigned int)arg1;
- (bool)hasAtjUsedCount;
- (void)setHasAtjUsedCount:(bool)arg1;
- (void)setAtjUsedCount:(unsigned int)arg1;
- (bool)hasAtjCanceledCount;
- (void)setHasAtjCanceledCount:(bool)arg1;
- (void)setAtjCanceledCount:(unsigned int)arg1;
- (bool)hasAtjEnabled;
- (void)setHasAtjEnabled:(bool)arg1;
- (void)setAtjEnabled:(bool)arg1;
- (id)mostUsedNetworksAtIndex:(unsigned long long)arg1;
- (void)clearMostUsedNetworks;
- (unsigned long long)mostUsedNetworksCount;
- (void)addMostUsedNetworks:(id)arg1;
- (void)setMostUsedNetworks:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end