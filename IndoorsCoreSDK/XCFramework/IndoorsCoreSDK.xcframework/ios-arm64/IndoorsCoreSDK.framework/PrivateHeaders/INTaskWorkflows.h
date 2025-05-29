//
//  INTaskWorkflows.h
//  IndoorsSDK
//
//  Created by Indoors on 24.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTaskWorkflows_h
#define INTaskWorkflows_h





#import <Foundation/Foundation.h>
#import "INBaseObject.h"


NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task type.
 */
@interface INTaskWorkflows : INBaseObject



/**
 Task Editor.
 */

@property (nonatomic, strong, nullable) NSString *Name;

/**
 Task status description.
 */
@property (nonatomic, strong, nullable) NSString *Description;

@property (nonatomic, strong, nullable) NSNumber *Editor;

@end

NS_ASSUME_NONNULL_END




#endif /* INTaskWorkflows_h */
