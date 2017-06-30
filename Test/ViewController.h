//
//  ViewController.h
//  Test
//
//  Created by spartawhy on 2017/6/30.
//  Copyright © 2017年 spartawhy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (retain, nonatomic) IBOutlet UITabBar *tabBar;

@property (retain, nonatomic) IBOutlet UISlider *slider;


- (IBAction)sliderAction:(id)sender;

@end

