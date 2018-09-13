//
//  ADSEventLogger.h
//  ADSEventLogger
//
//  Created by MLS Discovery on 4/6/16.
//  Copyright © 2016 MLS Discovery. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const kStagedEventNameKey;
FOUNDATION_EXPORT NSString *const kStagedEventDataKey;
FOUNDATION_EXPORT NSString *const kStagedEventTypeKey;
FOUNDATION_EXPORT NSString *const kStagedEventTimestampKey;
FOUNDATION_EXPORT NSString *const kStagedEventPushCountKey;

FOUNDATION_EXPORT NSString *const kEventTypeAction;
FOUNDATION_EXPORT NSString *const kEventTypePageView;

/**
 * @brief privacy settings
 */
typedef NS_ENUM(NSInteger, ADSEventLoggerPrivacy) {
    ADSEventLoggerOptIn,
    ADSEventLoggerOptOut,
    ADSEventLoggerUnknown
};

/**
 *  @brief A custom class for tracking events using the Omniture/Adobe analytics backend.
 */
@interface ADSEventLogger : NSObject

+ (instancetype)sharedInstance;

//-------------------------------------------------//
//             Properties                          //
//-------------------------------------------------//
@property (nonatomic) ADSEventLoggerPrivacy privacy;

//-------------------------------------------------//
//             Initialization Methods              //
//-------------------------------------------------//

/**
 * @brief Sets up the logging object using the json-encoding data contained in the file.
 * @param path path to configuration file
 * @returns TRUE on Success, FALSE on Failure -- see log for details
 */
- (BOOL) setConfigPath:(NSString*)path;

/**
 * @brief Sets up the logging object using the json-encoding data contained in the data string
 * @param jsonConfig String with the JSON formatted Omniture configuration
 * @returns TRUE on Success, FALSE on Failure -- see log for details
 */
- (BOOL) setConfigJSONString: (NSString *) dataString;

/**
 *  @brief Sets the threshold of when to automatically sync the logged events
 *  @param threshold The number of events to store before sending the logged events
 *  @note Minimum of 1 event. Anything less will automatically be set to 1
 */
- (void) setEventThreshold:(NSInteger)threshold;

/**
 *  @brief Sets the threshold of when to automatically sync the logged events if below the event-threshold
 *  @param seconds The number of seconds that will pass before automatically sending events
 *  @note Minimum of 30 seconds. Anything less will automatically be set to 30
 */
- (void) setTimeThreshold:(long)seconds;

/**
 * 	@brief Sets the preference of debug log output.
 *  @param debug A bool value indicating the preference for debug log output.
 */
- (void) setDebugLogging:(BOOL)debug;

/**
 * 	@brief Gets the preference for debug log output.
 *  @return A bool value indicating the preference for debug log output.
 */
- (BOOL) debugLogging;


//-------------------------------------------------//
//                 Tracking Methods                //
//-------------------------------------------------//

/**
 * 	@brief Tracks a state with context data.
 * 	@param state A string pointer containing the state value to be tracked.
 * 	@param data A dictionary pointer containing the context data to be tracked.
 *  @note Only the most recent 1000 events will be tracked.
 */
- (void) trackState:(NSString *)state data:(NSDictionary *)data;

/**
 * 	@brief Tracks an action with context data.
 * 	@param action A string pointer containing the action value to be tracked.
 * 	@param data A dictionary pointer containing the context data to be tracked.
 *  @note Only the most recent 1000 events will be tracked.
 */
- (void) trackAction:(NSString *)action data:(NSDictionary *)data;

/**
 *  @returns The number of unsent / staged events
 */
- (NSInteger) getNumberOfCurrentlyStagedEvents;

/**
 *  @returns A list of the currently staged (unsent) events
 */
- (NSArray*) getCurrentlyStagedEvents;

@end

