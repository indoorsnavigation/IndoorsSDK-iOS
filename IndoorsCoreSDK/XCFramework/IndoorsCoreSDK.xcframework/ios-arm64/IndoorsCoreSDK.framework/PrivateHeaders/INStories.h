//
//  INStories.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INStories_h
#define INStories_h


#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface INStories : INBaseObject


@property (nonatomic, strong, nullable) NSString *Image; // url
@property (nonatomic, strong, nullable) NSNumber *Duration;
@property (nonatomic, strong, nullable) NSNumber *QueueNumber;
@property (nonatomic, strong, nullable) NSNumber *Editor;
@property (nonatomic, strong, nullable) NSNumber *Group;

@end




NS_ASSUME_NONNULL_END

#endif /* INStories_h */
