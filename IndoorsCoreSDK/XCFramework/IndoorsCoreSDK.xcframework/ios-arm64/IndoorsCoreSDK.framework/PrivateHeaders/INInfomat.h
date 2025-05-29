//
//  INInfomat.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INInfomat_
#define _INInfomat_

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/// Class that stores data about Informat.
@interface INInfomat : INBaseObject

/// Informat name.
@property (nonatomic, strong) NSString *Name;

/// Informat license key.
@property (nonatomic, strong) NSString *LicenseKey;

/// Expiration date of the license key.
@property (nonatomic, strong) NSNumber *Expires;

@end

NS_ASSUME_NONNULL_END

#endif
