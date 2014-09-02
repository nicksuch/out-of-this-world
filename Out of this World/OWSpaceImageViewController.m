//
//  OWSpaceImageViewController.m
//  Out of this World
//
//  Created by Nick Such on 8/29/14.
//  Copyright (c) 2014 Awesome Inc. All rights reserved.
//

#import "OWSpaceImageViewController.h"

@interface OWSpaceImageViewController ()

@end

@implementation OWSpaceImageViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.imageView = [[UIImageView alloc] initWithImage:self.spaceObject.planetImage];
    self.scrollView.contentSize = self.imageView.frame.size;
    [self.scrollView addSubview:self.imageView];

    self.scrollView.delegate = self;
    self.scrollView.backgroundColor = [UIColor blackColor];
    // Makes the default zoom scale match image width to screen width
    float initialScale = 320 / self.spaceObject.planetImage.size.width;
    self.scrollView.maximumZoomScale = 3 * initialScale;
    self.scrollView.minimumZoomScale = 0.5 * initialScale;
    self.scrollView.zoomScale = initialScale;
    NSLog(@"Initial scale: %f", initialScale);

}

-(UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    return self.imageView;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
