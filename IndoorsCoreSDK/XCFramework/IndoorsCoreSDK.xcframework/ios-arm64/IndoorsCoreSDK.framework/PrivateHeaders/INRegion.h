//
//  INRegion.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INRegion_
#define _INRegion_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about a geographical region.
 */
@interface INRegion : INBaseObject

/**
 Region name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 Full name of the region.
 */
@property (nonatomic, strong) NSString *DisplayName;

/**
 The area code in the Geonames database.
 */
@property (nonatomic, strong) NSString *GeonameCode;

@property (nonatomic, strong) NSString *NameAscii;

/**
 Short title for URL-address.
 */
@property (nonatomic, strong) NSString *Slug;

/**
 Region identifier in the Geonames database.
 */
@property (nonatomic, strong) NSNumber *GeonameId;

/**
 List of alternative names for the region.
 */
@property (nonatomic, strong) NSString *AlternateNames;

/**
 The country identifier in the Indoors Navigation Platform database.
 @see 'INCountry'
 */
@property (nonatomic, strong) NSNumber *CountryId;

@end

NS_ASSUME_NONNULL_END

#endif
