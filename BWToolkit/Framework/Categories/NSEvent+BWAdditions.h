//
//  NSEvent+BWAdditions.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

@interface NSEvent (BWAdditions)

@property (readonly, class) BOOL bwShiftKeyIsDown;
@property (readonly, class) BOOL bwCommandKeyIsDown;
@property (readonly, class) BOOL bwOptionKeyIsDown;
@property (readonly, class) BOOL bwControlKeyIsDown;
@property (readonly, class) BOOL bwCapsLockKeyIsDown;

@end
