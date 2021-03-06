//
//  BWSheetControllerIntegration.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <InterfaceBuilderKit/InterfaceBuilderKit.h>
#import "BWSheetController.h"

@implementation BWSheetController ( BWSheetControllerIntegration )

- (NSImage *)ibDefaultImage
{
	NSBundle *bundle = [NSBundle bundleForClass:[BWSheetController class]];
	
	NSImage *image = [bundle imageForResource:@"Library-SheetController"];
	
	return image;
}

@end
