//
//  ViewController.h
//  FacebookScorerDemo
//
//  Created by Toni Sala Echaurren on 30/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate> {
    IBOutlet UITextField *textField;
}

- (IBAction)buttonPostTouchUp:(id)sender;

@end
