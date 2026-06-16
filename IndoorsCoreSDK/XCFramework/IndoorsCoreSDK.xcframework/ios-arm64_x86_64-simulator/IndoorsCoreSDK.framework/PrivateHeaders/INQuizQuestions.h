//
//  INQuizzesQuestions.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INQuizQuestions_h
#define INQuizQuestions_h

#import "INBaseObject.h"
#import "INQuizQuestionAnswers.h"


@protocol INLocalStorable;

NS_ASSUME_NONNULL_BEGIN

@interface INQuizQuestions : INBaseObject<INLocalStorable>


@property (nonatomic, strong) NSString *Text;
@property (nonatomic, strong) NSNumber *NumericalOrder;
@property (nonatomic, strong) NSString *Image;

@property (nonatomic, strong) NSNumber *IsMultiple;
@property (nonatomic, strong) NSNumber *Editor;
@property (nonatomic, strong) NSNumber *Quiz;


@property (nonatomic, strong) NSMutableArray<INQuizQuestionAnswers *> *quizQuestionAnswers;

@end

NS_ASSUME_NONNULL_END



#endif
