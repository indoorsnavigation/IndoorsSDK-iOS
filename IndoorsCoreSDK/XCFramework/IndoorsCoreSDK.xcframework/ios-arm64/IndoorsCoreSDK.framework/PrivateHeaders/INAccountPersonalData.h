//
//  INAccountPersonalData.h
//  IndoorsSDK
//
//  Created by Indoors on 21.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INAccountPersonalData_h
#define INAccountPersonalData_h


#import "INBaseObject.h"



@interface INAccountPersonalData : INBaseObject

@property (nonatomic, strong, nullable) NSNumber *Account;

@property (nonatomic, strong, nullable) NSString *Oms;
@property (nonatomic, strong, nullable) NSString *Dms;
@property (nonatomic, strong, nullable) NSString *Snils;
@property (nonatomic, strong, nullable) NSString *MedicalCard;


@property (nonatomic, strong, nullable) NSString *PasportSeriesAndNumber;

@property (nonatomic, strong, nullable) NSString *PasportDateOfIssue;
@property (nonatomic, strong, nullable) NSString *PasportPlaceOfIssue;
@property (nonatomic, strong, nullable) NSString *PasportUnitCode;
@property (nonatomic, strong, nullable) NSString *PasportRegistrationAddress;

@property (nonatomic, strong, nullable) NSString *DriversLicenseNumber;
@property (nonatomic, strong, nullable) NSString *DriversLicenseExpirationDate;


@end





#endif /* INAccountPersonalData_h */

