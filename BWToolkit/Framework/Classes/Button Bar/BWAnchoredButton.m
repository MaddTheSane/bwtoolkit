//
//  BWAnchoredButton.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import "BWAnchoredButton.h"
#import "BWAnchoredButtonBar.h"
#import "NSView+BWAdditions.h"

@implementation BWAnchoredButton

@synthesize atLeftEdgeOfBar=isAtLeftEdgeOfBar;
@synthesize atRightEdgeOfBar=isAtRightEdgeOfBar;

- (id)initWithCoder:(NSCoder *)decoder;
{
    if ((self = [super initWithCoder:decoder]) != nil)
	{
		if ([BWAnchoredButtonBar wasBorderedBar])
			topAndLeftInset = NSMakePoint(0, 0);
		else
			topAndLeftInset = NSMakePoint(1, 1);
	}
	return self;
}

- (void)mouseDown:(NSEvent *)theEvent
{
	[self bwBringToFront];
	[super mouseDown:theEvent];
}

- (NSRect)frame
{
	NSRect frame = [super frame];
	frame.size.height = 24;
	return frame;
}

@end


@implementation BWAnchoredButton (deprecated)

- (void)setIsAtLeftEdgeOfBar:(BOOL)resize
{
	self.atLeftEdgeOfBar = resize;
}

- (void)setIsAtRightEdgeOfBar:(BOOL)resize
{
	self.atRightEdgeOfBar = resize;
}

@end
