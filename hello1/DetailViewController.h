//
//  DetailViewController.h
//  hello1
//
//  Created by Yu Yuan on 12-12-30.
//  Copyright (c) 2012年 Yu Yuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
