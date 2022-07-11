//
//  RCGameSettle.h
//  Pods
//
//  Created by johankoi on 2022/5/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCGameResult : NSObject

@property(nonatomic, copy)   NSString *uid;
@property(nonatomic, assign) NSInteger rank;
@property(nonatomic, assign) NSInteger award;
@property(nonatomic, assign) NSInteger score;
@property(nonatomic, assign) NSInteger isEscaped;
@property(nonatomic, copy)   NSString *killerId;

@end


@interface RCGameSettle : NSObject

@property(nonatomic, copy)   NSString  *gameRoundId;
@property(nonatomic, assign) NSInteger gameMode;
@property(nonatomic, strong) NSArray<RCGameResult *> *results;

@end

NS_ASSUME_NONNULL_END
