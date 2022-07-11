
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCGameInfo : NSObject

/// 游戏id
@property(nonatomic, copy) NSString *gameId;

/// 游戏名称
@property(nonatomic, copy) NSString *gameName;

/// 游戏简介
@property(nonatomic, copy) NSString *gameDesc;

/// 游戏缩略图
@property(nonatomic, copy) NSString *thumbnail;

/// 游戏加载中的背景图
@property(nonatomic, copy) NSString *loadingPic;

/// 游戏模式，代表几支队伍，目前都是1支队伍，默认 1
@property(nonatomic, assign) NSInteger gameMode;

/// 游戏最少人数
@property(nonatomic, assign) NSInteger minSeat;

/// 游戏最大人数
@property(nonatomic, assign) NSInteger maxSeat;

@end

NS_ASSUME_NONNULL_END
