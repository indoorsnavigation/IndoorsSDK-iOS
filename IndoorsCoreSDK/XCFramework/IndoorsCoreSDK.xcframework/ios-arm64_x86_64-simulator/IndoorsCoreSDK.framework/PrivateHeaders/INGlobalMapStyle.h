//
//  INGlobalMapStyle.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INGlobalMapStyle_
#define _INGlobalMapStyle_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about map style.
 */
@interface INGlobalMapStyle : INBaseObject

/**
 Name of the map style that used for creating URL for downloading this style.
 */
@property (nonatomic, strong) NSString *Style;

/**
 Boolean flag specifies if map with this style must draw global route when the building selected.
 */
@property (nonatomic, strong) NSNumber *ShowGlobalRoute;

@end

NS_ASSUME_NONNULL_END

#endif
