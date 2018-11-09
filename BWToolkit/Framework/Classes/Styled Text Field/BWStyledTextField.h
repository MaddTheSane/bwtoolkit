//
//  BWStyledTextField.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWStyledTextField : NSTextField

@property IBInspectable BOOL hasGradient;
@property (strong) IBInspectable NSColor *startingColor;
@property (strong) IBInspectable NSColor *endingColor;

@property (strong) IBInspectable NSColor *solidColor;

@property IBInspectable BOOL hasShadow;
@property IBInspectable BOOL shadowIsBelow;
@property (strong) IBInspectable NSColor *shadowColor;

@end
