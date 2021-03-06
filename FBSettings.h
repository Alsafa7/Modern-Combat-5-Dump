/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface FBSettings : NSObject {
}
+ (id)appVersion;
+ (void)autoPublishInstall:(id)install;
+ (void)autoPublishInstallImpl:(id)impl;
+ (id)clientToken;
+ (id)defaultAppID;
+ (id)defaultDisplayName;
+ (float)defaultJPEGCompressionQuality;
+ (id)defaultURLSchemeWithAppID:(id)appID urlSchemeSuffix:(id)suffix;
+ (id)defaultUrlSchemeSuffix;
+ (void)disableBetaFeature:(unsigned)feature;
+ (void)enableBetaFeature:(unsigned)feature;
+ (void)enableBetaFeatures:(unsigned)features;
+ (id)facebookDomainPart;
+ (BOOL)isBetaFeatureEnabled:(unsigned)enabled;
+ (id)loggingBehavior;
+ (void)publishInstall:(id)install;
+ (void)publishInstall:(id)install withHandler:(id)handler;
+ (void)publishInstall:(id)install withHandler:(id)handler isAutoPublish:(BOOL)publish;
+ (id)resourceBundleName;
+ (id)sdkVersion;
+ (void)setAppVersion:(id)version;
+ (void)setClientToken:(id)token;
+ (void)setDefaultAppID:(id)anId;
+ (void)setDefaultDisplayName:(id)name;
+ (void)setDefaultUrlSchemeSuffix:(id)suffix;
+ (void)setFacebookDomainPart:(id)part;
+ (void)setLoggingBehavior:(id)behavior;
+ (void)setResourceBundleName:(id)name;
+ (void)setShouldAutoPublishInstall:(BOOL)autoPublishInstall;
+ (void)setdefaultJPEGCompressionQuality:(float)quality;
+ (BOOL)shouldAutoPublishInstall;
@end

