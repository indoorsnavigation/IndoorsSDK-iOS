//
//  INUserSubscriptions.h
//  IndoorsSDK
//
//  Created by Indoors on 19.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserSubscriptions_h
#define INUserSubscriptions_h


#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INUserSubscription : INBaseObject

@property (nonatomic, strong, nullable) NSString *Status;

@property (nonatomic, strong, nullable) NSNumber *Duration;

@property (nonatomic, strong, nullable) NSNumber *WeeklyNotified;

@property (nonatomic, strong, nullable) NSNumber *CheckLimits;

@property (nonatomic, strong, nullable) NSNumber *Subscriber;

@property (nonatomic, strong, nullable) NSNumber *Package;

@property (nonatomic, strong, nullable) NSNumber *Params;


@property (nonatomic, strong, nullable) NSNumber *ActivatedAt;
@property (nonatomic, strong, nullable) NSNumber *CanceledAt;






@property (nonatomic, strong, nullable) NSString *WalletsBalance;
@property (nonatomic, strong, nullable) NSString *WalletsDefaultRequisite;

@property (nonatomic, strong, nullable) NSString *PackageName;
@property (nonatomic, strong, nullable) NSString *PackageDescription1;
@property (nonatomic, strong, nullable) NSNumber *PackageDuration;
@property (nonatomic, strong, nullable) NSString *PackagePrice;


@property (nonatomic, strong, nullable) NSString *CategorieName;
@property (nonatomic, strong, nullable) NSString *CategorieIconUrl;
@property (nonatomic, strong, nullable) NSString *CategorieMainColor;
@property (nonatomic, strong, nullable) NSString *CategorieBackgroundColor;
@property (nonatomic, strong, nullable) NSNumber *CategorieNumericalOrder;
@property (nonatomic, strong, nullable) NSString *CategorieDescription;


@end

NS_ASSUME_NONNULL_END


#endif /* INUserSubscriptions_h */


