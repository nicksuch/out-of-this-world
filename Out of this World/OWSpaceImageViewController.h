//
//  OWSpaceImageViewController.h
//  Out of this World
//
//  Created by Nick Such on 8/29/14.
//  Copyright (c) 2014 Awesome Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@end
