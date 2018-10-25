//
//  SUWindowController.h
//  Sparkle
//
//  Created by Andy Matuschak on 2/13/08.
//  Copyright 2008 Andy Matuschak. All rights reserved.
//

#ifndef SUWINDOWCONTROLLER_H
#define SUWINDOWCONTROLLER_H

#import <Cocoa/Cocoa.h>
#import "SUExport.h"

@class SUHost;

// Added back the common window controller to be able to identify Sparkle windows from the main applications
SU_EXPORT @interface SUWindowController : NSWindowController
- (instancetype)initWithWindowNibName:(NSString *)nibName;
@end

#endif
