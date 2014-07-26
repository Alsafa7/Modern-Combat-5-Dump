/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "FBLoginDialogDelegate.h"

@class FBLoginDialog, FBSessionAppEventsState, NSArray, NSDate, NSThread, FBAccessTokenData, FBSessionTokenCachingStrategy, FBSessionAuthLogger, NSString;

@interface FBSession : NSObject <FBLoginDialogDelegate> {
	NSString *_urlSchemeSuffix;	// 4 = 0x4
	BOOL _isInStateTransition;	// 8 = 0x8
	int _loginTypeOfPendingOpenUrlCallback;	// 12 = 0xc
	int _defaultDefaultAudience;	// 16 = 0x10
	BOOL _isRepairing;	// 20 = 0x14
	int _state;	// 24 = 0x18
	NSString *_appID;	// 28 = 0x1c
	FBAccessTokenData *_accessTokenData;	// 32 = 0x20
	NSArray *_initializedPermissions;	// 36 = 0x24
	int _lastRequestedSystemAudience;	// 40 = 0x28
	FBSessionTokenCachingStrategy *_tokenCachingStrategy;	// 44 = 0x2c
	NSDate *_attemptedRefreshDate;	// 48 = 0x30
	NSDate *_attemptedPermissionsRefreshDate;	// 52 = 0x34
	id _loginHandler;	// 56 = 0x38
	id _reauthorizeHandler;	// 60 = 0x3c
	FBLoginDialog *_loginDialog;	// 64 = 0x40
	NSThread *_affinitizedThread;	// 68 = 0x44
	FBSessionAppEventsState *_appEventsState;	// 72 = 0x48
	FBSessionAuthLogger *_authLogger;	// 76 = 0x4c
}
@property(readonly, assign) NSString *accessToken;
@property(copy) FBAccessTokenData *accessTokenData;	// @synthesize=_accessTokenData
@property(retain) NSThread *affinitizedThread;	// @synthesize=_affinitizedThread
@property(readonly, assign) NSString *appBaseUrl;
@property(retain) FBSessionAppEventsState *appEventsState;	// @synthesize=_appEventsState
@property(copy) NSString *appID;	// @synthesize=_appID
@property(copy) NSDate *attemptedPermissionsRefreshDate;	// @synthesize=_attemptedPermissionsRefreshDate
@property(copy) NSDate *attemptedRefreshDate;	// @synthesize=_attemptedRefreshDate
@property(retain) FBSessionAuthLogger *authLogger;	// @synthesize=_authLogger
@property(readonly, assign) NSDate *expirationDate;
@property(copy) NSArray *initializedPermissions;	// @synthesize=_initializedPermissions
@property(readonly, assign) BOOL isOpen;
@property(assign) BOOL isRepairing;	// @synthesize=_isRepairing
@property(assign) int lastRequestedSystemAudience;	// @synthesize=_lastRequestedSystemAudience
@property(retain) FBLoginDialog *loginDialog;	// @synthesize=_loginDialog
@property(copy) id loginHandler;	// @synthesize=_loginHandler
@property(readonly, assign) int loginType;
@property(readonly, assign) NSArray *permissions;
@property(copy) id reauthorizeHandler;	// @synthesize=_reauthorizeHandler
@property(assign) int state;	// @synthesize=_state
@property(retain) FBSessionTokenCachingStrategy *tokenCachingStrategy;	// @synthesize=_tokenCachingStrategy
@property(copy) NSString *urlSchemeSuffix;
+ (id)activeSession;
+ (id)activeSessionIfExists;
+ (id)activeSessionIfOpen;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;
+ (id)defaultAppID;
+ (id)defaultUrlSchemeSuffix;
+ (BOOL)openActiveSessionWithAllowLoginUI:(BOOL)allowLoginUI;
+ (BOOL)openActiveSessionWithPermissions:(id)permissions allowLoginUI:(BOOL)ui allowSystemAccount:(BOOL)account isRead:(BOOL)read defaultAudience:(int)audience completionHandler:(id)handler;
+ (BOOL)openActiveSessionWithPermissions:(id)permissions allowLoginUI:(BOOL)ui completionHandler:(id)handler;
+ (BOOL)openActiveSessionWithPermissions:(id)permissions allowLoginUI:(BOOL)ui defaultAudience:(int)audience completionHandler:(id)handler;
+ (BOOL)openActiveSessionWithPublishPermissions:(id)publishPermissions defaultAudience:(int)audience allowLoginUI:(BOOL)ui completionHandler:(id)handler;
+ (BOOL)openActiveSessionWithReadPermissions:(id)readPermissions allowLoginUI:(BOOL)ui completionHandler:(id)handler;
+ (void)renewSystemCredentials:(id)credentials;
+ (id)sdkSurfacedErrorForNativeLoginError:(id)nativeLoginError;
+ (id)setActiveSession:(id)session;
+ (void)setDefaultAppID:(id)anId;
+ (void)setDefaultUrlSchemeSuffix:(id)suffix;
- (id)init;
- (id)initWithAppID:(id)appID permissions:(id)permissions defaultAudience:(int)audience urlSchemeSuffix:(id)suffix tokenCacheStrategy:(id)strategy;
- (id)initWithAppID:(id)appID permissions:(id)permissions urlSchemeSuffix:(id)suffix tokenCacheStrategy:(id)strategy;
- (id)initWithPermissions:(id)permissions;
// declared property getter: - (id)accessToken;
// declared property getter: - (id)accessTokenData;
// declared property getter: - (id)affinitizedThread;
// declared property getter: - (id)appBaseUrl;
// declared property getter: - (id)appEventsState;
// declared property getter: - (id)appID;
// declared property getter: - (id)attemptedPermissionsRefreshDate;
// declared property getter: - (id)attemptedRefreshDate;
// declared property getter: - (id)authLogger;
- (void)authorizeRequestWasImplicitlyCancelled;
- (BOOL)authorizeUsingFacebookApplication:(id)application;
- (id)authorizeUsingFacebookNativeLoginWithPermissions:(id)permissions defaultAudience:(int)audience clientState:(id)state;
- (void)authorizeUsingLoginDialog:(id)dialog;
- (BOOL)authorizeUsingSafari:(id)safari;
- (void)authorizeUsingSystemAccountStore:(id)store defaultAudience:(int)audience isReauthorize:(BOOL)reauthorize;
- (void)authorizeWithPermissions:(id)permissions behavior:(int)behavior defaultAudience:(int)audience isReauthorize:(BOOL)reauthorize;
- (void)authorizeWithPermissions:(id)permissions defaultAudience:(int)audience integratedAuth:(BOOL)auth FBAppAuth:(BOOL)auth4 safariAuth:(BOOL)auth5 fallback:(BOOL)fallback isReauthorize:(BOOL)reauthorize canFetchAppSettings:(BOOL)settings;
- (void)callReauthorizeHandlerAndClearState:(id)state;
- (void)checkThreadAffinity;
- (void)clearAffinitizedThread;
- (void)close;
- (void)closeAndClearTokenInformation;
- (void)closeAndClearTokenInformation:(id)information;
- (void)completeReauthorizeWithAccessToken:(id)accessToken expirationDate:(id)date permissions:(id)permissions;
- (void)dealloc;
- (id)description;
- (id)errorLoginFailedWithReason:(id)reason errorCode:(id)code innerError:(id)error;
- (id)errorLoginFailedWithReason:(id)reason errorCode:(id)code innerError:(id)error localizedDescription:(id)description;
// declared property getter: - (id)expirationDate;
- (void)fbDialogLogin:(id)login expirationDate:(id)date;
- (void)fbDialogNotLogin:(BOOL)login;
- (id)getSystemAccountStoreAdapter;
- (BOOL)handleAuthorizationCallbacks:(id)callbacks params:(id)params loginType:(int)type;
- (BOOL)handleAuthorizationOpen:(id)open accessToken:(id)token loginType:(int)type;
- (void)handleDidBecomeActive;
- (void)handleDidCompleteNativeLoginForAppCall:(id)handle;
- (BOOL)handleOpenURL:(id)url;
- (BOOL)handleReauthorize:(id)reauthorize accessToken:(id)token;
- (BOOL)initializeFromCachedToken:(id)cachedToken withPermissions:(id)permissions;
// declared property getter: - (id)initializedPermissions;
// declared property getter: - (BOOL)isOpen;
// declared property getter: - (BOOL)isRepairing;
- (BOOL)isURLSchemeRegistered;
- (id)jsonClientStateWithDictionary:(id)dictionary;
// declared property getter: - (int)lastRequestedSystemAudience;
- (void)logIntegratedAuthAppEvent:(id)event permissions:(id)permissions;
// declared property getter: - (id)loginDialog;
// declared property getter: - (id)loginHandler;
// declared property getter: - (int)loginType;
- (BOOL)openFromAccessTokenData:(id)accessTokenData completionHandler:(id)handler;
- (BOOL)openFromAccessTokenData:(id)accessTokenData completionHandler:(id)handler raiseExceptionIfInvalidState:(BOOL)state;
- (void)openWithBehavior:(int)behavior completionHandler:(id)handler;
- (void)openWithCompletionHandler:(id)completionHandler;
// declared property getter: - (id)permissions;
// declared property getter: - (id)reauthorizeHandler;
- (void)reauthorizeWithPermissions:(id)permissions behavior:(int)behavior completionHandler:(id)handler;
- (void)reauthorizeWithPermissions:(id)permissions isRead:(BOOL)read behavior:(int)behavior defaultAudience:(int)audience completionHandler:(id)handler;
- (void)reauthorizeWithPublishPermissions:(id)publishPermissions defaultAudience:(int)audience completionHandler:(id)handler;
- (void)reauthorizeWithReadPermissions:(id)readPermissions completionHandler:(id)handler;
- (void)refreshAccessToken:(id)token expirationDate:(id)date;
- (id)refreshDate;
- (void)refreshPermissions:(id)permissions;
- (void)repairWithHandler:(id)handler;
- (void)requestNewPublishPermissions:(id)permissions defaultAudience:(int)audience completionHandler:(id)handler;
- (void)requestNewReadPermissions:(id)permissions completionHandler:(id)handler;
- (void)retryableAuthorizeWithPermissions:(id)permissions defaultAudience:(int)audience integratedAuth:(BOOL)auth FBAppAuth:(BOOL)auth4 safariAuth:(BOOL)auth5 fallback:(BOOL)fallback isReauthorize:(BOOL)reauthorize canFetchAppSettings:(BOOL)settings;
// declared property setter: - (void)setAccessTokenData:(id)data;
// declared property setter: - (void)setAffinitizedThread:(id)thread;
// declared property setter: - (void)setAppEventsState:(id)state;
// declared property setter: - (void)setAppID:(id)anId;
// declared property setter: - (void)setAttemptedPermissionsRefreshDate:(id)date;
// declared property setter: - (void)setAttemptedRefreshDate:(id)date;
// declared property setter: - (void)setAuthLogger:(id)logger;
// declared property setter: - (void)setInitializedPermissions:(id)permissions;
// declared property setter: - (void)setIsRepairing:(BOOL)repairing;
// declared property setter: - (void)setLastRequestedSystemAudience:(int)audience;
// declared property setter: - (void)setLoginDialog:(id)dialog;
// declared property setter: - (void)setLoginHandler:(id)handler;
- (void)setLoginTypeOfPendingOpenUrlCallback:(int)pendingOpenUrlCallback;
// declared property setter: - (void)setReauthorizeHandler:(id)handler;
// declared property setter: - (void)setState:(int)state;
// declared property setter: - (void)setTokenCachingStrategy:(id)strategy;
// declared property setter: - (void)setUrlSchemeSuffix:(id)suffix;
- (BOOL)shouldExtendAccessToken;
- (BOOL)shouldRefreshPermissions;
// declared property getter: - (int)state;
// declared property getter: - (id)tokenCachingStrategy;
- (void)transitionAndCallHandlerWithState:(int)state error:(id)error tokenData:(id)data shouldCache:(BOOL)cache;
- (BOOL)transitionToState:(int)state withAccessTokenData:(id)accessTokenData shouldCache:(BOOL)cache;
- (BOOL)tryOpenURL:(id)url;
// declared property getter: - (id)urlSchemeSuffix;
- (void)validateReauthorizedAccessToken:(id)token expirationDate:(id)date;
@end
