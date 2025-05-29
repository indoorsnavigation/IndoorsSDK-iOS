//
//  INTrackedMapObject.h
//  IndoorsSDK
//
//  Created by Indoors on 13.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol INTrackedMapObject <NSObject>

@property (nonnull, nonatomic, readonly, copy) NSString *uuid;
@property (nullable, nonatomic, readonly, strong) NSNumber *x;
@property (nullable, nonatomic, readonly, strong) NSNumber *y;
@property (nullable, nonatomic, readonly, strong) NSNumber *floor;
@property (nullable, nonatomic, strong) UIImage *image;
@property (nonnull, nonatomic, strong) NSNumber *isActive;
@property (nonnull, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *tagName;
@property (nullable, nonatomic, copy) NSString *company;
@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSString *objectDescription;
@property (nonnull, nonatomic) NSNumber *unixTimestamp;


@end
