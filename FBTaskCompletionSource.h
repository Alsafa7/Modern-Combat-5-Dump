/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class FBTask;

@interface FBTaskCompletionSource : NSObject {
	FBTask *_task;	// 4 = 0x4
}
@property(retain, nonatomic) FBTask *task;	// @synthesize=_task
+ (id)taskCompletionSource;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)setError:(id)error;
- (void)setException:(id)exception;
- (void)setResult:(id)result;
// declared property setter: - (void)setTask:(id)task;
// declared property getter: - (id)task;
- (BOOL)trySetCancelled;
- (BOOL)trySetError:(id)error;
- (BOOL)trySetException:(id)exception;
- (BOOL)trySetResult:(id)result;
@end
