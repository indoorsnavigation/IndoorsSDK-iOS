//
//  INServiceMessage.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INServiceMessage_
#define _INServiceMessage_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**

 */
@interface INServiceMessage : MTLModel <MTLJSONSerializing, INObjectProtocol>

/**
 
 */
@property (nonatomic, strong) NSString          *Method;

/**
 
 */
@property (nonatomic, strong) NSString          *ModelName;

/**
 
 */
@property (nonatomic, strong) NSString          *AppLabel;

/**
 
 */
@property (nonatomic, strong) NSDictionary      *Object;

@end

NS_ASSUME_NONNULL_END

#endif
