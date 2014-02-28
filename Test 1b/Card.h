//
//  Card.h
//  Practice 1
//
//  Created by Michael Vitone on 2/15/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property(strong, nonatomic) NSString *contents;
@property(nonatomic) BOOL matched;
@property(nonatomic) BOOL chosen;

- (int)match:(Card *)card;
@end
