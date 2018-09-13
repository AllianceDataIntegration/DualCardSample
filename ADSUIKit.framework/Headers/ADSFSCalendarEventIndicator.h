//
//  ADSFSCalendarEventView.h
//  ADSFSCalendar
//
//  Created by dingwenchao on 2/3/16.
//  Copyright © 2016 wenchaoios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADSFSCalendarEventIndicator : UIView

@property (assign, nonatomic) NSInteger numberOfEvents;
@property (strong, nonatomic) id color;
@property (assign, nonatomic) BOOL needsAdjustingViewFrame;

@end
