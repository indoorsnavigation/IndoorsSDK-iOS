//
//  INTaskUsers.h
//  IndoorsSDK
//
//  Created by Indoors on 24.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTaskUsers_h
#define INTaskUsers_h





#import <Foundation/Foundation.h>
#import "INBaseObject.h"


NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task type.
 */
@interface INTaskUsers : INBaseObject



/**
 Task Editor.
 */

@property (nonatomic, strong, nullable) NSString *Role;


@property (nonatomic, strong, nullable) NSNumber *Editor;

@property (nonatomic, strong, nullable) NSNumber *Task;

@property (nonatomic, strong, nullable) NSString *User;

@property (nonatomic, strong, nullable) NSNumber *Gallery;


@end

NS_ASSUME_NONNULL_END


#endif /* INTaskUsers_h */
