
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCGameUI : NSObject

/// 是否隐藏结算界面
/// @param isHide false: 显示； true: 隐藏，默认为 false
- (void)gameSettleHide:(BOOL)isHide;

/// 是否隐藏ping值
/// @param isHide false: 显示；true: 隐藏，默认为false
- (void)pingHide:(BOOL)isHide;

/// 是否隐藏版本号信息
/// @param isHide false: 显示； true: 隐藏，默认为false
- (void)versionHide:(BOOL)isHide;

/// 是否隐藏段位信息
/// @param isHide false: 显示； true: 隐藏，默认为false
- (void)levelHide:(BOOL)isHide;

/// 是否隐藏大厅的 设置/音效 按钮
/// @param isHide false: 显示； true: 隐藏，默认为false
- (void)lobbySettingBtnHide:(BOOL)isHide;

/// 是否隐藏大厅的 帮助 按钮
/// @param isHide false: 显示； true: 隐藏，默认为false
- (void)lobbyHelpBtnHide:(BOOL)isHide;

/// 大厅游戏位
/// @param isCustom （false: 游戏处理逻辑 true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏大厅游戏位 （false: 显示 true: 隐藏，默认为false）
- (void)lobbyPlayersCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 大厅游戏位上队长标识
/// @param isHide 是否隐藏大厅游戏位上队长标识（false: 显示； true: 隐藏，默认为false）
- (void)lobbyPlayerCaptainIconHide:(BOOL)isHide;

/// 大厅游戏位上踢人按钮
/// @param isHide 是否隐藏大厅游戏位上『踢人』按钮（false: 显示； true: 隐藏，默认为false）
- (void)lobbyPlayerKickOutIconHide:(BOOL)isHide;

/// 大厅的玩法规则描述文字
/// @param isHide 是否隐藏大厅的玩法规则描述文字（false: 显示； true: 隐藏，默认为false）
- (void)lobbyRuleHide:(BOOL)isHide;

/// 大厅的玩法设置
/// @param isHide 是否隐藏大厅的玩法设置（false: 显示； true: 隐藏，默认为false）
- (void)lobbyGameSetting:(BOOL)isHide;

/// 加入游戏按钮
/// @param isCustom 加入游戏按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏加入游戏按钮（false: 显示； true: 隐藏，默认为false）
- (void)joinBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 退出游戏 按钮
/// @param isCustom 退出游戏按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏退出游戏按钮（false: 显示； true: 隐藏，默认为false）
- (void)cancelJoinBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 准备按钮
/// @param isCustom 准备按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏准备按钮（false: 显示； true: 隐藏，默认为false）
- (void)readyBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 取消准备按钮
/// @param isCustom 取消准备按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏取消准备按钮（false: 显示； true: 隐藏，默认为false）
- (void)cancelReadyBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 开始游戏按钮
/// @param isCustom 开始游戏按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏开始游戏按钮（false: 显示； true: 隐藏，默认为false）
- (void)startBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 分享按钮
/// @param isCustom 分享按钮抛事件（false: 游戏处理逻辑； true: 游戏只通知app按钮点击事件，不处理；默认为false）
/// @param isHide 是否隐藏分享按钮（false: 显示； true: 隐藏，默认为true）
- (void)shareBtnCustom:(BOOL)isCustom hide:(BOOL)isHide;

/// 战斗场景中的设置/音效按钮
/// @param isHide 是否隐藏战斗场景中的设置/音效按钮（false: 显示； true: 隐藏，默认为false）
- (void)gameSettingBtnHide:(BOOL)isHide;

/// 战斗场景中的帮助按钮
/// @param isHide 是否隐藏战斗场景中的帮助按钮（false: 显示； true: 隐藏，默认为false）
- (void)gameHelpBtnHide:(BOOL)isHide;

/// 结算界面中的关闭按钮
/// @param isCustom 结算界面中的关闭按钮抛事件（false: 关闭结算界面返回大厅； true: 游戏通知app按钮点击事件，并关闭结算界面返回大厅；默认为false）
- (void)gameSettleCloseBtnCustom:(BOOL)isCustom;

/// 结算界面中的再来一局按钮
/// @param isCustom 结算界面中的再来一局按钮抛事件（false: 关闭结算界面返回大厅并将玩家设置为准备状态； true: 游戏通知app按钮点击事件，并关闭结算界面返回大厅（不将玩家设置为准备状态）；默认为false）
- (void)gameSettleAgainBtnCustom:(BOOL)isCustom;

/// 是否隐藏背景图，包括大厅和战斗
/// @param isHide （false: 显示； true: 隐藏，默认为false）
- (void)gameBgHide:(BOOL)isHide;

/// 自定义阻止换座位（目前仅支持飞行棋）
/// @param isCustom （false: 可以换座位； true: 不可以换座位；默认为false）
- (void)blockChangeSeatCustom:(BOOL)isCustom;

/// 设置加载游戏时，是否显示游戏背景图
@property(nonatomic, assign) BOOL gameLoadingBgHide;

///  获取加载游戏时，是否要显示自定义的Loading效果
@property(nonatomic, assign) BOOL showCustomLoading;

/// 所有设置后生成的NSMutableDictionary，用作 to json string
@property(nonatomic, strong) NSMutableDictionary *uiConfigDict;

@end

NS_ASSUME_NONNULL_END


