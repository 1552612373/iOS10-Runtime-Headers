/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell  {
    GKGameRecord *_localPlayerGameRecord;
}

@property(retain) GKGameRecord * localPlayerGameRecord;


- (void)setLocalPlayerGameRecord:(id)arg1;
- (id)localPlayerGameRecord;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (void)didUpdateModel;
- (void)prepareForReuse;

@end