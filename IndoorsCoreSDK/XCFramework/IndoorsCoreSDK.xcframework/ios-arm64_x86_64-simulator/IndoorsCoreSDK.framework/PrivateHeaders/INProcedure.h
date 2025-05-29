//
//  INProcedure.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INProcedure_
#define _INProcedure_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INApplication.h"
#import "INDrawUserPositionProcedureParams.h"

NS_ASSUME_NONNULL_BEGIN

@class INDrawUserPositionProcedureParams;
/**

 */
@interface INProcedure : INBaseObject

/**

 */
@property (nonatomic, strong, nullable) NSString *UUID;

/**
 
 */
@property (nonatomic, strong) NSString          *Method;

/**
 
 */
@property (nonatomic, strong) NSString          *Params;

/**
 
 */
@property (nonatomic, strong) NSString          *Type;

- (instancetype)initWithApplication:(INApplication*)application
 andDrawUserPositionProcedureParams:(INDrawUserPositionProcedureParams*)drawUserPositionProcedureParams;

@end

NS_ASSUME_NONNULL_END

#endif
