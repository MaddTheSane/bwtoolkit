//
//  BWTransparentSliderCell.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#include <tgmath.h>
#import "BWTransparentSliderCell.h"

@implementation BWTransparentSliderCell

static NSImage *trackLeftImage, *trackFillImage, *trackRightImage, *thumbPImage, *thumbNImage, *triangleThumbNImage, *triangleThumbPImage;

+ (void)initialize 
{
	if([BWTransparentSliderCell class] == [self class])
	{
		NSBundle *bundle = [NSBundle bundleForClass:[BWTransparentSliderCell class]];
		
		trackLeftImage = [[bundle imageForResource:@"TransparentSliderTrackLeft"] retain];
		trackFillImage = [[bundle imageForResource:@"TransparentSliderTrackFill"] retain];
		trackRightImage = [[bundle imageForResource:@"TransparentSliderTrackRight"] retain];
		thumbPImage = [[bundle imageForResource:@"TransparentSliderThumbP"] retain];
		thumbNImage = [[bundle imageForResource:@"TransparentSliderThumbN"] retain];
		triangleThumbNImage = [[bundle imageForResource:@"TransparentSliderTriangleThumbN"] retain];
		triangleThumbPImage = [[bundle imageForResource:@"TransparentSliderTriangleThumbP"] retain];
	}
}

- (id)initWithCoder:(NSCoder *)decoder;
{
	self = [super initWithCoder:decoder];
	
	[self setControlSize:NSSmallControlSize];
	isPressed = NO;
	[super setTickMarkPosition:NSTickMarkBelow];
	
	return self;
}

- (void)drawBarInside:(NSRect)cellFrame flipped:(BOOL)flipped
{
	NSRect slideRect = cellFrame;
	slideRect.size.height = [trackFillImage size].height;
	if(cellFrame.size.height > slideRect.size.height)
		slideRect.origin.y += round((cellFrame.size.height - slideRect.size.height) * 0.5f);
	
	slideRect.size.width -= 5;
	slideRect.origin.x += 2;
	
	if ([self numberOfTickMarks] > 0)
	{
		slideRect.origin.y--;
		slideRect.size.width++;
	}
	
	CGFloat alpha = 1.0;
	
	if (![self isEnabled])
		alpha = 0.6;
	
	NSDrawThreePartImage(slideRect, trackLeftImage, trackFillImage, trackRightImage, NO, NSCompositeSourceOver, alpha, flipped);
	
	// Draw solid white on top of all of the ticks
	if ([self numberOfTickMarks] > 0)
	{
		int i;
		for (i=0; i < [self numberOfTickMarks]; i++)
		{
			NSRect tickRect = [self rectOfTickMarkAtIndex:i];
			[[NSColor whiteColor] set];
			NSRectFill(tickRect);
		}
	}
}

- (void)drawKnob:(NSRect)rect
{
	NSImage *drawImage;
	
	if ([self numberOfTickMarks] == 0)
	{
		if (isPressed)
			drawImage = thumbPImage;
		else
			drawImage = thumbNImage;
	}
	else
	{
		if (isPressed)
			drawImage = triangleThumbPImage;
		else
			drawImage = triangleThumbNImage;
	}

	NSPoint drawPoint;
	drawPoint.x = rect.origin.x + round((rect.size.width - drawImage.size.width) / 2) - 1;
	drawPoint.y = NSMaxY(rect) - round((rect.size.height - drawImage.size.height) / 2) + 2;
	
	if ([self numberOfTickMarks] > 0)
	{
		drawPoint.y -= 2;
		drawPoint.x++;
	}
	
	[drawImage drawAtPoint:drawPoint fromRect:NSZeroRect operation:NSCompositeSourceOver fraction:1];
}

- (BOOL)_usesCustomTrackImage
{
	return YES;
}

-(NSRect)knobRectFlipped:(BOOL)flipped
{
	NSRect rect = [super knobRectFlipped:flipped];
	if([self numberOfTickMarks] > 0){
		rect.size.height+=2;
		return NSOffsetRect(rect, 0, flipped ? 2 : -2);
	}
	return rect;
}

- (BOOL)startTrackingAt:(NSPoint)startPoint inView:(NSView *)controlView
{
	isPressed = YES;
	return [super startTrackingAt:startPoint inView:controlView];	
}

- (void)stopTracking:(NSPoint)lastPoint at:(NSPoint)stopPoint inView:(NSView *)controlView mouseIsUp:(BOOL)flag
{
	isPressed = NO;
	[super stopTracking:(NSPoint)lastPoint at:(NSPoint)stopPoint inView:(NSView *)controlView mouseIsUp:(BOOL)flag];
}

- (void)setTickMarkPosition:(NSTickMarkPosition)position
{
	
}

- (NSControlSize)controlSize
{
	return NSSmallControlSize;
}

- (void)setControlSize:(NSControlSize)size
{
	
}

@end
