//
//  NSEvent+BWAdditions.m
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import "NSEvent+BWAdditions.h"

@implementation NSEvent (BWAdditions)

+ (BOOL)bwShiftKeyIsDown
{
	if ([[NSApp currentEvent] modifierFlags] & NSEventModifierFlagShift)
		return YES;
	
	return NO;
}

+ (BOOL)bwCommandKeyIsDown
{
	if ([[NSApp currentEvent] modifierFlags] & NSEventModifierFlagCommand)
		return YES;
	
	return NO;
}

+ (BOOL)bwOptionKeyIsDown
{
	if ([[NSApp currentEvent] modifierFlags] & NSEventModifierFlagOption)
		return YES;
	
	return NO;
}

+ (BOOL)bwControlKeyIsDown
{
	if ([[NSApp currentEvent] modifierFlags] & NSEventModifierFlagControl)
		return YES;
	
	return NO;
}

+ (BOOL)bwCapsLockKeyIsDown
{
	if ([[NSApp currentEvent] modifierFlags] & NSEventModifierFlagCapsLock)
		return YES;
	
	return NO;
}

@end
