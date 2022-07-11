#import <UIKit/UIKit.h>
#import "RCGameStateDelegate.h"
#import "RCGamePlayerStateDelegate.h"
#import "RCDrawGuessDelegate.h"
#import "RCGameOption.h"
#import "RCGameConfig.h"
#import "RCGameInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^RCGetGameListCompletion)(NSArray<RCGameInfo *> *_Nullable gameInfos, NSError *_Nullable error);
typedef void (^RCGameCallback)(int retCode, const NSString *_Nullable retMsg, const NSString *_Nullable dataJson);

@class RCGameRoomInfo;

@interface RCGameEngine : NSObject
/**
 *  初始化单例对象
 */
+ (instancetype)shared;

/**
 * 初始化游戏引擎
 *
 * @param appId  渠道申请的appId
 * @param appKey 渠道申请的appKey
 * @param gameConfig 游戏配置信息
 * @param callBack 回调
 */
- (void)initWithAppId:(NSString *)appId appKey:(NSString *)appKey config:(RCGameConfig *)gameConfig callBack:(RCGameCallback)callBack;

/**
 * 获取游戏列表
 * @param completion 游戏列表数据回调
 */
- (void)getGameList:(RCGetGameListCompletion)completion;

/**
 * 游戏状态相关的回调代理对象
 */
@property (nonatomic, weak) id<RCGameStateDelegate> gameStateDelegate;

/**
 * 玩家状态相关的回调代理对象
 */
@property (nonatomic, weak) id<RCGamePlayerStateDelegate> playerStateDelegate;

/**
 * 你画我猜玩家状态回调代理对象
 */
@property (nonatomic, weak) id<RCDrawGuessDelegate> drawGuessDelegate;


/**
 * 更新校验code
 * @param code 登陆完成后的校验code
 */
- (void)updateCode:(NSString *)code;

/**
 * 加载游戏
 *
 * @param containerView 装载游戏的ViewGroup
 * @param roomInfo      房间信息
 * @param option    游戏配置 option

 */
- (void)loadGameWithView:(UIView *)containerView
                roomInfo:(RCGameRoomInfo *)roomInfo
              gameOption:(RCGameOption *)option;

/**
 * 切换游戏，必须load游戏后才能切换
 *
 * @param gameId       游戏id
 * @param gameCallback 回调
 */
- (void)switchGame:(NSString *)gameId gameCallback:(RCGameCallback)gameCallback;

/**
 * 加入游戏
 * @param gameCallback 结果回调
 */
- (void)joinGame:(RCGameCallback)gameCallback;

/**
 * 取消加入游戏
 * @param gameCallback 结果回调
 */
- (void)cancelJoinGame:(RCGameCallback)gameCallback;

/**
 * 准备游戏
 * @param gameCallback 结果回调
 */
- (void)readyGame:(RCGameCallback)gameCallback;

/**
 * 取消准备游戏
 * @param gameCallback 结果回调
 */
- (void)cancelReadyGame:(RCGameCallback)gameCallback;

/**
 * 开始游戏,队长/房主才能操作
 * @param gameCallback 结果回调
 */
- (void)playGame:(RCGameCallback)gameCallback;

/**
 * 自己不玩了
 * 还有玩家在玩，则自己变成观看者视角
 * 没有玩家在玩，则自己变成在游戏位
 * @param gameCallback 结果回调
 */
- (void)cancelPlayGame:(RCGameCallback)gameCallback;

/**
 * 结束游戏
 * 队长玩家
 * 队长结束本局游戏
 * 所有人都不玩了
 * @param gameCallback 结果回调
 */
- (void)endGame:(RCGameCallback)gameCallback;


/**
 * 命中关键词
 * 例如：你画我猜中，猜词命中后，通知游戏引擎命中了
 *
 * @param keyword 关键词
 * @param gameCallback 结果回调
 */
- (void)hitKeyword:(NSString *)keyword gameCallback:(RCGameCallback)gameCallback;

/**
 * 队长踢人
 *
 * @param userId       玩家id
 * @param gameCallback 结果回调
 */
- (void)kickPlayer:(NSString *)userId gameCallback:(RCGameCallback)gameCallback;

/**
 * 设置队长
 *
 * @param userId       队长id
 * @param gameCallback 结果回调
 */
- (void)setCaptain:(NSString *)userId gameCallback:(RCGameCallback)gameCallback;

/**
 * 传入音频数据
 * 传入的音频数据必须是：PCM格式，采样率：16000， 采样位数：16， 声道数： MONO
 *
 * @param data pcm数据
 */
- (void)pushAudio:(NSData *)data;

/**
 * 打开背景音乐，针对有背景音乐的游戏
 *
 * @param isOpen       是否打开
 * @param gameCallback 结果回调
 */
- (void)openBgMusic:(BOOL)isOpen gameCallback:(RCGameCallback)gameCallback;

/**
 * 打开音效
 *
 * @param isOpen       是否打开
 * @param gameCallback 结果回调
 */
- (void)openSound:(BOOL)isOpen gameCallback:(RCGameCallback)gameCallback;

/**
 * 打开震动
 *
 * @param isOpen       是否打开
 * @param gameCallback 结果回调
 */
- (void)openVibrate:(BOOL)isOpen gameCallback:(RCGameCallback)gameCallback;

/**
 * 设置游戏的音量大小，暂时只支持碰碰我最强
 *
 * @param volume       音量数值
 * @param gameCallback 结果回调
 */
- (void)setGameSoundVolume:(NSInteger)volume gameCallback:(RCGameCallback)gameCallback;

/**
 * 元宇宙砂砂舞游戏相关设置
 *
 * @param json       根据文档传入指定的json
 * @param gameCallback 结果回调
 */
- (void)setGameDiscoAction:(NSString *)json gameCallback:(RCGameCallback)gameCallback;

/**
 *  暂停游戏
 */
- (void)pauseEngine;

/**
 *  继续游戏
 */
- (void)resumeEngine;

/**
 *  销毁游戏
 */
- (void)destroyEngine;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
+ (instancetype)copy NS_UNAVAILABLE;
+ (instancetype)mutableCopy NS_UNAVAILABLE;

@end

@interface RCGameRoomInfo : NSObject

@property(nonatomic, copy) NSString *roomId;
@property(nonatomic, copy) NSString *gameId;
@property(nonatomic, copy) NSString *userId;
@property(nonatomic, copy) NSString *appCode;

@end

NS_ASSUME_NONNULL_END
