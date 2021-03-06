//
//  BWHyperlinkButton.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import "BWHyperlinkButton.h"
#import "BWHyperlinkButtonCell.h"
#import "IBPrivateOrOutdated.h"

@implementation BWHyperlinkButton

@synthesize url;

- (NSString *)urlString
{
	return self.url.absoluteString;
}

- (void)setUrlString:(NSString *)urlString
{
	self.url = [NSURL URLWithString:urlString];
}

-(void)awakeFromNib
{
	[self setTarget:self];
	[self setAction:@selector(openURLInBrowser:)];
}

- (id)initWithCoder:(NSCoder *)decoder
{
	if ((self = [super initWithCoder:decoder]) != nil)
	{
		[self setUrlString:[decoder decodeObjectForKey:@"BWHBUrlString"]];
	}
	return self;
}

- (void)encodeWithCoder:(NSCoder *)coder
{
    [super encodeWithCoder:coder];

	[coder encodeObject:[self urlString] forKey:@"BWHBUrlString"];
}

- (void)openURLInBrowser:(id)sender
{
#if !TARGET_INTERFACE_BUILDER
	if (![self respondsToSelector:@selector(ibDidAddToDesignableDocument:)])
		[[NSWorkspace sharedWorkspace] openURL:url];
#endif
}

- (void)resetCursorRects 
{
	[self addCursorRect:[self bounds] cursor:[NSCursor pointingHandCursor]];
}

- (void)dealloc
{
	[url release];
	[super dealloc];
}

@end
