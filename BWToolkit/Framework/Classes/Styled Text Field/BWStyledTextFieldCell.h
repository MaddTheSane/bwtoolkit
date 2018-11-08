//
//  BWStyledTextFieldCell.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWStyledTextFieldCell : NSTextFieldCell 
{
	BOOL shadowIsBelow, hasShadow, hasGradient;
	NSColor *shadowColor, *startingColor, *endingColor, *solidColor;
	
	NSShadow *shadow;
	NSMutableDictionary *previousAttributes;
}

IBInspectable
@property (nonatomic) BOOL shadowIsBelow, hasShadow, hasGradient;
IBInspectable
@property (nonatomic, strong) NSColor *shadowColor, *startingColor, *endingColor, *solidColor;

@end
