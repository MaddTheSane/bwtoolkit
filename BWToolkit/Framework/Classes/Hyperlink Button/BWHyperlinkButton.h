//
//  BWHyperlinkButton.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWHyperlinkButton : NSButton 
{
	NSURL *url;
}

@property (copy, nonatomic) IBInspectable NSString *urlString;
@property (retain, nonatomic) IBInspectable NSURL *url;

@end
