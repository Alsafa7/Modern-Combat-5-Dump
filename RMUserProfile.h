/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMItem.h"

@class RMUserBirthday, NSString, RMFeedStatus;

@interface RMUserProfile : RMItem {
	NSString *userId;	// 8 = 0x8
	NSString *username;	// 12 = 0xc
	NSString *mainUrl;	// 16 = 0x10
	NSString *headerUrl;	// 20 = 0x14
	NSString *tinyUrl;	// 24 = 0x18
	NSString *network;	// 28 = 0x1c
	BOOL isStar;	// 32 = 0x20
	BOOL hasVisitRight;	// 33 = 0x21
	BOOL isFriendWithCurrentUser;	// 34 = 0x22
	int vistorCount;	// 36 = 0x24
	int blogCount;	// 40 = 0x28
	int albumCount;	// 44 = 0x2c
	int friendCount;	// 48 = 0x30
	int gossipCount;	// 52 = 0x34
	int shareFriendsCount;	// 56 = 0x38
	int vipLevel;	// 60 = 0x3c
	int vipStat;	// 64 = 0x40
	NSString *hometownProvince;	// 68 = 0x44
	NSString *hometownCity;	// 72 = 0x48
	int gender;	// 76 = 0x4c
	RMUserBirthday *birthday;	// 80 = 0x50
	RMFeedStatus *status;	// 84 = 0x54
	int shareFrinendsCount;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) int albumCount;	// @synthesize
@property(readonly, assign, nonatomic) RMUserBirthday *birthday;	// @synthesize
@property(readonly, assign, nonatomic) int blogCount;	// @synthesize
@property(readonly, assign, nonatomic) int friendCount;	// @synthesize
@property(readonly, assign, nonatomic) int gender;	// @synthesize
@property(readonly, assign, nonatomic) int gossipCount;	// @synthesize
@property(readonly, assign, nonatomic) BOOL hasVisitRight;	// @synthesize
@property(copy, nonatomic) NSString *headerUrl;	// @synthesize
@property(readonly, assign, nonatomic) NSString *hometownCity;	// @synthesize
@property(readonly, assign, nonatomic) NSString *hometownProvince;	// @synthesize
@property(readonly, assign, nonatomic) BOOL isFriendWithCurrentUser;	// @synthesize
@property(readonly, assign, nonatomic) BOOL isStar;	// @synthesize
@property(readonly, assign, nonatomic) NSString *mainUrl;	// @synthesize
@property(readonly, assign, nonatomic) NSString *network;	// @synthesize
@property(readonly, assign, nonatomic) int shareFrinendsCount;	// @synthesize
@property(readonly, assign, nonatomic) RMFeedStatus *status;	// @synthesize
@property(readonly, assign, nonatomic) NSString *tinyUrl;	// @synthesize
@property(copy, nonatomic) NSString *userId;	// @synthesize
@property(copy, nonatomic) NSString *username;	// @synthesize
@property(readonly, assign, nonatomic) int vipLevel;	// @synthesize
@property(readonly, assign, nonatomic) int vipStat;	// @synthesize
@property(readonly, assign, nonatomic) int vistorCount;	// @synthesize
- (id)init;
- (id)initWithDictionary:(id)dictionary;
// declared property getter: - (int)albumCount;
// declared property getter: - (id)birthday;
// declared property getter: - (int)blogCount;
- (void)dealloc;
// declared property getter: - (int)friendCount;
// declared property getter: - (int)gender;
// declared property getter: - (int)gossipCount;
// declared property getter: - (BOOL)hasVisitRight;
// declared property getter: - (id)headerUrl;
// declared property getter: - (id)hometownCity;
// declared property getter: - (id)hometownProvince;
// declared property getter: - (BOOL)isFriendWithCurrentUser;
// declared property getter: - (BOOL)isStar;
// declared property getter: - (id)mainUrl;
// declared property getter: - (id)network;
// declared property setter: - (void)setHeaderUrl:(id)url;
// declared property setter: - (void)setUserId:(id)anId;
// declared property setter: - (void)setUsername:(id)username;
// declared property getter: - (int)shareFrinendsCount;
// declared property getter: - (id)status;
// declared property getter: - (id)tinyUrl;
// declared property getter: - (id)userId;
// declared property getter: - (id)username;
// declared property getter: - (int)vipLevel;
// declared property getter: - (int)vipStat;
// declared property getter: - (int)vistorCount;
@end
