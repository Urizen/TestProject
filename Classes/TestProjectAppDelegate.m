//
//  TestProjectAppDelegate.m
//  TestProject
//
//  Created by Boris Dapaah on 18/10/2009.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "TestProjectAppDelegate.h"

@implementation TestProjectAppDelegate

@synthesize window;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    

    // Override point for customization after application launch
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [window release];
    [super dealloc];
}


@end
