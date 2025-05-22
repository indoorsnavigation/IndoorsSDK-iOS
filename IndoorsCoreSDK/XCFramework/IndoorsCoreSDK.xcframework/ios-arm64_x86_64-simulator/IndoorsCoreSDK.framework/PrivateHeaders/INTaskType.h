//
//  INTaskType.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INTaskType_
#define _INTaskType_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INFloor.h"
#import "INMTTracker.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task type.
 */
@interface INTaskType : INBaseObject


/**
 Task Title.
 */
@property (nonatomic, strong, nullable) NSString *Title;

/**
 Task Editor.
 */
@property (nonatomic, strong, nullable) NSNumber *Approved;
/**
 Task Icon.
 */
@property (nonatomic, strong, nullable) NSString *Icon;

/**
 Task Editor.
 */
@property (nonatomic, strong, nullable) NSNumber *Editor;




@end

NS_ASSUME_NONNULL_END

#endif
