
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCGameUI : NSObject

- (void)gameSettleHide:(BOOL)isHide;

- (void)pingHide:(BOOL)isHide;

- (void)versionHide:(BOOL)isHide;

- (void)levelHide:(BOOL)isHide;

- (void)lobbySettingBtnHide:(BOOL)isHide;

- (void)lobbyHelpBtnHide:(BOOL)isHide;

- (void)lobbyPlayersCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)lobbyPlayerCaptainIconHide:(BOOL)isHide;

- (void)lobbyPlayerKickOutIconHide:(BOOL)isHide;

- (void)lobbyRuleHide:(BOOL)isHide;

- (void)lobbyGameSetting:(BOOL)isHide;

- (void)joinBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)cancelJoinBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)readyBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)cancelReadyBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)startBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)shareBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

- (void)gameSettingBtnHide:(BOOL)isHide;

- (void)gameHelpBtnHide:(BOOL)isHide;

- (void)gameSettleCloseBtnCustom:(BOOL)isCustom;

- (void)gameSettleAgainBtnCustom:(BOOL)isCustom;

- (void)gameBgHide:(BOOL)isHide;

- (void)blockChangeSeatCustom:(BOOL)isCustom;

@property(nonatomic, assign) BOOL gameLoadingBgHide;
@property(nonatomic, assign) BOOL showCustomLoading;

@property(nonatomic, strong) NSMutableDictionary *uiConfigDict;

@end

NS_ASSUME_NONNULL_END


