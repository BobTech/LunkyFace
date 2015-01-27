//
//  DetailViewController.h
//  LunkyFace
//
//  Created by Bob Emmanuel Esebamen on 27/01/2015.
//  Copyright (c) 2015 Zoetech Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

