//
//  ViewController.h
//  iBeaconSamplePeripheral
//
//  Created by demo on 2013/12/23.
//  Copyright (c) 2013 demo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *greet;
    IBOutlet UISwitch *advertising;
}
- (IBAction)switchAdvertising:(id)sender;

@end
