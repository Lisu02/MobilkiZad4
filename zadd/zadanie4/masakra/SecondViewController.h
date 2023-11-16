//
//  SecondViewController.h
//  masakra
//
//  Created by student on 09/11/2023.
//  Copyright © 2023 Zadanie 1 mb. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end


@interface SecondViewController : UIViewController

@property(nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;
@property (nonatomic,weak) id <SecondViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
