//
//  INUsersGroups.h
//  IndoorsSDK
//
//  Created by Indoors on 16.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INUsersGroups_h
#define INUsersGroups_h


#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INUsersGroups : INBaseObject


@property (nonatomic, strong, nullable) NSString *Title;
@property (nonatomic, strong, nullable) NSString *Description;
@property (nonatomic, strong, nullable) NSString *Image;
@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *Parent;




@end



NS_ASSUME_NONNULL_END

#endif /* INUsersGroups_h */
