//
//  BWToolbarShowColorsItem.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import "BWToolbarShowColorsItem.h"

@implementation BWToolbarShowColorsItem

- (NSImage *)image
{
	return [NSImage imageNamed:NSImageNameColorPanel];
}

- (NSString *)itemIdentifier
{
	return @"BWToolbarShowColorsItem";
}

- (NSString *)label
{
	return @"Colors";
}

- (NSString *)paletteLabel
{
	return @"Colors";
}

- (id)target
{
	return [NSApplication sharedApplication];
}

- (SEL)action
{
	return @selector(orderFrontColorPanel:);
}

- (NSString *)toolTip
{
	return @"Show Color Panel";
}

@end
