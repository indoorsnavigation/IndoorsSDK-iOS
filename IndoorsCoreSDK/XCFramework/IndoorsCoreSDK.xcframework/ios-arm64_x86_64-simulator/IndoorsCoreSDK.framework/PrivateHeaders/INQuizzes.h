//
//  INQuizzes.h
//  IndoorsSDK
//
//  Created by Indoors on 15.04.2025.
//  Copyright © 2025 Indoors Navigation LLC. All rights reserved.
//

#ifndef INQuizzes_h
#define INQuizzes_h


#import "INBaseObject.h"
#import "INQuizQuestions.h"
#import "INQuizQuestionAnswers.h"


NS_ASSUME_NONNULL_BEGIN

@interface INQuizzes : INBaseObject


@property (nonatomic, strong) NSString *Title;
@property (nonatomic, strong) NSString *Image;
@property (nonatomic, strong) NSNumber *IsActive;
@property (nonatomic, strong) NSNumber *Editor;
@property (nonatomic, strong) NSNumber *IsNew;




@property (nonatomic, strong) NSMutableArray<INQuizQuestions *> *quizQuestions;


@end

NS_ASSUME_NONNULL_END

#endif /* INQuizzes_h */





