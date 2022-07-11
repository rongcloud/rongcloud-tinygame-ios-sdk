#import <Foundation/Foundation.h>
 
NS_ASSUME_NONNULL_BEGIN

@protocol RCGamePlayerStateDelegate <NSObject>

/// 玩家加入或退出游戏
/// @param userId 玩家id
/// @param isIn true：加入，false：退出
/// @param teamId 队伍id，默认1
- (void)onPlayerIn:(NSString *)userId isIn:(BOOL)isIn teamId:(NSInteger)teamId;


/// 队长变更
/// @param userId 玩家id
/// @param isCaptain  true：成为队长，false：失去队长身份
- (void)onPlayerCaptain:(NSString *)userId isCaptain:(BOOL)isCaptain;


/// 玩家准备/取消准备
/// @param userId 玩家id
/// @param isReady true：准备 false：取消准备
- (void)onPlayerReady:(NSString *)userId isReady:(BOOL)isReady;


/// 玩家游戏状态
/// @param userId 玩家id
/// @param isPlaying  正在游戏中， false游戏结束
- (void)onPlayerPlaying:(NSString *)userId isPlaying:(BOOL)isPlaying;


/// 玩家换位置
/// @param userId 玩家id
/// @param from 之前的位置
/// @param to 之后的位置
- (void)onPlayerChangeSeat:(NSString *)userId from:(NSInteger)from to:(NSInteger)to;


/// 游戏通知轮到玩家出手状态
/// @param userId 出手的玩家
/// @param isTurn 是否轮到出手，true：轮到该userId出手，false：不是该userId出手
- (void)onPlayerTurnStatus:(NSString *)userId isTurn:(BOOL)isTurn;


/// 游戏通知玩家死亡状态
/// @param userId 玩家 id
/// @param isDeath 玩家是否死亡，true:死亡，false:未死亡；默认false
- (void)onPlayerDieStatus:(NSString *)userId isDeath:(BOOL)isDeath;

@end

NS_ASSUME_NONNULL_END
