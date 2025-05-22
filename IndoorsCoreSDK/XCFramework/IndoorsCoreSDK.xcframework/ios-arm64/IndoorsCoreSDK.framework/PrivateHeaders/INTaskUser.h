////
////  INTaskUser.h
////  IndoorsSDK v2.0
////
////  Created by Ivan Sugrobov.
////  Copyright (c) 2014-2022 Indoors Navigation LLC. All rights reserved.
////
//
#ifndef _INTaskUser_
#define _INTaskUser_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about Task User.
 */
@interface INTaskUser : INBaseObject

/**
Associated `INTask` object Id.
*/
@property (nonatomic, strong) NSNumber *TaskId;

/**
Associated profile object Id.
*/
@property (nonatomic, strong) NSNumber *UserId;

@end

NS_ASSUME_NONNULL_END

#endif
