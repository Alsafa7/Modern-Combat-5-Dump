/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MGTwitterEngine.h"

@class NSURLRequest, NSString, OAToken, NSURL, OAConsumer;

@interface SA_OAuthTwitterEngine : MGTwitterEngine {
	NSString *_consumerSecret;	// 44 = 0x2c
	NSString *_consumerKey;	// 48 = 0x30
	NSURL *_requestTokenURL;	// 52 = 0x34
	NSURL *_accessTokenURL;	// 56 = 0x38
	NSURL *_authorizeURL;	// 60 = 0x3c
	NSString *_pin;	// 64 = 0x40
	OAConsumer *_consumer;	// 68 = 0x44
	OAToken *_requestToken;	// 72 = 0x48
	OAToken *_accessToken;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL OAuthSetup;
@property(retain, nonatomic) NSURL *accessTokenURL;	// @synthesize=_accessTokenURL
@property(retain, nonatomic) NSURL *authorizeURL;	// @synthesize=_authorizeURL
@property(readonly, assign, nonatomic) NSURLRequest *authorizeURLRequest;
@property(readonly, assign, nonatomic) OAConsumer *consumer;
@property(retain, nonatomic) NSString *consumerKey;	// @synthesize=_consumerKey
@property(retain, nonatomic) NSString *consumerSecret;	// @synthesize=_consumerSecret
@property(retain, nonatomic) NSString *pin;	// @synthesize=_pin
@property(retain, nonatomic) NSURL *requestTokenURL;	// @synthesize=_requestTokenURL
+ (id)OAuthTwitterEngineWithDelegate:(id)delegate;
- (id)initOAuthWithDelegate:(id)delegate;
// declared property getter: - (BOOL)OAuthSetup;
- (void)_parseDataForConnection:(id)connection;
- (id)_sendRequestWithMethod:(id)method path:(id)path queryParameters:(id)parameters body:(id)body requestType:(int)type responseType:(int)type6;
// declared property getter: - (id)accessTokenURL;
// declared property getter: - (id)authorizeURL;
// declared property getter: - (id)authorizeURLRequest;
- (void)clearAccessToken;
- (void)clearCookies;
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
// declared property getter: - (id)consumer;
// declared property getter: - (id)consumerKey;
// declared property getter: - (id)consumerSecret;
- (void)dealloc;
- (id)extractUsernameFromHTTPBody:(id)httpbody;
- (id)getFollowerIds:(id)ids andScreenName:(id)name andCursor:(id)cursor;
- (id)getFriendIds:(id)ids andScreenName:(id)name andCursor:(id)cursor;
- (id)getMultiUserInformationFor:(id)aFor andScreenNames:(id)names;
- (id)getUserInformationFor:(id)aFor andScreenName:(id)name;
- (BOOL)isAuthorized;
- (BOOL)isRequestTokenOK;
- (void)outhTicketFailed:(id)failed data:(id)data;
// declared property getter: - (id)pin;
- (void)requestAccessToken;
- (void)requestRequestToken;
// declared property getter: - (id)requestTokenURL;
- (void)requestURL:(id)url token:(id)token onSuccess:(SEL)success onFail:(SEL)fail;
- (id)sendDirectMessage:(id)message toId:(id)anId andScreenName:(id)name;
- (void)setAccessToken:(id)token withData:(id)data;
// declared property setter: - (void)setAccessTokenURL:(id)url;
// declared property setter: - (void)setAuthorizeURL:(id)url;
// declared property setter: - (void)setConsumerKey:(id)key;
// declared property setter: - (void)setConsumerSecret:(id)secret;
// declared property setter: - (void)setPin:(id)pin;
- (void)setRequestToken:(id)token withData:(id)data;
// declared property setter: - (void)setRequestTokenURL:(id)url;
- (id)verifyCredentials;
@end

