//
//  BWAnchoredButtonBar.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWAnchoredButtonBar : NSView <NSSplitViewDelegate>
{
	BOOL isResizable, isAtBottom, handleIsRightAligned;
	NSInteger selectedIndex;
}

@property (nonatomic, getter=isResizable) IBInspectable BOOL resizable;
@property (nonatomic, getter=isAtBottom) IBInspectable BOOL atBottom;
@property (nonatomic) IBInspectable BOOL handleIsRightAligned;
@property (nonatomic) IBInspectable NSInteger selectedIndex;

//! The mode of this bar with a resize handle makes use of some NSSplitView delegate methods. Use the splitViewDelegate for any custom delegate implementations
//! you'd like to provide.
@property (assign) id<NSSplitViewDelegate> splitViewDelegate;

+ (BOOL)wasBorderedBar;

@end

@interface BWAnchoredButtonBar (deprecated)
- (void)setIsResizable:(BOOL)resize API_DEPRECATED_WITH_REPLACEMENT("-setResizable:", macos(10.0, 10.7));
- (void)setIsAtBottom:(BOOL)resize API_DEPRECATED_WITH_REPLACEMENT("-setAtBottom:", macos(10.0, 10.7));
@end
