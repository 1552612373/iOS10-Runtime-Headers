/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {
    bool_generateDerivative;
    CPLResourceIdentity *_identity;
    NSString *_itemIdentifier;
    unsigned long long _resourceType;
}

@property(retain) CPLResourceIdentity * identity;
@property(copy) NSString * itemIdentifier;
@property unsigned long long resourceType;
@property bool generateDerivative;

+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (bool)generateDerivative;
- (unsigned long long)maxPixelSizeForPhotoResource;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)bestFileNameForResource;
- (void)setGenerateDerivative:(bool)arg1;
- (void)setResourceType:(unsigned long long)arg1;
- (unsigned long long)resourceType;
- (void)setItemIdentifier:(id)arg1;
- (id)itemIdentifier;
- (void)setIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end