//
//  INUserSubscriptionPackage.h
//  IndoorsSDK
//
//  Created by Indoors on 19.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserSubscriptionPackage_h
#define INUserSubscriptionPackage_h

#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INUserSubscriptionPackage : INBaseObject


@property (nonatomic, strong, nullable) NSNumber *Duration;

@property (nonatomic, strong, nullable) NSString *Price;

@property (nonatomic, strong, nullable) NSString *Name;

@property (nonatomic, strong, nullable) NSString *Description1;



@end

NS_ASSUME_NONNULL_END


#endif /* INUserSubscriptionPackage_h */
