/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface CKBehaviorOptions : NSObject  {
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
}

@property(retain) NSMutableDictionary * cachedPrefs;
@property(retain) NSObject<OS_dispatch_queue> * cachedPrefsQueue;

+ (id)sharedOptions;

- (void)setProductName:(id)arg1;
- (bool)shouldDecryptRecordsBeforeSave;
- (unsigned long long)maxBatchSize;
- (id)configBaseURL;
- (double)flowControlRegenerationOverride;
- (long long)flowControlBudgetOverride;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (bool)evictRecentAssets;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (id)customCloudDBBaseURL;
- (bool)optimisticPCS;
- (id)setupBaseURL;
- (bool)useStingray;
- (bool)useBackgroundSessions;
- (bool)enableMescal;
- (bool)shouldLogProtobufBinary;
- (bool)validateMescalResponses;
- (double)defaultRequestTimeout;
- (void)setUseEncryption:(bool)arg1;
- (bool)useEncryption;
- (double)flowControlRegeneration;
- (long long)flowControlBudget;
- (id)contextLoggingBlacklist;
- (id)contextLoggingWhitelist;
- (int)defaultRetryAfter;
- (int)clientThrottleQueueWidth;
- (int)cachedRecordExpiryTime;
- (bool)disableCaching;
- (void)setBuildVersion:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setUseStingray:(bool)arg1;
- (void)setOptimisticPCS:(bool)arg1;
- (unsigned long long)PCSCacheSize;
- (bool)sandboxCloudD;
- (void)setEnableMescal:(bool)arg1;
- (long long)defaultOperationQualityOfService;
- (void)setSecondaryAccountPasswordOverride:(id)arg1;
- (id)secondaryAccountPasswordOverride;
- (void)setSecondaryAccountEmailOverride:(id)arg1;
- (id)secondaryAccountEmailOverride;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (id)primaryAccountPasswordOverride;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (id)primaryAccountEmailOverride;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setUseBackgroundSessions:(bool)arg1;
- (void)setCompressRequests:(bool)arg1;
- (void)setShouldProfileSQL:(bool)arg1;
- (bool)shouldProfileSQL;
- (void)setDisableCaching:(bool)arg1;
- (void)setCFNetworkLogging:(bool)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (const char *)CKCtlPrompt;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (int)trafficLogMaximumDataSize;
- (void)setOperationTimeout:(double)arg1;
- (double)operationTimeout;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (int)serverIDExpiryTime;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (bool)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_behaviorOptionForKey:(id)arg1;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (bool)CFNetworkLogging;
- (bool)compressRequests;
- (void)_startListeningForNotifications;
- (bool)isAppleInternalInstall;
- (id)productVersion;
- (id)productName;
- (id)init;
- (void).cxx_destruct;
- (id)buildVersion;

@end