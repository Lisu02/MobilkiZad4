//
//  ViewController.m
//  masakra
//
//  Created by student on 09/11/2023.
//  Copyright © 2023 Zadanie 1 mb. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

-(IBAction) enter {
    NSString *yourName = self.inputField.text;
    NSString *myName = @"Adrian";
    NSString *message;
    
    if([yourName length] == 0){
        yourName = @"World";
    }
    if([yourName isEqualToString:myName]){
        message = [NSString stringWithFormat:@"Hello %@! We have the same name :)", yourName];
    }else{
        message = [NSString stringWithFormat:@"Hello %@!",yourName];
    }
    self.messageLabel.text = message;
    
}

-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    if([segue.identifier isEqualToString:@"sendSurnameSegue"]){
        SecondViewController *controller = (SecondViewController *) segue.destinationViewController;
        controller.surname = self.surnameTextField.text;
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


@end
