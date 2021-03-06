/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import <UIKit/UIWebView.h>

@class NSString, RMProgressHUD;

@interface RMWebView : UIWebView {
	NSString *mainPageUrl;	// 56 = 0x38
	NSString *errorPageBeforeUrl;	// 60 = 0x3c
	RMProgressHUD *loadHUD;	// 64 = 0x40
	BOOL isNetworkError;	// 68 = 0x44
	unsigned networkErrorCount;	// 72 = 0x48
	BOOL needReloadMainPage;	// 76 = 0x4c
	BOOL isShowTopBar;	// 77 = 0x4d
}
@property(copy, nonatomic) NSString *errorPageBeforeUrl;	// @synthesize
@property(assign) BOOL isNetworkError;	// @synthesize
@property(assign, nonatomic) BOOL isShowTopBar;	// @synthesize
@property(copy, nonatomic) NSString *mainPageUrl;	// @synthesize
@property(assign) BOOL needReloadMainPage;	// @synthesize
@property(assign) unsigned networkErrorCount;	// @synthesize
- (id)initWithFrame:(CGRect)frame;
- (BOOL)canGoBack;
- (void)dealloc;
// declared property getter: - (id)errorPageBeforeUrl;
- (void)goBack;
- (void)handleNetworkError:(unsigned)error;
- (void)handleNetworkErrorAtOAuth:(unsigned)oauth;
- (void)handleRegisterPage;
- (void)hideLoadHUD;
- (id)htmlWithLoadError:(id)loadError errorString2:(id)a2;
- (id)htmlWithRegister:(id)aRegister canSMS:(BOOL)sms;
// declared property getter: - (BOOL)isNetworkError;
// declared property getter: - (BOOL)isShowTopBar;
- (void)loadHomePage;
- (void)loadRequest:(id)request;
// declared property getter: - (id)mainPageUrl;
// declared property getter: - (BOOL)needReloadMainPage;
// declared property getter: - (unsigned)networkErrorCount;
- (void)reload;
// declared property setter: - (void)setErrorPageBeforeUrl:(id)url;
// declared property setter: - (void)setIsNetworkError:(BOOL)error;
// declared property setter: - (void)setIsShowTopBar:(BOOL)bar;
// declared property setter: - (void)setMainPageUrl:(id)url;
// declared property setter: - (void)setNeedReloadMainPage:(BOOL)page;
// declared property setter: - (void)setNetworkErrorCount:(unsigned)count;
- (void)showLoadHUDWithString:(id)string;
@end

