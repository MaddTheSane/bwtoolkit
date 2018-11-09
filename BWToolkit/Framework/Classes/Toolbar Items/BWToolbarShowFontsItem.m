//
//  BWToolbarShowFontsItem.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import "BWToolbarShowFontsItem.h"

@implementation BWToolbarShowFontsItem

- (NSImage *)image
{
	return [NSImage imageNamed:NSImageNameFontPanel];
}

- (NSString *)itemIdentifier
{
	return @"BWToolbarShowFontsItem";
}

- (NSString *)label
{
	return @"Fonts";
}

- (NSString *)paletteLabel
{
	return @"Fonts";
}

- (id)target
{
	return [NSApplication sharedApplication];
}

- (SEL)action
{
	return @selector(orderFrontFontPanel:);
}

- (NSString *)toolTip
{
	return @"Show Font Panel";
}

@end
