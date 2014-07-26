/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "ModernCombat5-Structs.h"


@interface RMASIDataCompressor : NSObject {
	BOOL streamReady;	// 4 = 0x4
	z_stream_s zStream;	// 8 = 0x8
}
@property(readonly, assign) BOOL streamReady;	// @synthesize
+ (id)compressData:(id)data error:(id *)error;
+ (BOOL)compressDataFromFile:(id)file toFile:(id)file2 error:(id *)error;
+ (id)compressor;
+ (id)deflateErrorWithCode:(int)code;
- (id)closeStream;
- (id)compressBytes:(char *)bytes length:(unsigned)length error:(id *)error shouldFinish:(BOOL)finish;
- (void)dealloc;
- (id)setupStream;
// declared property getter: - (BOOL)streamReady;
@end
