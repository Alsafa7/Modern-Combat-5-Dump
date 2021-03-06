/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, FBAccessTokenData, FBDialogsData, FBAppLinkData, NSError;

@interface FBAppCall : NSObject {
	NSString *_ID;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	FBDialogsData *_dialogData;	// 12 = 0xc
	FBAppLinkData *_appLinkData;	// 16 = 0x10
	FBAccessTokenData *_accessTokenData;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *ID;	// @synthesize=_ID
@property(retain, nonatomic) FBAccessTokenData *accessTokenData;	// @synthesize=_accessTokenData
@property(retain, nonatomic) FBAppLinkData *appLinkData;	// @synthesize=_appLinkData
@property(retain, nonatomic) FBDialogsData *dialogData;	// @synthesize=_dialogData
@property(retain, nonatomic) NSError *error;	// @synthesize=_error
+ (id)appCallFromApplinkArgs_v2:(id)applinkArgs_v2 applinkArgs:(id)args createTimeUTC:(id)utc originalQueryParameters:(id)parameters;
+ (id)appCallFromURL:(id)url;
+ (void)handleDidBecomeActive;
+ (void)handleDidBecomeActiveWithSession:(id)handle;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application fallbackHandler:(id)handler;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session fallbackHandler:(id)handler;
+ (BOOL)invokeHandler:(id)handler withAccessToken:(id)accessToken appLinkData:(id)data;
+ (void)invokeHandler:(id)handler withError:(id)error;
+ (void)openDeferredAppLink:(id)link;
+ (BOOL)tryOpenSession:(id)session withAccessToken:(id)accessToken;
- (id)init;
- (id)init:(BOOL)init;
- (id)initWithID:(id)anId enforceScheme:(BOOL)scheme appID:(id)anId3 urlSchemeSuffix:(id)suffix;
// declared property getter: - (id)ID;
// declared property getter: - (id)accessTokenData;
// declared property getter: - (id)appLinkData;
- (void)dealloc;
- (id)description;
// declared property getter: - (id)dialogData;
// declared property getter: - (id)error;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAppCall:(id)appCall;
- (BOOL)isValid;
// declared property setter: - (void)setAccessTokenData:(id)data;
// declared property setter: - (void)setAppLinkData:(id)data;
// declared property setter: - (void)setDialogData:(id)data;
// declared property setter: - (void)setError:(id)error;
// declared property setter: - (void)setID:(id)anId;
@end

