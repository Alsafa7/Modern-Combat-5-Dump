/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSURL, NSArray, NSDictionary;

@interface FBAppLinkData : NSObject {
	NSURL *_targetURL;	// 4 = 0x4
	NSArray *_actionTypes;	// 8 = 0x8
	NSArray *_actionIDs;	// 12 = 0xc
	NSArray *_ref;	// 16 = 0x10
	NSDictionary *_originalQueryParameters;	// 20 = 0x14
	NSURL *_originalURL;	// 24 = 0x18
	NSDictionary *_arguments;	// 28 = 0x1c
}
@property(copy) NSArray *actionIDs;	// @synthesize=_actionIDs
@property(copy) NSArray *actionTypes;	// @synthesize=_actionTypes
@property(copy) NSDictionary *arguments;	// @synthesize=_arguments
@property(copy) NSDictionary *originalQueryParameters;	// @synthesize=_originalQueryParameters
@property(retain) NSURL *originalURL;	// @synthesize=_originalURL
@property(copy) NSArray *ref;	// @synthesize=_ref
@property(retain) NSURL *targetURL;	// @synthesize=_targetURL
+ (id)createFromURL:(id)url;
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url targetURL:(id)url2 ref:(id)ref originalQueryParameters:(id)parameters arguments:(id)arguments;
// declared property getter: - (id)actionIDs;
// declared property getter: - (id)actionTypes;
// declared property getter: - (id)arguments;
- (void)dealloc;
- (id)description;
- (BOOL)isValid;
// declared property getter: - (id)originalQueryParameters;
// declared property getter: - (id)originalURL;
// declared property getter: - (id)ref;
// declared property setter: - (void)setActionIDs:(id)ids;
// declared property setter: - (void)setActionTypes:(id)types;
// declared property setter: - (void)setArguments:(id)arguments;
// declared property setter: - (void)setOriginalQueryParameters:(id)parameters;
// declared property setter: - (void)setOriginalURL:(id)url;
// declared property setter: - (void)setRef:(id)ref;
// declared property setter: - (void)setTargetURL:(id)url;
// declared property getter: - (id)targetURL;
@end

