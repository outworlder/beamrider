//
//  main.m
//  Untitled
//
//  Created by Stephen Eilert on 4/30/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "chicken.h"

extern void start_server(int);

int main(int argc, char *argv[]) {
    
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	
    int chicken_startup = CHICKEN_initialize(0, 0, 0, C_toplevel);
    
    if (!chicken_startup) {
        NSLog(@"Unable to initialize Chicken Scheme. Aborting");
        exit(-1);
    } else {
        CHICKEN_run(NULL);
        //start_server(1111);
    }
    
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    return retVal;
}
