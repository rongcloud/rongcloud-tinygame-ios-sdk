
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, SoundControl) {
    OPEN = 0,
    CLOSE
};


@interface RCGameSound : NSObject

/** 是否开启游戏音效，默认开 */
@property(nonatomic, assign) SoundControl soundControl;

/** 游戏音量0-100，默认100 */
@property(nonatomic, assign) NSInteger soundVolume;

+ (instancetype)gameSoundControl:(SoundControl)control volume:(NSInteger)volume;

@end

NS_ASSUME_NONNULL_END
