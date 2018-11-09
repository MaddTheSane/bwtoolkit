//
//  BWTexturedSliderCell.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWTexturedSliderCell : NSSliderCell 
{
	BOOL isPressed;
	int trackHeight;
}

@property IBInspectable int trackHeight;

@end
