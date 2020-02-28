//
//  BWAnchoredPopUpButton.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

@interface BWAnchoredPopUpButton : NSPopUpButton 
{
	BOOL isAtLeftEdgeOfBar;
	BOOL isAtRightEdgeOfBar;
	NSPoint topAndLeftInset;
}

@property (getter=isAtLeftEdgeOfBar) BOOL atLeftEdgeOfBar;
@property (getter=isAtRightEdgeOfBar) BOOL atRightEdgeOfBar;

@end

@interface BWAnchoredPopUpButton (deprecated)
- (void)setIsAtLeftEdgeOfBar:(BOOL)resize API_DEPRECATED_WITH_REPLACEMENT("-setAtLeftEdgeOfBar:", macos(10.0, 10.7));
- (void)setIsAtRightEdgeOfBar:(BOOL)resize API_DEPRECATED_WITH_REPLACEMENT("-setAtRightEdgeOfBar:", macos(10.0, 10.7));
@end
