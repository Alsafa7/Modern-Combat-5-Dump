/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBGraphObject.h"
#import <Foundation/NSMutableDictionary.h>
#import "NSObject.h"


@protocol FBGraphObject <NSObject>
@optional
@property(assign, nonatomic) BOOL provisionedForPost;
@required
- (unsigned)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)key;
@optional
// declared property getter: - (BOOL)provisionedForPost;
@required
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
@optional
// declared property setter: - (void)setProvisionedForPost:(BOOL)post;
@end

@interface FBGraphObject : NSMutableDictionary <FBGraphObject> {
	NSMutableDictionary *_jsonObject;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL provisionedForPost;
+ (id)graphObject;
+ (id)graphObjectWrappingDictionary:(id)dictionary;
+ (id)graphObjectWrappingObject:(id)object;
+ (int)inferredImplTypeForSelector:(SEL)selector;
+ (BOOL)isGraphObjectID:(id)anId sameAs:(id)as;
+ (BOOL)isProtocolImplementationInferable:(id)inferable checkFBGraphObjectAdoption:(BOOL)adoption;
+ (id)openGraphActionForPost;
+ (id)openGraphObjectForPost;
+ (id)openGraphObjectForPostWithType:(id)type title:(id)title image:(id)image url:(id)url description:(id)description;
- (id)initWrappingDictionary:(id)dictionary;
- (BOOL)conformsToProtocol:(id)protocol;
- (unsigned)count;
- (void)dealloc;
- (void)forwardInvocation:(id)invocation;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtKey:(id)key;
- (id)keyEnumerator;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)objectForKey:(id)key;
// declared property getter: - (BOOL)provisionedForPost;
- (void)removeObjectForKey:(id)key;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)setObject:(id)object forKey:(id)key;
// declared property setter: - (void)setProvisionedForPost:(BOOL)post;
@end
