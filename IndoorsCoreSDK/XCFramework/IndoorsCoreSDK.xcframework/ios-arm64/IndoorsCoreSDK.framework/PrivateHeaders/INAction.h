//
//  INAction.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INAction_
#define _INAction_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about action.
 */
@interface INAction : INBaseObject

/**
 Action name.
 */
@property (nonatomic, strong) NSString          *Name;

/**
 Action description.
 */
@property (nonatomic, strong) NSString          *Description;

@end

NS_ASSUME_NONNULL_END

#endif
