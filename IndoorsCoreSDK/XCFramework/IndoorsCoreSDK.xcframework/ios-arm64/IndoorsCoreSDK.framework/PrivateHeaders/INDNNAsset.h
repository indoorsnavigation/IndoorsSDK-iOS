//
//  INDNNAsset.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INDNNAsset_
#define _INDNNAsset_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INDNNAsset : INBaseObject

/// Title of the augmented reality asset.
@property (nonatomic, strong) NSString *Title;

/// Description of the DNN asset.
@property (nonatomic, strong) NSString *Description NS_SWIFT_NAME(Description);


/// Path or URL to the file containing the DNN asset.
@property (nonatomic, strong) NSString *File;

@end

NS_ASSUME_NONNULL_END

#endif
