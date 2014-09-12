/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSNumber;

@interface GKGameDescriptor : GKInternalRepresentation  {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
}

@property(retain) NSNumber * adamID;
@property(retain) NSNumber * externalVersion;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleVersion;

+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3;
+ (id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2;
+ (id)gameDescriptorWithBundleID:(id)arg1;
+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)initWithPushDictionary:(id)arg1;
- (void)setExternalVersion:(id)arg1;
- (void)setAdamID:(id)arg1;
- (id)externalVersion;
- (id)adamID;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)bundleIdentifier;
- (id)dictionary;
- (id)bundleVersion;
- (void)dealloc;
- (id)description;
- (void)setDictionary:(id)arg1;

@end