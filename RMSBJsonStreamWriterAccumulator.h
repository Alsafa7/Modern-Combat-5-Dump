/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "RMSBJsonStreamWriterDelegate.h"

@class NSData, NSMutableData;

@interface RMSBJsonStreamWriterAccumulator : NSObject <RMSBJsonStreamWriterDelegate> {
	NSMutableData *data;	// 4 = 0x4
}
@property(readonly, assign) NSData *data;	// @synthesize
- (id)init;
// declared property getter: - (id)data;
- (void)dealloc;
- (void)writer:(id)writer appendBytes:(const void *)bytes length:(unsigned)length;
@end

