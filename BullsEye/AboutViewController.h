//
//  AboutViewController.h
//  BullsEye
//
//  Created by Ashok Gelal on 4/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIWebView *webView;
-(IBAction)close;
@end
