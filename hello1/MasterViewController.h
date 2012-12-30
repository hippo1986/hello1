//
//  MasterViewController.h
//  hello1
//
//  Created by Yu Yuan on 12-12-30.
//  Copyright (c) 2012年 Yu Yuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
