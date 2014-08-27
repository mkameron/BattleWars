//
//  QuizQuestion.h
//  MathTrak
//
//  Created by IOS App Dev on 30/04/2014.
//  Copyright (c) 2014 MJK Games. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QuizQuestion : NSObject

- (NSString *)displayText;       // the question
- (NSArray *)displayAnswers;     // returns an array of 4 items
- (NSInteger)correctAnswerIndex; // in the displayAnswers array

- (instancetype) initWithDifficulty:(NSInteger)difficulty;

@end
