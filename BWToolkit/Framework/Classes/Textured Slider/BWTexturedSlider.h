//
//  BWTexturedSlider.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

@interface BWTexturedSlider : NSSlider
{
	int trackHeight;
	NSInteger indicatorIndex;
	NSRect sliderCellRect;
	NSButton *minButton, *maxButton;
}

@property (nonatomic) NSInteger indicatorIndex;
@property (retain) NSButton *minButton;
@property (retain) NSButton *maxButton;

- (int)trackHeight;
- (void)setTrackHeight:(int)newTrackHeight;

@end
