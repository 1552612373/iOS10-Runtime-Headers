/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareInvitationsOperationInfo : CKOperationInfo  {
    bool_queryAllContainers;
    long long _fetchType;
}

@property long long fetchType;
@property bool queryAllContainers;

+ (bool)supportsSecureCoding;

- (void)setQueryAllContainers:(bool)arg1;
- (bool)queryAllContainers;
- (void)setFetchType:(long long)arg1;
- (long long)fetchType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end