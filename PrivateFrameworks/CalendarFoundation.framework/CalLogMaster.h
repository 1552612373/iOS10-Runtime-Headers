/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, CalLogNode;

@interface CalLogMaster : NSObject  {
    NSArray *_topLevelNodes;
    CalLogNode *_aslNode;
    CalLogNode *_rootConfigurationNode;
    CalLogNode *_standardOutNode;
    CalLogNode *_userNotificationNode;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notificationRegistrationToken;
    bool_hasValidNotificationRegistrationToken;
    bool_autoFlush;
}

@property(retain) NSArray * topLevelNodes;
@property(retain) CalLogNode * aslNode;
@property(retain) CalLogNode * standardOutNode;
@property(retain) CalLogNode * rootConfigurationNode;
@property(retain) CalLogNode * userNotificationNode;
@property int notificationRegistrationToken;
@property bool hasValidNotificationRegistrationToken;
@property bool autoFlush;

+ (id)sharedLogMaster;

- (bool)hasValidNotificationRegistrationToken;
- (int)notificationRegistrationToken;
- (bool)autoFlush;
- (id)topLevelNodes;
- (void)setNotificationRegistrationToken:(int)arg1;
- (void)setHasValidNotificationRegistrationToken:(bool)arg1;
- (void)setTopLevelNodes:(id)arg1;
- (id)rootConfigurationNode;
- (id)userNotificationNode;
- (void)setRootConfigurationNode:(id)arg1;
- (id)copyLegacyLoggingDefaultsConvertedToNamespaces;
- (void)setUserNotificationNode:(id)arg1;
- (void)setStandardOutNode:(id)arg1;
- (id)standardOutNode;
- (void)setAslNode:(id)arg1;
- (id)aslNode;
- (id)findWhiteList;
- (int)findMinimumLevel;
- (void)reloadTopLevelNodes;
- (void)setAutoFlush:(bool)arg1;
- (void)configureRootConfigurationNode;
- (void)configureUserNotificationNode;
- (void)configureStandardOutNode;
- (void)configureASLNode;
- (void)registerForConfigUpdateNotifications;
- (void)loadPreferredConfiguration;
- (void)processEnvelope:(id)arg1;
- (bool)flush;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end