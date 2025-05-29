//
//  INMobileBannerAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2020 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMobileBannerAsset_
#define _INMobileBannerAsset_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
Stores data about mobile banner asset.
*/
@interface INMobileBannerAsset : INBaseObject

/**
The title of the mobile banner asset.
*/
@property (nonatomic, strong) NSString *Title;

/**
Boolean value wrapped in NSNumber specifies if the mobile banner is active or inactive.
*/
@property (nonatomic, strong) NSNumber *Active;

/**
The type of banner.
*/
@property (nonatomic, strong) NSString *BannerType;

/**
The duration that the mobile banner should be displayed for.
*/
@property (nonatomic, strong) NSNumber *Duration;

/**
The image file for the mobile banner.
*/
@property (nonatomic, strong) NSString *Image;

/**
The URL to redirect the user to after they click on the banner.
*/
@property (nonatomic, strong) NSString *Redirect;

@end

NS_ASSUME_NONNULL_END

#endif
