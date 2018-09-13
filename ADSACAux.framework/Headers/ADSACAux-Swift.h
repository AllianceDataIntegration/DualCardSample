// Generated by Apple Swift version 4.1.2 effective-3.3.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ADSFoundation;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ADSACAux",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class ADSCerebro;
@class ADSStandardWorkflowEntry;
@protocol ADSUIViewControllerRegistry;

SWIFT_CLASS("_TtC8ADSACAux14ADSACAuxPlugin")
@interface ADSACAuxPlugin : ADSStandardPlugin
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PluginName;)
+ (NSString * _Nonnull)PluginName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithCerebro:(ADSCerebro * _Nonnull)cerebro name:(NSString * _Nonnull)name workflowEntries:(NSArray<ADSStandardWorkflowEntry *> * _Nonnull)workflowEntries viewControllerRegistry:(id <ADSUIViewControllerRegistry> _Nullable)viewControllerRegistry SWIFT_UNAVAILABLE;
@end

@class ADSLabel;
@class UIView;
@class UITableView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8ADSACAux35ADSCreditSummaryTableViewController")
@interface ADSCreditSummaryTableViewController : UITableViewController
@property (nonatomic, copy) NSString * _Nullable analyticPageName;
@property (nonatomic, copy) NSString * _Nullable descriptivePageName;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelMinimumPaymentValue;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelMinimumPaymentMessage;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelLastPaymentReceivedValue;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelLastPaymentReceivedMessage;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelStatementBalanceValue;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelStatementBalanceMessage;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelCurrentBalanceValue;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified LabelCurrentBalanceMessage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified ViewFooter;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)stopLoadingIndicator;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class ADSRetainer;

SWIFT_CLASS("_TtC8ADSACAux30ADSCreditSummaryViewController")
@interface ADSCreditSummaryViewController : UIViewController
@property (nonatomic, readonly, copy) NSString * _Nullable analyticPageName;
@property (nonatomic, strong) ADSRetainer * _Nullable retainer;
@property (nonatomic) BOOL _hideBackButton;
@property (nonatomic, copy) NSString * _Nullable descriptivePageName;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol ADSWorkflowDisplayer;

SWIFT_CLASS("_TtC8ADSACAux29ADSRewardsCertificatesContext")
@interface ADSRewardsCertificatesContext : ADSSecureWorkflowContext
@property (nonatomic) BOOL selectedMVC;
- (nonnull instancetype)init:(ADSCerebro * _Nonnull)cerebro :(id <ADSWorkflowDisplayer> _Nullable)displayer OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWebView;

SWIFT_CLASS("_TtC8ADSACAux35ADSRewardsPresentmentViewController")
@interface ADSRewardsPresentmentViewController : UIViewController
@property (nonatomic, copy) NSString * _Nullable analyticPageName;
@property (nonatomic, copy) NSString * _Nullable descriptivePageName;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8ADSACAux26ADSRewardsSegmentedControl")
@interface ADSRewardsSegmentedControl : UISegmentedControl
@property (nonatomic, copy) NSString * _Nonnull colorKey;
@property (nonatomic, copy) NSString * _Nonnull availableSegmentTextKey;
@property (nonatomic, copy) NSString * _Nonnull redeemedSegmentTextKey;
@property (nonatomic, copy) NSString * _Nonnull expiredSegmentTextKey;
@property (nonatomic, copy) NSString * _Nonnull shouldShowRedeemedKey;
@property (nonatomic, copy) NSString * _Nonnull configurableType;
- (NSArray<NSString *> * _Nonnull)getAllStyleKeys SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)getAllContentKeys SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)getAllFunctionalKeys SWIFT_WARN_UNUSED_RESULT;
- (void)applyContent:(NSDictionary<NSString *, id> * _Nonnull)content;
- (void)applyStyling:(NSDictionary<NSString *, id> * _Nonnull)styles;
- (void)applyFunctional:(NSDictionary<NSString *, id> * _Nonnull)functional;
- (nonnull instancetype)initWithItems:(NSArray * _Nullable)items OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class ADSImageView;

SWIFT_CLASS("_TtC8ADSACAux25ADSStatementTableViewCell")
@interface ADSStatementTableViewCell : ADSTableViewCell
@property (nonatomic, strong) IBOutlet ADSLabel * _Null_unspecified statementDate;
@property (nonatomic, weak) IBOutlet ADSImageView * _Null_unspecified statementImage;
- (ADSStatementTableViewCell * _Nonnull)setContentWithStatementDate:(NSString * _Nullable)statementDate;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIDocumentInteractionController;
@class UITextView;
@class UITableViewCell;

SWIFT_CLASS("_TtC8ADSACAux26ADSStatementViewController")
@interface ADSStatementViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
@property (nonatomic, copy) NSString * _Nullable analyticPageName;
@property (nonatomic, copy) NSString * _Nullable descriptivePageName;
@property (nonatomic) BOOL _hideBackButton;
@property (nonatomic, strong) ADSRetainer * _Nullable retainer;
@property (nonatomic, copy) NSString * _Nonnull currentListenerKey;
@property (nonatomic, strong) UIDocumentInteractionController * _Nonnull documentController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)dynamicTextViewAlignmentWithTextView:(UITextView * _Nonnull)textView fromY:(CGFloat)fromY;
- (void)viewDidLayoutSubviews;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)sendOmnitureForPhoneWithUrlString:(NSString * _Nonnull)urlString;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldInteractWithURL:(NSURL * _Nonnull)URL inRange:(NSRange)characterRange interaction:(UITextItemInteraction)interaction SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (BOOL)textView:(UITextView * _Nonnull)textView shouldInteractWithURL:(NSURL * _Nonnull)URL inRange:(NSRange)characterRange SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8ADSACAux42ADSTransactionHistoryDetailsViewController")
@interface ADSTransactionHistoryDetailsViewController : UITableViewController
@property (nonatomic, readonly, copy) NSString * _Nullable analyticPageName;
- (void)viewWillAppear:(BOOL)animated;
/// heightForRowAt IndexPath
/// \param tableView tableview
///
/// \param indexPath indexpath
///
///
/// returns:
/// Height in CGFloat
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboardSegue;
@class UIScrollView;

SWIFT_CLASS("_TtC8ADSACAux39ADSTransactionHistoryListViewController")
@interface ADSTransactionHistoryListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, readonly, copy) NSString * _Nullable analyticPageName;
@property (nonatomic, strong) ADSRetainer * _Nullable retainer;
@property (nonatomic) BOOL _hideBackButton;
@property (nonatomic) CGPoint transactionHistoryTableViewOffset;
@property (nonatomic, copy) NSString * _Nullable descriptivePageName;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)animated;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class UISearchBar;

@interface ADSTransactionHistoryListViewController (SWIFT_EXTENSION(ADSACAux)) <UISearchBarDelegate>
- (void)searchBar:(UISearchBar * _Nonnull)searchBar textDidChange:(NSString * _Nonnull)searchText;
- (void)searchBarSearchButtonClicked:(UISearchBar * _Nonnull)searchBar;
- (void)searchBarTextDidBeginEditing:(UISearchBar * _Nonnull)searchBar;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
@end

@class UILabel;

SWIFT_CLASS("_TtC8ADSACAux27ADSTransactionTableViewCell")
@interface ADSTransactionTableViewCell : ADSTableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified subtitleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified detailLabel;
@property (nonatomic, weak) IBOutlet ADSLabel * _Null_unspecified pendingLabel;
- (ADSTransactionTableViewCell * _Nonnull)setContentWithTitle:(NSString * _Nullable)title subtitle:(NSString * _Nullable)subtitle detail:(NSString * _Nullable)detail isPending:(BOOL)isPending transacteeName:(NSString * _Nullable)transacteeName shouldDisplayTransacteeName:(BOOL)shouldDisplayTransacteeName;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop