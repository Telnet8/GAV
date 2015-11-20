//
//  DetailViewController.h
//  GAV
//
//  Created by Patrick Kalbermatter on 20.11.15.
//  Copyright © 2015 Patrick Kalbermatter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

