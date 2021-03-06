/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMessage : NSObject <NSCopying, NSMutableCopying> {
    bool  _entitledMessage;
    HMFMessageInternal * _internal;
    bool  _internalMessage;
    bool  _locationAuthorizedMessage;
    bool  _remoteSource;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (getter=isAuthorizedForHomeDataAccess, nonatomic, readonly) bool authorizedForHomeDataAccess;
@property (getter=isAuthorizedForLocationAccess, nonatomic, readonly) bool authorizedForLocationAccess;
@property (getter=isAuthorizedForMicrophoneAccess, nonatomic, readonly) bool authorizedForMicrophoneAccess;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, readonly, copy) NSString *effectiveLocationBundleIdentifier;
@property (getter=isEntitledForAPIAccess, nonatomic, readonly) bool entitledForAPIAccess;
@property (getter=isEntitledForBackgroundMode, nonatomic, readonly) bool entitledForBackgroundMode;
@property (getter=isEntitledForBridgeSPIAccess, nonatomic, readonly) bool entitledForBridgeSPIAccess;
@property (getter=isEntitledForSPIAccess, nonatomic, readonly) bool entitledForSPIAccess;
@property (getter=isEntitledMessage, nonatomic, readonly) bool entitledMessage;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMFMessageInternal *internal;
@property (getter=isInternalMessage, nonatomic, readonly) bool internalMessage;
@property (getter=isLocationAuthorizedMessage, nonatomic, readonly) bool locationAuthorizedMessage;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isRemoteSource, nonatomic, readonly) bool remoteSource;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, readonly) int sourcePid;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;
@property (nonatomic, readonly) HMFMessageTransport *transport;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(bool)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(bool)arg4 responseHandler:(id /* block */)arg5;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(id /* block */)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id /* block */)arg5;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(id /* block */)arg4;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initWithInternalMessage:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)arrayOfDateComponentsForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)destination;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithInternalMessage:(id)arg1;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id /* block */)arg5 remoteSource:(bool)arg6 internalMessage:(bool)arg7 entitledMessage:(bool)arg8 locationAuthorizedMessage:(bool)arg9;
- (id)internal;
- (bool)isEntitledMessage;
- (bool)isEntitledMessage;
- (bool)isInternalMessage;
- (bool)isInternalMessage;
- (bool)isLocationAuthorizedMessage;
- (bool)isLocationAuthorizedMessage;
- (bool)isRemoteSource;
- (bool)isRemoteSource;
- (id)locationForKey:(id)arg1;
- (id)messagePayload;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateForKey:(id)arg1;
- (id /* block */)responseHandler;
- (void)setDestination:(id)arg1;
- (void)setEntitledMessage:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalMessage:(bool)arg1;
- (void)setLocationAuthorizedMessage:(bool)arg1;
- (void)setMessagePayload:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (id)shortDescription;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)transport;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromRemoteMessageForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)_supportsFeature:(unsigned long long)arg1 forCapabilitiesKey:(id)arg2;
- (id)applicationBundleIdentifier;
- (id)companionAppBundleIdentifier;
- (id)effectiveLocationBundleIdentifier;
- (bool)isAuthorizedForHomeDataAccess;
- (bool)isAuthorizedForLocationAccess;
- (bool)isAuthorizedForMicrophoneAccess;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForBackgroundMode;
- (bool)isEntitledForBridgeSPIAccess;
- (bool)isEntitledForSPIAccess;
- (id)proxyConnection;
- (int)sourcePid;
- (bool)supportsRequestedFeature:(unsigned long long)arg1;
- (bool)supportsRequiredFeature:(unsigned long long)arg1;
- (id)teamIdentifier;

@end
