//
//  INMediaAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INMediaAsset_
#define _INMediaAsset_

#import "INBaseObject.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN

@interface INMediaAsset : INBaseObject

/// Title of the media asset
@property (nonatomic, strong) NSString *Title;

/// Description of the media asset
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// The URL of the main image associated with the media asset
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/// The URL of the file associated with the media asset.
@property (nonatomic, strong) NSString *File;

/// Duration of the media asset
@property (nonatomic, strong) NSNumber *Duration;

/// Image gallery.
@property (nonatomic, strong) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
