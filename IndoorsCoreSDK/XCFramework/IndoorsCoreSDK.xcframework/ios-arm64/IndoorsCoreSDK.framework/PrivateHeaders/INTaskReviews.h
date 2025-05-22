//
//  INTaskReviews.h
//  IndoorsSDK
//
//  Created by Indoors on 24.01.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INTaskReviews_h
#define INTaskReviews_h


#import <Foundation/Foundation.h>
#import "INBaseObject.h"


NS_ASSUME_NONNULL_BEGIN

/**
 Stores data about task type.
 */
@interface INTaskReviews : INBaseObject



/**
 Task Editor.
 */

@property (nonatomic, strong, nullable) NSString *Text;

@property (nonatomic, strong, nullable) NSNumber *Rating;

@property (nonatomic, strong, nullable) NSNumber *Editor;

@property (nonatomic, strong, nullable) NSString *Reviewer;

@property (nonatomic, strong, nullable) NSNumber *Task;


@end


NS_ASSUME_NONNULL_END

#endif /* INTaskReviews_h */
