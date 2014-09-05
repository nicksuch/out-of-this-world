//
//  OWAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Nick Such on 9/4/14.
//  Copyright (c) 2014 Awesome Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol OWAddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject;
-(void)didCancel;

@end

@interface OWAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <OWAddSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;


@end
