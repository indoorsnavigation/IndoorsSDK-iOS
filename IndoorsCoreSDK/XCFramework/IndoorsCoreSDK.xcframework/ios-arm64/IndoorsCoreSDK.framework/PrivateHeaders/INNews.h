//
//  INNews.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INNews_
#define _INNews_

#import "INBaseObject.h"
#import "INImageGallery.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores data about News.
@interface INNews : INBaseObject

/// News title.
@property (nonatomic, strong) NSString *Title;

/// News description.
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// News image.
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery id.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Boolean flag specifies if news is active
 */
@property (nonatomic, strong) NSNumber *Active;

/**
 Image gallery.
 */
@property (nonatomic, strong) INImageGallery *ImageGallery;

@end

NS_ASSUME_NONNULL_END

#endif
