//
//  ADSFSCalendar.h
//  ADSFSCalendar
//
//  Created by Wenchao Ding on 29/1/15.
//  Copyright © 2016 Wenchao Ding. All rights reserved.
// 
//  https://github.com/WenchaoD
//
//
//  ADSFSCalendar is a superior awesome calendar control with high performance, high customizablility and very simple usage.
//
//  @warning All NSDate instances used in the calendar should be managed by the DateTools category. See ADSFSCalendar+DateTools.
//
//  @see ADSFSCalendarDataSource
//  @see ADSFSCalendarDelegate
//  @see ADSFSCalendarDelegateAppearance
//  @see ADSFSCalendarAppearance
//  @see ADSFSCalendar+DateTools
//

#import <UIKit/UIKit.h>
#import "ADSFSCalendarAppearance.h"
#import "ADSFSCalendarConstance.h"
#import "ADSFSCalendarCell.h"
#import "ADSFSCalendarCollectionView.h"
#import "ADSFSCalendarEventIndicator.h"

//! Project version number for ADSFSCalendar.
FOUNDATION_EXPORT double ADSFSCalendarVersionNumber;

//! Project version string for ADSFSCalendar.
FOUNDATION_EXPORT const unsigned char ADSFSCalendarVersionString[];

typedef NS_ENUM(NSUInteger, ADSFSCalendarScope) {
    ADSFSCalendarScopeMonth,
    ADSFSCalendarScopeWeek
};

typedef NS_ENUM(NSUInteger, ADSFSCalendarScrollDirection) {
    ADSFSCalendarScrollDirectionVertical,
    ADSFSCalendarScrollDirectionHorizontal
};

typedef NS_ENUM(NSUInteger, ADSFSCalendarUnit) {
    ADSFSCalendarUnitMonth = NSCalendarUnitMonth,
    ADSFSCalendarUnitWeekOfYear = NSCalendarUnitWeekOfYear,
    ADSFSCalendarUnitDay = NSCalendarUnitDay
};

NS_ASSUME_NONNULL_BEGIN

@class ADSFSCalendar;

/**
 * ADSFSCalendarDataSource is a source set of ADSFSCalendar. The basic job is to provide event、subtitle and min/max day to display for calendar.
 */
@protocol ADSFSCalendarDataSource <NSObject>

@optional

/**
 * Asks the dataSource for a title for the specific date as a replacement of the day text
 */
- (nullable NSString *)calendar:(ADSFSCalendar *)calendar titleForDate:(NSDate *)date;

/**
 * Asks the dataSource for a subtitle for the specific date under the day text.
 */
- (nullable NSString *)calendar:(ADSFSCalendar *)calendar subtitleForDate:(NSDate *)date;

/**
 * Asks the dataSource for an image for the specific date.
 */
- (nullable UIImage *)calendar:(ADSFSCalendar *)calendar imageForDate:(NSDate *)date;

/**
 * Asks the dataSource the minimum date to display.
 */
- (NSDate *)minimumDateForCalendar:(ADSFSCalendar *)calendar;

/**
 * Asks the dataSource the maximum date to display.
 */
- (NSDate *)maximumDateForCalendar:(ADSFSCalendar *)calendar;

/**
 * Asks the dataSource the number of event dots for a specific date.
 *
 * @see
 *
 *   - (UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance eventColorForDate:(NSDate *)date;
 *   - (NSArray *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance eventColorsForDate:(NSDate *)date;
 */
- (NSInteger)calendar:(ADSFSCalendar *)calendar numberOfEventsForDate:(NSDate *)date;

/**
 * This function is deprecated
 */
- (BOOL)calendar:(ADSFSCalendar *)calendar hasEventForDate:(NSDate *)date ADSFSCalendarDeprecated(-calendar:numberOfEventsForDate:);

@end


/**
 * The delegate of a ADSFSCalendar object must adopt the ADSFSCalendarDelegate protocol. The optional methods of ADSFSCalendarDelegate manage selections、 user events and help to manager the frame of the calendar.
 */
@protocol ADSFSCalendarDelegate <NSObject>

@optional

/**
 * Asks the delegate whether the specific date is allowed to be selected by tapping.
 */
- (BOOL)calendar:(ADSFSCalendar *)calendar shouldSelectDate:(NSDate *)date;

/**
 * Tells the delegate a date in the calendar is selected by tapping.
 */
- (void)calendar:(ADSFSCalendar *)calendar didSelectDate:(NSDate *)date;

/**
 * Asks the delegate whether the specific date is allowed to be deselected by tapping.
 */
- (BOOL)calendar:(ADSFSCalendar *)calendar shouldDeselectDate:(NSDate *)date;

/**
 * Tells the delegate a date in the calendar is deselected by tapping.
 */
- (void)calendar:(ADSFSCalendar *)calendar didDeselectDate:(NSDate *)date;

/**
 * Tells the delegate the calendar is about to change the bounding rect.
 */
- (void)calendar:(ADSFSCalendar *)calendar boundingRectWillChange:(CGRect)bounds animated:(BOOL)animated;

/**
 * Tells the delegate the calendar is about to change the current page.
 */
- (void)calendarCurrentPageDidChange:(ADSFSCalendar *)calendar;

/**
 * These functions are deprecated
 */
- (void)calendarCurrentScopeWillChange:(ADSFSCalendar *)calendar animated:(BOOL)animated ADSFSCalendarDeprecated(-calendar:boundingRectWillChange:animated:);
- (void)calendarCurrentMonthDidChange:(ADSFSCalendar *)calendar ADSFSCalendarDeprecated(-calendarCurrentPageDidChange:);

@end

/**
 * ADSFSCalendarDelegateAppearance determines the fonts and colors of components in the calendar, but more specificly. Basely, if you need to make a global customization of appearance of the calendar, use ADSFSCalendarAppearance. But if you need different appearance for different day, use ADSFSCalendarDelegateAppearance.
 *
 * @see ADSFSCalendarAppearance
 */
@protocol ADSFSCalendarDelegateAppearance <NSObject>

@optional

/**
 * Asks the delegate for a fill color in unselected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance fillDefaultColorForDate:(NSDate *)date;

/**
 * Asks the delegate for a fill color in selected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance fillSelectionColorForDate:(NSDate *)date;

/**
 * Asks the delegate for day text color in unselected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance titleDefaultColorForDate:(NSDate *)date;

/**
 * Asks the delegate for day text color in selected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance titleSelectionColorForDate:(NSDate *)date;

/**
 * Asks the delegate for subtitle text color in unselected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance subtitleDefaultColorForDate:(NSDate *)date;

/**
 * Asks the delegate for subtitle text color in selected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance subtitleSelectionColorForDate:(NSDate *)date;

/**
 * Asks the delegate for single event color for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance eventColorForDate:(NSDate *)date;

/**
 * Asks the delegate for multiple event colors for the specific date.
 */
- (nullable NSArray *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance eventColorsForDate:(NSDate *)date;

/**
 * Asks the delegate for a border color in unselected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance borderDefaultColorForDate:(NSDate *)date;

/**
 * Asks the delegate for a border color in selected state for the specific date.
 */
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance borderSelectionColorForDate:(NSDate *)date;

/**
 * Asks the delegate for a shape for the specific date.
 */
- (ADSFSCalendarCellShape)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance cellShapeForDate:(NSDate *)date;

/**
 * These functions are deprecated
 */
- (ADSFSCalendarCellStyle)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance cellStyleForDate:(NSDate *)date ADSFSCalendarDeprecated(-calendar:appearance:cellShapeForDate:);
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance fillColorForDate:(NSDate *)date ADSFSCalendarDeprecated(-calendar:appearance:fillDefaultColorForDate:);
- (nullable UIColor *)calendar:(ADSFSCalendar *)calendar appearance:(ADSFSCalendarAppearance *)appearance selectionColorForDate:(NSDate *)date ADSFSCalendarDeprecated(-calendar:appearance:fillSelectionColorForDate:);

@end

#pragma mark - Primary

IB_DESIGNABLE
@interface ADSFSCalendar : UIView

/**
 * The object that acts as the delegate of the calendar.
 */
@property (weak, nonatomic) IBOutlet id<ADSFSCalendarDelegate> delegate;

/**
 * The object that acts as the data source of the calendar.
 */
@property (weak, nonatomic) IBOutlet id<ADSFSCalendarDataSource> dataSource;

/**
 * A special mark will be put on today of the calendar
 */
@property (strong, nonatomic) NSDate *today;

/**
 * The current page of calendar
 *
 * @desc In week mode, current page represents the current visible week; In month mode, it means current visible month.
 */
@property (strong, nonatomic) NSDate *currentPage;

/**
 * The locale of month and weekday symbols. Change it to display them in your own language.
 *
 * e.g. To display them in Chinese:
 * 
 *    calendar.locale = [NSLocale localeWithLocaleIdentifier:@"zh-CN"];
 */
@property (strong, nonatomic) NSLocale *locale;

/**
 * Represents the NSCalendarIdentifier of calendar. Default is NSCalendarIdentifierGregorian.
 *
 * e.g. To display a Persian calendar
 *
 *    calendar.identifier = NSCalendarIdentifierPersian;
 */
@property (strong, nonatomic) NSString *identifier;

/**
 * The scroll direction of ADSFSCalendar. 
 *
 * e.g. To make the calendar scroll vertically
 *
 *    calendar.scrollDirection = ADSFSCalendarScrollDirectionVertical;
 */
@property (assign, nonatomic) ADSFSCalendarScrollDirection scrollDirection;

/**
 * The scope of calendar, change scope will trigger an inner frame change, make sure the frame has been correctly adjusted in 
 *
 *    - (void)calendar:(ADSFSCalendar *)calendar boundingRectWillChange:(CGRect)bounds animated:(BOOL)animated;
 */
@property (assign, nonatomic) ADSFSCalendarScope scope;

/**
 * The index of the first weekday of the calendar. Give a '2' to make Monday in the first column.
 */
@property (assign, nonatomic) IBInspectable NSUInteger firstWeekday;

/**
 * The height of month header of the calendar. Give a '0' to remove the header.
 */
@property (assign, nonatomic) IBInspectable CGFloat headerHeight;

/**
 * The height of weekday header of the calendar.
 */
@property (assign, nonatomic) IBInspectable CGFloat weekdayHeight;

/**
 * A Boolean value that determines whether users can select a date.
 */
@property (assign, nonatomic) IBInspectable BOOL allowsSelection;

/**
 * A Boolean value that determines whether users can select more than one date.
 */
@property (assign, nonatomic) IBInspectable BOOL allowsMultipleSelection;

/**
 * A Boolean value that determines whether paging is enabled for the calendar.
 */
@property (assign, nonatomic) IBInspectable BOOL pagingEnabled;

/**
 * A Boolean value that determines whether scrolling is enabled for the calendar.
 */
@property (assign, nonatomic) IBInspectable BOOL scrollEnabled;

/**
 * A Boolean value that determines whether scoping animation is centered a visible selected date. Default is YES.
 */
@property (assign, nonatomic) IBInspectable BOOL focusOnSingleSelectedDate;

/**
 * A Boolean value that determines whether the calendar should show days out of month. Default is YES.
 */
@property (assign, nonatomic) IBInspectable BOOL showsPlaceholders;

// Issue #334:
/**
 * A Boolean value that determines whether the calendar should allow selections of placeholders.
 * Default is NO.
 */
@property (assign, nonatomic) IBInspectable BOOL canSelectPlaceholders;

/**
 * A Boolean value that determines whether the calendar should show a handle for control the scope. Default is NO;
 */
@property (assign, nonatomic) IBInspectable BOOL showsScopeHandle;


/**
 * The multiplier of line height while paging enabled is NO. Default is 1.0;
 */
@property (assign, nonatomic) IBInspectable CGFloat lineHeightMultiplier;

/**
 * The calendar appearance used to control the global fonts、colors .etc
 */
@property (readonly, nonatomic) ADSFSCalendarAppearance *appearance;

/**
 * A date object representing the minimum day enable、visible and selectable. (read-only)
 */
@property (readonly, nonatomic) NSDate *minimumDate;

/**
 * A date object representing the maximum day enable、visible and selectable. (read-only)
 */
@property (readonly, nonatomic) NSDate *maximumDate;

/**
 * A date object identifying the section of the selected date. (read-only)
 */
@property (readonly, nonatomic) NSDate *selectedDate;

/**
 * The dates representing the selected dates. (read-only)
 */
@property (readonly, nonatomic) NSArray *selectedDates;

/**
 * Reload the dates and appearance of the calendar.
 */
- (void)reloadData;

/**
 * Change the scope of the calendar. Make sure `-calendar:boundingRectWillChange:animated` is correctly adopted.
 *
 * @param scope The target scope to change.
 * @param animated YES if you want to animate the scoping; NO if the change should be immediate.
 */
- (void)setScope:(ADSFSCalendarScope)scope animated:(BOOL)animated;

/**
 * Selects a given date in the calendar.
 *
 * @param date A date in the calendar.
 */
- (void)selectDate:(NSDate *)date;

/**
 * Selects a given date in the calendar, optionally scrolling the date to visible area.
 *
 * @param date A date in the calendar.
 * @param scrollToDate A Boolean value that determines whether the calendar should scroll to the selected date to visible area.
 */
- (void)selectDate:(NSDate *)date scrollToDate:(BOOL)scrollToDate;

/**
 * Deselects a given date of the calendar.
 * @param date A date in the calendar.
 */
- (void)deselectDate:(NSDate *)date;

/**
 * Changes the current page of the calendar.
 *
 * @param currentPage Representing weekOfYear in week mode, or month in month mode.
 * @param animated YES if you want to animate the change in position; NO if it should be immediate.
 */
- (void)setCurrentPage:(NSDate *)currentPage animated:(BOOL)animated;

/**
 * Returns the frame for a non-placeholder cell relative to the super view of the calendar.
 *
 * @param date A date is the calendar.
 */
- (CGRect)frameForDate:(NSDate *)date;

/**
 * Returns the midpoint for a non-placeholder cell relative to the super view of the calendar.
 *
 * @param date A date is the calendar.
 */
- (CGPoint)centerForDate:(NSDate *)date;

@end

#pragma mark - DateTools

/**
 * Job for this category:
 *
 *  1. Manage date object simplier、faster
 *  2. Bring date object into a no-timezone system.
 *
 * @warning All NSDate instances used in the calendar should be created by:
 *
 *    - (NSDate *)dateFromString:(NSString *)string format:(NSString *)format;
 *    - (NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;
 *
 */
@interface ADSFSCalendar (DateTools)

/**
 * Returns the number of year of the given date
 */
- (NSInteger)yearOfDate:(NSDate *)date;

/**
 * Returns the number of month of the given date
 */
- (NSInteger)monthOfDate:(NSDate *)date;

/**
 * Returns the number of day of the given date
 */
- (NSInteger)dayOfDate:(NSDate *)date;

/**
 * Returns the number of weekday of the given date
 */
- (NSInteger)weekdayOfDate:(NSDate *)date;

/**
 * Returns the number of weekOfYear of the given date
 */
- (NSInteger)weekOfDate:(NSDate *)date;

/**
 * Returns the number of hour of the given date
 */
- (NSInteger)hourOfDate:(NSDate *)date;

/**
 * Returns the number of minite of the given date
 */
- (NSInteger)miniuteOfDate:(NSDate *)date;

/**
 * Returns the number of seconds of the given date
 */
- (NSInteger)secondOfDate:(NSDate *)date;

/**
 * Returns the number of rows of the given month
 */
- (NSInteger)numberOfRowsInMonth:(NSDate *)month;

/**
 * Zeronizing hour、minute and second components of the given date
 */
- (NSDate *)dateByIgnoringTimeComponentsOfDate:(NSDate *)date;

/**
 * Returns the first day of month of the given date
 */
- (NSDate *)beginingOfMonthOfDate:(NSDate *)date;

/**
 * Returns the last day of month of the given date
 */
- (NSDate *)endOfMonthOfDate:(NSDate *)date;

/**
 * Returns the first day of week of the given date
 */
- (NSDate *)beginingOfWeekOfDate:(NSDate *)date;

/**
 * Returns the middle day of week of the given date
 */
- (NSDate *)middleOfWeekFromDate:(NSDate *)date;

/**
 * Returns the next day of the given date
 */
- (NSDate *)tomorrowOfDate:(NSDate *)date;

/**
 * Returns the previous day of the given date
 */
- (NSDate *)yesterdayOfDate:(NSDate *)date;

/**
 * Returns the number of days in the month of the given date
 */
- (NSInteger)numberOfDatesInMonthOfDate:(NSDate *)date;

/**
 * Instantiating a date by given string and date format.
 *
 * e.g.
 *
 *    NSDate *date = [calendar dateFromString:@"2000-10-10" format:@"yyyy-MM-dd"];
 */
- (NSDate *)dateFromString:(NSString *)string format:(NSString *)format;

/**
 * Instantiating a date by given numbers of year、month and day.
 *
 * e.g.
 *
 *    NSDate *date = [calendar dateWithYear:2000 month:10 day:10];
 */
- (NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Returns a new NSDate object representing the time calculated by adding given number of year to a given date.
 */
- (NSDate *)dateByAddingYears:(NSInteger)years toDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by substracting given number of year from a given date.
 */
- (NSDate *)dateBySubstractingYears:(NSInteger)years fromDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by adding given number of month to a given date.
 */
- (NSDate *)dateByAddingMonths:(NSInteger)months toDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by substracting given number of month from a given date.
 */
- (NSDate *)dateBySubstractingMonths:(NSInteger)months fromDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by adding given number of week to a given date.
 */
- (NSDate *)dateByAddingWeeks:(NSInteger)weeks toDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by substracting given number of week from a given date.
 */
- (NSDate *)dateBySubstractingWeeks:(NSInteger)weeks fromDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by adding given number of day to a given date.
 */
- (NSDate *)dateByAddingDays:(NSInteger)days toDate:(NSDate *)date;

/**
 * Returns a new NSDate object representing the time calculated by substracting given number of day from a given date.
 */
- (NSDate *)dateBySubstractingDays:(NSInteger)days fromDate:(NSDate *)date;

/**
 * Returns the year-difference between the given dates
 */
- (NSInteger)yearsFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate;

/**
 * Returns the month-difference between the given dates
 */
- (NSInteger)monthsFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate;

/**
 * Returns the day-difference between the given dates
 */
- (NSInteger)daysFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate;

/**
 * Returns the week-difference between the given dates
 */
- (NSInteger)weeksFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate;

/**
 * Returns whether two dates are equal to a given unit of calendar.
 */
- (BOOL)isDate:(NSDate *)date1 equalToDate:(NSDate *)date2 toCalendarUnit:(ADSFSCalendarUnit)unit;

/**
 * Returns whether the given date is in 'today' of the calendar.
 */
- (BOOL)isDateInToday:(NSDate *)date;

/**
 * Returns a string representation of a given date formatted using a specific date format.
 */
- (NSString *)stringFromDate:(NSDate *)date format:(NSString *)format;

/**
 * Returns a string representation of a given date formatted using a yyyy-MM-dd.
 */
- (NSString *)stringFromDate:(NSDate *)date;

@end

#pragma mark - Deprecate

/**
 * These attributes and functions are deprecated.
 */
@interface ADSFSCalendar (Deprecated)
@property (strong, nonatomic) NSDate *currentMonth ADSFSCalendarDeprecated('currentPage');
@property (assign, nonatomic) ADSFSCalendarFlow flow ADSFSCalendarDeprecated('scrollDirection');
- (void)setSelectedDate:(NSDate *)selectedDate ADSFSCalendarDeprecated(-selectDate:);
- (void)setSelectedDate:(NSDate *)selectedDate animate:(BOOL)animate ADSFSCalendarDeprecated(-selectDate:scrollToDate:);
- (BOOL)date:(NSDate *)date sharesSameMonthWithDate:(NSDate *)anotherDate ADSFSCalendarDeprecated(-isDate:equalToDate:toCalendarUnit);
- (BOOL)date:(NSDate *)date sharesSameWeekWithDate:(NSDate *)anotherDate ADSFSCalendarDeprecated(-isDate:equalToDate:toCalendarUnit);
- (BOOL)date:(NSDate *)date sharesSameDayWithDate:(NSDate *)anotherDate ADSFSCalendarDeprecated(-isDate:equalToDate:toCalendarUnit);
@end

NS_ASSUME_NONNULL_END

