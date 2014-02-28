//
//  Card.m
//  Practice 1
//
//  Created by Michael Vitone on 2/15/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//
#import "Card.h"

@implementation Card
-(int)match:(Card *)aCard {
    if ([aCard.contents isEqualToString:self.contents]) {
        return 1;
    } else {
        return 0;
    }
}
@end
