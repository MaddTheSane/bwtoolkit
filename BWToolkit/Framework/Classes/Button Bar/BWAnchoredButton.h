//
//  BWAnchoredButton.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWAnchoredButton : NSButton 
{
	BOOL isAtLeftEdgeOfBar;
	BOOL isAtRightEdgeOfBar;
	NSPoint topAndLeftInset;
}

@property IBInspectable BOOL isAtLeftEdgeOfBar;
@property IBInspectable BOOL isAtRightEdgeOfBar;

@end
