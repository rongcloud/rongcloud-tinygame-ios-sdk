#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RCDrawGuessDelegate <NSObject>
/**
 * 正在选词
 *
 * @param isSelecting 是否正在选词中
 */
- (void)onSelecting:(NSString *)userId isSelecting:(BOOL)isSelecting;
/**
 * 正在作画
 *
 * @param isPainting 是否正在作画
 */
- (void)onPainting:(NSString *)userId isPainting:(BOOL)isPainting;

/**
 * 答案错误
 *
 * @param errorAnswer 错误的答案
 */
- (void)onErrorAnswer:(NSString *)userId errorAnswer:(NSString *)errorAnswer;

/**
 * 显示总积分状态
 *
 * @param totalScore 总积分
 */
- (void)onTotalScore:(NSString *)userId totalScore:(NSString *)totalScore;

/**
 * 本次获得积分状态
 *
 * @param score 单次积分
 */
- (void)onScore:(NSString *)userId score:(NSString *)score;

@end

NS_ASSUME_NONNULL_END
