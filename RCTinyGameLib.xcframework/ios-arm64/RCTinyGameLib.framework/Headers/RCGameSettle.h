//
//  RCGameSettle.h
//  Pods
//
//  Created by johankoi on 2022/5/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface RCGameResult : NSObject

/// 用户id
@property(nonatomic, copy)   NSString *uid;

/// 排名 (从 1 开始)
@property(nonatomic, assign) NSInteger rank;

/// 奖励
@property(nonatomic, assign) NSInteger award;

/// 积分
@property(nonatomic, assign) NSInteger score;

/// 是否逃跑 1：逃跑 0：非逃跑
@property(nonatomic, assign) NSInteger isEscaped;

/// 杀自己的玩家的id
@property(nonatomic, copy)   NSString *killerId;

@end


@interface RCGameSettle : NSObject
/// 本局游戏的id
@property(nonatomic, copy)   NSString  *gameRoundId;

/// 游戏模式默认为1
@property(nonatomic, assign) NSInteger gameMode;

/// 游戏结果玩家列表
@property(nonatomic, strong) NSArray<RCGameResult *> *results;

@end

NS_ASSUME_NONNULL_END
