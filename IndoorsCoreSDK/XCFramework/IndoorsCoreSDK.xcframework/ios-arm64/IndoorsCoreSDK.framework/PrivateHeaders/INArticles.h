//
//  INArticles.h
//  IndoorsSDK
//
//  Created by Indoors on 22.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INArticles_h
#define INArticles_h

#import "INBaseObject.h"



@interface INArticles : INBaseObject

@property (nonatomic, strong, nullable) NSString *PreviewTitle;
@property (nonatomic, strong, nullable) NSString *PreviewImage;
@property (nonatomic, strong, nullable) NSString *PreviewColor;
@property (nonatomic, strong, nullable) NSString *Title;
@property (nonatomic, strong, nullable) NSString *HeaderImage;
@property (nonatomic, strong, nullable) NSString *Content;
@property (nonatomic, strong, nullable) NSNumber *Editor;


@end

#endif /* INArticles_h */
