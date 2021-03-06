/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMItem.h"

@class NSString;

@interface RMFeedPlace : RMItem {
	NSString *placeId;	// 8 = 0x8
	NSString *pId;	// 12 = 0xc
	NSString *pName;	// 16 = 0x10
	NSString *address;	// 20 = 0x14
	NSString *comment;	// 24 = 0x18
	NSString *url;	// 28 = 0x1c
	NSString *longitude;	// 32 = 0x20
	NSString *latitude;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *address;	// @synthesize
@property(readonly, assign, nonatomic) NSString *comment;	// @synthesize
@property(readonly, assign, nonatomic) NSString *latitude;	// @synthesize
@property(readonly, assign, nonatomic) NSString *longitude;	// @synthesize
@property(readonly, assign, nonatomic) NSString *pId;	// @synthesize
@property(readonly, assign, nonatomic) NSString *pName;	// @synthesize
@property(readonly, assign, nonatomic) NSString *placeId;	// @synthesize
@property(readonly, assign, nonatomic) NSString *url;	// @synthesize
- (id)initWithDictionary:(id)dictionary;
// declared property getter: - (id)address;
// declared property getter: - (id)comment;
// declared property getter: - (id)latitude;
// declared property getter: - (id)longitude;
// declared property getter: - (id)pId;
// declared property getter: - (id)pName;
// declared property getter: - (id)placeId;
// declared property getter: - (id)url;
@end

