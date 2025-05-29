//
//  INGlobalPositionEstimator.h
//  IndoorsSDK
//
//  Created by Ivan Sugrobov on 28.10.2022.
//  Copyright © 2022 Indoors Navigation LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "INApplication.h"

#ifndef _INGlobalPositionEstimator_
#define _INGlobalPositionEstimator_

NS_ASSUME_NONNULL_BEGIN

@class INGlobalPositionEstimator;
/**
 `INGlobalPositionEstimatorDelegate` protocol.
 */
@protocol INGlobalPositionEstimatorDelegate <NSObject>

@optional
- (void)estimator:(INGlobalPositionEstimator*)estimator didFindNearestBuilding:(INBuilding*)building;
- (void)estimatorDidNotFoundNearestBuilding:(INGlobalPositionEstimator*)estimator;

@end

@interface INGlobalPositionEstimator : NSObject

@property (nonatomic, weak, nullable) id<INGlobalPositionEstimatorDelegate> delegate;

-(instancetype)initWithApplication:(INApplication*)application;
- (void)startWithAttempts:(int)attempts;
- (void)stop;

@end

NS_ASSUME_NONNULL_END

#endif
