//
//  INCity.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCity_
#define _INCity_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about a city.
 */
@interface INCity : INBaseObject

/**
 City name.
 */
@property (nonatomic, strong) NSString *Name;

@property (nonatomic, strong) NSString *DisplayName;
@property (nonatomic, strong) NSString *SearchNames;

/**
 Latitude.
 */
@property (nonatomic, strong) NSNumber *Latitude;

/**
 Longitude.
 */
@property (nonatomic, strong) NSNumber *Longitude;

/**
 Amount of people in the city.
 */
@property (nonatomic, strong) NSNumber *Population;

/**
 Feature code.
 */
@property (nonatomic, strong) NSString *FeatureCode;

@property (nonatomic, strong) NSString *NameAscii;

/**
 Short title for the URL-address.
 */
@property (nonatomic, strong) NSString *Slug;

/**
 City identifier in the Geonames database.
 */
@property (nonatomic, strong) NSNumber *GeonameId;

/**
 List of alternative names for the region.
 */
@property (nonatomic, strong) NSString *AlternateNames;

/**
 The identifier of the region in the Indoors Navigation Platform database.
 @see 'INRegion'
 */
@property (nonatomic, strong) NSNumber *RegionId;

/**
 The identifier of the country in the Indoors Navigation Platform database.
 @see 'INCountry'
 */
@property (nonatomic, strong) NSNumber *CountryId;

@property (nonatomic, strong) NSMutableArray *Buildings;

@end

NS_ASSUME_NONNULL_END

#endif
