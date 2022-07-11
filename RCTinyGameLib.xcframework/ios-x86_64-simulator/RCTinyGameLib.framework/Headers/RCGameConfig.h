
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCGameConfig : NSObject

/** 是否是debug，默认false */
@property(nonatomic, assign) BOOL isDebug;

/** 游戏语言,默认中文 */
@property(nonatomic, copy) NSString *language;


@end

NS_ASSUME_NONNULL_END
