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
	
    CHICKEN_run(C_toplevel);
	start_server(1111);
	
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    return retVal;
}
