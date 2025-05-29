//
//  INImageAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INImageAsset_
#define _INImageAsset_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores information about image asset.
@interface INImageAsset : INBaseObject

/// Image asset title.
@property (nonatomic, strong) NSString *Title;

/// Image asset description.
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// Image asset image URL string.
@property (nonatomic, strong) NSString *Image;

/// ID of the associated `INGallery` object.
@property (nonatomic, strong) NSNumber *GalleryId;

@end

NS_ASSUME_NONNULL_END

#endif
