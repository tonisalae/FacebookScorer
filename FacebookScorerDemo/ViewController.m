//
//  ViewController.m
//  FacebookScorerDemo
//
//  Created by Toni Sala Echaurren on 30/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ViewController.h"
#import "FacebookScorer.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [textField release];
    textField = nil;
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (void)dealloc {
    [textField release];
    [super dealloc];
}

- (IBAction)buttonPostTouchUp:(id)sender {
    [textField resignFirstResponder];
    
    [[FacebookScorer sharedInstance] postToWallWithDialogNewHighscore:[textField.text intValue]];
}
@end
