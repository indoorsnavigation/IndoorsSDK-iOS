//
//  INUserGroups.h
//  IndoorsSDK
//
//  Created by Indoors on 16.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUserGroups_h
#define INUserGroups_h

#import "INBaseObject.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

@interface INUserGroups : INBaseObject<INLocalStorable>


@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *Group;
@property (nonatomic, strong, nullable) NSNumber *User;
@property (nonatomic, strong, nullable) NSNumber *Building;


@end



NS_ASSUME_NONNULL_END

#endif /* INUserGroups_h */
