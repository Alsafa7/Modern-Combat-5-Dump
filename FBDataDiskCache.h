/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>
#import "FBCacheIndexFileDelegate.h"

@class FBCacheIndex, NSString, NSCache;

@interface FBDataDiskCache : NSObject <FBCacheIndexFileDelegate> {
	NSCache *_inMemoryCache;	// 4 = 0x4
	FBCacheIndex *_cacheIndex;	// 8 = 0x8
	NSString *_dataCachePath;	// 12 = 0xc
	dispatch_queue_s *_fileQueue;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned cacheSizeMemory;
@property(copy, nonatomic) NSString *dataCachePath;	// @synthesize=_dataCachePath
@property(readonly, assign, nonatomic) dispatch_queue_s *fileQueue;	// @synthesize=_fileQueue
+ (id)sharedCache;
- (id)init;
- (BOOL)_doesFileExist:(id)exist;
- (void)cacheIndex:(id)index deleteFileWithName:(id)name;
- (void)cacheIndex:(id)index writeFileWithName:(id)name data:(id)data;
// declared property getter: - (unsigned)cacheSizeMemory;
// declared property getter: - (id)dataCachePath;
- (id)dataForURL:(id)url;
- (void)dealloc;
// declared property getter: - (dispatch_queue_s *)fileQueue;
- (void)removeDataForSession:(id)session;
- (void)removeDataForUrl:(id)url;
// declared property setter: - (void)setCacheSizeMemory:(unsigned)memory;
- (void)setData:(id)data forURL:(id)url;
// declared property setter: - (void)setDataCachePath:(id)path;
@end

