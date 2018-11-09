//
//  BWSplitView.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com) and Fraser Kuyvenhoven.
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface BWSplitView : NSSplitView <NSSplitViewDelegate>
{
	NSColor *color;
	BOOL colorIsEnabled, checkboxIsEnabled, dividerCanCollapse, collapsibleSubviewCollapsed;
	NSMutableDictionary *minValues, *maxValues, *minUnits, *maxUnits;
	NSMutableDictionary *resizableSubviewPreferredProportion, *nonresizableSubviewPreferredSize;
	NSArray *stateForLastPreferredCalculations;
	NSInteger collapsiblePopupSelection;
	CGFloat uncollapsedSize;
	
	// Collapse button
	NSButton *toggleCollapseButton;
	BOOL isAnimating;
}

@property (nonatomic, strong) NSMutableDictionary *minValues, *maxValues, *minUnits, *maxUnits;
@property (strong) NSMutableDictionary *resizableSubviewPreferredProportion, *nonresizableSubviewPreferredSize;
@property (strong) NSArray *stateForLastPreferredCalculations;
@property (strong) NSButton *toggleCollapseButton;
@property (assign) id secondaryDelegate;
@property (nonatomic) BOOL collapsibleSubviewCollapsed;
@property IBInspectable NSInteger collapsiblePopupSelection;
@property IBInspectable BOOL dividerCanCollapse;

// The split view divider color
@property (copy) IBInspectable NSColor *color;

// Flag for whether a custom divider color is enabled. If not, the standard divider color is used.
@property (nonatomic) IBInspectable BOOL colorIsEnabled;

// Call this method to collapse or expand a subview configured as collapsible in the IB inspector.
- (IBAction)toggleCollapse:(id)sender;

@end
