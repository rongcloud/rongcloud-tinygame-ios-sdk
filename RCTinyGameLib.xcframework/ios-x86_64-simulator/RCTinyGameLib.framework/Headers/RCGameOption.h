
#import <UIKit/UIKit.h>
#import "RCGameSound.h"
#import "RCGameUI.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RCGameCpu) {
    NORMAL = 0,
    LOWPOWER
};

@interface RCGameOption : NSObject

+ (nullable RCGameOption *)defaultOption;

/// 游戏画面大小
@property(nonatomic, assign) CGSize gameViewSize;

/// 游戏安全区域，可设置游戏可操作区域到四周的距离
@property(nonatomic, assign) UIEdgeInsets gameSafeRect;

/// 游戏cpu功耗，默认正常功耗
@property(nonatomic, assign) RCGameCpu gameCpu;

/// 游戏音效
@property(nonatomic, strong) RCGameSound *sound;

/// 游戏UI展示控制
@property(nonatomic, strong) RCGameUI *gameUI;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
+ (instancetype)copy NS_UNAVAILABLE;
+ (instancetype)mutableCopy NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
