//
//  BWTexturedSlider.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWTexturedSlider : NSSlider
{
	int trackHeight;
	NSInteger indicatorIndex;
	NSRect sliderCellRect;
	NSButton *minButton, *maxButton;
}

@property (nonatomic) IBInspectable NSInteger indicatorIndex;
@property (retain) NSButton *minButton;
@property (retain) NSButton *maxButton;

@property IBInspectable int trackHeight;

@end
