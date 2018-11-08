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

IBInspectable
@property BOOL hasGradient;
IBInspectable
@property (strong) NSColor *startingColor;
IBInspectable
@property (strong) NSColor *endingColor;

IBInspectable
@property (strong) NSColor *solidColor;

IBInspectable
@property BOOL hasShadow;
IBInspectable
@property BOOL shadowIsBelow;
IBInspectable
@property (strong) NSColor *shadowColor;

@end
