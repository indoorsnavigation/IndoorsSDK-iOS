//
//  INQuizQuestionAnswers.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INQuizQuestionAnswers_h
#define INQuizQuestionAnswers_h

#import "INBaseObject.h"

@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

@interface INQuizQuestionAnswers : INBaseObject<INLocalStorable>


@property (nonatomic, strong) NSString *Text;
@property (nonatomic, strong) NSString *Image;

@property (nonatomic, strong) NSNumber *Editor;
@property (nonatomic, strong) NSNumber *Question;



@end


NS_ASSUME_NONNULL_END

#endif
