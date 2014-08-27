//
//  QuizTest.h
//  MathTrak
//
//  Created by IOS App Dev on 30/04/2014.
//  Copyright (c) 2014 MJK Games. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "QuizQuestion.h"
#import "QuizResults.h"

@interface QuizTest : NSObject

@property (readonly) NSInteger totalQuestions;

- (instancetype)initWithDifficult:(NSInteger)difficulty
                numberOfQuestions:(NSInteger)questions;

- (void)registerLastQuestionCorrect:(BOOL)wasCorrect;
- (QuizQuestion *)nextQuestion;

- (BOOL)moreQuestionsRemaining;
- (NSInteger)currentQuestionNumber;

- (QuizResults *)getResultsUponCompletion;

@end
