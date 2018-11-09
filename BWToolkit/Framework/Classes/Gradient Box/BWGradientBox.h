//
//  BWGradientBox.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWGradientBox : NSView 
{
	NSColor *fillStartingColor, *fillEndingColor, *fillColor;
	NSColor *topBorderColor, *bottomBorderColor;
	CGFloat topInsetAlpha, bottomInsetAlpha;
	
	BOOL hasTopBorder, hasBottomBorder, hasGradient, hasFillColor;
}

@property (nonatomic, strong) IBInspectable NSColor *fillStartingColor, *fillEndingColor, *fillColor, *topBorderColor, *bottomBorderColor;
@property IBInspectable CGFloat topInsetAlpha, bottomInsetAlpha;
@property IBInspectable BOOL hasTopBorder, hasBottomBorder, hasGradient, hasFillColor;

@end
