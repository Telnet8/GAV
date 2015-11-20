//
//  MasterViewController.h
//  GAV
//
//  Created by Patrick Kalbermatter on 20.11.15.
//  Copyright © 2015 Patrick Kalbermatter. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

