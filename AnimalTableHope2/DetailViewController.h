//
//  DetailViewController.h
//  AnimalTableHope2
//
//  Created by Dino on 4/8/14.
//  Copyright (c) 2014 Constantine. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
