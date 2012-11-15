//
//  UntitledAppDelegate.m
//  Untitled
//
//  Created by Stephen Eilert on 4/30/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "UntitledAppDelegate.h"
#import "EAGLView.h"

@implementation UntitledAppDelegate

@synthesize window;
@synthesize glView;

- (void) applicationDidFinishLaunching:(UIApplication *)application
{
	[glView startAnimation];
}

- (void) applicationWillResignActive:(UIApplication *)application
{
	[glView stopAnimation];
}

- (void) applicationDidBecomeActive:(UIApplication *)application
{
	[glView startAnimation];
}

- (void)applicationWillTerminate:(UIApplication *)application
{
	[glView stopAnimation];
}

- (void) dealloc
{
	[window release];
	[glView release];
	
	[super dealloc];
}

@end
