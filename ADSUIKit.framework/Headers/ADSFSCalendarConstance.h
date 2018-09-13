//
//  ADSFSCalendarConstane.h
//  ADSFSCalendar
//
//  Created by dingwenchao on 8/28/15.
//  Copyright © 2016 Wenchao Ding. All rights reserved.
//
//  https://github.com/WenchaoD
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#pragma mark - Constance

UIKIT_EXTERN CGFloat const ADSFSCalendarStandardHeaderHeight;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardWeekdayHeight;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardMonthlyPageHeight;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardWeeklyPageHeight;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardCellDiameter;
UIKIT_EXTERN CGFloat const ADSFSCalendarAutomaticDimension;
UIKIT_EXTERN CGFloat const ADSFSCalendarDefaultBounceAnimationDuration;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardRowHeight;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardTitleTextSize;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardSubtitleTextSize;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardWeekdayTextSize;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardHeaderTextSize;
UIKIT_EXTERN CGFloat const ADSFSCalendarMaximumEventDotDiameter;
UIKIT_EXTERN CGFloat const ADSFSCalendarStandardScopeHandleHeight;

UIKIT_EXTERN NSInteger const ADSFSCalendarDefaultHourComponent;

#if TARGET_INTERFACE_BUILDER
#define ADSFSCalendarDeviceIsIPad NO
#else
#define ADSFSCalendarDeviceIsIPad [[UIDevice currentDevice].model hasPrefix:@"iPad"]
#endif

#define ADSFSCalendarStandardSelectionColor   ADSFSColorRGBA(31,119,219,1.0)
#define ADSFSCalendarStandardTodayColor       ADSFSColorRGBA(198,51,42 ,1.0)
#define ADSFSCalendarStandardTitleTextColor   ADSFSColorRGBA(14,69,221 ,1.0)
#define ADSFSCalendarStandardEventDotColor    ADSFSColorRGBA(31,119,219,0.75)

#define ADSFSCalendarStandardSeparatorColor   [[UIColor lightGrayColor] colorWithAlphaComponent:0.25]
#define ADSFSCalendarStandardScopeHandleColor [[UIColor lightGrayColor] colorWithAlphaComponent:0.50]

#define ADSFSColorRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#if CGFLOAT_IS_DOUBLE
#define ADSFSCalendarFloor(c) floor(c)
#else
#define ADSFSCalendarFloor(c) floorf(c)
#endif

#pragma mark - Deprecated

#define ADSFSCalendarDeprecated(instead) DEPRECATED_MSG_ATTRIBUTE(" Use " # instead " instead")

ADSFSCalendarDeprecated('ADSFSCalendarCellShape')
typedef NS_ENUM(NSInteger, ADSFSCalendarCellStyle) {
    ADSFSCalendarCellStyleCircle      = 0,
    ADSFSCalendarCellStyleRectangle   = 1
};

ADSFSCalendarDeprecated('ADSFSCalendarScrollDirection')
typedef NS_ENUM(NSInteger, ADSFSCalendarFlow) {
    ADSFSCalendarFlowVertical,
    ADSFSCalendarFlowHorizontal
};
