//
//  INAccount.h
//  IndoorsSDK v2.0
//
//  Created by Ivan Sugrobov.
//  Copyright (c) 2014-2021 Indoors Navigation LLC. All rights reserved.
//

#ifndef _INProfile_
#define _INProfile_

#import <Foundation/Foundation.h>
#import "INBaseObject.h"
#import "INImageGallery.h"
#import "INAccountPersonalData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Stores user account data.
 */
@interface INProfile : INBaseObject

/**
 Profile UUID.
 */
@property (nonatomic, strong) NSString *UUID;

/**
 E-mail address.
 */
@property (nonatomic, strong) NSString *Email;

/**
 Phone number.
 */
@property (nonatomic, strong) NSString *PhoneNumber;

/**
 User avatar filename.
 */
@property (nonatomic, strong) NSString *Image;

/**
 Image gallery.
 */
@property (nonatomic, strong) NSNumber *GalleryId;

/**
 Username.
 */
@property (nonatomic, strong) NSString *Username;

/**
 Full name.
 */
@property (nonatomic, strong) NSString *FullName;

/**
 First name.
 */
@property (nonatomic, strong) NSString *FirstName;

/**
 Last name.
 */
@property (nonatomic, strong) NSString *LastName;

/**
 Patronymic.
 */
@property (nonatomic, strong) NSString *Patronymic;



/**
 Company name.
 */
@property (nonatomic, strong) NSString *Company;


/**
 Company name.
 */
@property (nonatomic, strong) NSString *Department;


/**
 Country.
 */
@property (nonatomic, strong) NSNumber *CountryId;

/**
 Region.
 */
@property (nonatomic, strong) NSNumber *RegionId;

/**
 Region.
 */
@property (nonatomic, strong) NSString *Position;

/**
 Gender.
 */
@property (nonatomic, strong, nullable) NSNumber *Gender;

/**
 Birthday.
 */
@property (nonatomic, strong, nullable) NSNumber *Birthday;
/**
 City.
 */
@property (nonatomic, strong) NSNumber *CityId;

/**
 Address.
 */
@property (nonatomic, strong) NSString *Address;

/**
 Postal code.
 */
@property (nonatomic, strong) NSString *PostalCode;

/**
 Tagline.
 */
@property (nonatomic, strong) NSString *Tagline;

/**
 IsAdmin    .
 */
@property (nonatomic, strong) NSNumber *IsAdmin;

/**
 IsActive.
 */
@property (nonatomic, strong) NSNumber *IsActive;


/**
 Oms.
 */
@property (nonatomic, strong, nullable) NSString *Oms;

/**
 Snils.
 */
@property (nonatomic, strong, nullable) NSString *Snils;

/***
 StartOfCareer.
*/
@property (nonatomic, strong, nullable) NSNumber *StartOfCareer;

/**
 Profile image gallery.
 */
@property (nonatomic, strong) INImageGallery    *ImageGallery;

/**
 Profile image.
 */
@property (nonnull,strong) UIImage *ProfileImage;



@property (nonatomic, strong, nullable) INAccountPersonalData *AccountPersonalData;

@end

NS_ASSUME_NONNULL_END

#endif
