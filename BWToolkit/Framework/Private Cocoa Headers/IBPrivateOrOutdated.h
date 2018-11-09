//
//  IBPrivateOrOutdated.h
//  BWToolkit
//
//  Created by C.W. Betts on 11/9/18.
//

#ifndef IBPrivateOrOutdated_h
#define IBPrivateOrOutdated_h

#import <Foundation/NSObject.h>

@class IBDocument;
@interface NSObject (IB)
- (void)ibDidAddToDesignableDocument:(IBDocument *)document;
- (void)addBottomBar;
- (void)ibTester;
@end

#endif /* IBPrivateOrOutdated_h */
