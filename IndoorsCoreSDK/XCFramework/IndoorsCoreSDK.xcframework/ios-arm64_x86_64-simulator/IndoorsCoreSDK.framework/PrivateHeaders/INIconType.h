//
//  INIconType.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INIconType_
#define _INIconType_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about the type of the icon on the map.
 */
@interface INIconType : INBaseObject

/**
 Icon type name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Foreground SVG-path of an icon.
 */
@property (nonatomic, strong) NSString *SvgForeground;

/**
 Fill color of the foreground SVG-path.
 */
@property (nonatomic, strong) NSString *SvgForegroundColor;

/**
 Background SVG-path of an icon.
 */
@property (nonatomic, strong) NSString *SvgBackground;

/**
 Fill color of the background SVG-path.
 */
@property (nonatomic, strong) NSString *SvgBackgroundColor;

@end

NS_ASSUME_NONNULL_END

#endif
