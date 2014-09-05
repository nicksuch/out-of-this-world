//
//  OWOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Nick Such on 8/21/14.
//  Copyright (c) 2014 Awesome Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
