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

IBInspectable
@property (nonatomic, strong) NSColor *fillStartingColor, *fillEndingColor, *fillColor, *topBorderColor, *bottomBorderColor;
IBInspectable
@property CGFloat topInsetAlpha, bottomInsetAlpha;
IBInspectable
@property BOOL hasTopBorder, hasBottomBorder, hasGradient, hasFillColor;

@end
