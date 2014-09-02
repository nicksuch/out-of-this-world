//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by Nick Such on 9/2/14.
//  Copyright (c) 2014 Awesome Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
