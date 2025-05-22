//
//  INStoryGroups.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INStoryGroups_h
#define INStoryGroups_h

#import "INBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface INStoryGroups : INBaseObject


@property (nonatomic, strong, nullable) NSString *Title;
@property (nonatomic, strong, nullable) NSString *Image;
@property (nonatomic, strong, nullable) NSNumber *IsActive;
@property (nonatomic, strong, nullable) NSNumber *Editor;





@end



NS_ASSUME_NONNULL_END

#endif /* INStoryGroups_h */



