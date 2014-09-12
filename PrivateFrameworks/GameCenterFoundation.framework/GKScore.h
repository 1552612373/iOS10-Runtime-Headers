/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, GKGame, GKPlayer, GKScoreInternal, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    bool_shouldSetDefaultLeaderboard;
    GKScoreInternal *_internal;
    GKGame *_game;
}

@property long long value;
@property(copy) NSString * formattedValue;
@property(copy) NSString * leaderboardIdentifier;
@property unsigned long long context;
@property(retain,readonly) NSDate * date;
@property(retain,readonly) GKPlayer * player;
@property long long rank;
@property bool shouldSetDefaultLeaderboard;
@property(retain) GKScoreInternal * internal;
@property(retain,readonly) NSString * playerID;
@property(retain) NSString * groupLeaderboardIdentifier;
@property bool valueSet;
@property(retain) GKGame * game;
@property(copy) NSString * category;

+ (void)reportScores:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3;

- (id)playerID;
- (void)setShouldSetDefaultLeaderboard:(bool)arg1;
- (void)reportScoreWithCompletionHandler:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2;
- (bool)shouldSetDefaultLeaderboard;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2;
- (void)setGame:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)game;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)player;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)canBeShared;
- (id)_gkSharingInfo;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id)arg3;

@end