//
//  INTaskStatusTransitions.h
//  IndoorsSDK
//
//  Created by Indoors on 24.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTaskStatusTransitions_h
#define INTaskStatusTransitions_h



#import <Foundation/Foundation.h>
#import "INBaseObject.h"
@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task type.
 */
@interface INTaskStatusTransitions : INBaseObject<INLocalStorable>



@property (nonatomic, strong, nullable) NSNumber *Editor;

@property (nonatomic, strong, nullable) NSNumber *TaskStatusFrom;

@property (nonatomic, strong, nullable) NSNumber *TaskStatusTo;

@property (nonatomic, strong, nullable) NSString *Workflow;

@end

NS_ASSUME_NONNULL_END



#endif /* INTaskStatusTransitions */
