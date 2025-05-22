//
//  INImageGallery.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INImageGallery_
#define _INImageGallery_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Stores image gallery data.
@interface INImageGallery : INBaseObject

/// Image gallery title.
@property (nonatomic, strong) NSString *Title;

/// Image gallery description.
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);

/// Array of `INImageAsset` objects.
@property (nonatomic, strong) NSMutableArray *ImageAssets;

@end

NS_ASSUME_NONNULL_END

#endif
