//
//  ViewController.h
//  masakra
//
//  Created by student on 09/11/2023.
//  Copyright © 2023 Zadanie 1 mb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>

@property (nonatomic,weak) IBOutlet UILabel *messageLabel;
@property (nonatomic,weak) IBOutlet UITextField *inputField;

-(IBAction)enter;

@end

