/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>
#import "UIWebViewDelegate.h"

@class NSTimer, UIBarButtonItem, UIView, UIToolbar, NSURLConnection, NSMutableData, UINavigationBar, UIWebView, NSString, UIActivityIndicatorView;

@interface InGameBrowser : NSObject <UIWebViewDelegate> {
	UIView *_IGBView;	// 4 = 0x4
	UINavigationBar *_navBar;	// 8 = 0x8
	UIBarButtonItem *_navBarBack;	// 12 = 0xc
	UIToolbar *_toolbar;	// 16 = 0x10
	UIBarButtonItem *_reloadButton;	// 20 = 0x14
	UIBarButtonItem *_loadingButton;	// 24 = 0x18
	UIBarButtonItem *_forwardButton;	// 28 = 0x1c
	UIBarButtonItem *_backButton;	// 32 = 0x20
	UIBarButtonItem *_flexibleSpace;	// 36 = 0x24
	UIBarButtonItem *_fixedSpace;	// 40 = 0x28
	UIActivityIndicatorView *_activityIndicatorRedirect;	// 44 = 0x2c
	UIWebView *_IGBWebView;	// 48 = 0x30
	NSMutableData *_receivedData;	// 52 = 0x34
	NSURLConnection *_redirectConnection;	// 56 = 0x38
	NSURLConnection *_checkNewsNumberConnection;	// 60 = 0x3c
	NSMutableData *_receivedDataNewsNumber;	// 64 = 0x40
	NSURLConnection *_checkNewsNumberConnectionSave;	// 68 = 0x44
	NSMutableData *_receivedDataNewsNumberSave;	// 72 = 0x48
	int _lastUnreadNewsIndex;	// 76 = 0x4c
	int _unreadNewsNumber;	// 80 = 0x50
	/*function-pointer*/ void *unreadNewsChangedCallback;	// 84 = 0x54
	BOOL _isInIGBrowser;	// 88 = 0x58
	float _screenWidth;	// 92 = 0x5c
	float _screenHeight;	// 96 = 0x60
	NSString *urlAddressIGB;	// 100 = 0x64
	int _languageIndex;	// 104 = 0x68
	NSString *_gameVersion;	// 108 = 0x6c
	NSString *_anonymousAccount;	// 112 = 0x70
	NSString *_facebookID;	// 116 = 0x74
	NSString *_gliveAccount;	// 120 = 0x78
	NSString *_gameCenterUID;	// 124 = 0x7c
	NSString *_category;	// 128 = 0x80
	NSString *_baseLink;	// 132 = 0x84
	int _banType;	// 136 = 0x88
	UIView *_parentView;	// 140 = 0x8c
	NSTimer *_IGBTimer;	// 144 = 0x90
}
@property(retain, nonatomic) NSString *anonymousAccount;	// @synthesize=_anonymousAccount
@property(retain, nonatomic) NSString *baseLink;	// @synthesize=_baseLink
@property(retain, nonatomic) NSString *category;	// @synthesize=_category
@property(retain, nonatomic) NSString *facebookID;	// @synthesize=_facebookID
@property(retain, nonatomic) NSString *gameCenterUID;	// @synthesize=_gameCenterUID
@property(retain, nonatomic) NSString *gameVersion;	// @synthesize=_gameVersion
@property(retain, nonatomic) NSString *gliveAccount;	// @synthesize=_gliveAccount
@property(readonly, assign, nonatomic) BOOL isInIGBrowser;	// @synthesize=_isInIGBrowser
@property(assign, nonatomic) int languageIndex;	// @synthesize=_languageIndex
@property(retain, nonatomic) UIView *parentView;	// @synthesize=_parentView
@property(assign, nonatomic) int unreadNewsNumber;	// @synthesize=_unreadNewsNumber
+ (id)EncryptAES_IGB:(id)igb :(id)arg2;
+ (id)allocWithZone:(NSZone *)zone;
+ (id)encodeBase64WithData_IGB:(id)data_IGB;
+ (id)sharedInGameBrowser;
- (id)init;
// declared property getter: - (id)anonymousAccount;
- (id)autorelease;
- (id)backButton;
// declared property getter: - (id)baseLink;
// declared property getter: - (id)category;
- (void)checkNavigationStatus;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (id)copyWithZone:(NSZone *)zone;
- (CGImageRef)createBackArrowImageRef;
- (CGContextRef)createContext;
// declared property getter: - (id)facebookID;
// declared property getter: - (id)gameCenterUID;
// declared property getter: - (id)gameVersion;
- (void)getIGBLink;
- (int)getLastNewsIndex;
- (id)getPrivacyUrl;
- (void)getSpecialLink;
- (id)getTermsUrl;
// declared property getter: - (id)gliveAccount;
- (void)goBack;
- (void)goForward;
- (void)igpTimerTimeout;
// declared property getter: - (BOOL)isInIGBrowser;
// declared property getter: - (int)languageIndex;
- (void)openCustomLink:(id)link;
- (void)orientationChanged;
// declared property getter: - (id)parentView;
- (void)quitIGB;
- (void)refreshUnreadNewsNumber;
- (void)refreshUnreadNewsNumberInternal;
- (oneway void)release;
- (void)reload;
- (id)retain;
- (unsigned)retainCount;
- (void)saveLastNewsIndex:(int)index;
// declared property setter: - (void)setAnonymousAccount:(id)account;
// declared property setter: - (void)setBaseLink:(id)link;
// declared property setter: - (void)setCategory:(id)category;
// declared property setter: - (void)setFacebookID:(id)anId;
// declared property setter: - (void)setGameCenterUID:(id)uid;
// declared property setter: - (void)setGameVersion:(id)version;
// declared property setter: - (void)setGliveAccount:(id)account;
// declared property setter: - (void)setLanguageIndex:(int)index;
// declared property setter: - (void)setParentView:(id)view;
- (void)setUnreadNewsChangedCallback:(/*function-pointer*/ void *)callback;
// declared property setter: - (void)setUnreadNewsNumber:(int)number;
- (void)show;
- (void)showCustomerCare;
- (void)showCustomerCareWithBANType:(int)bantype;
- (void)showForum;
- (void)showNews;
- (void)showPrivacy;
- (void)showTerms;
// declared property getter: - (int)unreadNewsNumber;
- (void)webView:(id)view didFailWithError:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
- (void)webViewDidStartLoad:(id)webView;
@end
