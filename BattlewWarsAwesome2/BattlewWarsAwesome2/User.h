//
//  User.h
//  MathTrak
//
//  Created by IOS App Dev on 30/04/2014.
//  Copyright (c) 2014 MJK Games. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (nonatomic) NSString *name;

- (NSArray *)allQuizResults;

@end

// in private interface
//@property NSMutableArray *allQuizResults;