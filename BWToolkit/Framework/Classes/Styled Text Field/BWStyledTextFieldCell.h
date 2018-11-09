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

@property (nonatomic) IBInspectable BOOL shadowIsBelow, hasShadow, hasGradient;
@property (nonatomic, strong) IBInspectable NSColor *shadowColor, *startingColor, *endingColor, *solidColor;

@end
