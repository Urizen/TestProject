//
//  TestProjectAppDelegate.h
//  TestProject
//
//  Created by Boris Dapaah on 18/10/2009.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestProjectAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UITabBarController *tabController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabController;

@end

