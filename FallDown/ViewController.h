//
//  ViewController.h
//  FallDown
//
//  Created by Arihant Jain on 11/10/12.
//  Copyright (c) 2012 AJcoder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : GLKViewController{
    IBOutlet UIButton *play;
    IBOutlet UIButton *store;
    IBOutlet UIButton *stats;
}
-(IBAction)statpress:(id)sender;

@end
