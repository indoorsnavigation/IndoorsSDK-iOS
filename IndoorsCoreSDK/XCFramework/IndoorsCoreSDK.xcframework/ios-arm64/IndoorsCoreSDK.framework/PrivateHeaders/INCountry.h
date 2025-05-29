//
//  INCity.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INCountry_
#define _INCountry_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores country data.
 */
@interface INCountry : INBaseObject

/**
 Country name.
 */
@property (nonatomic, strong) NSString *Name;

/**
 2-letter country code.
 */
@property (nonatomic, strong) NSString *Code2;

/**
 3-letter country code.
 */
@property (nonatomic, strong) NSString *Code3;

/**
 Continent.
 */
@property (nonatomic, strong) NSString *Continent;

/**
 The first level domain of the country.
 */
@property (nonatomic, strong) NSString *Tld;

/**
 Telephone country code.
 */
@property (nonatomic, strong) NSString *Phone;

@property (nonatomic, strong) NSString *NameAscii;

/**
 Short title for the URL-address.
 */
@property (nonatomic, strong) NSString *Slug;

/**
 The country identifier in the Geonames database.
 */
@property (nonatomic, strong) NSNumber *GeonameId;

/**
 Alternative country name.
 */
@property (nonatomic, strong) NSString *AlternateNames;

/**
 Array of associated `INCity` objects.
 */
@property (nonatomic, strong) NSMutableArray *Cities;

@end

NS_ASSUME_NONNULL_END

#endif
