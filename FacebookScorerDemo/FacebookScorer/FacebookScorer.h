//
//  FacebookScorer.h
//  FacebookScorerDemo
//
//  Created by Toni Sala Echaurren on 30/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FBConnect/FBConnect.h"

@interface FacebookScorer : NSObject <FBRequestDelegate, FBDialogDelegate, FBSessionDelegate> {
    Facebook* _facebook;
    NSArray* _permissions;
    
    // Internal state
    int score;
}

@property(readonly) Facebook *facebook;

+ (FacebookScorer *) sharedInstance;

#pragma mark - Public Methods
-(void) postToWallWithDialogNewHighscore:(int)highscore;

@end
