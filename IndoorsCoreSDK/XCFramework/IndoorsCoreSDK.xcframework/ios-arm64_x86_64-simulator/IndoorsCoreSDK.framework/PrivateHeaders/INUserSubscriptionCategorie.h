//
//  INUserSubscriptionCategorie.h
//  IndoorsSDK
//
//  Created by Indoors on 19.02.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserSubscriptionCategorie_h
#define INUserSubscriptionCategorie_h


#import <Foundation/Foundation.h>
#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INUserSubscriptionCategorie : INBaseObject



@property (nonatomic, strong, nullable) NSString *Icon;

@property (nonatomic, strong, nullable) NSNumber *NumericalOrder;

@property (nonatomic, strong, nullable) NSString *Color;

@property (nonatomic, strong, nullable) NSString *SecondaryColor;

@property (nonatomic, strong, nullable) NSString *Name;

@property (nonatomic, strong, nullable) NSString *Description;



//"id": 64,
//"created_at": 0,
//"updated_at": 1710835402,
//"deleted": 1,
//
//"icon": null,
//"numerical_order": 0,
//"color": "",
//"secondary_color": "#4169E1",
//"hidden_comment": null,
//"packages": [],
//"name": "Тестовый deleted",
//"description": "Тестовый",
//"language_code": "ru"



@end

NS_ASSUME_NONNULL_END

#endif /* INUserSubscriptionCategorie_h */
